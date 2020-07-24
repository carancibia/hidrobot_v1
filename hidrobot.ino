/*
*******************************************************************
  Version     : 1.0 
  Autor       : Claudio Arancibia
  Empresa     : MySmart Solutions Ltda.
  Fecha       : 02-06-2019
  Descripcion : Version basica de sistema de Hidroponia/Aeroponia
                Cargar sobre Arduino Uno con Rele Shield 
*******************************************************************
*******************************************************************
*                     INICIO DEL PROGRAMA
*******************************************************************
*******************************************************************
* Inicializamos las Variables a utilizar
*******************************************************************
*/

// Almacenamos en la variable rele el numero del pin a utilizar

// Utilizamos el Pin 13 de Arduino porque ya contien una reistencia 
// interna, con eso nos ahorramos incluir otra en el circuito.

int rele = 13;

/*
*******************************************************************
* Configuramos - Iniciamos las Variables
*******************************************************************
*/

void setup() 
{
  //Para el puerto serial, iniciamos en 9600 baudios.
  Serial.begin(9600);
  
  //Declaramos que el Pin 13 del arduino sera un canal de salida.
  //Por allí vamos a mandar un pulso de 5 volt cada vez que necesitemos
  
  pinMode(rele, OUTPUT);
}

/*
*******************************************************************
* Ejecutamos el codigo de Loop que es lo que se estara ejecutando una y otra y otra...
* vez
*******************************************************************
*/

void loop() 
{
  // Mandamos a la salida del pin 13, 5 volt con lo que encendemos la bomba de agua
  digitalWrite(rele, HIGH);   
  Serial.println("Iniciando el riego presurizado.");
  // Delay entiende el parametro en Milisegundos entonces 1000 equivale a 1 segundo
  delay(5000);              
  // Regamos por 5 Segundos, para el ejemplo

  //Ahora dejamos de mandar el pulso de 5 volt y se corta el suministro.
  digitalWrite(rele, LOW);    
  // Apagamos el rele para detener la bomba de agua
  Serial.println("Termino el proceso de riego presurizado.");
  delay(10000);             
  // descanzamos 10 segundos y luego volvemos a regar. 
}
/*
*******************************************************************
*                     FIN DEL PROGRAMA
* *****************************************************************
*/