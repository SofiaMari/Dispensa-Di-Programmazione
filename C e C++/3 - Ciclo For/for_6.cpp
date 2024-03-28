#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	cout<<"Tabellina di "<<n<<endl;
	for(int i=0; i<=10; i++){
		cout<<i*n<<" ";
	}
}
