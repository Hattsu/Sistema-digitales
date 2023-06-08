// Variables
int ledPares[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; // Pines de los LEDs
int botonIniciar = 12; // Pin del botón de inicio
int botonApagar = 13; // Pin del botón de apagado
bool ledsEncendidos = false; // Variable para controlar el estado de los LEDs


void setup() {
// Configuración de leds como "salidas"
  for (int i = 0; i < 10; i++) {
    pinMode(ledPares[i], OUTPUT);
  }
// Configurar botones
  pinMode(botonIniciar, INPUT_PULLUP); // Configura el pin del botón de inicio como entrada con resistencia pull-up interna
  pinMode(botonApagar, INPUT_PULLUP); // Configura el pin del botón de apagado como entrada con resistencia pull-up interna
}

void loop() {
  if (digitalRead(botonIniciar) == LOW) { // Si se presiona el botón de inicio
    if (!ledsEncendidos) { // Si los LEDs no están encendidos
      for (int i = 0; i < 10; i++) {
        digitalWrite(ledPares[i], HIGH); // Enciende el LED
        delay(2000); // Espera 2 segundos con todos los LEDs encendidos
      }
      ledsEncendidos = true; // Actualiza el estado de los LEDs
    }
  }
  delay(3000); // Espera 3 segundos con todos los LEDs encendidos
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPares[i], LOW); // Apaga el LED
  }
  
  if (digitalRead(botonApagar) == LOW) { // Si se presiona el botón de apagado
    if (ledsEncendidos) { // Si los LEDs están encendidos
      for (int i = 0; i < 10; i++) {
        digitalWrite(ledPares[i], LOW); // Apaga el LED
      }
      ledsEncendidos = false; // Actualiza el estado de los LEDs
    }
  }
}
