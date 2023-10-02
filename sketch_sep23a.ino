 int bomba = 28;
int humedad = 1;
int Ledr1 = 38;
int Ledr2 = 40;
int Leda1 = 31;
int Leda2 = 33;
int Ledv1 = 26;
int Ledv2 = 30;
int Buzzer = 34;

void setup() {
  Serial.begin(9600);
pinMode(bomba,OUTPUT);
pinMode(Buzzer,OUTPUT);
pinMode(Ledv2,OUTPUT);
pinMode(Ledv1,OUTPUT);
pinMode(Ledr1,OUTPUT);
pinMode(Ledr2,OUTPUT);
pinMode(Leda1,OUTPUT);
pinMode(Leda2,OUTPUT);


}

void loop() {

humedad = analogRead(A1);

if(humedad>=400 && humedad<=1024){
   digitalWrite(bomba,LOW);
   digitalWrite(Ledv1,LOW);
   digitalWrite(Ledv2,LOW);
   digitalWrite(Buzzer,HIGH);
   digitalWrite(Ledr1,HIGH);
   digitalWrite(Ledr2,HIGH);
   digitalWrite(Leda1,HIGH);
   digitalWrite(Leda2,HIGH);
}
else{
   digitalWrite(bomba,HIGH);
   digitalWrite(Buzzer,LOW);
   digitalWrite(Ledv1,HIGH);
   digitalWrite(Ledv2,HIGH);
   digitalWrite(Ledr1,LOW);
   digitalWrite(Ledr2,LOW);
   digitalWrite(Leda1,LOW);
   digitalWrite(Leda2,LOW);
}
Serial.println(humedad);
delay(500);
}
