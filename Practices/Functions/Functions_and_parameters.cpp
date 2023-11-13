#include<iostream>
#include<conio.h>
using namespace std;

void cars(){
    cout<<"BMW\n";
}

void shadows(string BBB){       //Parameter
    cout<<BBB<<" Colour\n";
}

void dress(string material="Cotton"){       //default parameter
    cout<<material<<" Dress\n";
}

void employee(string ename, int eage){          //multiple parameter
    cout<<ename<<", "<<eage<<" years old\n";
}

int add(int a, int b){          //function has return value
    cout<<a+b<<endl;
}

void swapNumbers(int &x, int &y){       //pass by reference
    int z = x;
    x=y;
    y=z;
}

void passArray(string names[]){         //passing array as parameter
    for(int i = 0;i<=3;i++){
        cout<<"Name: "<<names[i]<<"\n";
    }
}

int sum(int k){
    if(k>0){
        return k+sum(k-1);      //recurssion function
    }else{
        return 0;
    }
}


int main(){
    cars();
    cout<<endl;

    shadows("Red");
    shadows("Green");
    shadows("Blue");

    cout<<endl;

    dress("Silk");
    dress();        //default parameter
    dress("Viscose");

    cout<<endl;

    employee("Nafisa",24);      //multiple parameter
    employee("Shefat",26);      //multiple parameter
    employee("Purba",17);       //multiple parameter

    cout<<endl;

    add(4,5);       //function has return value
    cout<<"After addition: ";
    add(7,8);

    //swapNumbers
    int firstNumber=13, lastNumber=15;

    swapNumbers(firstNumber,lastNumber);
    cout<<"Fisrt Number: "<<firstNumber<<"\nLast Number: "<<lastNumber<<"\n\n";

    string familyMembers[]={"Nafisa","Shefat","Anjum","Islam"};
    passArray(familyMembers);

    //recurssion function
    int result= sum(5);
    cout<<"Sum result is: "<<result<<endl;
    return 0;
}