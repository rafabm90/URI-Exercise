#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
   int T, j = 0;
   int N[1000];

   cin >> T;
   
   for(int i = 0; i < 1000;i++){
       if(j == T)
        j= 0;

        printf("N[%d] = %d\n", i, j);
        j++;
       
   }
 
    return 0;
}