// Roll no:2024-csr-001
// Name: Noor Fatima
// Task6 -- Memory Leak (Bad v/s Good)
#include<iostream>
using namespace std;
//Function that leaks memory
void leaky(){
        int*data = new int[100];  //Allocate memory
        //Forgot to free memory -->leak
    }
    //Function that frees memory properly
    void fixed(){
        int*data = new int[100];  //Allocate memory
        delete[] data; //Free memory


    }
int main(){
    //Call leaky function many times --> memory wasted
    for(int i=0; i<10000; i++){
        leaky();
    }
    cout<<"Leaky loop done. Memory wasted!"<<endl;
    //Call fixed function many times --> memory properly freed
    for(int i=0; i<10000; i++){
        fixed();
    }
    cout<<"Fixed loop done. No Leaks!"<<endl;
    return 0;
}

// This program contrasts a bad function that causes memory leaks with a good function that frees memory properly when called repeatedly.