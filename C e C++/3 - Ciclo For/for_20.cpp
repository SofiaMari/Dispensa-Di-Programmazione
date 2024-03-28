#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int e, contT=0, contC=0;
	srand(time(NULL));
	
	cout<<"ESTRAZIONI: "<<endl;
	cout<<endl;
	for(int i=0; i<100; i++){
		//formula: rand()%(max-min+1)+min;
		e = rand()%(1-0+1)+0;
		if(e==0){
			cout<<"Estrazione "<<i+1<<": testa"<<endl;
			contT++;
		}else{
			cout<<"Estrazione "<<i+1<<": croce"<<endl;
			contC++;
		}
	}
	cout<<"Testa e' stata estratta "<<contT<<" volte"<<endl;
	cout<<"Croce e' stata estratta "<<contC<<" volte"<<endl;
}
