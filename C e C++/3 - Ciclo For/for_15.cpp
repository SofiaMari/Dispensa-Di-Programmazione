#include <iostream>
using namespace std;

int main(){
	int p = 60;
	for(int i=1; i<=p; i++){
		for(int j=1; j<=p; j++){
			if(i*j==p){
				cout<<"("<<i<<", "<<j<<")"<<endl;
			}
		}
	}
}
