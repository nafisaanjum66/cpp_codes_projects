#include<iostream>
#include<conio.h>
using namespace std;

class myClass{
    public:
    myClass(){                  //empty constructor
        cout<<"purba\n";
    }
};

class Busno{
    public:             //Public access specifire
    string name;
    string age;
    int dob;

    //private:            //private access specifire
    string className;
    string section;
    int roll;

    Busno(string x, string y, int z){             //parameterized constructr
        name=x;
        age=y;
        dob=z;
    }
    Busno(string a, int b, string c);
};

Busno::Busno(string a, int b, string c){
    className=a;
    roll=b;
    section=c;
}

int main(){
    myClass obj;

    Busno obj1("Natuburo", "17+", 2007);        //Allowed (public)
    Busno obj2("Eight", 12, "A");               //Not allowed (Private)

    cout<<obj1.name<<" "<<obj1.age<<" "<<obj1.dob<<"\n";
    cout<<obj2.className<<" "<<obj2.roll<<" "<<obj2.section<<"\n";

    return 0;
}