#include <iostream>

using namespace std;

/*

Fa�a um exerc. que verifica se o n�mero � maior ou igual a 89

*/

int main(){
	
	int num;
	
	cout<<"Informe um n�mero qualquer para a verifica��o: \n" ;
	cin>>num;
	
	if (num > 89) {
		
		cout<<"O n�mero " <<num<< " � maior que 89.";
	} else {
		
		if (num == 89){
			
			cout<<"O n�mero "<<num<<" � 89 mesmo.";
			
		} else {
			
			cout<<"O n�mero "<<num<<" � menor que 89.";
			
		}
	}
	
	system("PAUSE");
	return 0;
}
