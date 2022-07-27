int sensor = A0;
int estado;

void setup() {
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  estado = analogRead(sensor);
  Serial.println(estado);
}
