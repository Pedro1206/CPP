#include<iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct info{
	int turma;
	int matri;
	string nomealuno;
	string nomeprofessor;
	int notas[3];
	int faltas;
};

string continuar = "s";
int i;

int main(){

	i = 0;
	info aluno[100];
	
	while(continuar != "n" and continuar != "nao" ){

		cout<<"Nome Aluno= "; cin>>aluno[i].nomealuno;
		cout<<"Turma= "; cin>>aluno[i].turma;
		cout<<"Matricula= "; cin>>aluno[i].matri;
		cout<<"Nome Professor= "; cin>>aluno[i].nomeprofessor;
		cout<<"Notas= "; cin>>aluno[i].notas[0];
		cout<<"Notas= "; cin>>aluno[i].notas[1];
		cout<<"Notas= "; cin>>aluno[i].notas[2];
		cout<<"Faltas= "; cin>>aluno[i].faltas;
		i++;
					
		cout<<"Continuar?"; cin>>continuar;
		system("cls");
	}

	for(int j = 0; j < i; ++j){
		
		cout<<"Nome Aluno= "; cout<<aluno[j].nomealuno<<endl;
		cout<<"Turma= "; cout<<aluno[j].turma<<endl;
        cout<<"Matricula= "; cout<<aluno[j].matri<<endl;  
	    cout<<"Nome Professor= "; cout<<aluno[j].nomeprofessor<<endl;
        cout<<"Notas= "; cout<<aluno[j].notas[0]<<endl;
        cout<<"Notas= "; cout<<aluno[j].notas[1]<<endl;
        cout<<"Notas= "; cout<<aluno[j].notas[2]<<endl;
        cout<<"Faltas= "; cout<<aluno[j].faltas<<endl<<endl;
        
	}
	
}

