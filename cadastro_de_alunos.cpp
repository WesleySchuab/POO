
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

struct Cadastro {
    string nome;
    vector<float> notas;
    float media;
    
};

float calcularMedia ( const vector<float> &notas );
bool compararNomes( const Cadastro &a, const Cadastro &b);

int main()
{
	cout << "\n";
	cout << " Cadastro de notas escolares \n\n ";
	
	// vector para armazenar os cadastros dos alunos
	vector<Cadastro> alunos;
	// Total de alunos
	int totalAlunos;
	int totalNotas;
	float mediaGlobal = 0.0f;
	int i, j;
	
	cout << " >> Informe o total de alunos: ";
	cin >> totalAlunos;
	
	cout << ">> Informe o total de notas: ";
	cin >> totalNotas;
	cout << endl;
	// Cadastro dos dados de cada alunos
	// Loop para cadastrar os alunos
	for ( i = 0; i < totalAlunos; i++){
	    Cadastro aluno;
	    cout << " Informe o nome do aluno " << i + 1 << ": ";
	    // Ignora os espaços em branco deixados no buffer
	    getline(cin >> ws, aluno.nome);
	    cout << " Informe a linha com as " << totalNotas << " notas: ";
	    
	    // Variavel para armazenar a linha com as notas 
	    string linhaNotas;
	    
	    // Entrada da linha de notas
	    getline(cin, linhaNotas);
	    
	    istringstream stream(linhaNotas);
	    // Variavel para armazenar a nota 
	    float notaTemp;
	    
	    // Extrai cada nota da linha e insere no vetor de ntoas,
	    // dentro da estrutura Cadastro
	    while ( stream >> notaTemp){
	        aluno.notas.push_back(notaTemp);
	    }
	    
	    // Calcula e atribui a media do aluno
	    aluno.media = calcularMedia(aluno.notas);
	    
	    // Adicionar o Cadastro do aluno dentro do vetor alunos
	    alunos.push_back(aluno);
	    
	    // Atualiza as informações sobre a media mediaGlobal
	    mediaGlobal += aluno.media;
	    
	    cout << endl;
	    
	}
	
	// Calcula a media global da turma
	mediaGlobal /= totalAlunos;
	
	// Executa  a funcao apra ordenar os Cadastro dentro do vetor no caso, realiza a ordenação de acordo com os nomes Cadastrados
	sort(alunos.begin(), alunos.end(), compararNomes);
	
	// Apresenta os resultados
	// Formata a exibicao dos resultados
	cout << setprecision(2);
	cout << setiosflags(ios::fixed);
	cout << " Resultado final \n\n ";
	
	// Loop para percorrer os alunos Cadastrados
	for (const auto& aluno : alunos){
	    cout << "Aluno: " << aluno.nome << endl;
	    cout << "Notas: ";
	    // Exibe a nota do aluno
	    for (float nota : aluno.notas ){
	        cout << nota << " ";
	    }
	    // Exibe a media do aluno
	    cout << "\n Media: " << aluno.media << endl;
	    cout << endl;
	    
	}
	
	cout << " Media global da turma: " << mediaGlobal << "\n\n";

	return 0;
}
float calcularMedia ( const vector<float> &notas){
    float soma = 0.0f;
    // Loop que percorre as notas do aluno
    for (float nota : notas ){
        soma += nota;
    }
    return soma / notas.size();
}
bool compararNomes( const Cadastro &a, const Cadastro &b){
    return a.nome < b.nome;
}