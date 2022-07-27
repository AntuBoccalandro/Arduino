#include <Wire.h>
#include <RTClib.h>

RTC_DS3231 rtc;

void setup()
{

  Serial.begin(9600);

  if (!rtc.begin())
  {
    Serial.println("Módulo RTC no encontrado !");
    while (1)
    {
      // Asignamos fecha de partida
      rtc.adjust(DateTime(__DATE__,__TIME__));
    }
  }
}

void loop()
{
  DateTime fecha = rtc.now();

  Serial.print("Hora: ");
  Serial.print(fecha.hour());
  Serial.print("    / ");
  Serial.print("Minutos: ");
  Serial.print(fecha.minute());
  Serial.print("    / ");
  Serial.print("Segundos: ");
  Serial.println(fecha.second());
  
  delay(1000);
}