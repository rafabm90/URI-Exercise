/*

    by:Rafael Borges Morais 

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    double s = 0;
    double b = 1;

    for(double i = 1; i <= 100;i = i + 2)
    {
        s += i/b;
        b = b*2;
    }

    cout << fixed << setprecision(2);
    cout << s << endl;

}