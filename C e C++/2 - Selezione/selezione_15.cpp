#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	if(n%3 == 0 || n%7 == 0){
		cout<<"Il numero e' divisibile o per 3 o per 7"<<endl;
	}else{
		cout<<"Il numero NON e' divisibile o per 3 o per 7"<<endl;
	}
}
