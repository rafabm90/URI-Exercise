#include <iostream>
 
using namespace std;

int fibonnaci(int n, int &cont)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    else{
        cont +=2;
        return fibonnaci(n-1, cont)+fibonnaci(n-2, cont);         
    }
}
 
int main() {
 
    int n, i;
    int cont = 0;
    int result;

    cin >> n;

    int *numero = new int[n];
    
    for(i = 0;i < n;i++)
    {
        cin >> numero[i];
        result = fibonnaci(numero[i], cont);
        cout << "fib(" << numero[i] << ") = "<< cont << " calls = "<< result << endl;
        cont = 0;
    }
    
    return 0;
}