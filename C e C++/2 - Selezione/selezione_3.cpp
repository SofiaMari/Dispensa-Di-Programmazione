#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	if(n<0){
		cout<<"Il valore assoluto di "<<n<<" e': "<<n*(-1);
		cout<<endl;
	}else{
		cout<<"Il valore assoluto di "<<n<<" e': "<<n;
		cout<<endl;
	}
}
