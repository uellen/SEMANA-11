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
int main (){
    int n;
    cout<<"Digite a ordem da matriz (quadrada): \n";
    cin>>n;
    int m[MAX][MAX], m2[MAX][MAX];
    cout<<"Digite os elementos da matriz. \n";
    le_mat(m,n);
    transposta(m,m2,n);
    imprime_mat(m2,n);

    return 0;
}
