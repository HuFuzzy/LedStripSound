int ldr = 0;
int led = 7;
int ldrvalor=0;



void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
ldrvalor = analogRead(ldr);

 if (ldrvalor>= 800) digitalWrite(led,HIGH);
 // senão, apaga o led
 else digitalWrite(led,LOW);
 
 //imprime o valor lido do LDR no monitor serial
 Serial.println(ldr);
 delay(100);

