#include <iostream>
#include <string>
#include <cstring>

using namespace std;

char movimentacao(){

// Cabeçalho
    cout << "------------ MAPEAMENTO POR ROBÔ ------------- \n Para se movimentar use as teclas a,w,s,d: \n w: para frente \n s: para trás \n a: para esquerda \n d: para direita" << endl;

// Variáveis
    int confirma = 0;
    int Vetor[4]; 
    char direcaoTecla;

// Direção
    struct direcao
    {
        char direcaoNome[15];
        int posicao;
    };
    struct direcao direita = {"Direita", Vetor[0]};
    struct direcao esquerda = {"Esquerda", Vetor[1]};
    struct direcao frente = {"Frente", Vetor[2]};
    struct direcao tras = {"Tras", Vetor[3]};
    while (confirma == 0)
    {
        cout << "Qual direção deseja ir?" << endl;
        cin >> direcaoTecla;
        if (direcaoTecla == "w")
        {
            /* code */
        }
        

    }
    
}