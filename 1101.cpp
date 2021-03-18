#include <iostream>

using namespace std;

int main(){
    int M,N;

    int i, menor, maior, soma = 0;

    while(1){
        cin >> M >> N;

        if(M < N){
            menor = M;
            maior = N;
        }else{
            menor = N;
            maior = M;
        }

        if(M <= 0 || N <= 0)
            break;

        for(i = menor; i <= maior;i++){
            cout << i << " ";
            soma = soma + i;
        }


        cout << "Sum="<< soma << endl;
        soma = 0;
    }
}