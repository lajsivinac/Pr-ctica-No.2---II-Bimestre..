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


int secuencia[] = {6, 7, 8, 9, 10}; 
int salida[]={11,12,14,15,16,17,18};
int salidaA = 11;
int salidaB = 12;
int salidaC = 14;
int salidaD = 15;
int salidaE = 16;
int salidaF = 17;
int salidaG = 18;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  for (int p = 0; p < 8; p++) {
    pinMode(salida[p], OUTPUT);}


  Serial.begin(9600);
}

void loop() {
  if (digitalRead(2) == HIGH && digitalRead(4) == LOW) {
    delay(3000);
    Serial.println("Practica No.4 Ludwyn Steven Ajsivinac Alonzo");
  }
  
  if (digitalRead(3) == HIGH && digitalRead(5) == LOW) {
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
  
  if (digitalRead(4) == HIGH && digitalRead(2) == LOW) { 
    for (int i = 0; i < 1; i++) {
      digitalWrite(salidaA, HIGH);
      digitalWrite(salidaF, HIGH);
      digitalWrite(salidaE, HIGH);
      digitalWrite(salidaD, HIGH);
      delay(550);
      digitalWrite(salidaA, LOW);
      digitalWrite(salidaF, LOW);
      digitalWrite(salidaE, LOW);
      digitalWrite(salidaD, LOW);
      delay(2000);
      digitalWrite(salidaE, HIGH);
      digitalWrite(salidaD, HIGH);
      digitalWrite(salidaC, HIGH);
      digitalWrite(salidaF, HIGH);
      digitalWrite(salidaB, HIGH);
      delay(550);
      digitalWrite(salidaE, LOW);
      digitalWrite(salidaD, LOW);
      digitalWrite(salidaC, LOW);
      digitalWrite(salidaF, LOW);
      digitalWrite(salidaB, LOW);
      delay(2000);
      digitalWrite(salidaA, HIGH);
      digitalWrite(salidaB, HIGH);
      digitalWrite(salidaC, HIGH);
      digitalWrite(salidaG, HIGH);
      digitalWrite(salidaF, HIGH);
      digitalWrite(salidaE, HIGH);
      delay(550);
      digitalWrite(salidaA, LOW);
      digitalWrite(salidaB, LOW);
      digitalWrite(salidaC, LOW);
      digitalWrite(salidaG, LOW);
      digitalWrite(salidaF, LOW);
      digitalWrite(salidaE, LOW);
      delay(2000);
      digitalWrite(salidaE, HIGH);
      digitalWrite(salidaF, HIGH);
      digitalWrite(salidaA, HIGH);
      delay(550);
      digitalWrite(salidaE, LOW);
      digitalWrite(salidaF, LOW);
      digitalWrite(salidaA, LOW);
      delay(2000);
      digitalWrite(salidaE, HIGH);
      digitalWrite(salidaF, HIGH);
      digitalWrite(salidaA, HIGH);
      digitalWrite(salidaB, HIGH);
      digitalWrite(salidaG, HIGH);
      delay(550);
      digitalWrite(salidaE, LOW);
      digitalWrite(salidaF, LOW);
      digitalWrite(salidaA, LOW);
      digitalWrite(salidaB, LOW);
      digitalWrite(salidaG, LOW);
      delay(2000);
      digitalWrite(salidaF, HIGH);
      digitalWrite(salidaA, HIGH);
      digitalWrite(salidaB, HIGH);
      digitalWrite(salidaE, HIGH);
      digitalWrite(salidaC, HIGH);
      digitalWrite(salidaD, HIGH);
      delay(550);
      digitalWrite(salidaF, LOW);
      digitalWrite(salidaA, LOW);
      digitalWrite(salidaB, LOW);
      digitalWrite(salidaE, LOW);
      digitalWrite(salidaC, LOW);
      digitalWrite(salidaD, LOW);
      delay(2000);
    }
  }
  
  if ((digitalRead(4) == HIGH && digitalRead(2) == HIGH) || (digitalRead(5) == HIGH && digitalRead(3) == HIGH)) {
    delay(2000);
    Serial.println("Gracias por su atencion");
  }
}
