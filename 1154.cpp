/*

    by:Rafael Borges Morais 

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int id, soma = 0, qtd = 0;

    while(1){

        cin >> id;
        if(id < 0) break;

        soma = soma + id;
        qtd++; 
    }

    cout << fixed << setprecision(2);
    cout << (float)soma/(float)qtd << endl;
}