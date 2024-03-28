#include <iostream>
using namespace std;

int main(){
	int n, sommaDispari, cont=0;
	
	cout<<"Inserisci N: ";
	cin>>n;
	cout<<endl;
	
	for(int i=1; i<=n*2; i++){
		if(i%2!=0){
			sommaDispari+=i;
		}
		
	}
	
	cout<<endl;
	cout<<"La somma dei primi N numeri dispari e': "<<sommaDispari<<endl;
	if(sommaDispari == n*n){
		cout<<"Il quadrato di N e' uguale alla somma dei primi N numeri dispari"<<endl;
	}else{
		cout<<"Il quadrato di N NON e' uguale alla somma dei primi N numeri dispari"<<endl;
	}
}
