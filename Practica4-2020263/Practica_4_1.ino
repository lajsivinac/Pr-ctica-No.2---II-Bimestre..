/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM  
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Uso del monitor serial
   Dev: Ludwyn Steven Ajsivinac Alonzo
   Fecha: 26 de abril
*/
 
int cont_1 = 0;
 
void setup()
{
  Serial.begin(9600);
  Serial.println("BUCLE CONTADOR ASCENDENTE 0-9");
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);  
}
 
void loop()
{ 
  for(int i=0; i <= 9; i++){
    if(digitalRead(2)==HIGH){
      cont_1 = 1000;
    }
    else if(digitalRead(3)==HIGH){
      cont_1 = 2000;
    }
    else if(digitalRead(4)==HIGH){
      cont_1 = 3000;
    }
    else{
      cont_1 = 500;
    }
    if(digitalRead(2)==HIGH && digitalRead(3)==HIGH && digitalRead(4)==HIGH){
      cont_1 = 500;
    }
    Serial.println(i);
    delay(cont_1);
  }
}
