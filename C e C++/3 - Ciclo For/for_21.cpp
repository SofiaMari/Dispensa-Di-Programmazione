#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int n, e;
	srand(time(NULL));
	
	cout<<"Inserisci un numero tra 1 e 90: ";
	cin>>n;
	cout<<endl;
	for(int i=0; i<5; i++){
		//formula: rand()%(max-min+1)+min;
		e = rand()%(90-1+1)+1;
		if(e==n){
			cout<<"Estratto: "<<e<<" --- HAI VINTO!"<<endl;
			break;
		}else{
			cout<<"Estratto: "<<e<<endl;
		}
	}
}
