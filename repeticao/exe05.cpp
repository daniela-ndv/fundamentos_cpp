// 5. A série de Fibonacci é formada pela sequência 0,1,1,2,3,5,8,13,21,34,55,... Onde o próximo termo é sempre a soma dos dois anteriores. Faça um programa capaz de gerar a série até o n−ésimo termo, que o usuário deverá fornecer.

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Digite o número de termos da sequência que deseja gerar: ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor, insira um número positivo maior que zero." << endl;

    } else {
        unsigned long long a = 0, b = 1;

        cout << a << " ";

        if (n >= 2) {
            cout << b << " ";
        }

        for (int i = 3; i <= n; ++i) {
            unsigned long long soma = a + b;
            cout << soma << " ";
            a = b;    // Atualiza o valor de a para o próximo termo
            b = soma; // Atualiza o valor de b para o próximo termo
        }

        cout << endl;
    }

    return 0;
}
