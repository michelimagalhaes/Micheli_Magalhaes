#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float sal, aum;
	
	//vamos receber esses valores
	cout<<"Infrome seu sal�rio: ";
	cin>>sal;
	
	
			if(sal < 500){
				aum = (sal * 1.05) + 150;
				cout<<"Sal�rio atual R$"<<aum<<".\n";
			}else if(sal >= 500 && sal < 600){
				aum = (sal * 1.12) + 150;
				cout<<"Sal�rio atual R$"<<aum<<".\n";
			}else if(sal >= 600 && sal < 1200){
				aum = (sal * 1.12) + 100;
				cout<<"Sal�rio atual R$"<<aum<<".\n";
			}else{
				aum = sal + 100;
				cout<<"Sal�rio atual R$"<<aum<<" - Sem Bonifica��o\n";
			}
			
			
	system("PAUSE");
	return (0);
}
