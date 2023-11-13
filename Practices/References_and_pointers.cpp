#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    string food = "Pizza";
    string &ref = food;         //reference declaration

    cout<<food<<"\n";
    cout<<ref<<"\n";

    //pointer
    string car = "BMW";
    string* ptr = &car;

    cout<<car<<"\n";
    cout<<ptr<<"\n";        //print address
    cout<<*ptr<<"\n";       //print value
    
    getch();
}