/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM  
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Catálogo de Productos.
   Dev: Ludwyn Steven Ajsivinac Alonzo
   Fecha: 19 de abril
   link de la simulacion: 
*/

//Define el nombre de los dulces y cantidad 

struct dulce_1 {
  char Bonbon[50];
  byte cantidad_1; 
};

struct dulce_2 {
  char Toffee[50];
  byte cantidad_2; 
};

struct dulce_3 {
  char Botonetas[50];
  byte cantidad_3; 
};

struct dulce_4 {
  char Nucita[50];
  byte cantidad_4; 
};

//Creo los datos de los dulces a registrar.

dulce_1 dulce1 = {"Bonbon", 28};
dulce_2 dulce2 = {"Toffe", 35};
dulce_3 dulce3 = {"Botonetas", 50};
dulce_4 dulce4 = {"Nucita", 70};

byte contador = 0;

void setup(){
  Serial.begin(9600);
  Serial.println("Dulceria Mcqueen");
  Serial.println("Izquierda retroceder- Derecha avanzar");
  pinMode(3, INPUT);
  pinMode(2, INPUT);
}

void loop() {
  
  if(digitalRead(2)==HIGH)
  {
    delay(350);
    contador = contador+1;
    
  if(contador == 1){
   Serial.print("El dulce es: ");
   Serial.println(dulce1.Bonbon);
   Serial.print("La cantidad de dulces es:  ");
   Serial.println(dulce1.cantidad_1);
  }    
      
  if(contador == 2){
   Serial.print("El dulce es: ");
   Serial.println(dulce2.Toffee);
   Serial.print("La cantidad de dulces es:  ");
   Serial.println(dulce2.cantidad_2);
  } 
        
  if(contador == 3){
   Serial.print("El dulce es: ");
   Serial.println(dulce3.Botonetas);
   Serial.print("La cantidad de dulces es:  ");
   Serial.println(dulce3.cantidad_3);
  }
          
  if(contador == 4){
   Serial.print("El dulce es: ");
   Serial.println(dulce4.Nucita);
   Serial.print("La cantidad de dulces es: ");
   Serial.println(dulce4.cantidad_4);
  } 
}
   else if(digitalRead(3)==HIGH)
   {
     delay(350);
     contador = contador-1;
     
   if(contador == 1){
   Serial.print("El dulce es: ");
   Serial.println(dulce1.Bonbon);
   Serial.print("La cantidad de dulces es:  ");
   Serial.println(dulce1.cantidad_1);
  }    
      
  if(contador == 2){
   Serial.print("El dulce es: ");
   Serial.println(dulce2.Toffee);
   Serial.print("La cantidad de dulces es:  ");
   Serial.println(dulce2.cantidad_2);
  } 
