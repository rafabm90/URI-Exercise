/*
  
  by: Rafael Borges Morais
  
  */

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{

    double A,B,C;

    cin >> A >> B >> C;

    if(A == 0.0)
        cout << "Impossivel calcular" << endl;
    else if ((pow(B,2)-4*A*C) < 0)
        cout << "Impossivel calcular" << endl;
    else
    {
        cout << fixed << setprecision(5);
        cout << "R1 = " << (-B + sqrt(pow(B,2)-4*A*C))/(2*A) << endl;
        cout << "R2 = " << (-B - sqrt(pow(B,2)-4*A*C))/(2*A) << endl;
    }


    return 0;


}

