#include <iostream>
#include <string>

using namespace std;

char dirMaiorDist(int Vetor[]){
    Vetor[4]; 
    struct direcao
    {
        char direcaoNome[15];
        int posicao;
    };
    struct direcao direita = {"Direita", Vetor[0]};
    struct direcao esquerda = {"Esquerda", Vetor[1]};
    struct direcao frente = {"Frente", Vetor[2]};
    struct direcao tras = {"Tras", Vetor[3]};
    if (Vetor[0]>Vetor[1] && Vetor[0]>Vetor[2]&& Vetor[0]>Vetor[3])
    {
        cout<< direita.direcaoNome << ": " << direita.posicao << endl;
    }
    else if (Vetor[1]>Vetor[0] && Vetor[1]>Vetor[2]&& Vetor[1]>Vetor[3])
    {
       cout<< esquerda.direcaoNome << ": " << esquerda.posicao << endl;
    }
    else if (Vetor[2]>Vetor[0] && Vetor[2]>Vetor[1] && Vetor[2]>Vetor[3])
    {
       cout<< frente.direcaoNome << ": " << frente.posicao << endl;
    }
    else if (Vetor[3]>Vetor[0] && Vetor[3]>Vetor[1]&& Vetor[3]>Vetor[2])
    {
       cout<< tras.direcaoNome << ": " << tras.posicao << endl;
    }
  return 0;
}

int main(){
  //Considere que os valores sempre serão distintos
  //Considere valores de distância inteiros entre 0 e 100
  
  // "Direita", "Esquerda", "Frente", "Tras"
  int posicoes [4] = {0, 20, 100, 50};
  
  cout << dirMaiorDist(posicoes) << endl;
  //valor esperado: Frente
  //valor esperado: 100


  // "Direita", "Esquerda", "Frente", "Tras"
  int posicoes2 [4] = {95, 70, 80, 50};
  
  cout << dirMaiorDist(posicoes2) << endl;
  //valor esperado: Direita
  //valor esperado: 95


  // "Direita", "Esquerda", "Frente", "Tras"
  int posicoes3 [4] = {10, 0, 50, 60};
  
  cout << dirMaiorDist(posicoes3) << endl;
  //valor esperado: Tras
  //valor esperado: 60


  // "Direita", "Esquerda", "Frente", "Tras"
  int posicoes4 [4] = {54, 55, 30, 0};
  
  cout << dirMaiorDist(posicoes4) << endl;
  //valor esperado: Esquerda
  //valor esperado: 55
}