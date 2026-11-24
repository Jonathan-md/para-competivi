#include<iostream>
using namespace std;

int main(){
	int N, conta;
	
	conta=0;
	cin>>N;
	if(N%2==0){
		N=N/2;
		conta++;
	}
	else{
		N=N+1;
		conta++;
	}
	
	if(N>99){
		N=N/100;
		conta++;
	}
	else {
		if(100>N && 9<N){
		N=N/10;
		conta++;
		}	
	}
	
	if(N%3==0){
		N=N-1;
		conta++;
	}
	
	cout<<N<<" "<<conta;
	return 0;
}
