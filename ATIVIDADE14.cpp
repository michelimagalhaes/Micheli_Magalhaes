#include <iostream>

using namespace std;

/*

FA�A UM PROG. QUE RECEBA DOIS NUM E MOSTRE O MAIOR

*/

int main(){
	
	int n1, n2;
	
	cout<<"Informe o 1� n�mero: ";
	cin>>n1;
	
	cout<<"Informe o 2� n�mero: ";
	cin>>n2;
	
	if (n1>n2){
	
		cout<<"O n� "<<n1<< " � maior que "<<n2;
		
		}else{
			
			cout<<"O n� "<<n2<< " � maior que "<<n1<<"\n";
			
		} 
	
	system ("PAUSE");
	return 0;
}
