#include <iostream>
using namespace std;

int main(){
	int a, b;
	
	cout<<"Inserisci il primo numero: ";
	cin>>a;
	
	cout<<"Inserisci il secondo numero: ";
	cin>>b;
	
	if(a>b){
		cout<<"Il numero maggiore e' il primo inserito"<<endl;
		cout<<"Il suo valore e': "<<a<<endl;
	}else if(b>a){
		cout<<"Il numero maggiore e' il secondo inserito"<<endl;
		cout<<"Il suo valore e': "<<b<<endl;
	}else{ //ho gestito anche il caso a=b, si poteva evitare.
		cout<<"I due numeri sono uguali"<<endl;
	}
}
