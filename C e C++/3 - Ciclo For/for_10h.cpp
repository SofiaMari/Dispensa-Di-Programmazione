#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Inserisci il numero di righe: ";
	cin>>n;
	cout<<endl;
	
	for(int i=n; i>0; i--){
		for(int j=i; j>0; j--){
			cout<<j;
		}
		cout<<endl;
	}
}
