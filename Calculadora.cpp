#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){
	
	float A;
	float B;
	string N;
	
	cout<<"Diga o primeiro valor:";
	cin>>A;
	cout<<"Diga o segundo valor:";
	cin>>B;
	cout<<"Diga a operacao entre soma, sub, divi, multi e potenci:";
	cin>>N;
	
	if (N == "soma"){
		cout<<"soma:"<<endl;
		cout<<A<<" + "<<B<<" = "<<A+B;
	}
	else if (N == "sub"){
		cout<<"sub:"<<endl;
		cout<<A<<" - "<<B<<" = "<<A-B;
	}
	else if (N == "divi"){
		cout<<"divi:"<<endl;
		cout<<A<<" / "<<B<<" = "<<A/B;
	}
	else if (N == "multi"){
		cout<<"multi:"<<endl;
		cout<<A<<" * "<<B<<" = "<<A*B;
	}
	else if (N == "potenci"){
		cout<<"potenci:"<<endl;
		cout<<A<<" ^ "<<B<<" = "<<pow(A, B);
	}
	else{
		cout<<"Esta nao e uma operacao valida";
	};
}
