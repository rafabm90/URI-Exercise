/*

    by:Rafael Borges Morais 

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, b = 0,soma = 0;
    while(1){
        cin >> x;

        if(x == 0) break;

        for(int i = x;;i++){
            if(i%2 == 0){
                soma += i;
                b++;
            }
            if(b == 5) break;
        }
        cout << soma << endl;
        soma = 0; b = 0;

    }
}