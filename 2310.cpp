/*
    
    by: Rafael Borges Morais
    
*/


#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    int n;
    int s,b,a, st = 0,bt = 0,at = 0;
    int s1,b1,a1, s1t = 0,b1t = 0,a1t = 0,i;
    char nome[20][50];

    cin >> n;

    for( i =0; i < n;i++)
    {
        scanf("%s ", nome[i]);
        cin >> s >> b >> a;
        cin >> s1 >> b1 >> a1;
        st = st + s;
        bt = bt+ b;
        at = at + a;
        s1t = s1t + s1;
        b1t = b1t+ b1;
        a1t = a1t + a1;
    }
    cout << fixed << setprecision(2);
    cout << "Pontos de Saque: " << (float)(s1t*100)/st << " %." << endl;
    cout << "Pontos de Bloqueio: " << (float)(b1t*100)/bt << " %." << endl;
    cout << "Pontos de Ataque: " << (float)(a1t*100)/at << " %." << endl;
}
