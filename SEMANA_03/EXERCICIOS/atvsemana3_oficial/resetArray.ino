// Resetar array
int resetArray(){
    if (buttonState2 == LOW){
      responseLed();
      for (int a; a < 10; a++){
        for(int i; i < 4; a++){
          array[a][i] = 0;
        }
      }
  }
  return 0;
}
