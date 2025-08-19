# POO
aula do dia 19/08/2025
estudar para prova calculo de tempo 
recursividade funções logaritimacas 
recorrencia 
Teorema mestre 
metodos de ordenação

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include<string>

using namespace std;

#define TAM 10

void trocar(string& a, string& b);
int particao( string dados[], int menor, int maior);
void quickSort ( string dados[], int menor, int maior);

int main()
{
	cout << "n/";
	cout << "Exemplo quick Sort \n\n";

	int i;
	// Declara um array para armazenar os nomes
	string nomes[TAM];

	for (i=0; i < TAM; i++) {
		cout << " Informe o nome " << i+1 << ": ";
		getline(cin, nomes[i]);
	}

	cout <<"\n";

	cout << "nomes antes da ordenaC'C#o: \n\n ";
	i=1;

	for (const auto& nome : nomes) {
		cout << setw(2) << i << "." << nome << endl;
		i++;
	}

	quickSort(nomes, 0, TAM -1);
	cout << "\n";

	cout <<" Nomes depois da ordenacao endl ";

	i = 1;

	for (const auto& nome: nomes) {
		cout << setw(2) << i << ". " << nome << endl;
		i++;
	}

	cout <<"\n";
	return 0;

	printf("Hello World");
}
// Funcoes
void trocar(string& a, string& b){
    string temp = a ;
    a = b;
    b = temp;
}

int particao( string dados[], int menor, int maior){
    // Escolhe o ultimo elemento para sero pivo
    string pivo = dados[maior];
    
    // Indice do ultimo elemento cujo  valor e menor que o pivo
    int i = menor -1;
    
    // Loop para organizar os elemento em relação ao pivo
    for (int j = menor; j < maior; j++){
        // move todos elemento menores que o pivo para parte esquerda do array de string
        if(dados[j] < pivo){
            i++;
            trocar (dados[i] , dados[j]);
        }
    }
    // Depois que o loop termina todos os elementos menores q o pivo estão a esquerda e todos os elementos maiores estão a direita
    // porem o pivo ainda esta na ultima posicao (maior) assim trocamos o pivo com o elemento na posicao i + 1,
    // PAra colocalo na posicao correta
    trocar(dados[i+1], dados[maior] );
    return i+1;
}
void quickSort ( string dados[], int menor, int maior){
    if ( menor < maior){
        
        int pivo = particao (dados, menor, maior);
        quickSort(dados, menor, pivo -1);
        quickSort(dados, pivo +1  maior);
    }
}

