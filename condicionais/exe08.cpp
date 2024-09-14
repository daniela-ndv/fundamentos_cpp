/* 08. Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax² + bx + c. O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas seguintes situações:

    Se o usuário informar o valor de A igual a zero, a equação não é do segundo grau e o programa não deve fazer pedir os demais valores, sendo encerrado;
    Se o delta calculado for negativo, a equação não possui raizes reais. Informe ao usuário e encerre o programa;
    Se o delta calculado for igual a zero a equação possui apenas uma raiz real; informe-a ao usuário;
    Se o delta for positivo, a equação possui duas raiz reais; informe-as ao usuário;

PS: Inclua a biblioteca cmath (#include <cmath>) e use a função sqrt(x) para calcular a raiz de x. */

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float a = 0;
    float b = 0;
    float c = 0;

    cout << "Informe os valores de a, b e c da equação (ax² + bx + c): ";
    cout << "\na = ";
    cin >> a;

    if(a == 0){
        cout << "\nA equação não é do segundo grau! O valor de a deve ser diferente de zero.\n";
    } else {
        cout << "b = ";
        cin >> b;
        cout << "c = ";
        cin >> c;

        float delta = (b*b) - (4*a*c);

        if(delta < 0) {
            cout << "\nA equação não possui raízes reais!\n";
        } else if(delta == 0){
            cout << "\nA equação possui apenas uma raiz real!\n";
            
            int x = -b / (2*a);
            cout << "\nSolução: \nX = " << x << endl;

        } else if(delta > 0){
            cout << "\nA equação possui duas raizes reais!\n";
            
            int x1 = (-b + sqrt(delta)) / (2*a);
            int x2 = (-b - sqrt(delta)) / (2*a);
            cout << "\nSolução: \nX1 = " << x1 << "\nX2 = " << x2 << endl;
        }
    }

    return 0;
}
