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
int main (){
    int num;
    cout<<"Digite a ordem da matriz (quadrada): \n";
    cin>>num;
    int m[MAX][MAX], m2[MAX][MAX];
    cout<<"Digite os elementos da matriz. \n";
    le_mat(m,num);
    if(binario(m,num)){
        cout<<"Sua matriz eh binaria!\n";
    }
    else{
        cout<<"Sua matriz nao eh binaria!\n";
    }

    return 0;
}

