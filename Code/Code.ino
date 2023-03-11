
//Pin D14 ou entrée Analogique A0
#define Led 14 

void setup() {
  
  //declaration de A0 en tant que sortie
  pinMode(Led, OUTPUT);

}

void loop() {
  
  //programme de base faire clignoté la led en A0
  digitalWrite(Led, HIGH);
  delay(1000);
  digitalWrite(Led, LOW);
  delay(1000);

}
