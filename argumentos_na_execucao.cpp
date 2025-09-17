/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

int main()
{
    cout << "\n";
    cout << " Exemplo de argumentos para a Função principal\n\n";
    
    // Se o usuario não forneceu o numero correto de argumentos 
    if(argc != 4){
        // Exibe uma mensagme de erro
        cerr << "Uso " << argc[0] << "somar/subtrair num1 num2 "<< "\n\n";
        // Encerra o programa
        return 1;
    }
    const char *operacao = arg[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    
    if (! strcmp(operacao, "somar")){
        cout << "Soma: " << num1+num2 << endl;
    }else if( !strcmp(operacao, "subtrair")){
        cout << "Subtracao: " << num1 - num2 << endl;
    }else {
        cout << " Operacao invalida" << endl ;
    }

    return 0;
}