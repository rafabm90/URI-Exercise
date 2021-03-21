/*

    by:Rafael Borges Morais 

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, soma = 0,x,y,b=0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        for(int j = x;;j++){
            if(j%2 != 0){
                soma = soma + j;
                b++;
            }
            if(b == y) break;
        }
        cout << soma << endl;
        soma = 0;
        b=0;
    }
}