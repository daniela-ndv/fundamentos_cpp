//01. Faça um programa que peça dois números, e diga qual é maior ou se são iguais.

#include <iostream>

using namespace std;

int main(){

    float num1, num2;

    cout << "Número 1: ";
    cin >> num1;
    cout << "Número 2: ";
    cin >> num2;
 
    if(num1 > num2){
        cout << "\nO número " << num1 << " é maior.\n";
    } else if(num1 < num2) {
        cout << "\nO número " << num2 << " é maior.\n";
    } else {
        cout << "\nOs números são iguais\n";
    } 

    return 0; 
}
