/*

    by:Rafael Borges Morais

*/

#include <iostream>

using namespace std;

int main()
{
    int hora,minuto;
    int horafinal,minutofinal;
    int resultadohora,resultadominuto;

    cin >> hora >> minuto >> horafinal >> minutofinal;
    resultadohora = horafinal - hora;
    resultadominuto = minutofinal - minuto;

    
    if(minuto > minutofinal)
    {
        resultadohora--;
        resultadominuto += 60;
    }

    if(hora == horafinal && minuto < minutofinal)
    {

    }else if(hora >= horafinal)
    {
        resultadohora +=24;

    }
   

    cout << "O JOGO DUROU " << resultadohora << " HORA(S) E " << resultadominuto << " MINUTO(S)" << endl;

    return 0;
}