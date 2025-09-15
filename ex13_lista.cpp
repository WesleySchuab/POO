/******************************************************************************

vendendo o PUT RATIO SPREAD

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float quantidade_litros, quantidade_latas, area_parede, valor_total;
    cout << endl;
    cout << " Informe o tamanho da parede em m²: ";
    cin >> area_parede;
    quantidade_litros = area_parede / 3;
   /* if(quantidade_litros > 18 ){
        quantidade_latas = quantidade_litros / 18 ;
        quantidade_latas = ceil(quantidade_latas);
    }else{
        quantidade_latas = 1;
    }
        */
     quantidade_latas =  ceil( quantidade_litros / 18 );    
    valor_total = 80 * quantidade_latas;
    cout << endl;
    if(quantidade_latas > 1){
        cout << "Voce devera comprar " << quantidade_latas << " latas, que ira custar R$ "<< valor_total;
    }else
        cout << "Voce devera comprar " << quantidade_latas << " lata, que ira custar R$ "<< valor_total;

    return 0;
}