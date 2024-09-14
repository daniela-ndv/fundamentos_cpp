// 02. Faça um programa que diz se um número recebido é positivo ou negativo.

#include <iostream>

using namespace std;

int main(){

    float num;

    cout << "Informe um número: ";
    cin >> num;

    num > 0 ? (cout << "\nO número é positivo.\n") : num < 0 ? (cout << "\nO número é negativo.\n") : (cout << "\nO número é zero.\n"); 

    return 0;
}
