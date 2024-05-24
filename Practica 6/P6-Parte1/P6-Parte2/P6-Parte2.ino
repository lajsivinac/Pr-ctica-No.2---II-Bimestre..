/*
  
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Practica 6
   Dev: Ludwyn Steven Ajsivinac Alonzo
   Fecha: 22de mayo
*/



#include <Wire.h>               
#include <LiquidCrystal_I2C.h>  
#include <Servo.h>              
#include <Keypad.h>             


//Directivas de preprocesador para la LCD
#define direccion_lcd 0x27     
#define filas 2                
#define columnas 16            

#define filas_teclado 4        
#define columnas_teclado 4     
#define f1_teclado   9         
#define f2_teclado   8         
#define f3_teclado   7         
#define f4_teclado   6         
#define c1_teclado   5         
#define c2_teclado   4         
#define c3_teclado   3         
#define c4_teclado   2         


#define pin_servo 11           
#define pin_buzz  10           
#define led_rojo  A1           
#define led_amar  A2           
#define led_verd  A3            
#define ON(pin)     digitalWrite(pin, HIGH);
#define OFF(pin)    digitalWrite(pin, LOW);



char keys[filas_teclado][columnas_teclado] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pines_filas[filas_teclado] = {f1_teclado,f2_teclado,f3_teclado,f4_teclado};
byte pines_columnas[columnas_teclado] = {c1_teclado,c2_teclado,c3_teclado,c4_teclado};



const int lock_pos = 0;            
const int unlock_pos = 90;          



String contrasenaCerradura = "2020263*";
String info_recibida = "";                


byte pos_lcd = 0;      


LiquidCrystal_I2C lcdCerradura(direccion_lcd, columnas, filas);   
Servo ServoCerradura;                                             
Keypad tecladoCerradura = Keypad( makeKeymap(keys), pines_filas, pines_columnas, filas_teclado,columnas_teclado);   


void config_outputs(void);


void config_HMI(void);

void setup()
{
  Serial.begin(9600);             
  Serial.println("Practica 6");   
  config_outputs();               
  config_HMI();                  
  ON(led_amar);                   
  ON(led_rojo);                   
  OFF(led_verd);                 
  ServoCerradura.write(0);

}



void loop()
{
  
  char key= tecladoCerradura.getKey(); 
  
  if(key)
  {
    
    info_recibida = info_recibida + key;
    Serial.println(key);
    lcdCerradura.setCursor(pos_lcd,1);
    lcdCerradura.print("*          ");
    pos_lcd++;
    if(key == '*')
    {
      lcdCerradura.setCursor(0,1);
      lcdCerradura.print("               ");
      Serial.println(info_recibida);
      if(info_recibida == contrasenaCerradura)
      {
        lcdCerradura.setCursor(0,1);
        lcdCerradura.print("Contrasena correcta");
        lcdCerradura.setCursor(0,1);
        lcdCerradura.print("P.Abierta          ");
        OFF(led_rojo);
        ON(led_verd);
        ServoCerradura.write(90);
        delay(1000);
        tone(pin_buzz, 500); 
        delay(200); 
        noTone(pin_buzz); 
        delay(500); 
        
        Serial.println("Contraseña correcta");
      }
      else
      {
        lcdCerradura.setCursor(0,1);
        lcdCerradura.print("Contrasena inco");
        delay(1000);
        lcdCerradura.setCursor(0,1);
        lcdCerradura.print("P.Cerrada      ");
        OFF(led_verd);
        ruido();
        ON(led_rojo);
        Serial.println("Contraseña incorrecta");
        ServoCerradura.write(0);
      }
      info_recibida = "";     
      delay(1000);
      lcdCerradura.setCursor(0,1);
      lcdCerradura.print("P.Cerrada      ");
      pos_lcd = 0;
      ON(led_rojo);
      OFF(led_verd);
      ServoCerradura.write(0);
    }
  }

}


void config_outputs(void)
{
  pinMode(pin_servo, OUTPUT);
  pinMode(pin_buzz, OUTPUT);
  pinMode(led_amar, OUTPUT);
  pinMode(led_rojo, OUTPUT);
  pinMode(led_verd, OUTPUT);
}

void config_HMI(void)
{
  ServoCerradura.attach(pin_servo);
  lcdCerradura.init();
  lcdCerradura.backlight();
  lcdCerradura.setCursor(2,0);
  lcdCerradura.print("Bienvenidos");
  lcdCerradura.setCursor(0,1);
  lcdCerradura.print("P.Cerrada      ");
}

void ruido() {
  for(int i=0; i<1; i++){
    tone(pin_buzz,250); 
    delay(100); 
    noTone(pin_buzz); 
    delay(200);
  }
  delay(200);
}
