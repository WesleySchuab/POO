/******************************************************************************

15. Escreva um programa que pergunte quanto vocC* ganha por hora
e o nC:mero de horas trabalhadas no mC*s.
Calcule e mostre
o total do seu salC!rio no referido mC*s,
sabendo-se que
sC#o descontados 11% para o Imposto de Renda,
8% para o INSS
e 5% para o sindicato. O
valor do salC!rio lC-quido C) obtido apC3s realizar os descontos do salC!rio bruto. O programa deve
apresentar o seguinte resultado, utilizando duas casas decimais:

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float valor_hora, horas_mes, salario, salario_liquido, ir, inss, sindicato;
	cout << endl;
	cout << fixed << setprecision(2) << endl;
	cout << " Quanto voce ganha por mes ? e a quantidade de horas trabalhadas " << endl;
	cin >> salario >> horas_mes;
    valor_hora = salario / horas_mes;
	salario_liquido = salario * 0.76;
	ir = salario * 0.11;
	inss = salario * 0.08;
	cout << endl;
	cout << "=> Calculo de Salarial \n\n";
	cout << "+ Salario Bruto ..: R$ " << salario << endl;
	cout << "+ Valor Hora .....: R$ " << valor_hora << endl;
	cout << "- IR (11%)........: R$ " << ir << endl;
	cout << "- INSS (8%).......: R$ " << inss << endl;
	cout << "- Salario Liquido.: R$ " << salario_liquido << endl;
	return 0;
}