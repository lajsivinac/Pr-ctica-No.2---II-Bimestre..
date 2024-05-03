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


int pines[] = {4, 5, 6, 7, 8, 9, 10, 11, 12}; 
int wait = 0;
void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT); 
  for (int p = 0; p < 9; p++) {
    pinMode(pines[p], OUTPUT);}
}
void loop() {
  if(digitalRead(2)==HIGH){
    wait = 500;
    Serial.println("Velocidad de grado 1");
    for (int p = 0; p<9 ; p++){
    digitalWrite(pines[p], HIGH);
    delay(wait);
    digitalWrite(pines[p], LOW);
    delay(wait);}
    for (int p = 9; p>=0 ; p--){
    digitalWrite(pines[p], HIGH);
    delay(wait);
    digitalWrite(pines[p], LOW);
    delay(wait);}
  }
  if(digitalRead(3)==HIGH){
    wait = 1000;
    Serial.println("Velocidad de grado 2");
    for (int p = 0; p<9 ; p++){
    digitalWrite(pines[p], HIGH);
    delay(wait);
    digitalWrite(pines[p], LOW);
    delay(wait);}
    for (int p = 9; p>=0 ; p--){
    digitalWrite(pines[p], HIGH);
    delay(wait);
    digitalWrite(pines[p], LOW);
    delay(wait);}
  }
}  
