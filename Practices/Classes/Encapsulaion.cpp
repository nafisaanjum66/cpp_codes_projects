#include<iostream>
#include<conio.h>
using namespace std;

class encapsulationClass{
    private:
        string name;
        int id;

    public:
        void setName(string name){
            this->name = name;
        }
        void setId(int id){
            this->id=id;
        }
        string getName(){
            return name;
        }
        int getId(){
            return id;
        }
};

int main(){

    encapsulationClass obj;
    obj.setName("Nafisa");
    obj.setId(123);

    cout<<obj.getName()<<" "<<obj.getId()<<"\n";

    return 0;
}