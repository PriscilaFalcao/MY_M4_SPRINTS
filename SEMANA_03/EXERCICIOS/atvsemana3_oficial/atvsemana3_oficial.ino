#define LIGHT_SENSOR_PIN 7
#define BUTTON_PIN 21
#define BUTTON2_PIN 20
#define BUZZER_PIN  18
#define LED_YELLOW 15 
#define LED_BLUE 16
#define LED_RED 17
#define LED_GREEN 18

// ------------------------- Variáveis Globais ------------------------------------
int array[10][4];
int buttonState = digitalRead(BUTTON_PIN);
int buttonState2 = digitalRead(BUTTON2_PIN);

// -------------------------------------------------------------------------------------
void setup() {
  Serial.begin(9600);
  // leitura botão
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  // leitura botão 2
  pinMode(BUTTON2_PIN, INPUT_PULLUP);
  // leitura led amarela
  pinMode(LED_YELLOW, OUTPUT);
  //leitura led azul
  pinMode(LED_BLUE, OUTPUT);
  //leitura led vermelho
  pinMode(LED_RED, OUTPUT);
  //leitura led verde
  pinMode(LED_GREEN, OUTPUT);
  delay(1000);
}

// -------------------------------------------------------------------------------------
void loop() {
  buttonRead();
  delay(2000);
  resetArray();
}

