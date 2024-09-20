// Coleções em c++ e a classe set

/*
Classe set: Usada para o armazenamento e a recuperação de dados de uma coleção na qual 
os valores dos elementos contidos são exclusivos e funcionam como os valores de chave, 
de acordo com os quais os dados são automaticamente ordenados.
Fonte: https://learn.microsoft.com/pt-br/cpp/standard-library/set?view=msvc-170
*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> colecao;
    
    colecao.insert(1);
    colecao.insert(2);
    colecao.insert(3);
    colecao.insert(4);
    colecao.insert(5);

    set<int>::iterator inicio;
    set<int>::iterator final;
    inicio = colecao.begin( );
    final = colecao.end();
    
    cout << "Primeiro elemento: " << *inicio << endl; 
    cout << "Último elemento: " << *final << endl; 
    
    set<int>::iterator novoInicio;
    novoInicio = colecao.erase(inicio);
    
    cout << "\nNovo ínicio, após a exclusão: " << *novoInicio << endl;

    set<int>::size_type i = colecao.count(3);
    cout << "\nO número de elementos no conjunto com a chave de classificação 3 é: " << i << "." << endl;

    set<int>::size_type tamanho = colecao.size();
    cout << "\nTamanho do conjunto: " << tamanho << endl;

    // begin pode ser usado para iniciar uma iteração através do conjunto(set) na ordem normal
    cout << "\nO conjunto é:";
    for ( inicio = colecao.begin( ) ; inicio != colecao.end( ); inicio++ )
        cout << " " << *inicio;
    cout << endl;

    set<int>::reverse_iterator reverso;
    reverso = colecao.rbegin();
    
    // rbegin pode ser usado para iniciar uma iteração através do conjunto(set) na ordem reversa
    cout << "\nO conjunto reverso é:";
        for ( reverso = colecao.rbegin( ); reverso != colecao.rend( ); reverso++ )
            cout << " " << *reverso;
    cout << endl;

    return 0;
}