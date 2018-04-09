#include "Reles.h"
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>


ESP8266WebServer server(80);

const char *form = "<center><form action='/'>"
"<button name='dir' type='submit' value='1'>ON Rele 1</button>"
"<button name='dir' type='submit' value='3'>ON Rele 2</button><br>"
"<button name='dir' type='submit' value='2'>OFF Rele 1</button>"
"<button name='dir' type='submit' value='4'>OFF Rele 2</button>"
"</form></center>";

void handle_form()
{
    // only move if we submitted the form
    if (server.arg("dir"))
    {
        // get the value of request argument "dir"
        int direction = server.arg("dir").toInt();
        // chose direction
        switch (direction)
        {
            case 1:
                enciendeRele(RELE_1);
                break;
            case 2:
                apagaRele(RELE_1);
                break;
            case 3:
                enciendeRele(RELE_2);
                break;
            case 4:
                apagaRele(RELE_2);
                break;
        }
        // move for 300ms, gives chip time to update wifi also
        delay(300);
    }

    // in all cases send the response
    server.send(200, "text/html", form);
}

void setup_server(){
  server.on("/", handle_form);
  server.begin();
}

void severhandler(){
  server.handleClient();
}

