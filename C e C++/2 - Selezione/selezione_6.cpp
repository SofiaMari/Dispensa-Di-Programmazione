#include <iostream>
using namespace std;

int main(){
	int eta;
	
	cout<<"Inserisci l'eta' della persona: ";
	cin>>eta;
	
	if(eta>=18){
		cout<<"La persona puo' votare"<<endl;
	}else{
		cout<<"La persona NON puo' votare"<<endl;
	}
}
