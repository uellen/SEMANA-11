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
int main (){
    int n;
    cout<<"Digite a ordem da matriz (quadrada): \n";
    cin>>n;
    int m1[MAX][MAX], m2[MAX][MAX], m3[MAX][MAX];
    cout<<"Digite os elementos da matriz 1. \n";
    le_mat(m1,n);
    cout<<"Digite os elementos da matriz 2. \n";
    le_mat(m2,n);
    multiplicacao (m1,m2,m3,n);
    imprime_mat(m3,n);

    return 0;
}
