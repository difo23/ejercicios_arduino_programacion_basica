
int pines[] = { 2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  Serial.begin(9600);
  
  for(int inx = 0; inx <= 7 ; inx ++){
    pinMode(pines[inx], OUTPUT);  
    Serial.println("Ciclos del for: ");
    Serial.print(inx);
    Serial.print(" - ");
    Serial.println(pines[inx]);
  }

  

}

void loop() {
  // put your main code here, to run repeatedly:

  normal();
  reversa();
  saltos();
  all_on_off();
  
}



void normal() {
  // logica de encendido uno a la vez

    for(int i = 0; i < 8; i ++ ){

       digitalWrite(pines[i], HIGH);
       delay(500);
       digitalWrite(pines[i], LOW);      
       delay(500);
      }
  
  }

void reversa() {
  
    for(int i = 7; i >= 0; i -- ){

       digitalWrite(pines[i], HIGH);
       delay(500);
       digitalWrite(pines[i], LOW);      
       delay(500);
      }
  }


 void saltos() {
  
    for(int i = 0; i < 8; i = i + 2) {
      
       digitalWrite(pines[i], HIGH);
       delay(500);
       digitalWrite(pines[i], LOW);      
       delay(500);
      
      }  
  
  }

void all_on_off () {

  for(int i = 0; i < 3; i ++ ){

       all_on();
       all_off();
    }
  
}

void all_on(){

   for(int i = 0; i < 8; i ++ ){
       digitalWrite(pines[i], HIGH);  
    }

    delay(1000);
  
  }

void all_off() {
  
  for(int i = 0; i < 8; i ++ ){
       digitalWrite(pines[i], LOW);  
    }

    delay(1000);
  
  }
