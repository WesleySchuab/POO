/******************************************************************************

Escreva um programa para um caixa eletrônico. O programa deverá perguntar ao usuário
 o valor do saque
 e depois informar quantas notas de cada valor serão fornecidas.
 As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais.
 O valor mínimo é de 10 reais e o valor máximo de 1000 reais.
 O programa não deve se preocupar com a quantidade de notas existentes na
 máquina. Exemplos:
 a. Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota
 de 50, uma nota de 5 e uma nota de 1;
 b. Para sacar a quantia de 399 reais, o programa fornece três notas de 100, uma nota
 de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int valorSaque;

    // Solicita o valor do saque ao usuário
    cout << "--- Caixa Eletrônico ---" << endl;
    cout << "Notas disponíveis: R$ 100, R$ 50, R$ 10, R$ 5, R$ 1" << endl;
    cout << "Valor mínimo de saque: R$ 10 | Valor máximo: R$ 1000" << endl;
    cout << "\nDigite o valor que deseja sacar: ";
    cin >> valorSaque;
    if(! (valorSaque >= 10 && valorSaque <= 1000) ){
        return 0;
    }
    cout << "\nPara sacar a quantia de R$ " << valorSaque << ", você receberá:" << endl;
    
    int valorRestante = valorSaque;
    
    int notas100 = valorRestante / 100;
    // Abreviação de calculo de modulo
     valorRestante %= 100;

    // Calcula as notas de 50
    int notas50 = valorRestante / 50;
    // Calculo de modulo
    //valorRestante = valorRestante % 50;
    // Calculo de modulo abreviado 
    valorRestante %= 50;

    // Calcula as notas de 10
    int notas10 = valorRestante / 10;
    valorRestante %= 10;

    // Calcula as notas de 5
    int notas5 = valorRestante / 5;
    valorRestante %= 5;

    // Calcula as notas de 1
    int notas1 = valorRestante;
    
    // Exibe o resultado, apenas para as notas que serão entregues
    if (notas100 > 0) {
        cout << notas100 << " nota(s) de R$ 100" << endl;
    }
    if (notas50 > 0) {
        cout  << notas50 << " nota(s) de R$ 50" << endl;
    }
    if (notas10 > 0) {
       cout << notas10 << " nota(s) de R$ 10" << endl;
    }
    if (notas5 > 0) {
        cout << notas5 << " nota(s) de R$ 5" << endl;
    }
    if (notas1 > 0) {
        cout << notas1 << " nota(s) de R$ 1" << endl;
    }

    return 0;
}