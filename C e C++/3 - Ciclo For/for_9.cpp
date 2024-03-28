#include <iostream>
using namespace std;

int main(){
	int n, div=0;
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		if(n%i==0){
			div++;
			cout<<i<<" ";
		}
	}
	cout<<endl;
	if(div==2){
		cout<<n<<" e' un numero primo"<<endl;
	}else{
		cout<<n<<" NON e' un numero primo"<<endl;
	}
}
