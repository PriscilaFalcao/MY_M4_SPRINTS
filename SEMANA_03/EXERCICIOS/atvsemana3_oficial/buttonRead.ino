// Leitura de 20 medidas e respostas por medição
int buttonRead(){
 if (buttonState == HIGH){
    for (int a; a < 10; a++){
      int analogValue = analogRead(LIGHT_SENSOR_PIN);
      int convertValue = convertScale(analogValue);
      int i = 4;
      int binary;
      while ( i != 0){
      // Transformar em binário
        binary = convertValue%2;
        array[a][i] = binary;
        if (array[a][0] == 1){
        tone(BUZZER_PIN, 58, 800);
        digitalWrite(LED_YELLOW, HIGH);
      }
      //Resposta da placa na hora da leitura
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
      if (binary == 1){
          convertValue = convertValue - 1;
          convertValue = convertValue/2;}
      else{
          convertValue = convertValue/2;}
        i -= 1;
      }
    return 0;
    }
  }
}