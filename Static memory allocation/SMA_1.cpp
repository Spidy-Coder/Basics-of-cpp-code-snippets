#include <iostream>
using namespace std;
int main() {
    int a[100];
    const int size = 5;
    int b[size];
    return 0;
}

//When the amount of memory to be allocated is known beforehand,
//i.e., it is known as Static Memory Allocation at the time of 
// compilation. Once the memory is allocated statically, it cannot
  //be deallocated during the program run.
   //So it leads to wastage of storage space.