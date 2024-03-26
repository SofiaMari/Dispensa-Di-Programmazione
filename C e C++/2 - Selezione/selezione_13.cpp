#include <iostream>
using namespace std;

int main(){
	int a1, a2, a3;
	
	cout<<"Inserisci il primo angolo: ";
	cin>>a1;
	cout<<"Inserisci il secondo angolo: ";
	cin>>a2;
	cout<<"Inserisci il terzo angolo: ";
	cin>>a3;
	
	if(a1 == 90 || a2 == 90 || a3 == 90){
		cout<<"Il triangolo e' RETTANGOLO"<<endl;
	}else{
		cout<<"Il triangolo NON e' RETTANGOLO"<<endl;
	}
	cout<<endl;
	cout<<"SECONDO MODO: "<<endl;
	//per essere precisi, potremmo dire che SOLO un angolo
	//può essere di 90°. Si tralascia il fatto che la somma
	//deve essere di 180°. 
	if((a1 == 90 && a2!=90 && a3!=90)
		|| (a2 == 90 && a1!=90 && a3!=90)
		|| (a3 == 90 && a2!=90 && a1!=90)){
		cout<<"Il triangolo e' RETTANGOLO"<<endl;
	}else{
		cout<<"Il triangolo NON e' RETTANGOLO"<<endl;
	}
}
