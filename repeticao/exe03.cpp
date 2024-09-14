// 3. Faça um programa que calcule e mostre a média aritmética de N notas.

#include <iostream>

using namespace std;

int main(){

    float media = 0, total = 0;
    int n; 

    cout << "Informe a quantidade de notas que deseja calcular: ";
    cin >> n; 

    for(int i = 0; i < n; i++){
        int nota;
        cout << "Informe a nota " << i+1 << ": ";
        cin >> nota;

        total += nota;
    }
    media = total / n; 

    cout << "\nMédia das " << n << " notas: " << media << endl;

    return 0;
}