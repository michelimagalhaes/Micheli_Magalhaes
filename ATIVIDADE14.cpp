#include <iostream>

using namespace std;

/*

FAÇA UM PROG. QUE RECEBA DOIS NUM E MOSTRE O MAIOR

*/

int main(){
	
	int n1, n2;
	
	cout<<"Informe o 1º número: ";
	cin>>n1;
	
	cout<<"Informe o 2º número: ";
	cin>>n2;
	
	if (n1>n2){
	
		cout<<"O nº "<<n1<< " é maior que "<<n2;
		
		}else{
			
			cout<<"O nº "<<n2<< " é maior que "<<n1<<"\n";
			
		} 
	
	system ("PAUSE");
	return 0;
}
