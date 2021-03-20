/*

    by:Rafael Borges Morais

*/

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    double A,B,C, temp;

    cin >> A >> B >> C;

    if(B > A){
        temp = A;
        A = B;
        B = temp;
    }

    if(C > A){
        temp = A;
        A= C;
        C = temp;
    }

    if(C > B){
        temp = B;
        B = C;
        C = temp;
    }


    if(A >= B+C) cout << "NAO FORMA TRIANGULO" << endl;
    else {
        if((A*A) == (B*B) + (C*C)) cout << "TRIANGULO RETANGULO" << endl;
        if((A*A) > (B*B) + (C*C)) cout << "TRIANGULO OBTUSANGULO" << endl;
        if((A*A) < (B*B) + (C*C)) cout << "TRIANGULO ACUTANGULO" << endl;
        if(A == B && B == C) cout << "TRIANGULO EQUILATERO" << endl;
        if((A == B && A != C) || (A == C && A != B) || (B == C && B != A)) cout << "TRIANGULO ISOSCELES" << endl;
    }
    

}