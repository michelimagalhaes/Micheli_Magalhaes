#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*

1) Faça um programa que receba dois números e mostre o maior

*/

int main(){
	
	setlocale(LC_ALL, "Portuguese"); 
	
	int n1, n2, area;
	
	cout<<"Digite um número: \n";
	cin>>n1;
	cout<<"Digite outro número: \n";
	cin>>n2;
	
	if(n1 > n2){
		cout<<"\nO maior número é: "<<n1<<".\n";
	} else{
		cout<<"\nO maior número é: "<<n2<<".\n";
	}
	
	system("PAUSE");
	getchar();	
	return 0;
	
}
