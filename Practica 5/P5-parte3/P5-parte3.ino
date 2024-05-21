const int buzzer = 9;
int numero9 [] = {2, 3, 4, 5, 6};
int numero8 [] = {2, 3, 4, 5, 6, 7, 8};
int numero7 [] = {2, 3, 6};
int numero6 [] = {3,4,5,6,7,8};
int numero5 [] = {3,4,5,6,7};
int numero4 [] = {2,4,5,6};
int numero3 [] = {2,3,5,6,7};
int numero2 [] = {2,3,5,7,8};
int numero1 [] = {2,6};
int numero0 [] = {2,3,4,6,7,8};
int pines[] = {2,3,4,5,6,7,8};

void setup (){
  salidas();
  pinMode(10,OUTPUT); 
  digitalWrite(10,HIGH); 
  pinMode(buzzer,OUTPUT);
  secuencia_de_numeros();
} 

void loop(){
  secuencia_de_numeros();
}


void pinesdesalida(){
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9, OUTPUT);
}

int secuencia_de_numeros(){
  for (int n=0; n<5; n++){ //9
  digitalWrite(numero9[n], HIGH);}
  delay(1000);
  for (int n=5; n>=0; n--){
  digitalWrite(numero9[n],LOW);
  }

  for (int o=0; o<7; o++){ //8
  digitalWrite(numero8[o], HIGH);}
  delay(1000);
  for (int o=7; o>=0; o--){
  digitalWrite(numero8[o], LOW);}
  
  for (int s=0; s<3; s++){ //7
  digitalWrite(numero7[s], HIGH);}
  delay(1000);
  for (int s =3; s>=0; s--){
  digitalWrite(numero7[s], LOW);}
  
  for (int se=0; se<6; se++){ //6
  digitalWrite(numero6[se], HIGH);}
  delay(1000);
  for (int se =6; se>=0; se--){
  digitalWrite(numero6[se], LOW);}

  for (int c =0; c<5; c++){ //5
  digitalWrite(numero5[c], HIGH);}
  delay(1000);
  for (int c =5; c>=0; c--){
  digitalWrite(numero5[c], LOW);} 
  
  for (int cu=0; cu<4; cu++){ //4
  digitalWrite(numero4[cu], HIGH);}
  delay(1000);
  for (int cu=4; cu>=0; cu--){
  digitalWrite(numero4[cu],LOW);
  }

  for (int t=0; t<5; t++){ //3
  digitalWrite(numero3[t], HIGH);}
  delay(1000);
  for (int t=5; t>=0; t--){
  digitalWrite(numero3[t], LOW);}
  
  for (int d=0; d<5; d++){ //2
  digitalWrite(numero2[d], HIGH);}
  delay(1000);
  for (int d =5; d>=0; d--){ 
  digitalWrite(numero2[d], LOW);}
  
  for (int u=0; u<2; u++){ //1
  digitalWrite(numero1[u], HIGH);}
  delay(1000);
  for (int u =2; u>=0; u--){
  digitalWrite(numero1[u], LOW);}

  for (int ce =0; ce<6; ce++){ //0
  digitalWrite(numero0[ce], HIGH);}
  delay(1000);
  for (int ce =6; ce>=0; ce--){
  digitalWrite(numero0[ce], LOW);} 
    digitalWrite(10, LOW); 
  tone(buzzer,250);
  delay(500);
  digitalWrite(10,HIGH);
  noTone(buzzer);

}

void salidas(){
  for(int p=0; p<7; p++){
  pinMode(pines[p],OUTPUT);}
}
