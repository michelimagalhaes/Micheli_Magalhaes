#include <iostream>
#include <string.h> //nova biblioteca

using namespace std;

int main (){
	
	float n1,n2, n3, mp;
	
	//vamos receber esses valores
	cout<<"Digite a nota do trabalho de laborat�rio: \n";
	cin>>n1;
	
	cout<<"Digite a nota da avalia��o semestral: \n";
	cin>>n2;
	
	cout<<"Digite a nota do exame final \n";
	cin>>n3;
	
	mp = ((n1*0,2) + (n2*03) + (n3*0,5)) / 3;
	
	if(mp>=8){
		cout<<"M�DIA "<<mp<<" - A\n";
	}else{
		if(mp>=7 && mp<8){
			cout<<"M�DIA "<<mp<<" - B\n";
			
		}else{
			if(mp >=6 && mp<7){
				cout<<"M�DIA "<<mp<<" - C\n";
				
			}else{
				if(mp >=5 && mp < 6){
					cout<<"M�DIA "<<mp<<" - D\n";
					
				}else{
					cout<<"M�DIA "<<mp<<" - E\n";
					
				}
			}
		}
	}
	
	system("PAUSE");
	return 0;
}
