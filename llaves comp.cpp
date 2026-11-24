#include<iostream>
using namespace std;

int main(){
    int M,N,x;
    int puerta[100001]={0};

    cin>>M;

    for(int i=1;i<=M;i++){
        cin>>x;
        puerta[x]=i;
    }
    cin>>N;

    for(int i=0;i<N;i++){
        cin>>x;
        cout<<puerta[x]<<" ";
    }
    return 0;
}

