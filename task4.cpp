// Roll no:2024-csr-001
// Name: Noor Fatima
// Task4 -- Dynamic Memory + Average
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"How many scores?"<<" ";  //Asks user for number of scores
    cin>>n;  //input n from keyboard
    //create an array of integers at runtime using new keyword
    int*scores = new int[n];
    cout<<"Enter"<<" "<<n<<" scores:\n";  //Input scores
    for(int i=0; i<n; i++){
        cin>>scores[i]; //stores each score in array
    }
    //Calculate sum of scores
    long long sum=0;
    for(int i=0; i<n; i++){
        sum+=scores[i];
    }
    //Prints average
    cout<<"Average: "<<(double)sum/n<<endl;
    // Free the memory
    delete[] scores;  //frees array
    scores = nullptr; // set pointer to null for safety
    return 0;
}

// This program takes scores from the user using dynamic memory, then calculates and prints their average before freeing the memory.