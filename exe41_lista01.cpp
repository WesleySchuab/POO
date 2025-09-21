/******************************************************************************

 41.Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa anual de crescimento de 3% 
 e que a população de B seja 200000 habitantes com uma taxa de crescimento de 1.5%.
 Escreva um programa que calcule e informe o número de anos necessários
 para que a população do país A ultrapasse ou iguale a população do país B, mantidas as taxas
 de crescimento.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double paisA = 80000.0, paisB = 200000.0, anos = 0;
    while(paisA < paisB){
        paisA *= 1.03;
        paisB *= 1.015;
        anos++;
    }
    cout << "\nNumero de habitantes igualado em " << anos << " anos ";

    return 0;
}