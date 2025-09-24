// Roll no:2024-csr-001
// Name: Noor Fatima
// Task2-- Dereferencing to change a value
#include<iostream>
using namespace std;
int main(){
    int a=20;  //create variable with value 20
    int *p = &a;  //pointer p stores address of a
    cout<<"a before: "<<a<<endl;  //prints 20
    *p=*p+5;  //derefreference p changes value of a to 25
    cout<<"a after: "<<a<<endl;  //prints 25
} 

// This program shows how a pointer can be used to change the value of a variable (20 → 25) using dereferencing.