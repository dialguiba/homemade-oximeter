int analogpin=A0;
int pulso;
float voltage;

void setup(){
    prinMode(analogpin, INPUT);
    Serial.begin(9600);
}

voud loop(){
    pulse=analogRead(analogpin);
    voltage=pulse * (5.0 / 1024.0);
    Serial.println(voltaje);
    delay(50);
}