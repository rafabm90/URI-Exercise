/*

  by: Rafael Borges Morais
  
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int B,G, metade;


    cin >> B >> G;

    if(G%2 != 0)
        G = G-1;

    if(G/2 == B || G/2 < B)
        cout << "Amelia tem todas bolinhas!" << endl;
    else{
        metade = G/2;
        cout << "Faltam " << abs(metade - B) << " bolinha(s)" << endl;}


    return 0;


}


