#include <iostream>
#include <cmath> // Para nan

using namespace std;

// Protótipo de funções
void menu();
float sum(float, float);
float sub(float, float);
float mult(float, float);
float divis(float, float);

int main(){

    menu();
    return 0;
}

void menu(){

    int op;
    float a, b;

    do {
        cout << "\n****** MENU ******";
        cout << "\n[1] Adição \n[2] Subtração \n[3] Multiplicação \n[4] Divisão \n[0] Sair";
        cout << "\n==> ";
        cin >> op;

        if(op){ // op = True -> != 0
            cout << "\nInforme dois valores: \nValor a: ";
            cin >> a;
            cout << "Valor b: ";
            cin >> b;

            switch (op) {
                case 1:
                    cout << "\nSoma: " << sum(a,b) << endl;
                    break;
                case 2:
                    cout << "\nSubtração: " << sub(a,b) << endl;
                    break;
                case 3:
                    cout << "\nMultiplicação: " << mult(a,b) << endl;
                    break;
                case 4: 
                    if(b) {
                        cout << "\nDivisão: " << divis(a,b) << endl;
                    } else {
                        cout << "\nNão é possível fazer divisão por zero!\n";
                    }
                    break;
                default:
                    cout << "\nOpção inválida!";
            }

        } else {
            cout << "\nSaindo...\n";
        }
    } while(op); // op = True -> != 0 
}

float sum(float a, float b){
    return a + b;
}

float sub(float a, float b){
    return a - b;
} 

float mult(float a, float b){
    return a * b;
}

float divis(float a, float b){
    if(b){
        return a / b;
    } else {
        return nan(""); 
    }
}
