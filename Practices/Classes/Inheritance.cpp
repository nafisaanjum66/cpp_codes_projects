#include<iostream>
#include<conio.h>
using namespace std;

class Vehicle{
    public:
    string brand;

    //void Vehicle(){};

    void door(){
        cout<<"Four doors\n";
    }
};

class Car: public Vehicle{
    public:
    string model="BMW XZ\n\n";
};

//multi-level inheritance
class MyClass{

    public:
    void myNature(){
        cout<<"Content in my nature of parent..\n\n";
    }
};

class childClass: public MyClass{};
class gandChildClass:public childClass{};
//multi-level inheritance

//multiple inheritance
class laptop{
    public:
    void color(){
        cout<<"red\n";
    }
};
class model{
    public:
    void size(){
        cout<<"Inside size...\n";
    }
};
class childLaptop: public model,public laptop{
    public:
    void funcChild(){
        cout<<"Inside child laptop...\n";
    }
    
}
//multiple inheritance


int main(){
    Car myobj;
    myobj.door();

    cout<<myobj.brand+" "+myobj.model;

    //multiple inheritance
    gandChildClass obj;
    obj.myNature();

    //multiple inheritance
    childLaptop cl;
    cl.color();
    cl.size();
    cl.funcChild();
    return 0;
}