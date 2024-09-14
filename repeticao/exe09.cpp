// 9. Faça um programa que peça dois números, base e expoente, calcule e mostre o primeiro número elevado ao segundo número. Não utilize a função de potência da linguagem.

#include <iostream>

using namespace std;

int main(){

    float base, expoente; 

    cout << "Base: ";
    cin >> base;
    cout << "Expoente: ";
    cin >> expoente;

    float potencia = 1;

    if(base != 0 && expoente > 0) {
        for(int i=0; i < expoente; i++){
            potencia *= base;
        }
    } else if(expoente < 0){
        if (base == 0){ 
            cout << "Erro: Base 0 não pode ter um expoente negativo." << endl;
            return 1; // Encerra o programa com código de erro
        }
        float novaBase = 1/base;
        float novoExpoente = - expoente;
        for(int i=0; i < novoExpoente; i++){
            potencia *= novaBase;
        }
    } else if(expoente == 0){
        potencia = 1;
    } else if(base == 0){
        potencia = 0;
    }

    cout << "\nPotência de " << base << " elevado a " << expoente << " = " << potencia << endl; 

    return 0;
}