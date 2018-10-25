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
void transposta (int mat[][MAX],int matriz[][MAX], int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j<n ; j++){
            matriz [i][j] = mat [j][i];
        }
    }
}
int soma ( int v[], int n){
    int soma = 0;
    for( int i = 0 ; i < n ; i++){
        soma += v[i];
    }
    return soma;
}

int main (){
    int num;
    cout<<"Digite a ordem da matriz (quadrada): \n";
    cin>>num;
    int m[MAX][MAX], m2[MAX][MAX];
    cout<<"Digite os elementos da matriz. \n";
    le_mat(m,num);

    transposta(m,m2,num);
    cout<<"Soma dos elementos das linhas.\n";
    for(int k = 0 ; k < num ; k++){
        cout<<"Linha "<<k<<": "<<soma(m[k],num)<<endl;
    }
    cout<<"Soma dos elementos das colunas.\n";
    for(int k = 0 ; k < num ; k++){
        cout<<"Coluna "<<k<<": "<<soma(m2[k],num)<<endl;
    }


    return 0;
}

