#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2,n3,n4;
	
	//vamos receber esses valores
	cout<<"Digite um número qualquer: \n";
	cin>>n1;
	
	if(n1%2==0){
		cout<<n1<<" é um número par\n";
		}else if(n1%2!=0){
			cout<<n1<<" é um número ímpar\n";	
			}
 
	system("PAUSE");
	return (0);
}
