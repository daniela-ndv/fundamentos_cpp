/*
Crie um programa que pede um inteiro ao usuário. Em seguida, ele deve transformar esse valor em seu cubo. 
Faça isso usando uma função que recebe passagem por valor e outra que usa parâmetro e variável de referência. 
Deixe bem claro que uma altera o valor somente dentro da função (valor) e a outra altera o valor original da variável (referência). 
*/

#include <iostream>

using namespace std;

void cubo_por_valor(int);
void cubo_por_referencia(int&);

int main()
{
    int numero;
    cout << "Informe um número inteiro: ";
    cin >> numero;

    cout<<"\nAntes de cubo_por_valor: num = "<<numero<<endl;
    cubo_por_valor(numero);
    cout<<"Depois de cubo_por_valor: num = "<<numero<<endl;
    cout<<"\nAntes de cubo_por_referencia: num = "<<numero<<endl;
    cubo_por_referencia(numero);
    cout<<"Depois de cubo_por_referencia: num = "<<numero<<endl;

    return 0;
}

void cubo_por_valor(int num)
{
    num = num*num*num;
    cout<<"Durante cubo_por_valor: num = "<<num<<endl;
}

void cubo_por_referencia(int& num){
    num = num*num*num;
    cout<<"Durante cubo_por_referencia: num = "<<num<<endl;
}