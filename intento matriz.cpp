#include<iostream>
using namespace std;

int main(){
    int n, m;
    int A[20][20];

    cin>>n>>m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>A[i][j];
        }
    }

	cout<<endl;
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            cout<<A[i][j];

            if(i<n-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
