
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
 char dato='A';
  if(Serial.available()){
  dato=Serial.read();

    Serial.println(dato);
    
    if(dato =='E'){
    digitalWrite(13,HIGH);
    Serial.println("ENCENDIDO");
    }
    else if(dato=='A'){
    digitalWrite(13,LOW);
    Serial.println("APAGADO");
    }else{
      Serial.println("no pasada nada");
    }
  } 
}
