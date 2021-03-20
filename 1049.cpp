/*

    by:Rafael Borges Morais 

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    string nome1, nome2, nome3;

    cin >> nome1 >> nome2 >> nome3;

    if(nome1 == "vertebrado"){
        if(nome2 == "ave"){
            if(nome3 == "carnivoro") cout << "aguia" << endl;
            else cout << "pomba" << endl; 
        }else{
            if(nome3 == "onivoro") cout << "homem" << endl;
            else cout << "vaca" << endl;
        }
    }else{
        if(nome2 == "inseto"){
            if(nome3 == "hematofago") cout << "pulga" << endl;
            else cout << "lagarta" << endl; 
        }else{
            if(nome3 == "hematofago") cout << "sanguessuga" << endl;
            else cout << "minhoca" << endl;
        }
    }   
}