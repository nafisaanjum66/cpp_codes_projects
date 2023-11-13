#include<iostream>
#include<conio.h>
using namespace std;

class Animal{
    public:
    //string name;

    void animalSound(){
        cout<<"Animals bark here.....\n\n";
    }
};

class Dog: public Animal{
    public:
    
    void animalSound(){
        cout<<"Dog's Barking...\n";
    }
};
class Goat: public Animal{
    public:

    
    void animalSound(){
        cout<<"Goat's Barking...\n";
    }
};

int main(){
    Dog dg;
    dg.animalSound();
    Goat gt;
    gt.animalSound();

    return 0;
}