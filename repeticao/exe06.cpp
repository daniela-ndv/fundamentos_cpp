// 6. Faça um programa que mostre todos os primos entre 1 e N sendo N um número inteiro fornecido pelo usuário.

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Digite um número inteiro n: ";
    cin >> n;

    if (n < 1) {
        cout << "Informe um número inteiro maior ou igual a 1." << endl;
    } else {
        cout << "\nNúmeros primos entre 1 e " << n << ":" << endl;

        for (int num = 2; num <= n; ++num) {
            bool primo = true; // Assume que o número é primo

            // Verifica até a raiz quadrada de num (condição para simplificar a verificação)
            for (int i = 2; i * i <= num; ++i) {
                if (num % i == 0) {
                    primo = false;
                    break; 
                }
            }
            if (primo) {
                cout << num << " ";
            }
        }
        cout << endl;
    }

    return 0;
}