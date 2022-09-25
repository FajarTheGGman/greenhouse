#define sensor A0

void setup(){
Serial.begin(115200);
pinMode(sensor);

Serial.println("[---------------------]");
Serial.println("[ Mesin : Arduino ]");
Serial.println("[ Sensor : FC-28 ]");
Serial.println("[---------------------]");

}

void loop(){
float read_data = analogRead(sensor);
Serial.println(read_data);
}