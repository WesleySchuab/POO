/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

struct Ponto {
	int x;
	int y;


	// Funcao para definir as coordenadas do ponto
	void defineCoordenadas(int px, int py) {
		x = px;
		y = py;
	}

// Funcao para exibir as coordenadas
	void exibeCoordenadas( string P ) const {
		cout << "Coordenadas do ponto " << P << ": (" << x << ", " << y << " )\n ";
	}
};

int main()
{
	cout << "\n";
	cout << " Declaracao de estruturas com atributos e funcoes \n\n";

	// Declaracao das variaveis tipo Ponto
	Ponto p1;
	p1.defineCoordenadas(10, 20);
	p1.exibeCoordenadas("P1");
	
	Ponto p2;
	p2.defineCoordenadas(11, 22);
	p2.exibeCoordenadas("P2");

    cout << endl;

	return 0;
}