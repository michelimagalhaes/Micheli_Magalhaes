#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2,n3,n4;
	
	//vamos receber esses valores
	cout<<"Digite o 1� n�mero da sequ�ncia de 3: \n";
	cin>>n1;
	n2 = n1+1;
	n3 = n2+1;
	cout<<"A sequ�ncia de n�meros � "<<n1<<", "<<n2<<", "<<n3<<".\n";
	cout<<"Digite um 4� n�mero qualquer: \n";
	cin>>n4;
	
	if(n4<n1){
		cout<<"Ordem decrescente: "<<n3<<", "<<n2<<", "<<n1<<", "<<n4<<".\n";
		}else if(n4>3){
			cout<<"Ordem decrescente: "<<n4<<", "<<n3<<", "<<n2<<", "<<n1<<".\n";
			}else if(n4 == n1 || n4 == n2 || n4 == n3){
				cout<<"ERRO, digite um n�mero que n�o perten�a a seque�ncia.\n";
			} 
	
	system("PAUSE");
	return (0);
}
