#include <iostream>
#include <string>

using namespace std;
int converteSensor(int medida, int min, int max){
  // Interação com o usuário:
    /*cout << "Insira um valor mínimo: ";
    cin >> min;
    cout << "Insira um valor máximo: ";
    cin >> max;
    cout << "Insira um valor na qual deseja saber a porcentagem: ";
    cin >> medida;*/
    float resultado = ((medida - min)/(max - min))*100;
  return resultado;
}

int main(){
  cout << "Teste Ex 1" << endl;
	cout << converteSensor(100,100,400) << endl;
  //valor esperado: 0
  
	cout << converteSensor(400,100,400) << endl;
  //valor esperado: 1
  
	cout << converteSensor(250,100,400) << endl;
  //valor esperado: 0.5
}

