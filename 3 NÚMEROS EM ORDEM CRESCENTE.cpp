#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*
4)	Fa�a um programa que receba tr�s n�meros e mostre-os em ordem crescente. 
Suponha que o usu�rio digitar� tr�s n�meros diferentes.
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2, n3;
	
	//vamos receber esses valores
	cout<<"Digite o 1� n�mero: \n";
	cin>>n1;
	
	cout<<"Digite o 2� n�mero: \n";
	cin>>n2;
	
	cout<<"Digite o 3� n�mero: \n";
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
