#include <iostream>
using namespace std;

int main(){
	int a, n;
	
	cout<<"Inserisci il primo numero: ";
	cin>>n;
	cout<<"Inserisci un possibile divisore: ";
	cin>>a;
	
	if(n%a==0){
		cout<<a<<" e' un dividore per "<<n<<endl;
	}else{
		cout<<a<<" NON e' un divisore per "<<n<<endl;
	}
}
