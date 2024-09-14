// 03. Faça um programa que pede dois inteiro e armazene em duas variáveis. Em seguida, troque o valor das variáveis e exiba na tela

#include <iostream>

using namespace std;

int main(){

    int num1, num2;

    cout << "Informe dois valores inteiros (X Y): ";
    cin >> num1 >> num2;

    cout << "\n***** Antes da troca ***** "; 
    cout << "\nValor 1: " << num1; 
    cout << "\nValor 2: " << num2; 

    int aux;
    aux = num2;
    num2 = num1;
    num1 = aux;

    cout << "\n\n##### Após a troca #####"; 
    cout << "\nValor 1: " << num1; 
    cout << "\nValor 2: " << num2 << endl; 

    return 0;
}
