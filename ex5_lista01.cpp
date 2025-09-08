/******************************************************************************

Escreva um programa para ler os valores de uma temperatura em graus Celsius e apresentá-la
convertida para graus Fahrenheit e graus Kelvin.
A fórmula de conversão para graus Fahrenheit
é dada por F = (9 × C + 160)/5. 
A fórmula de conversão para graus Kelvin é dada por
K = C + 273, 15. Nessas fórmulas, F corresponde à temperatura em graus Fahrenheit, K
corresponde à temperatura em graus Kelvin e C corresponde à temperatura em graus Celsius.
Para apresentar o resultado, considere a utilização de duas casas decimais.
*******************************************************************************/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float celsius, Fahrenheit, Kelvin;
    cout << endl;
    cout << "Informe a temperatura em graus celcius \n\n";
    cin >> celsius;
    Fahrenheit = (9 * celsius + 160) / 5 ;
    Kelvin = celsius + 273,15 ;
    cout << endl;
    cout << fixed << setprecision(2) << " temperatura em graus Fahrenheit: " << Fahrenheit;
    cout << endl;
    cout << fixed << setprecision(2) << " temperatura em graus Kelvin: " << Kelvin;
    

    return 0;
}