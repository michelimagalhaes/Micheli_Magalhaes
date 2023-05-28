#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*
2) Tendo como dados de entrada o nome, a altura e o sexo de uma pessoa, 
construa um programa em C que calcule seu peso ideal, utilizando as seguintes fórmulas:
- Para homens: (72.7*h) - 58
- Para mulheres: (62.1*h) - 44.7 (h = altura)
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese"); 
	
	string nome,sexo;
	float h, pideal;
	
	cout<<"Digite seu nome: \n";
	cin>>nome;
	cout<<"Digite sua altura: \n";
	cin>>h;
	cout<<"Digite seu sexo (F ou M): \n";
	cin>>sexo;
	
	if(sexo == "m"){
		pideal = (72.7*h) - 58;
		cout<<"\n"<<nome<<" seu peso ideal é: "<<pideal<<".\n";
	} else{
		pideal = (62.1*h) - 44.7;
		cout<<"\n"<<nome<<" seu eu peso ideal é: "<<pideal<<".\n";
	}
	
	system("PAUSE");
	getchar();	
	return 0;
	
}
