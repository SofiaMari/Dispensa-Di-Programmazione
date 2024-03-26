#include <iostream>
using namespace std;

int main(){
	int valore_vendite;
	int bonus;
	
	cout<<"Inserisci il valore delle vendite: ";
	cin>>valore_vendite;
	
	if(valore_vendite < 2000){
		cout<<"Non hai diritto a nessun bonus"<<endl;
	}else if(valore_vendite>=2000 && valore_vendite<=5000){
		bonus = valore_vendite*10/100;
		cout<<"Il bonus e' di: "<<bonus<<" euro"<<endl;
	}else if(valore_vendite > 5000){
		bonus = valore_vendite*20/100;
		cout<<"Il bonus e' di: "<<bonus<<" euro"<<endl;
	}
}
