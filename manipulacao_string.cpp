#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cout << "\n";
    cout << "exemplo de uso de strcpy()e strncpy()\n\n";
    char nome[] = " Instituto Federal";
    char texto1[20];
    char texto2[11];

    // Realiza a copia do conteudo de <nome> para <texto1>
    strcpy(texto1, nome);

    // copia os 9 primeiros caracteres de <nome> para <texto2>
    strncpy(texto2, nome, 9);

    // Acrescenta o '\0' no final de <texto2>
    texto2[10] = '\0';

    cout << "--> Nome...: " << nome << endl;
    cout << "--> texto1...: " << texto1 << endl;
    cout << "--> texto2...: " << texto2 << endl;
    cout << endl;
    return 0;
}