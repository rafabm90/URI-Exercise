#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    
    int x,i = 0;
    double N[100];
    
    cout << fixed << setprecision(4);
    cin >> x;
    N[0] = x;
    printf("N[%d] = %.4lf\n", i, N[i]);
    for(i = 1 ; i < 100;i++){
        N[i] = N[i-1]/2;
        printf("N[%d] = %.4lf\n", i, N[i]);
    }

    return 0;
}
  