#include <iostream>
const int MAX = 100;
using namespace std;

void le_mat(int mat[][MAX], int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j<n ; j++){
            cin>>mat[i][j];
        }
    }
}
void imprime_mat(int mat[][MAX], int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j<n ; j++){
            cout<<mat[i][j]<<" ";
        }
            cout<<endl;
    }
}
void multiplicacao (int ma[][MAX],int mb[][MAX],int mc[][MAX], int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j<n ; j++){
            for(int k = 0; k<n ; k++){
                mc[i][j] += ma[i][k]*mb[k][j];
            }
        }
    }
}
void diferenca (int Ma[][MAX],int Mb[][MAX], int mat[][MAX], int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j<n ; j++){
            mat[i][j] = Ma [i][j] - Mb[i][j];
        }
    }
}
void transposta (int mat[][MAX],int matriz[][MAX], int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j<n ; j++){
            matriz [i][j] = mat [j][i];
        }
    }
}
int main (){
    int n;
    cout<<"Digite a ordem da matriz (quadrada): \n";
    cin>>n;
    int m1[MAX][MAX], m2[MAX][MAX], m3[MAX][MAX], m4[MAX][MAX], m5[MAX][MAX];


    //leitura das matrizes
    cout<<"Digite os elementos da matriz 1. \n";
    le_mat(m1,n);
    cout<<"Digite os elementos da matriz 2. \n";
    le_mat(m2,n);

    //a - processo de transposicao(m4 recebe a transposta de m2)
    cout<<"1 - Agora vamos transformar a matriz de 2 em sua transposta. \n";
    transposta(m2,m4,n);
    cout<<"Ok, tudo certo.\n";

    //b - multiplicacao matricial (m3 recebe a multiplicacao entre m1 e m2)
    cout<<"2 - Agora vamos a multiplicacao matricial.\n";
    multiplicacao (m1,m2,m3,n);
    cout<<"3 - Certo, tudo correndo bem.\n";

    //c - processo de transposicao (m5 recebe a transposta de m3)
    cout<<"4 - Vamos a mais uma transposta. \n";
    transposta(m3,m5,n);
    cout<<"5 - Ok, tudo indo bem.\n";

    //d - diferenca entre m5 e m4
    cout<<"7 - Processo final.\n";
    diferenca(m5,m4,m3,n);
    //IMPRIMIR O RESULTADO DA EXPRESSAO ALGEBRICA
    imprime_mat(m3,n);

    return 0;
}
