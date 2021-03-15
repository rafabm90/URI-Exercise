/*

  by: Rafael Borges Morais
  
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{

    int N, i,soma[5] = {0,0,0,0,0};
    char nome[50], icone;

    cin >> N;
    for(i = 0; i < N; i++)
    {
        cin >> nome;
        cin >> icone;

        if(icone == 'X')
            soma[0] = soma[0] + 1;
        if(icone == 'H')
            soma[1] = soma[1] + 1;
        if(icone == 'E')
            soma[2] = soma[2] + 1;
        if(icone == 'A')
            soma[3] = soma[3] + 1;
        if(icone == 'M')
            soma[4] = soma[4] + 1;
    }

    cout << soma[0] << " Hobbit(s)" << endl;
    cout << soma[1] << " Humano(s)" << endl;
    cout << soma[2] << " Elfo(s)" << endl;
    cout << soma[3] << " Anao(s)" << endl;
    cout << soma[4] << " Mago(s)" << endl;



    return 0;


}
