#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*

1) Fa�a um programa que receba dois n�meros e mostre o maior

*/

int main(){
	
	setlocale(LC_ALL, "Portuguese"); 
	
	int n1, n2, area;
	
	cout<<"Digite um n�mero: \n";
	cin>>n1;
	cout<<"Digite outro n�mero: \n";
	cin>>n2;
	
	if(n1 > n2){
		cout<<"\nO maior n�mero �: "<<n1<<".\n";
	} else{
		cout<<"\nO maior n�mero �: "<<n2<<".\n";
	}
	
	system("PAUSE");
	getchar();	
	return 0;
	
}
