#include <iostream>
#include <cstdlib>
#include <ctime>

const int MAX = 100;
using namespace std;

void le_mat(int mat[][MAX], int n){
    srand(NULL);
    for(int i=0; i<n; i++){
        for (int j = 0; j<n ; j++){
            mat[i][j] = rand();
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
bool binario (int mat[][MAX], int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if( mat[i][j] != 0 && mat[i][j] != 1){
                return false;
            }
        }
    }
    return true;
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
bool permutacao (int mat[][MAX], int n){
    int lob;
    int loob;
    int m2[MAX][MAX];

    for(int k = 0 ; k < n ; k++){
        if(soma(mat[k],n) == 1){
            lob++;
        }
        else{
            return false;
        }
    }

    transposta(mat,m2,n);

    for (int k = 0 ; k < n ; k++){
        if(soma(m2[k],n)){
            loob++;
    }
    else{
        return false;
    }
    if(lob == n && loob == n && binario(mat,n)){
        return true;
    }
    return false;
    }
}
int main(){
    int num;
    cout<<"Insira a ordem da sua matriz.\n";
    cin>>num;
    int ma[MAX][MAX];


    le_mat(ma,num);
    imprime_mat(ma,num);
    if(permutacao(ma,num)){
        cout<<"Sua matriz eh de permutacao!\n";
    }
    else{
        cout<<"Sua matriz nao eh de permutacao.\n";
    }

    return 0;
}
