// 4. Crie um programa que pede um número ao usuário, e calcula seu fatorial. Ex.: 5!=5.4.3.2.1=120

#include <iostream>

using namespace std;

int main(){

    int num;
    int fatorial = 1;

    cout << "Informe o número inteiro: ";
    cin >> num;

    if(num < 0){
        cout << "\nFatorial não aceita números negativos!\n";

    } else{

        cout << "\n " << num << "! = "; 

        for(int i = num; i >= 1; i--) {
            fatorial *= i;

            if(i != 1){
                cout << i << " * ";
            }
        }

        cout << "1 = " << fatorial << endl; 
    }

    return 0;
}