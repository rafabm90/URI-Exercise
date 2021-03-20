#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    int n, m[50], dias = 0, soma = 0;

    while(1){
        cin >> n;
        if(n == -1) break;

        for(int i = 0; i < n;i++)
        {
            cin >> m[i];
            soma = soma + m[i];
            if(soma%100 == 0){
                dias++;
            }
        }
        cout << dias << endl;
        dias = 0;
        soma = 0;
    }
}