/*

    by:Rafael Borges Morais 

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    double s = 1;

    for(int i = 2; i <= 100;i++)
    {
        s += (1/(double)i);
    }

    cout << fixed << setprecision(2);
    cout << s << endl;

}