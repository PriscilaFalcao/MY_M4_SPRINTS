#include <iostream>
#include <string>

using namespace std;

int continuar(){
  cout << "Iniciando mapeamento..." << endl;
  int continua = 0;
  int confirma;
  while (continua == 0) {
    cout << "Deseja continuar? (sim: 0 / não: 1)" << endl;
    cin >> confirma;
    if (confirma == 1)
    {
        continua = 1;
    }
    else if (confirma == 0){
        cout << "Mapeamento em andamento ..." << endl;
    }
    else{
        cout << "Digite um número válido" << endl;
    }

  }
  return 0;
}


// Descomente a função main abaixo para testar o exercício 5

int main(){
    continuar();
}