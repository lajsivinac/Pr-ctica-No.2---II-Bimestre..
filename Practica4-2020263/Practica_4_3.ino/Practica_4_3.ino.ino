/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM  
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: auto-fantastico
   Dev: Ludwyn Steven Ajsivinac Alonzo
   Fecha: 26 de abril
*/


int secuencia[] = {2, 3, 4, 5, 6}; 
int A = 11;
int B = 12;
int C = 14;
int D = 15;
int E = 16;
int F = 17;
int G = 18;

void setup()
   {
  
      pinMode(2, INPUT);
      pinMode(3, INPUT);
      pinMode(4, INPUT);
      pinMode(5, INPUT);
      pinMode(A, OUTPUT);
      pinMode(B, OUTPUT);
      pinMode(C, OUTPUT);
      pinMode(D, OUTPUT);
      pinMode(E, OUTPUT);
      pinMode(F, OUTPUT);
      pinMode(G, OUTPUT);
  

  Serial.begin(9600);
}

void loop() {
  

  if(digitalRead(2)== HIGH && digitalRead(4)== LOW){
    delay(3000);
    Serial.println("Practica No.4 Ludwyn Steven Ajsivinac Alonzo");
  }
  if(digitalRead(3)==HIGH && digitalRead(5)== LOW ){
for (int m = 0; m < 1; m++) {
    for (int led = 0; led < 4; led++) { 
      digitalWrite(secuencia[led], HIGH);
      delay(400);
      digitalWrite(secuencia[led], LOW);
    }

    for (int led = 4; led >= 0; led--) {
      digitalWrite(secuencia[led], HIGH);
      delay(400);
      digitalWrite(secuencia[led], LOW);

    }
}
  }
  if(digitalRead(4)== HIGH && digitalRead(2)==LOW){ 
    for(int i = 0; i<1 ; i++) {
      digitalWrite( A, HIGH);
      digitalWrite( F, HIGH);
      digitalWrite( E, HIGH);
      digitalWrite( D, HIGH);
      delay(550);
      digitalWrite( A, LOW);
      digitalWrite( F, LOW);
      digitalWrite( E, LOW);
      digitalWrite( D, LOW);
      delay (2000);
      digitalWrite( E, HIGH);
      digitalWrite( D, HIGH);
      digitalWrite( C, HIGH);
      digitalWrite( F, HIGH);
      digitalWrite( B, HIGH);
      delay (550);
      digitalWrite (E, LOW);
      digitalWrite (D, LOW);
      digitalWrite (C ,LOW);
      digitalWrite( F, LOW);
      digitalWrite( B, LOW);
      delay(2000);
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (G, HIGH);
      digitalWrite (F, HIGH);
      digitalWrite (E, HIGH);
      delay(550);
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      digitalWrite (G, LOW);
      digitalWrite (F, LOW);
      digitalWrite (E, LOW);
      delay(2000);
      digitalWrite (E, HIGH);
      digitalWrite (F, HIGH);
      digitalWrite (A, HIGH);
      delay (550);
      digitalWrite (E, LOW);
      digitalWrite (F, LOW);
      digitalWrite (A, LOW);
      delay(2000);
      digitalWrite (E, HIGH);
      digitalWrite (F, HIGH);
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (G, HIGH);
      delay(550);
      digitalWrite (E ,LOW);
      digitalWrite (F, LOW);
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (G, LOW);
      delay(2000);
      digitalWrite (F, HIGH);
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (E, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (D, HIGH);
      delay(550);
      digitalWrite (F, LOW);
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (E, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
    }
    }
  if(digitalRead(4)== HIGH && digitalRead(2)== HIGH ||digitalRead(5)== HIGH && digitalRead(3)== HIGH ){
      delay(2000);
    Serial.println("Gracias por su atencion");
  }
}
