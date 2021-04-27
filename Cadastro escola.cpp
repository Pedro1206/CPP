#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Turmas{
	int idturma;
	string locaturma;
};

struct Professores{
	int matricula_professor;
	string nome_professor;
};

struct Disciplinas{
	int id_disciplina;
	string nome_disciplina;
	int creditos_disciplina;
};

struct Alunos{
	int matricula_aluno;
	string nome_aluno;
};

struct Notas{
	int data_nota;
	int id_turma;
	int matricula_professor;
	int id_disciplina;
	int matricula_aluno;
	float av1;
	float av2;
	float av3;
	float avd;
};

struct Faltas{
	int id_datafalta;
	int id_turma;
	int	matricula_professor;
	int id_disciplina;
	int matricula_aluno;
	int faltas;
};

string continuar = "s";
int i;

int main(){
	
	string N;
	i = 0;
	Turmas a1[2];
	Professores a2[5];
	Disciplinas a3[100];
	Alunos a4[100];
	Notas a5[50];
	Faltas a6[50];
	int resultado;
	
	while(continuar != "n" and continuar != "nao" ){	
		
		cout<<"Escolha entre Turma, Professor, Disciplina, Aluno, Notas, Faltas: "; cin>>N;
		
		if (N == "Turma"){
			cout<<"Diga o ID: "; cin>>a1[i].idturma;
			cout<<"Diga a localizao: "; cin>>a1[i].locaturma;
			i++;
		}
		else if (N == "Professor"){
			cout<<"Diga a matricula: "; cin>> a2[i].matricula_professor;
			cout<<"Diga o nome: "; cin>>a2[i].nome_professor;
			i++;
		}
		else if (N == "Disciplina"){
			cout<<"Diga o ID: "; cin>>a3[i].id_disciplina;
			cout<<"Diga o nome: "; cin>>a3[i].nome_disciplina;
			cout<<"Diga os creditos: "; cin>>a3[i].creditos_disciplina;
			i++;
		}
		else if (N == "Aluno"){
			cout<<"Diga a matricula: "; cin>>a4[i].matricula_aluno;
			cout<<"Diga o nome: "; cin>>a4[i].nome_aluno;
			i++;
		}
		else if (N == "Notas"){
			cout<<"Diga a data: "; cin>>a5[i].data_nota;
			cout<<"Diga o ID da turma: "; cin>>a5[i].id_turma;
			cout<<"Diga a matricula do professor: "; cin>>a5[i].matricula_professor;
			cout<<"Diga o ID da disciplina: "; cin>>a5[i].id_disciplina;
			cout<<"Diga a matricula do aluno: "; cin>>a5[i].matricula_aluno;
			cout<<"diga a nota da AV1: "; cin>>a5[i].av1;
			cout<<"diga a nota da AV2: "; cin>>a5[i].av2;
			cout<<"diga a nota da AV3: "; cin>>a5[i].av3;
			cout<<"diga a nota da AVD: "; cin>>a5[i].avd;
			i++;
		}
		else if (N == "Faltas"){
			cout<<"Diga a data: "; cin>>a6[i].id_datafalta;
			cout<<"Diga o ID da turma: "; cin>>a6[i].id_turma;
			cout<<"Diga a matricula do professor: "; cin>>a6[i].matricula_professor;
			cout<<"Diga o ID da disciplina: "; cin>>a6[i].id_disciplina;
			cout<<"Diga a matricula do aluno: "; cin>>a6[i].matricula_aluno;
			cout<<"Diga a quantidade de faltas: "; cin>>a6[i].faltas;
			i++;
		}
		else{
			cout<<N<<" nao e valido."<<endl;
		}
	

					
	cout<<"Continuar?"; cin>>continuar;
	system("cls");


	}
	
	for(int j = 0; j < i; ++j){
		
		cout<<"Aluno: "<<a4[j].nome_aluno<<endl;
		cout<<"Matricula do Aluno: "<<a4[j].matricula_aluno<<endl;
		cout<<"Turma: "<<a1[j].idturma<<endl;
		cout<<"Localizaçao da turma: "<<a1[j].locaturma<<endl;
		cout<<"Professor: "<<a2[j].nome_professor<<endl;
		cout<<"Matricula do Professor: "<<a2[j].matricula_professor<<endl;
		cout<<"Disciplina: "<<a3[j].nome_disciplina<<endl;
		cout<<"ID da Disciplina: "<<a3[j].id_disciplina<<endl;
		cout<<"Creditos da Disciplina: "<<a3[j].creditos_disciplina<<endl;
		cout<<"Faltas: "<<a6[j].faltas<<endl;
		cout<<"Média: "<<a5[j].av1+a5[j].av2+a5[j].av3+a5[j].avd/3<<endl;

	}
}

