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
void diferenca (int Ma[][MAX],int Mb[][MAX], int mat[][MAX], int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j<n ; j++){
            mat[i][j] = Ma [i][j] - Mb[i][j];
        }
    }
}
int main (){
    int n;
    cout<<"Digite a ordem da matriz (quadrada): \n";
    cin>>n;
    int m1[MAX][MAX], m2[MAX][MAX], mr[MAX][MAX];
    cout<<"Digite os elementos da matriz 1. \n";
    le_mat(m1,n);
    cout<<"Digite os elementos da matriz 1. \n";
    le_mat(m2,n);
    diferenca (m1,m2,mr,n);
    imprime_mat(mr,n);

    return 0;
}
