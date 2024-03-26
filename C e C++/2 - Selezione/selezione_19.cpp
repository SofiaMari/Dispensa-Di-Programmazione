#include <iostream>
using namespace std;

int main(){
	int num, den;
	
	cout<<"Inserisci il numeratore: ";
	cin>>num;
	cout<<"Inserisci il denominatore: ";
	cin>>den;
	
	if(num<den){
		cout<<"La frazione e' PROPRIA"<<endl;
	}else{
		if(num%den == 0){
			cout<<"La frazione e' APPARENTE"<<endl;
		}else{
			cout<<"La frazione e' IMPROPRIA"<<endl;
		}
	}
}
