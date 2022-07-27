const int sensorPin = A0;  // creamos una constante que contiene el número de pin donde está conectado el sensor
int humedad;  // creamos una variable que almacena los datos de las lecturas analógicas

void setup() {
  Serial.begin(9600);  // inicializamos  el monitor serial a 9600 baudios
  pinMode(sensorPin, INPUT);  // definimos el pin del sensor como entrada
}

void loop() {
  humedad =  analogRead(sensorPin);  // guardamos el valor de la lectura analógica en la variable "humedad" anteriormente creada
  Serial.print("Humedad: ");  // mostramos por el monitor serial el valor del sensor
  Serial.print(humedad);  // mostramos por el monitor serial el valor del sensor
}
