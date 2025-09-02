#include<iostream>

using namespace std;

void cantar(int);
void dancar(int);
void enrolar(int);

int main() {
	cout << "\n";
	cout << "Array de ponteiros para funcoes\n\n";
	void(*funcoes[3]) (int) = {
		dancar,
		cantar,
		enrolar
	};
	int opcao;
	cout << " Iforme a opcao desejada: ( 0, 1 ou 2 ) ";
	cin >> opcao;
	cout << endl;
	while( ( opcao >=0 ) && (opcao < 3)) {
		(*funcoes[opcao]) (opcao);
		cout << " Iforme a opcao desejada: ( 0, 1 ou 2 ) ";
		cin >> opcao;
		cout << endl;

	}
	return 0;
}
void cantar(int opcao) {
cout << " * Voce escolheu a opcao " << opcao << " Vamos cantar \n\n";
}
void dancar(int opcao) {
cout << " * Voce escolheu a opcao " << opcao << " Vamos dançar\n\n";
}
void enrolar(int opcao) {
cout << " * Voce escolheu a opcao " << opcao << " Vamos enrolar\n\n";
}
