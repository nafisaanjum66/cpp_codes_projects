#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream myFile("filename.txt");

    myFile<<"Files are writing heree....\n";

    myFile.close();

    string myText;

    ifstream readMyFile("filename.txt");

    while(getline(readMyFile,myText)){
        cout<<myText;
    }

    readMyFile.close();
}