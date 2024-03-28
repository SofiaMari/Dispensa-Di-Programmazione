#include <iostream>
using namespace std;

int main(){
	int n, fatt=1;
	cout<<"Inserisci un numero POSITIVO: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		fatt = fatt*i;
	}
	
	cout<<"Il fattoriale di "<<n<<" e': "<<fatt<<endl;	
}
