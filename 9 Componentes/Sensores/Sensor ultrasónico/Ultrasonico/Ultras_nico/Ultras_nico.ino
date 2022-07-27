const int trigPin = 9;  // se crea una varialbe con el número de pin del trigger
const int echoPin = 10;  // se crea una varialbe con el número de pin del echo
long duracion;  // se crea una variable para almacenar la duración
int distancia;  // se crea una variable para almacenar la distancia

void setup() 
{ 
  pinMode(trigPin, OUTPUT); // Pin que envía la onda
  pinMode(echoPin, INPUT); // Pin que recive la onda
  Serial.begin(9600);  // inicializamos el monitor serial a 9600 baudios
}
void loop() 
{
  // Configuramos el trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duracion = pulseIn(echoPin, HIGH); //Guardamos la duración que tarda la onda en ir y volver en una variable
  Serial.println(distancia); // Imprimimos los valores por consola
  delay(500);
} 
