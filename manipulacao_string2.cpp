#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cout << "\n";
    cout << "exemplo de uso de strcat() e strncat() \n\n";
    char part1[50] = " Instituto";
    char part2[]= "Federal";
    char texto[20]="";

    // Realiza a copia do conteudo de <nome> para <texto1>
    
    
    strcat(part1, part2);

    // copia os 9 primeiros caracteres de <nome> para <texto2>
    strncat(texto, part1, 5);

    

    cout << "--> Nome...: " << part1 << endl;
    cout << "--> texto1...: " << part2 << endl;
    cout << "--> texto2...: " << texto << endl;
    cout << endl;
    return 0;
}