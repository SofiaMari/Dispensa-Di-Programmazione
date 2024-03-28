#include <iostream>
using namespace std;

int main(){
	int n, c1, c2, cont=0;
	
	cout<<"Quante coppie vuoi inserire? ";
	cin>>n;
	
	cout<<endl;
	
	for(int i=0; i<n; i++){
		cout<<"Inserisci il primo elemento della coppia: ";
		cin>>c1;
		cout<<"Inserisci il secondo elemento della coppia: ";
		cin>>c2;
		cout<<"Coppia ("<<c1<<", "<<c2<<")"<<endl;
		cout<<endl;
		if(c1==-c2){
			cont++;
		}
	}
	
	cout<<endl;
	cout<<"Le coppie con valori opposti sono: "<<cont<<endl;
}
