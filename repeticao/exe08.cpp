// 8. Faça um programa que mostre os n termos da Série a seguir:
  // S = 1/1 + 2/3 + 3/5 + 4/7 + 5/9 + ... + n/m.
// Imprima no final a soma da série.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int n = 0;
  float soma = 1;

  cout << "Digite o número de termos da sequência: ";
  cin >> n;

  if(n <= 0){
    cout << "\nInválido! A quantidade de termos deve ser maior do que zero." << endl;
  } else if(n == 1){
    cout << "\nS = 1/1 = 1";
  } else {
    int j = 1;

    cout << "\nS = 1/1 + ";
    for(int i = 2; i <= n; i++){
      j += 2;
      cout << i << "/" << j;

      if(i < n) {
        cout << " + ";
      } 

      soma += static_cast<float>(i) / j;
    }
    cout << " = " << fixed << setprecision(6) << soma << endl;
  }
  
  return 0; 
}