#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

#include <SimpleDHT.h>

#include <Wire.h>
#include <LiquidCrystal_I2C_ESP.h>


LiquidCrystal_I2C_ESP lcd(0x27, 16, 2);

// for DHT22, 
//      VCC: 5V or 3V
//      GND: GND
//      DATA: D2
int pinDHT22 = D2;
SimpleDHT22 dht22;

const char* ssid = "CEP_MONTILLA-UNIFI";
const char* password = "CEPMONTILLA";

ESP8266WebServer server(80);

const int led = D4;

float temperatura = 0;
float humedad = 0;
void handleRoot() {
  digitalWrite(led, 1);
  String contenido = "<html>";
  contenido +=       "<Title>Estacion meteoreologica CEP Priego</Title>";
  contenido +=       "<body> ";
  contenido +=       "<p> Temperatura:" ;
  contenido +=                            temperatura ;
  contenido +=                                    "</p>";
  contenido +=       "<p> Humedad:" ;
  contenido +=                      humedad ;
  contenido +=                              "</p>";
  contenido +=       "</body> ";
  contenido +=       "</html>";
  server.send(200, "text/HTML", contenido);
  digitalWrite(led, 0);
}

void handleNotFound(){
  digitalWrite(led, 1);
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += server.uri();
  message += "\nMethod: ";
  message += (server.method() == HTTP_GET)?"GET":"POST";
  message += "\nArguments: ";
  message += server.args();
  message += "\n";
  for (uint8_t i=0; i<server.args(); i++){
    message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
  }
  server.send(404, "text/plain", message);
  digitalWrite(led, 0);
}

void setup(void){
  
  // initialize the LCD
  lcd.begin(D3,D4);  // sda=0 | D3, scl=2 | D4

  // Turn on the blacklight and print a message.
  lcd.backlight();

  // configuracion WIFI
  pinMode(led, OUTPUT);
  digitalWrite(led, 0);
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  if (MDNS.begin("esp8266")) {
    Serial.println("MDNS responder started");
  }

  server.on("/", handleRoot);

  server.on("/inline", [](){
    server.send(200, "text/plain", "this works as well");
  });

  server.onNotFound(handleNotFound);

  server.begin();
  Serial.println("HTTP server started");
}

void mideSensores(){
 // start working...
  Serial.println("=================================");
  Serial.println("Sample DHT22...");
  
  
  int err = SimpleDHTErrSuccess;
  if ((err = dht22.read2(pinDHT22, &temperatura, &humedad, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT22 failed, err="); Serial.println(err);delay(2000);
    return;
  }
  
  Serial.print("Sample OK: ");
  Serial.print((float)temperatura); Serial.print(" *C, ");
  lcd.setCursor(0,0);
  lcd.print("Temperatura:");
  lcd.print((float)temperatura);
  Serial.print((float)humedad); Serial.println(" RH%");
  lcd.setCursor(0,1);
  lcd.print("Humedad:");
  lcd.print((float)humedad);  
}


void loop(void){
  server.handleClient();
  mideSensores();
  delay(100);
}











