// Variables
int ledPares[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; // Pines de los LEDs
int tiemposEncendido[] = {500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000}; // Tiempos de encendido para cada par
int numCiclos = 2; // Número de ciclos que deseas repetir
//----------------------------------------------------------------------------------------------------------------------------
// Configuración de leds como "salidas"
void setup() {
  //Usar la función "pinMode" para establecer de forma individual las variables dentro del arreglo "ledPares" como outpout/salidas
  for (int i = 0; i < 10; i++) {
    pinMode(ledPares[i], OUTPUT); 
  }
}
//----------------------------------------------------------------------------------------------------------------------------
void loop() {
  //Iniciar un cliclo "while" para repetir el número de ciclos que queramos
  while (numCiclos > 0) {
    //Iniciamos los ciclos for para encender los leds y luego apagarlos
    //Ciclo for de encendido
    for (int i = 0; i < 10; i += 2) { //inicio de for
      digitalWrite(ledPares[i], HIGH); // Enciende el primer LED del par
      digitalWrite(ledPares[i + 1], HIGH); // Enciende el segundo LED del par
   
      delay(1000); // Espera 1 segundo entre pares de LEDs para repetir el ciclo for de encendido
    } //fin de for
    
    //ciclo for de apagado
    for (int i = 0; i < 10; i++) { //inicio de for
      digitalWrite(ledPares[i], LOW); // Apagar el LED
      
      delay(1000); // Espera 1 segundo antes de repetir el ciclo for de apagado
    } //fin de for
  
    delay(3000); // Espera 3 segundo antes de repetir el ciclo while
    
    numCiclos--; // restar "1" en el número  de ciclos elegidos
  }
}
       //Código no ocupado para apagar en secuencia de inicio
      //delay(tiemposEncendido[i/2]); // Espera el tiempo de encendido para el par
      //digitalWrite(ledPares[i], LOW); // Apaga el primer LED del par
      //digitalWrite(ledPares[i + 1], LOW); // Apaga el segundo LED del par
