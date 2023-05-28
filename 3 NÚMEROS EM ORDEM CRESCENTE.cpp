#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*
4)	Faça um programa que receba três números e mostre-os em ordem crescente. 
Suponha que o usuário digitará três números diferentes.
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2, n3;
	
	//vamos receber esses valores
	cout<<"Digite o 1º número: \n";
	cin>>n1;
	
	cout<<"Digite o 2º número: \n";
	cin>>n2;
	
	cout<<"Digite o 3º número: \n";
	cin>>n3;
	
	if(n1<n2 && n2<n3){
		cout<<"Ordem crescente: "<<n1<<", "<<n2<<", "<<n3<<".\n";
	}else{
		if(n2<n1 && n1<n3){
			cout<<"Ordem crescente: "<<n2<<", "<<n1<<", "<<n3<<".\n";	
		}else{
			if(n3<n1 && n1<n2){
				cout<<"Ordem crescente: "<<n3<<", "<<n1<<", "<<n2<<".\n";
			}else{
				if(n3<n2 && n2<n1){
					cout<<"Ordem crescente: "<<n3<<", "<<n2<<", "<<n1<<".\n";
				}
			}
		}
	}
	
	
	system("PAUSE");
	return (0);
}
