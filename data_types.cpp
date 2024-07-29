//Name - Devarthik Suresh
//PRN - 23070123045
//Aim - Checking Data types in C

#include <string>
#include <iostream>
using namespace std;


int main() {
    // Write C++ code here
   
    int num;
    float decimal;
    char mychar;
    bool myBoolVar;
    string mystringvar;
    double num2;
    
    cout<<"Enter integer:";
    cin>>num;
    cout<<"Size is "<<sizeof(num)<<"\n";
    cout<<"Enter float:";
    cin>>decimal;
    cout<<"Size is "<<sizeof(decimal)<<"\n";
    cout<<"Enter char :";
    cin>>mychar;
    cout<<"Size is "<<sizeof(mychar)<<"\n";
    cout<<"Enter string :";
    cin>>mystringvar;
    cout<<"Size is "<<sizeof(mystringvar)<<"\n";
    cout<<"Enter a double :";
    cin>>num2;
    cout<<"Size is "<<sizeof(num2)<<"\n";
    cout<<"Enter a boolean: ";
    cin>>myBoolVar;
    cout<<"Size is "<<sizeof(myBoolVar)<<"\n";
}

/*
Enter integer:3
Size is 4
Enter float:4.5
Size is 4
Enter char :p
Size is 1
Enter string :hello
Size is 32
Enter a double :5.66666666666666
Size is 8
Enter a boolean: 1
Size is 1
*/
