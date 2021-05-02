/* usando operador unário para piscar leds
 *  Autor Sergio Dantas
 */
#define led 13
byte aux1 = 0,aux2 = 0;

void setup() {
//configurando pinos: entrada,saída.
pinMode(led, OUTPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(led,aux1);
aux1 = !aux1;
delay(1000);
}
