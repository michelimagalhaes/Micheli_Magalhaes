#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float sal, aum;
	
	//vamos receber esses valores
	cout<<"Infrome seu salário: ";
	cin>>sal;
	
	
			if(sal < 500){
				aum = (sal * 1.05) + 150;
				cout<<"Salário atual R$"<<aum<<".\n";
			}else if(sal >= 500 && sal < 600){
				aum = (sal * 1.12) + 150;
				cout<<"Salário atual R$"<<aum<<".\n";
			}else if(sal >= 600 && sal < 1200){
				aum = (sal * 1.12) + 100;
				cout<<"Salário atual R$"<<aum<<".\n";
			}else{
				aum = sal + 100;
				cout<<"Salário atual R$"<<aum<<" - Sem Bonificação\n";
			}
			
			
	system("PAUSE");
	return (0);
}
