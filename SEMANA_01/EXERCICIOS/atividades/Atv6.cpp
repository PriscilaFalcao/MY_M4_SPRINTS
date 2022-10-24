#include <iostream>
#include <string>
#include <cstring>

using namespace std;

char movimentacao(){

// Cabeçalho
    cout << "------------ MAPEAMENTO POR ROBÔ ------------- \n Para se movimentar use as teclas a,w,s,d: \n w: para frente \n s: para trás \n a: para esquerda \n d: para direita" << endl;

// Variáveis
    int confirma = 0;
    int continua;
    int Vetor[4] = {0, 0 , 0 , 0}; 
    string direcaoTecla;
    string direitaTecla = "d";
    string esquerdaTecla = "a";
    string frenteTecla = "w";
    string trasTecla = "s";

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
        if (strcasecmp(direitaTecla.c_str(), direcaoTecla.c_str()) == 0)
        {
            direita.posicao = direita.posicao + 1;
            cout << "Mapeamento feito: " << direita.direcaoNome << ": " << direita.posicao << ", " << esquerda.direcaoNome << ": " << esquerda.posicao << ", " << frente.direcaoNome << ": " << frente.posicao << ", " << tras.direcaoNome << ": " << tras.posicao << endl;
            cout << "Última posicao: " << direita.direcaoNome << endl;
        }
        else if (strcasecmp(esquerdaTecla.c_str(), direcaoTecla.c_str()) == 0)
        {
            esquerda.posicao = esquerda.posicao + 1;
            cout << "Mapeamento feito: " << direita.direcaoNome << ": " << direita.posicao << ", " << esquerda.direcaoNome << ": " << esquerda.posicao << ", " << frente.direcaoNome << ": " << frente.posicao << ", " << tras.direcaoNome << ": " << tras.posicao << endl;
            cout << "Última posicao: " << esquerda.direcaoNome << endl;
        }
        else if (strcasecmp(frenteTecla.c_str(), direcaoTecla.c_str()) == 0)
        {
            frente.posicao = frente.posicao + 1;
            cout << "Mapeamento feito: " << direita.direcaoNome << ": " << direita.posicao << ", " << esquerda.direcaoNome << ": " << esquerda.posicao << ", " << frente.direcaoNome << ": " << frente.posicao << ", " << tras.direcaoNome << ": " << tras.posicao << endl;
            cout << "Última posicao: " << frente.direcaoNome << endl;
        }
        else if (strcasecmp(trasTecla.c_str(), direcaoTecla.c_str()) == 0)
        {
            tras.posicao = tras.posicao + 1;
            cout << "Mapeamento feito: " << direita.direcaoNome << ": " << direita.posicao << ", " << esquerda.direcaoNome << ": " << esquerda.posicao << ", " << frente.direcaoNome << ": " << frente.posicao << ", " << tras.direcaoNome << ": " << tras.posicao << endl;
            cout << "Última posicao: " << tras.direcaoNome << endl;
        }
        
        cout << "Deseja continuar movimentação? (sim: 0 / não: 1) " << endl;
        cin >> continua;

        if (continua == 1)
        {
            confirma = 1;
            if (Vetor[0]>Vetor[1] && Vetor[0]>Vetor[2]&& Vetor[0]>Vetor[3])
            {
                cout << "Maior direcao: "<< direita.direcaoNome << ": " << direita.posicao << endl;
            }
            else if (Vetor[1]>Vetor[0] && Vetor[1]>Vetor[2]&& Vetor[1]>Vetor[3])
            {
                cout << "Maior direcao: "<< esquerda.direcaoNome << ": " << esquerda.posicao << endl;
            }
            else if (Vetor[2]>Vetor[0] && Vetor[2]>Vetor[1] && Vetor[2]>Vetor[3])
            {
                cout << "Maior direcao: "<< frente.direcaoNome << ": " << frente.posicao << endl;
            }
            else if (Vetor[3]>Vetor[0] && Vetor[3]>Vetor[1]&& Vetor[3]>Vetor[2])
            {
                cout << "Maior direcao: "<< tras.direcaoNome << ": " << tras.posicao << endl;
            }
        }
    }
    return 0;
}

int main()
{
    movimentacao();
    return 0;
}
