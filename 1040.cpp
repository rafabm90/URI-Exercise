#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num[4], media,  exame;

    cout << fixed << setprecision(1);
    cin >> num[0] >> num[1] >> num[2] >> num[3];

    media = ((num[0]*2) + (num[1]*3) + (num[2]*4) + (num[3]*1))/10;

    if (media >= 5.0 && media <= 6.9)
    {
        cout << "Media: " << media << endl << "Aluno em exame." << endl;
        cin >> exame;
        cout << "Nota do exame: " << exame << endl;
        media = (media+exame)/2;
        if(media < 5.0)
            cout << "Aluno reprovado." << endl << "Media final: " << media << endl;
        else
            cout << "Aluno aprovado." << endl << "Media final: " << media << endl;
    }else if(media < 5.0)
    {
        cout << "Media: " << media << endl << "Aluno reprovado." << endl;
    }else if(media >= 7.0)
        cout << "Media: " << media << endl << "Aluno aprovado." << endl;

    return 0; 

}