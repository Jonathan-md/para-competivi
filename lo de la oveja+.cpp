#include<iostream>
using namespace std;

int main(){
    int T,N[10000];

    cin>>T;

    for(int i=0;i<T;i++){
        cin>>N[i];
    }

    for(int i=0;i<T;i++){

        if(N[i]==0)
            cout<<"Case #"<<i+1<<": INSOMNIA"<<endl;
        else{
            int digitos[10]={0};
            long long multiplicador=1;
            int contador=0;
            long long num,aux;

            while(contador<10){
                num=N[i]*multiplicador;
                aux=num;

                while(aux>0){
                    int dig=aux%10;

                    if(digitos[dig]==0){
                        digitos[dig]=1;
                        contador++;
                    }

                    aux=aux/10;
                }

                multiplicador++;
            }

            cout<<"Case #"<<i+1<<": "<<num<<endl;
        }
    }

    return 0;
}

