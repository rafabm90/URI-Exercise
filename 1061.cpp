#include <iostream>

using namespace std;

int main()
{
    int diaI,hI,mI,sI;
    int diaF,hF,mF,sF;
    int resultS,resultM,resultH;

    scanf("Dia %d", &diaI);
    scanf("%d : %d : %d\n", &hI, &mI, &sI);
    scanf("Dia %d", &diaF);
    scanf("%d : %d : %d", &hF, &mF, &sF);

    if(sF >= sI)
        resultS = sF - sI;
    else{
        mF--;
        resultS = sF+60 - sI;}

    if(mF >= mI)
        resultM = mF - mI;
    else{
        hF--;
        resultM = mF+60 - mI;}
        
    if(hF >= hI)
        resultH = hF - hI;
    else{
        diaF--;
        resultH = hF+24 - hI;}

    
    cout << diaF - diaI << " dia(s)" << endl;
    cout << resultH << " hora(s)" << endl;
    cout << resultM << " minuto(s)" << endl;
    cout << resultS << " segundo(s)" << endl;


}