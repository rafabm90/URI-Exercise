/*

  by: Rafael Borges Morais
  
  
 */

#include <iostream>

using namespace std;

int main()
{

    int N, i, cand[100000], maior = 0;


    cin >> N;

    for(i = 0;i < N; i++)
    {
        cin >> cand[i];
        if(cand[i] > maior)
            maior = cand[i];
    }

    if(cand[0] >= maior)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;


}
