void setup() {
Serial.begin(9600); //initialize serial communication

}



void loop() {
int sensorReading = analogRead(A0);

int range = map(sensorReading, sensorMin, sensorMax, 0,3);
//trying this out for commit since it wont work
}