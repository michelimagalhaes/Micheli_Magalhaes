#include <iostream>
#include <string.h> 
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cod;
	float sal, asal, salf;
	
	//vamos receber esses valores
	cout<<"Informe o c�digo de sua fun��o: \n";
	cin>>cod;
	
	cout<<"Informe o valor de seu sal�rio: \n";
	cin>>sal;
	
	if(cod == 1){
		asal = sal * 0.5;
		salf = asal + sal;
		cout<<"Sua fun��o � ESCRITUR�RIO. O valor do aumento foi R$"<<asal<<
		" e o sal�rio final � R$"<<salf<<".\n";
	}else{
		if(cod == 2){
			asal = sal * 0.35;
			salf = asal + sal;
			cout<<"Sua fun��o � SECRET�RIO. O valor do aumento foi R$"<<asal<<
			" e o sal�rio final � R$"<<salf<<".\n";
		}else{
			if(cod == 3){
				asal = sal * 0.2;
				salf = asal + sal;
				cout<<"Sua fun��o � CAIXA. O valor do aumento foi R$"<<asal<<
				" e o sal�rio final � R$"<<salf<<".\n";
			}else{
				if(cod == 4){
					asal = sal * 0.1;
					salf = asal + sal;
					cout<<"Sua fun��o � GERENTE. O valor do aumento foi R$"<<asal<<
					" e o sal�rio final � R$"<<salf<<".\n";
				}else{
					if(cod == 5){
						cout<<"Sua fun��o � DIRETOR. N�o possui aumento. Sal�rio R$"<<sal<<" \n"; 
					}else{
						cout<<"ERRO, informe um c�digo v�lido.\n";
					}
				}
			}
		}
	system("PAUSE");
	}
	
	return 0;
}
