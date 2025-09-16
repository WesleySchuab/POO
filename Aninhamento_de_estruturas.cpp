/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>

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
struct Treinador {
    string nome;
    string cidade;
    vector<Pokemon> pokemons;
};

int main()
{
    cout << endl;
    cout << "Exemplo de Aninhamento de Estruturas com Pokemon \n\n ";
   
    // Cria o Treinador
    Treinador treinador;
    treinador.nome = "Ash Ketchum";
    treinador.cidade = "Pallet Town";
    
    // Utiliza ponteiros para atribuir 
   Pokemon pikachu;
   pikachu.nome = "Pikachu";
   pikachu.tipo = "Eletrico";
   pikachu.nivel = 40;
   pikachu.hp = 85;
   
   Pokemon greninja;
   greninja.nome = "Grenija";
   greninja.tipo = "Agua / Sombrio";
   greninja.nivel = 35;
   greninja.hp = 60;
   
   Pokemon hawlucha;
   hawlucha.nome = "Hawlucha";
   hawlucha.tipo = "Lutador / Voador";
   hawlucha.nivel = 32;
   hawlucha.hp = 55;
   
   // Adicionar os Pokemon ao treinador
   treinador.pokemons.push_back(pikachu);
   treinador.pokemons.push_back(greninja);
   treinador.pokemons.push_back(hawlucha);
   
    // Exibindo o nome do treinadore seus pokemons
    cout << ">> Dados do treinador\n" << endl;
    cout << "Nome: " << treinador.nome << endl;
    cout << "Cidade " << treinador.cidade << "\n\n";
    cout << "pokemons do treinador \n";
    // Loop para exibir os dados dos pokemons
    for (int i=0; i < treinador.pokemons.size(); i++){
        cout << "Nome: " << treinador.pokemons[i].nome << endl;
        cout << "Tipo: " << treinador.pokemons[i].tipo << endl;
        cout << "Nivel: " << treinador.pokemons[i].nivel << endl;
        cout << "HP: " << treinador.pokemons[i].hp << endl;
        cout << endl;
    }
        
    
    return 0;
}