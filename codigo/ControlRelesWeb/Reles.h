/* 
 *  
    Motor Shield  NodeMCU DevKit  GPIO  Purpose
    D1 PWMA (Motor A) D1  5 Speed
    D3 DIRA (Motor A) D3  0 Direction
    D2 PWMA (Motor B) D2  4 Speed
    D4 DIRB (Motor B) D4  2 Direction

 */
#define RELE_1 D0
#define RELE_2 D1


void setup_reles();
void apagaRele(int pinRele);
void enciendeRele(int pinRele);
