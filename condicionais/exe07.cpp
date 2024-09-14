//07. Faça um programa que recebe os três lados de um triângulo e diz se é equilátero, isósceles ou escaleno.

#include <iostream>

using namespace std;

int main() {

    float lado1, lado2, lado3;

    cout << "Informe os lados do triângulo: \n (X Y Z) ==> ";
    cin >> lado1 >> lado2 >> lado3;

    if((lado1 == lado2) && (lado1 == lado3)) {
        cout << "\nTriângulo equilátero." << endl;
    } else if((lado1 != lado2) && (lado2 != lado3) && (lado2 != lado3)){
        cout << "\nTriângulo escaleno." << endl;
    } else {
        cout << "\nTriângulo isósceles." << endl;
    }
    
    return 0; 
}
