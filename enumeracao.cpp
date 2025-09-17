#include <iostream>
using namespace std;
// Enumeração para controlar o estado do jogo 
enum class EstadoJogo {
    MenuPrincipal,
    Jogando,
    Pausado,
    GameOver
};
// Prototipo das funções
void mostraEstado(EstadoJogo estado);
using namespace std;

int main()
{
   cout << endl;
   cout << " Exemplo de Enumeração \n\n";
   // Declara o enumerador, indicando que o jogo esta no menu MenuPrincipal
   EstadoJogo estadoAtual ;
   estadoAtual = EstadoJogo::MenuPrincipal;
   mostraEstado(estadoAtual);
   
   // Simula o inicip do jogo
   estadoAtual = EstadoJogo::Jogando;
   
   // Mostra o estado estadoAtual
   mostraEstado(estadoAtual);
   
   // Simula o jogo sendo Pausado
   estadoAtual = EstadoJogo::Pausado;
   mostraEstado(estadoAtual);
   
   // Simula o temrino do jogo
   estadoAtual = EstadoJogo::GameOver;
   mostraEstado(estadoAtual);
   
   cout << "\n";
   

    return 0;
}
void mostraEstado(EstadoJogo estado){
    switch(estado){
        case EstadoJogo::MenuPrincipal:
        cout << ">> Voce esta no menu principal " <<endl;
        break;
        case EstadoJogo::Jogando:
        cout << " >> O jogo esta em andamento" <<endl;
        break;
        case EstadoJogo::Pausado:
        cout << " >> O jogo esta pausado" <<endl;
        break; case EstadoJogo::GameOver:
        cout << " >> Game Over" <<endl;
        break;
        default:
          cout << " >> Estado desconhecido " <<endl;
    }
    
}