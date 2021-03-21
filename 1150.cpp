/*

    by:Rafael Borges Morais 

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, z, qtd = 0, soma = 0;

    cin >> x;

    do{
        cin >> z;
    }while(z <= x);

    for(int i = x; ;)
    {
        while(soma <= z){
            soma = soma + i;
            i++;
            qtd++;
            if(soma > z) break;
        }
        break;
    }
    cout << qtd << endl;
}