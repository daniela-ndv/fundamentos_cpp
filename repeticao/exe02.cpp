// 2. Faça um programa que leia 5 números e informe o maior número.

#include <iostream>

using namespace std;

int main(){

    float num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;

    float maior;

    if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5){
        maior = num1;
    } else if(num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5){
        maior = num2;
    } else if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5){
        maior = num3;
    } else if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5){
        maior = num4;
    } else if(num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4){
        maior = num5;
    }

    cout << "\nMaior número: " << maior << endl;

    return 0;
}