//06. Usando os conceitos de switch case, faça um programa que pergunte o mês ao usuário (número de 1 até 12), e diga quantos dias aquele mês possui, incluindo se é ano bissexto ou não.

#include <iostream>

using namespace std;

int main() {

    int mes;

    cout << "Informe o mês [1 a 12]: ";
    cin >> mes;

    switch(mes){
        case 1: 
        case 3: 
        case 5:
        case 7:
        case 8: 
        case 10:
        case 12:
            cout << "\nO mês tem 31 dias." << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "\nO mês tem 30 dias." << endl;
            break;
        case 2:
            int ano;
            cout << "\nInforme o ano que deseja saber: ";
            cin >> ano;

            if(ano % 400 == 0 || ((ano % 4 == 0) && (ano % 100 != 0))) {
                cout << "\nO mês tem 29 dias." << endl;
            } else{
                cout << "\nO mês tem 28 dias." << endl;
            }
            break;
        default:
            break;
    }

    return 0;
}