#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main(){
	
	float D;
	float V;
	float x;
	float y;
	string continuar = "s";

	while (continuar != "n" and continuar != "nao" ){
		
		cout<<"================CALCULA RPM================"<<endl;
		cout<<"Diga o diametro: "; cin>>D;
		cout<<"Diga o VC: "; cin>>V;
		
		x = D*3.14;
		y = V*1000;
		
		cout<<"RPM= "<<y/x<<endl;
		
		cout<<"Continuar?"; cin>>continuar;
		system("cls");
	}
}
