// 1. Faça um programa que receba dois números inteiros e gere os números inteiros que estão no intervalo compreendido por eles.

#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    
    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;
    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    int inicio = (num1 < num2) ? num1 : num2;
    int fim = (num1 > num2) ? num1 : num2;
    
    cout << "Números inteiros no intervalo entre " << inicio << " e " << fim << ":" << endl;
    for (int i = inicio; i <= fim; ++i) {
        cout << i;
        if(i < fim){
            cout << ", ";
        } else {
            cout << " ";
        }
        
    }
    
    cout << endl; 

    return 0;
}
