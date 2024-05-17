float Kilogramos = 30;
float resultado1 = resultado1;
float Amperios = 0.15;
float resultado2 = resultado2;
int numero1 [] = {2,6};
int numero3 [] = {3,2,5,6,7};
int numero5 [] = {3,4,5,6,7};
int numero7 [] = {2,3,5,6};
int numero9 [] = {2,3,4,5,6};

void setup(){
   
  
  Serial.begin(9600);
  Serial.println("Conversor");
  Serial.print("30 Kilogramos = ");
  resultado1 = conversor_kg_lb(Kilogramos);
  Serial.print(resultado1);
  Serial.println(" Libras ");

  Serial.print("0.15 Amperios = ");
  resultado2 = conversor_A_mA(Amperios);
  Serial.print(resultado2);
  Serial.println(" Microamperios");
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT); 
}

void loop(){
 secuencia_de_numeros();
}


float conversor_kg_lb (float kg){
  float resultado1;
  resultado1 = Kilogramos * 2.204623;
  return resultado1;
}

float conversor_A_mA (float A){
  float resultado2;
  resultado2 = Amperios * 1000000;
  return resultado2;
}

 


int secuencia_de_numeros(){
  for (int u=0; u<2; u++){
  digitalWrite(numero1[u], HIGH);}
  delay(1000);
  for (int u=2; u>=0; u--){
  digitalWrite(numero1[u],LOW);
  }

  for (int t =0; t<5; t++){
  digitalWrite(numero3[t], HIGH);}
  delay(1000);
  for (int t =5; t>=0; t--){
  digitalWrite(numero3[t], LOW);}
  
  for (int c =0; c<5; c++){
  digitalWrite(numero5[c], HIGH);}
  delay(1000);
  for (int c =5; c>=0; c--){
  digitalWrite(numero5[c], LOW);}
  
  for (int s =0; s<4; s++){
  digitalWrite(numero7[s], HIGH);}
  delay(1000);
  for (int s =4; s>=0; s--){
  digitalWrite(numero7[s], LOW);}

  for (int i =0; i<5; i++){
  digitalWrite(numero9[i], HIGH);}
  delay(1000);
  for (int i =5; i>=0; i--){
  digitalWrite(numero9[i], LOW);}    
}

