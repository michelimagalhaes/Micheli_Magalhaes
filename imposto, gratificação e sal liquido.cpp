#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float precoa, npreco;
    int vm;

    cout << "Informe o atual preço do produto: R$ ";
    cin >> precoa;

    cout << "Informe a venda média mensal do produto: ";
    cin >> vm;

    if (vm < 500 && precoa < 30.0) {
        npreco = precoa * 1.1; 
    	} else if (vm < 500 && precoa >= 30.0 && precoa < 80.0) {
        	npreco = precoa * 1.15;
    		} else if (vm < 500 && precoa >= 80.0) {
        		npreco = precoa;
    			} else if (vm >= 500 && vm < 1200 && precoa < 30.0) {
        			npreco = precoa * 1.1; 
    				} else if (vm >= 500 && vm < 1200 && precoa >= 30.0 && precoa < 80.0) {
        				npreco = precoa * 1.15; 
    					} else if (vm >= 500 && vm < 1200 && precoa >= 80.0) {
        					npreco = precoa; 
    						} else if (vm >= 1200 && precoa < 30.0) {
       	 						npreco = precoa * 1.1; 
    							} else if (vm >= 1200 && precoa >= 30.0 && precoa < 80.0) {
        							npreco = precoa * 1.15; 
    								} else if (vm >= 1200 && precoa >= 80.0) {
        								npreco = precoa;  
    									}

    if (npreco != precoa) {
        npreco *= 0.8;  
    }

    cout<<"Novo preço do produto R$ "<<npreco<<"\n";

	
	system("PAUSE");
	return (0);
}
