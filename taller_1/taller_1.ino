// Variables
int ledPares[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; // Pines de los LEDs
int tiemposEncendido[] = {500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000}; // Tiempos de encendido para cada par

// Configuración de leds como "salidas"
void setup() {
  for (int i = 0; i < 10; i++) {
    pinMode(ledPares[i], OUTPUT);
  }
}

void loop() {
  int numCiclos = 2; // Número de ciclos que deseas repetir
  //Iniciar un cliclo "while" para repetir el número de ciclos que queramos
  while (numCiclos > 0) {
    for (int i = 0; i < 10; i += 2) {
      digitalWrite(ledPares[i], HIGH); // Enciende el primer LED del par
      digitalWrite(ledPares[i + 1], HIGH); // Enciende el segundo LED del par
    
      delay(tiemposEncendido[i/2]); // Espera el tiempo de encendido para el par
    
      digitalWrite(ledPares[i], LOW); // Apaga el primer LED del par
      digitalWrite(ledPares[i + 1], LOW); // Apaga el segundo LED del par
    
      delay(500); // Espera 500 ms entre pares de LEDs
    }
    numCiclos--; // restar "1" en el número  de ciclos elegidos
  }
}
