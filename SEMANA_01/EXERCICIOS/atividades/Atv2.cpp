#include <iostream>
#include <string>

using namespace std;

int leComando(){
    int comando;
    cin >> comando;
    return comando;
}

int main(){
  cout << "Digite o Comando (0 ou 1):";
	int cmd = leComando();
	cout << "Comando Recebido: " << cmd << endl;
}