// 7. Programe um software que recebe um número menor que 1000, e diga qual o valor da unidade, da dezena e da centena.

#include <iostream>
#include <string>

using namespace std;

int main(){

    int num;

    cout << "Informe um número menor que mil: ";
    cin >> num;

    int unidade = num % 10;
    int dezena = (num / 10) % 10;
    int centena = (num / 100) % 10;

    cout << "\nUnidade: " << unidade << endl; 
    cout << "Dezena: " << dezena << endl;  
    cout << "Centena: " << centena << endl; 

    return 0;
}