/******************************************************************************

11. Escreva um programa que peça 2 números inteiros e um número real.
Calcule e mostre:
a. O produto do dobro do primeiro com metade do segundo;
b. A soma do triplo do primeiro com o terceiro;
c. O terceiro elevado ao cubo.
*******************************************************************************/
#include<iostream>
using namespace std;
#include <cmath> // Necessário para a função pow

int main()
{
    int numero_inteiro1, numero_inteiro2;
    float numero_real, a, b ,c ;
    cout << endl; 
    cout << " Informe dois numeros inteiros \n\n ";
    cin >> numero_inteiro1 >> numero_inteiro2;
    cout << endl;
    cout << "Informe um numero real \n ";
    cin >> numero_real;
    
    cout << endl;
    a = ( numero_inteiro1 * numero_inteiro1 ) * ( numero_inteiro2 / 2 );
    cout <<" a. O produto do dobro do primeiro com metade do segundo\n " << a;
    
    cout << endl;
    b = ( numero_inteiro1 * 3 ) + numero_real;
    cout << " b. A soma do triplo do primeiro com o terceiro \n" << b;
    
    cout << endl;
    c = pow ( numero_real, 3);
    cout << " c. O terceiro elevado ao cubo. \n" << c;
    

    return 0;
}