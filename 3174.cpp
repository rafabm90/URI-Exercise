/*
  
  by: Rafael Borges Morais
  
 */

#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main()
{

    int N,H, i, soma[4] = {0,0,0,0},total;
    string nome, cargo;

    cin >> N;

    for(i = 0; i < N;i++)
    {
        cin >> nome >> cargo >> H;
        if(cargo == "bonecos")
            soma[0] = soma[0] + H;
        if(cargo == "arquitetos")
            soma[1] = soma[1] + H;
        if(cargo == "musicos")
            soma[2] = soma[2] + H;
        if(cargo == "desenhistas")
            soma[3] = soma[3] + H;

    }

    total = soma[0]/8 + soma[1]/4 + soma[2]/6 + soma[3]/12;

    cout << total << endl;




    return 0;


}
