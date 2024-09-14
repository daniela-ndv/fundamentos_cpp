// 05. Faça um programa de calculadora simples, que pede dois números ao usuário, em seguida exibe um menu onde ele vai escolher que operação será realizada. A operação e a saída devem estar em um switch case.

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float num1, num2;

    cout << "Número 1: ";
    cin >> num1;
    cout << "Número 2: ";
    cin >> num2;

    char opcao;
    float calculo;
    
    cout << "\n\nSelecione uma opção: \n\n ****** Menu ******";
    cout << "\n+ => Adição \n- => Subtração \n. => Subtração absoluta \n* => Multiplicação \n/ => Divisão \n==> ";
    cin >> opcao; 

    switch (opcao){
        case '+':
            calculo = num1 + num2;
            cout << "\n" << num1 << " + " << num2 << " = " << calculo << endl; 
            break;
        case '-':
            calculo = num1 - num2;
            cout << "\n" << num1 << " - " << num2 << " = " << calculo << endl; 
            break;
        case '.':
            calculo = abs(num1 - num2);
            cout << "\n" << num1 << " - " << num2 << " = " << calculo << " (valor absoluto)" << endl; 
            break;
        case '*':
            calculo = num1 * num2;
            cout << "\n" << num1 << " * " << num2 << " = " << calculo << endl; 
            break;
        case '/':
            calculo = num1 / num2;
            cout << "\n" << num1 << " / " << num2 << " = " << calculo << endl; 
            break;
        default:
            break;
        }

    return 0;
}