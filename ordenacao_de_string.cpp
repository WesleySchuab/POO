#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cout << "\n";
    cout << "exemplo de uso de strcmp() \n\n";
    char part1[50] = " Instituto";
    char part2[]= "Federal";
    char texto[20]="";

    // Declara um array de caracteres usando ponteiro
    const char *nomes[] = {
        "Paulo",
        "Ana Cristina",
        "Renata","João", "Miranda"
    };
    
    // Obtem o total de nomes armazenados no array
    size_t total = sizeof(nomes)/ sizeof(nomes[0]);
    
    const char * temp;
    
    int i, j;
    cout << "Total de nomes: " << total << "\n\n";
    cout << "Exibe os nomes antes de ordenar\n\n";
    for (i = 0; i < total; i++){
        cout << i+1 << ". " << nomes[i] << endl;
    }
    
    // Ordenação
    for ( i = 0; i < total -1 ; i++){
        for(j = i+1; j < total; j++){
            if( strcmp( nomes[i], nomes[j]) > 0  ){
                temp = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = temp;
            }
        }
    }
    cout << "\n";
    // Exibe os nomes depois de ordenar
    cout << "* Depois da ordenação: " << "\n\n";
     for (i = 0; i < total; i++){
        cout << i+1 << ". " << nomes[i] << endl;
    }
    cout << endl;
    return 0;

}