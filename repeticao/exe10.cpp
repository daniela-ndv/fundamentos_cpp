/* 10. Escreva programas que exibam os seguintes padrões na tela, de acordo com o número que o usuário fornecer, que será sempre o número de linhas:

4.1 
* 
** 
*** 
**** 
*****

4.2
1                                                                                  
2 3                                                                                                         
4 5 6                                                                                                       
7 8 9 10 

4.3
12345                                                                                                         
2345                                                                                                          
345                                                                                                           
45                                                                                                            
5

4.4
    *                                                                  
   ***                                                                 
  *****                                                                
 *******                                                               
*********                                                              
 *******                                                               
  *****                                                                
   ***                                                                 
    *
*/

#include <iostream>
#include <iomanip> // Para setw (4.4)

using namespace std;

int main(){

    int linhas;

    cout << "Informe o número de linhas: ";
    cin >> linhas;

    // 4.1
    cout << "\nPadrão 4.1\n";
    for(int i = 0; i <= linhas; i++) {
        for (int j = 1; j <= i; j++) { 
            cout << "*";
        }
        cout << endl; // Move para a próxima linha
    }

    // 4.2
    cout << "\nPadrão 4.2\n";
    int num = 1;
    for(int i = 0; i < linhas; i++) {
        for (int j = 1; j <= i; j++) { 
            cout << num << " ";
            num++;
        }
        cout << endl; 
    }

    // 4.3
    cout << "\nPadrão 4.3\n";
    for(int i = 0; i < linhas; i++) {
        for (int j = i + 1; j <= linhas; j++) { 
            cout << j;
        }
        cout << endl; 
    }
    
    // 4.4
    cout << "\nPadrão 4.4\n";
    int totalLinhas = 2 * linhas - 1; 

    for (int i = 1; i <= totalLinhas; i++) {
        int numAsteriscos = i <= linhas ? (2 * i - 1) : (2 * (totalLinhas - i + 1) - 1);
        int espacos = (totalLinhas - numAsteriscos) / 2;

        // Imprime os espaços
        cout << setw(espacos + 1);

        for (int j = 0; j < numAsteriscos; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}