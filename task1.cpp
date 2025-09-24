// Roll no:2024-csr-001
// Name: Noor Fatima
// Task1-- Pointer-to-Pointer
#include<iostream>  //includes input output library
using namespace std;
int main(){
    int x=42;  //creates an integer variable x with value 42 stored in it
    int *p = &x;  //p is a pointer storing the address of x
    int**q= &p;  //q is apointer-to-pointer storing address of p pointer
    //print values step by step
    cout<<"x: "<<x<<endl;  //prints 42;
    cout<<"*p: "<<*p<<endl;  //*p = value at address of x 42;
    
    //This program demonstrates how a variable’s value can be accessed directly, through a pointer, and through a pointer-to-pointer.