#include<iostream>
#include<conio.h>
using namespace std;

class myCompany{        //class declaration
    public:
    int companyId;
    string companyName;
};

class classForMethod{
    public:
    void myMethod(){
        cout<<"Inside myMethod"<<endl;
    }
    void outsideMethod();

    void parameterizedMethod();
    
};

    void classForMethod::outsideMethod(){
        cout<<"Inside outside Method\n";
    }

    void classForMethod::parameterizedMethod(){
        cout<<"Inside Parameterized Method\n";
    }



int main(){
    myCompany myObject;

    myObject.companyId = 1;
    myObject.companyName ="Therap BD";

    cout<<"Company's ID: "<<myObject.companyId<<"\n";
    cout<<"Company Name: "<<myObject.companyName<<endl;

    classForMethod obj;
    obj.myMethod();
    obj.outsideMethod();
    obj.parameterizedMethod();

    return 0;
    //getch();
}