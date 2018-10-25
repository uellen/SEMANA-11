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

    for(int j = 0; j < num; j++){
            cout<<"Soma da linha "<<j<<": "<< soma(m[j], num)<<endl;

    }


    return 0;
}

