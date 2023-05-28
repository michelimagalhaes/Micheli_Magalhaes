#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2,n3,n4;
	
	//vamos receber esses valores
	cout<<"Digite o 1º número da sequência de 3: \n";
	cin>>n1;
	n2 = n1+1;
	n3 = n2+1;
	cout<<"A sequência de números é "<<n1<<", "<<n2<<", "<<n3<<".\n";
	cout<<"Digite um 4º número qualquer: \n";
	cin>>n4;
	
	if(n4<n1){
		cout<<"Ordem decrescente: "<<n3<<", "<<n2<<", "<<n1<<", "<<n4<<".\n";
		}else if(n4>3){
			cout<<"Ordem decrescente: "<<n4<<", "<<n3<<", "<<n2<<", "<<n1<<".\n";
			}else if(n4 == n1 || n4 == n2 || n4 == n3){
				cout<<"ERRO, digite um número que não pertença a sequeência.\n";
			} 
	
	system("PAUSE");
	return (0);
}
