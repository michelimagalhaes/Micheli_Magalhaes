#include <iostream>
#include <string.h> //nova biblioteca

using namespace std;

int main (){
	
	float n1,n2, n3, ma;
	
	//vamos receber esses valores
	cout<<"Digite a 1ª nota: \n";
	cin>>n1;
	
	cout<<"Digite a 1ª nota: \n";
	cin>>n2;
	
	cout<<"Digite a 1ª nota: \n";
	cin>>n2;
	
	ma = (n1 + n2 + n3) / 3;
	
	if(ma <= 3){
		cout<<"Aluno REPROVADO, nota igual a"<<ma<<" \n";
	}else{
		if((ma <= 6) && (ma > 3)){
			cout<<"Aluno de EXAME, nota igual a"<<ma<<" \n";
		}else{
			cout<<"Aluno APROVADOO!!, nota igual a"<<ma<<" \n";
		}
	}
	
	system("PAUSE");
	return 0;
}
