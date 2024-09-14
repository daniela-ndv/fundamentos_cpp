// 04. Faça um programa que peça 3 números e os coloque em ordem crescente.

#include <iostream>

using namespace std;

int main(){

    float num1, num2, num3;

    cout << "Informe três números (X Y Z): ";
    cin >> num1 >> num2 >> num3;

    if ((num1 == num2) || (num1 == num3) || (num2 == num3)) {
        if((num1 == num2) && (num1 == num3)){
            cout << "\nOs números são iguais!" << endl; 
        } else if (num1 == num2){
            cout << "\nO número 1 é igual ao número 2." << endl; 
        } else if (num1 == num3){
            cout << "\nO número 1 é igual ao número 3." << endl; 
        } else if (num2 == num3){
            cout << "\nO número 2 é igual ao número 3." << endl; 
        }
    } else if(num1 > num2 && num1 > num3){
        if(num2 > num3) {
            cout << "\nMaior: " << num1 << "\nMédio: " << num2 << "\nMenor: " << num3 << endl;
        } else {
            cout << "\nMaior: " << num1 << "\nMédio: " << num3 << "\nMenor: " << num2 << endl;
        }
    } else if(num2 > num1 && num2 > num3) {
        if(num1 > num3){
            cout << "\nMaior: " << num2 << "\nMédio: " << num1 << "\nMenor: " << num3 << endl;
        } else {
            cout << "\nMaior: " << num2 << "\nMédio: " << num3 << "\nMenor: " << num1 << endl;
        }
    } else if(num3 > num1 && num3 > num2) {
        if(num1 > num2){
            cout << "\nMaior: " << num3 << "\nMédio: " << num1 << "\nMenor: " << num2 << endl;
        } else {
            cout << "\nMaior: " << num3 << "\nMédio: " << num2 << "\nMenor: " << num1 << endl;
        }
    } 

    return 0;
}