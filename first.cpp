#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    cout<<"Enter your number: ";
    int n;
    cin>>n;
    

    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=i; j++){
            cout<<"*  ";
        }
        cout<<"\n";
    }

    cout<<"Enter your number for 2nd pyramid: ";
    int x;
    cin>>x;

    for(int i=1, k=0; i<=x; ++i,k=0){
        for(int j=1; j<=x-i; ++j){
            cout<<"  ";
        }

        while(k != 2*i-1){
            cout<<"* ";
            ++k;
        }
        cout<<endl;
        //cout<<"\n";
    }

    getch();

}