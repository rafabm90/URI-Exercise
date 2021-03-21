/*

    by:Rafael Borges Morais 

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int N, fib[50];
    fib[0] = 0; fib[1] = 1;
    cin >> N;

    for(int i = 2; i < N; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(int i = 0; i < N; i++){
        cout << fib[i]; if(i != N-1) cout << " ";
    }

    cout << endl;
}