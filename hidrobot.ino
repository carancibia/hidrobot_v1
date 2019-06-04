/*
  Version     : 1.0 
  Autor       : Claudio Arancibia
  Empresa     : IOTechnology
  Fecha       : 02-06-2019
  Descripcion : Version basica de sistema de Hidroponia/Aeroponia
                Cargar sobre Arduino Uno con Rele Shield 
*/


// Declaramos el canal por el que vamos a enviar pulsos de 5volt
// Este sera el pin 13 del Arduino Uno

int rele = 13;
 
// Inicializaremos las variables del sistema en el metodo Setup

void setup() 
{
  Serial.begin(9600);
  // Declaramos que el Pin 13 del arduino sera un canal de salida.
  pinMode(rele, OUTPUT);
}
 
// La funcion loop se ejecuta constantemente una y otra vez

void loop() 
{
  digitalWrite(rele, HIGH);   // Mandamos a la salida del pin 13, 5 volt con lo que encendemos la bomba de agua
  Serial.println("Encendido...");
  delay(30000);              // Regamos por 30 Segundos
  digitalWrite(rele, LOW);    // Apagamos el rele para detener la bomba de agua
  Serial.println("Apagado...");
  delay(300000);             // descanzamos 5 minutos y luego volvemos a regar. 
}
