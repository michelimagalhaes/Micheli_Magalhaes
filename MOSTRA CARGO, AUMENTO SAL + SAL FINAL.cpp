#include <iostream>
#include <string.h> 
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cod;
	float sal, asal, salf;
	
	//vamos receber esses valores
	cout<<"Informe o código de sua função: \n";
	cin>>cod;
	
	cout<<"Informe o valor de seu salário: \n";
	cin>>sal;
	
	if(cod == 1){
		asal = sal * 0.5;
		salf = asal + sal;
		cout<<"Sua função é ESCRITURÁRIO. O valor do aumento foi R$"<<asal<<
		" e o salário final é R$"<<salf<<".\n";
	}else{
		if(cod == 2){
			asal = sal * 0.35;
			salf = asal + sal;
			cout<<"Sua função é SECRETÁRIO. O valor do aumento foi R$"<<asal<<
			" e o salário final é R$"<<salf<<".\n";
		}else{
			if(cod == 3){
				asal = sal * 0.2;
				salf = asal + sal;
				cout<<"Sua função é CAIXA. O valor do aumento foi R$"<<asal<<
				" e o salário final é R$"<<salf<<".\n";
			}else{
				if(cod == 4){
					asal = sal * 0.1;
					salf = asal + sal;
					cout<<"Sua função é GERENTE. O valor do aumento foi R$"<<asal<<
					" e o salário final é R$"<<salf<<".\n";
				}else{
					if(cod == 5){
						cout<<"Sua função é DIRETOR. Não possui aumento. Salário R$"<<sal<<" \n"; 
					}else{
						cout<<"ERRO, informe um código válido.\n";
					}
				}
			}
		}
	system("PAUSE");
	}
	
	return 0;
}
