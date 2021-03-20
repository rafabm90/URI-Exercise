/*

    by:Rafael Borges Morais 

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    float n1,n2;

    do{


        do{
            cin >> n1;
            if(n1 > 10.0 || n1 < 0.0) cout << "nota invalida" << endl;
        }while(n1 > 10.0 || n1 < 0.0);

        do{
            cin >> n2;
            if(n2 > 10.0 || n2 < 0.0) cout << "nota invalida" << endl;
        }while(n2 > 10.0 || n2 < 0.0);

        cout << "media = " << (n1 + n2)/2 << endl;
        do{
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> x;
        }while(x > 2 || x < 1);


    }while(x == 1);

}