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
    };
    
int main()
{
    cout << "\n";
    cout << " Declaracao de estruturas \n\n";
    
    // Declaracao das variaveis tipo Ponto
    Ponto p1;
    Ponto p2;
    
    // Atribuicao de valores
    p1.x = 10;
    p1.y = 20;
    p2.x = 0;
    p2.y = 100;
    
    cout << " Coordenadas do ponto P1>: (" << p1.x << "," << p1.y << ")\n";
    cout << " Coordenadas do ponto P2>: (" << p2.x << "," << p2.y << ")\n";
    

    return 0;
}