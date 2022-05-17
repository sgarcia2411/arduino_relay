// 4 == TODO ENCENDIDOS, 5 == TODO APAGADO
int RELE_A = 2; // 0 = encendido, 1 = apagado
int RELE_B = 4; // 2 = encendido, 3 = apagado

char data;

void setup() {
  // put your setup code here, to run once:
  pinMode(RELE_A, OUTPUT);
  pinMode(RELE_B, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
 if ( Serial.available()) {     //Checks the availability of Serial port 
  data = Serial.read();      // Read the data and stores it in variable
  Serial.print(data);       //Print the received data 
 }
  if (data == '1'){
    digitalWrite(RELE_A, HIGH);
  } else if (data == '0'){
    digitalWrite(RELE_A, LOW);
  }

  if (data == '3'){
    digitalWrite(RELE_B, HIGH);
  } else if (data == '2'){
    digitalWrite(RELE_B, LOW);
  }

   if (data == '5'){
    digitalWrite(RELE_A, HIGH);
    digitalWrite(RELE_B, HIGH);
   }else if (data == '4'){
    digitalWrite(RELE_A, LOW);
    digitalWrite(RELE_B, LOW);
   }

  delay(1000);
  
}