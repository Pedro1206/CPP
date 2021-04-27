#include<iostream>
#include <string>
using namespace std;

struct cadastro{
	int codigo;
	char nome[30];
}cliente;

int main(){
	
	cout<<"Diga o codigo do cliente= ";cin>>cliente.codigo;
	cout<<"Diga o nome do cliente= "; cin>>cliente.nome;
	
	
	cout<<"Cliente= "<<cliente.nome<<endl;
	cout<<"Codigo= "<<cliente.codigo<<endl;
	
	
}
