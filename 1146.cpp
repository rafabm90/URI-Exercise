/*

    by:Rafael Borges Morais 

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int x;

    do{
        cin >> x;
        if(x == 0)break;

        for(int i = 1;i <=x;i++)
        {
            cout << i;if(i != x) cout << " ";
        }
        cout << endl;

    }while(x != 0);

}
