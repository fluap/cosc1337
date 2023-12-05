
// This program demonstrates a function that returns
// a pointer.
#include <iostream>
#include <string>
#include <memory>
using namespace std;

// Function prototype
unique_ptr<int> uptr1(new int);

void print_uptr(unique_ptr<int>&);

int main()
{  
   *uptr1 = 10;

   print_uptr(uptr1);
}

void print_uptr(unique_ptr<int>& uptr_param){
   cout << *uptr_param;
}