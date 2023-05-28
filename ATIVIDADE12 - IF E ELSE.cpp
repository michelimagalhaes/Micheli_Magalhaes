#include <iostream>

using namespace std;

/*

Faça um exerc. que verifica se o número é maior ou igual a 89

*/

int main(){
	
	int num;
	
	cout<<"Informe um número qualquer para a verificação: \n" ;
	cin>>num;
	
	if (num > 89) {
		
		cout<<"O número " <<num<< " é maior que 89.";
	} else {
		
		if (num == 89){
			
			cout<<"O número "<<num<<" é 89 mesmo.";
			
		} else {
			
			cout<<"O número "<<num<<" é menor que 89.";
			
		}
	}
	
	system("PAUSE");
	return 0;
}
