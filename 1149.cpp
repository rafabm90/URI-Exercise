/*

    by:Rafael Borges Morais 

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, N, soma = 0;

    cin >> A;
    do{
        cin >> N;
    }while(N <= 0);

    for(int i =0; i < N;i++)
    {
        soma = soma + A+i;
    }

    cout << soma << endl;
}