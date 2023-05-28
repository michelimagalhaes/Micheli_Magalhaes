#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float sal, imp;
	
	//vamos receber esses valores
	cout<<"Digite o n�mero da condi��o desejada: \n 1 - Imposto\n 2 - Novo sal�rio\n 3 - Classifica��o\n";
	cout<<"Op��o: ";
	cin>>i;
 	cout<<"Informe seu sal�rio: \n";
	cin>>sal;
	
	
	switch(i){
		case 1:
			if(sal < 500){
				imp = sal * 0.5;
				cout<<"O valor do imposto sobre seu sal�rio de R$"<<sal<<" foi R$"<<imp<<".\n";
			}else if(sal >= 500 && sal <= 850){
				imp = sal * 0.1;
				cout<<"O valor do imposto sobre seu sal�rio de R$"<<sal<<" foi R$"<<imp<<".\n";
			}else{
				imp = sal * 0.15;
				cout<<"O valor do imposto sobre seu sal�rio de R$"<<sal<<" foi R$"<<imp<<".\n";
			}
			
		break;	
		
		case 2:
			if(sal > 1500){
				cout<<"Seu aumento foi de 25,00 - Sal�rio final "<<sal+25<<".\n";
			}else if(sal >= 750 && sal <= 1500){
				cout<<"Seu aumento foi de 50,00 - Sal�rio final "<<sal+50<<".\n";
			}else if(sal >= 450 &&sal < 750){
				cout<<"Seu aumento foi de 75,00 - Sal�rio final "<<sal+75<<".\n";
			}else{
				cout<<"Seu aumento foi de 100,00 - Sal�rio final "<<sal+100<<".\n";
			}	
			
		break;
		
		case 3:
			if(sal <= 700){
				cout<<"Mal remunerado.\n";
			}else{
				cout<<"Bem remunerado.\n";
			}
		
		break;
	}
	
	system("PAUSE");
	return (0);
}
