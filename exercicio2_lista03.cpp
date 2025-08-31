#include<iostream>
#include <iomanip>
using namespace std ;
int main (){
    float n1, n2, n3, n4;
    cout << "\n Informe 4 notas: \n";
    cin >> n1 >> n2 >> n3 >> n4;
    float media = (n1+n2+n3+n4) /4;
    cout << "\n media: ";
    std:: cout << std:: fixed << std:: setprecision(4) << media <<std::endl; 
    return 0;
}