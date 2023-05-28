#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float salm, vhora, sal, hextra, salb, sall;
	int numh, dep, hextras;
	
	//vamos receber esses valores
	cout<<"Informe o valor do sal�rio m�nimo: ";
	cin>>salm;
	cout<<"Informe o n�mero de horas trabalhadas: ";
	cin>>numh;
	cout<<"Informe a quantidade de dependentes: ";
	cin>>dep;
	cout<<"Informe o n�mero de horas extras: ";
	cin>>hextras;
	
	vhora = salm / 5;
	sal = vhora * numh;
	hextra = vhora * 1.5;
	salb = sal + (dep * 32) + (hextras * hextra);
	
	if(salb < 200){
		cout<<"Isento - Sal�rio final R$"<<salb + 100<<".\n";
	}else if(salb >= 200 && salb < 350){
		sall = (salb * 1.1) + 100;
		cout<<"Sal�rio final R$"<<sall<<".\n";
	}else if(salb >= 350 && salb < 500){
		sall = (salb * 1.1) + 50;
		cout<<"Sal�rio final R$"<<sall<<".\n";
	}else{
		sall = (salb * 1.2) + 50;
		cout<<"Sal�rio final R$"<<sall<<".\n";
	}
	
	
	
	system("PAUSE");
	return (0);
}
