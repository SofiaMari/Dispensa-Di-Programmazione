#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Inserisci il lato del quadrato: ";
	cin>>n;
	cout<<endl;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
