#include <iostream>
using namespace std;

int main(){
	int anno;
	
	cout<<"Inserisci l'anno: ";
	cin>>anno;
	
	if(anno%4==0 && anno%100!=0 || anno%400==0){
		cout<<"L'anno e' BISESTILE"<<endl;
	}else{
		cout<<"L'anno NON e' bisestile"<<endl;
	}
}
