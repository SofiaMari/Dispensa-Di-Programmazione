#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	if(n%3 == 0 && n%5 != 0){
		cout<<"Il numero e' divisibile per 3, ma non per 5"<<endl;
	}else{
		cout<<"Il numero NON soddisfa la condizione"<<endl;
	}
}
