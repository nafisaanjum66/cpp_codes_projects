#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    try{
        int age=15;
        if(age>=18){
            cout<<"Access granted...\n";
        }else{
            //throw age;
            throw 404;
        }
    }
    // catch(int ageNum){
    //     cout<<"Access denied..\n";
    //     cout<<"Errror catched with: "<<ageNum;
    // }
    catch(int ageNum){
        cout<<"Access denied..\n";
        cout<<"Errror catched with: "<<ageNum;
    }
    // catch(...){
    //     cout<<"Access denied..\n";
    // }
    return 0;
}