/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Uso de la pantalla LCD sin interfaz I2C
   Dev: Ludwyn Steven Ajsivinac Alonzo
   Fecha: 10 de mayo
   link de la simulacion: 
   
*/

//Librerias
#include <LiquidCrystal.h>


//Definiciones de preprocesador
#define RS  6
#define Enable 7
#define D4 2
#define D5 3
#define D6 4
#define D7 5

//Constructor
LiquidCrystal LCD_Ludwyn(RS, Enable, D4, D5, D6, D7); //Constructor que me permite usar la LCD

void setup()
{
  LCD_Ludwyn.begin(16,2); //Objeto de una LCD de 16 columnas x 2 filas
  LCD_Ludwyn.setCursor(0,0);
  LCD_Ludwyn.print("Ludwyn");
  delay (500);
  LCD_Ludwyn.setCursor(0,1);
  LCD_Ludwyn.print("2020263");
  delay(500);
}
void loop()
{
}
