//Respostas na placa sequência direta
int responseLed(){
  for (int a; a < 10; a++){
      if (array[a][0] == 1){
        tone(BUZZER_PIN, 58, 800);
        digitalWrite(LED_YELLOW, HIGH);
      }
      if (array[a][1] == 1){
        tone(BUZZER_PIN, 117, 800);
        digitalWrite(LED_BLUE, HIGH);
      }
      if (array[a][2] == 1){
        tone(BUZZER_PIN, 220, 800);
        digitalWrite(LED_RED, HIGH);
      }
      if (array[a][3] == 1){
        tone(BUZZER_PIN, 740, 800);
        digitalWrite(LED_GREEN, HIGH);
      }
    delay(1000);
    digitalWrite(LED_YELLOW, LOW);
    digitalWrite(LED_BLUE, LOW);
    digitalWrite(LED_RED, LOW);
    digitalWrite(LED_GREEN, LOW);
    }
  return 0;
}