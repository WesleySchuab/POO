/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

struct Pokemon {
    string nome;
    string tipo;
    int nivel;
    int hp;
    // Metodo para aumentar os pontos de vida de Pokemon
    void aumentarHP(int pontos ){
        hp += pontos;
    }
};

int main()
{
    cout << endl;
    cout << "Exemplo Pokemon \n\n ";
    Pokemon* ptrPokemom = new Pokemon;
    
    // Utiliza ponteiros para atribuir 
    ptrPokemom -> nome = "Pikachu";
    ptrPokemom -> tipo = "Eletrico";
    ptrPokemom -> nivel  = 1;
    ptrPokemom -> hp = 1;
    
    // Utiliza ponteiros para acessar os valores do Pokemon
    cout << " >> Dados do Pokemon\n" << endl;
    cout << "Nome " << ptrPokemom->nome << endl;
    cout << "Tipo " << ptrPokemom->tipo << endl;
    cout << "Nivel " << ptrPokemom->nivel << endl;
    cout << "HP " << ptrPokemom->hp << endl;
    cout << endl;
    
    cout << "Um Pokemon selvagem apareceu.. Vamos batalhar \n\n";
    cout << "Seu Pikachu venceu uma luta muito dificil ";
    cout << "Ele ganhou 50 pontos\n";
    // aumentarHP do Pokemon
    ptrPokemom->aumentarHP(50);
    cout << "Olhe o que esta acontecendo seu Pikachu esta brilhando \n";
    ptrPokemom->nivel++;
    cout <<" Pikachu subil de nivel\n\n";
    cout << " Dados do Pokemon";
    cout << "Nome " << ptrPokemom->nome << endl;
    cout << "Tipo " << ptrPokemom->tipo << endl;
    cout << "Nivel " << ptrPokemom->nivel << endl;
    cout << "HP " << ptrPokemom->hp << endl;
    cout << endl;
    // Liberando memoria alocada
    delete ptrPokemom;
    return 0;
}