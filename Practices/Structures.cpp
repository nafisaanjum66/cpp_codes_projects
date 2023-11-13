#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    struct 
    {
        int id;
        string name;
        bool me;
    }info1,info2;

    cout<<"Enter your id: ";
    cin>>info1.id;
    //info.id=123;
    info1.name="nafisa anjum";
    info1.me=true;

    cout<<"First person information: \n";
    cout<<info1.id<<endl<<info1.name<<endl<<info1.me<<endl;

    cout<<"Enter your id: ";
    cin>>info2.id;
    //info.id=123;
    info2.name="Shefatul islam";
    info2.me=false;

    cout<<"Secoend person information: \n";
    cout<<info2.id<<endl<<info2.name<<endl<<info2.me;

    for(int i=1;i<=2;i++){
        if(i==1){
            info1.id=i;
            info1.name="nafisa anjum";
            info1.me=true;
        }
        if(i==2){
            info2.id=i;
            info2.name="Shefatul islam";
            info2.me=false;
        }
    }
    cout<<endl;
    cout<<"First person information: \n";
    cout<<info1.id<<endl<<info1.name<<endl<<info1.me;
    cout<<endl;
    cout<<"Secoend person information: \n";
    cout<<info2.id<<endl<<info2.name<<endl<<info2.me;
    
}