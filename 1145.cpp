/*

    by:Rafael Borges Morais 

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, y;

    cin >> x >> y;

    for(int i = 1; i <= y;i++){
        cout << i;if(i != y && i%x != 0) cout << " ";
        if(i%x == 0)
            cout << endl;
    }

}