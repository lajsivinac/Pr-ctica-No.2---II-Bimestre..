/*
  
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Practica Final
   Dev: Ludwyn Steven Ajsivinac Alonzo
   Fecha: 27 de mayo
*/
#include <Wire.h>               
#include <LiquidCrystal_I2C.h>  
#include <Servo.h>              
#include <Keypad.h>             


//Directivas de preprocesador para la LCD
#define direccion_lcd 0x20     
#define filas 2                
#define columnas 16            

//Directicas de proceprocesador para el teclado matricial
#define filas_teclado 4      
#define columnas_teclado 4     
#define f1_teclado 6         
#define f2_teclado 5 
#define f3_teclado 0           
#define f4_teclado 0
#define c1_teclado 4           
#define c2_teclado 3           
#define c3_teclado 2
#define c4_teclado 0

//Directicas de proceprocesador para el servomotor y leds 
int secuencia [] = {A0, A1, A2, A3};
#define pin_servo 7                     
#define led_azul  A0
#define led_rojo  A1           
#define led_amarillo  A2           
#define led_morado  A3            
#define ON(pin)       digitalWrite(pin, HIGH);
#define OFF(pin)      digitalWrite(pin, LOW);

//display
#define A 9
#define B 8
#define C 12
#define E 13
#define F 10
#define G 11
int display [] = {9,8,12,13,10,11};


//Variables para el uso del teclado
char keys[filas_teclado][columnas_teclado] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pines_filas[filas_teclado] = {f1_teclado,f2_teclado,f3_teclado,f4_teclado};
byte pines_columnas[columnas_teclado] = {c1_teclado,c2_teclado,c3_teclado,c4_teclado};



//Constructor
LiquidCrystal_I2C lcd_Ludwyn(direccion_lcd, columnas, filas);   
Servo ServoLudwyn;                                             
Keypad tecladoFunciones = Keypad( makeKeymap(keys), pines_filas, pines_columnas, filas_teclado,columnas_teclado);   


void setup()
{
  Serial.begin(9600);               
  config_outputs();               
  config_HMI();                   
  OFF(led_azul);
  OFF(led_rojo);                  
  OFF(led_amarillo);                  
  OFF(led_morado);                 
   ServoLudwyn.attach(pin_servo);
}

void loop()
{
  //Obtengo el valor de la tecla presionada
  char tecla = tecladoFunciones.getKey(); 
  if(tecla)
  {
    Serial.print("La tecla presionada es: ");   //Envio el mensaje
    Serial.println(tecla);    //Muestro por la terminal la tecla presionada
    delay(1000); 
    
  if (tecla =='1'){
    Serial.println("Conteo De 0 a 99");
    for(int M=0; M<100; M++){
      Serial.println(M);
      delay(50);}
       
  } else if (tecla =='2'){
    Serial.println("Conteo de 99 a 0");
    for(int Me=99; Me>=0; Me--){
      Serial.println(Me);
      delay(50);}
     
    
  } else if (tecla =='3'){
  Serial.println("Autofantastico");
    for(int p=0; p<2;p++){
      for(int L=0; L<4;L++){
        digitalWrite(secuencia[L],HIGH);
        delay(50);
        digitalWrite(secuencia[L],LOW);
        delay(50);}
      for(int L=3; L>=0;L--){
        digitalWrite(secuencia[L],HIGH);
        delay(50);
        digitalWrite(secuencia[L],LOW);
        delay(50);}
      }
    
  } else if (tecla == '4'){
    Serial.println("Animacion");
    for (int d=0; d<4; d++){
      digitalWrite(display[d], HIGH);
      delay(150); 
      digitalWrite(display[d], LOW);}
    for (int s=4; s>=0; s--){
      digitalWrite(display[s], HIGH);
      delay(150);
      digitalWrite(display[s], LOW);}
      delay(200);
    for (int d=0; d<6; d++){
      digitalWrite(display[d], HIGH);
      delay(150);}
    for (int d=6; d>=0; d--){
      digitalWrite(display[d], LOW);
      delay(150);}
      for (int d=0; d<5; d++){
        digitalWrite(display[d], HIGH);}
        delay(300);
      for (int d=0; d<6; d++){
         digitalWrite(display[d], LOW);}
       delay(300);}
 
  } else if (tecla=='5'){
      Serial.println("servomotor");
      ServoLudwyn.write(0);
      delay(500);
      ServoLudwyn.write(180);
        delay(500);
        ServoLudwyn.write(0);
      }
     
}


void config_outputs(void)
{
  pinMode(pin_servo, OUTPUT);
  pinMode(led_azul, OUTPUT);
  pinMode(led_rojo, OUTPUT);
  pinMode(led_amarillo, OUTPUT);
}

void config_HMI(void)
{
  lcd_Ludwyn.init();
  lcd_Ludwyn.backlight();
  lcd_Ludwyn.setCursor(5,0);
  lcd_Ludwyn.print("Ludwyn");
  lcd_Ludwyn.setCursor(0,1);
  lcd_Ludwyn.print(" Proyecto Final");
}
