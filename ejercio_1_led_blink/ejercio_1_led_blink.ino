/*
 * Led parpadeante. 
 * Se trata de conectar un led al pin 13, haciendo que luzca durante
 * 500 ms y que se apague durante 100 ms, este proceso se repetirá cíclicamente.
 * Objetivos:
      ● Reconocer partes de la placa.
      ● Aprender a conexionar leds a la placa.
      ● Familiarizarse con el entorno de programación.
      ● Reconocer las partes de un programa de arduino setup() y loop()
      ● Usar constantes internas como LED_BUILTIN y OUTPUT
      ● Conocer órdenes como: pinMode, digitalWrite y delay
 */

void setup(){
   
   pinMode(LED_BUILTIN, OUTPUT ); 
  
}


void loop() {
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
  
 }
