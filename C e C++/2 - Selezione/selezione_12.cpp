#include <iostream>
using namespace std;

int main(){
	int l1, l2, l3;
	
	cout<<"Inserisci il primo lato: ";
	cin>>l1;
	cout<<"Inserisci il secondo lato: ";
	cin>>l2;
	cout<<"Inserisci il terzo lato: ";
	cin>>l3;
	
	if(l1 == l2 && l2 == l3 && l1 == l3){
		cout<<"Il triangolo e' EQUILATERO"<<endl;
	}else if(l1 != l2 && l2 != l3 && l1 != l3){
		cout<<"Il triangolo e' SCALENO"<<endl;
	}else if(l1 == l2 || l1 == l3 || l3 == l2){
		cout<<"Il triangolo e' ISOSCELE"<<endl;
	}
}
