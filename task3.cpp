// Roll no:2024-csr-001
// Name: Noor Fatima
// Task3 -- Array of pointers (names)
#include <iostream>
using namespace std;

int main() {
    //Array of pointers to string literals
    const char* names[] = {"Hamza", "Ali", "Noor", "Sara"};
    //Find how many names are in array
    int n = sizeof(names) / sizeof(names[0]);
    //Print each loop
    for (int i = 0; i < n; i++) {
        cout << "Names[" << i << "] --> " << names[i] << endl;
    }
    //Change 3rd name "Noor" to "Fatima"
    const char* replacement = "Fatima";
    names[2] = replacement;   // change Noor -> Fatima
    cout << "After change names[2] --> " << names[2] << endl;
     return 0;
}
// This program stores names in an array of pointers, prints them, and then updates one name (“Noor” → “Fatima”).
