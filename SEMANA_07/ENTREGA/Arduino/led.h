#define player1 true
#define player2 false

void led(data) {
//Verificação se o jogador é o 1 ou o 2
  if(data == player0){
    digitalWrite(18, HIGH);
    delay(500);
    digitalWrite(18, LOW);
  }
  else if(data == player1){
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(16, LOW);
  }
}