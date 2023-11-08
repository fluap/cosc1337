// Lecture 11/6/2023 Monday Slop notes.

#include<iostream>

using namespace std;
// This program uses the & operator to determine a
// variable's address.

int amount;
int main()
{ 
   amount = 500;
   int* amountPoint = &amount;

   cout << "Amount: " << amount << "\n";
   cout << "Amount Address: " << amountPoint << "\n";

   cout << "Amount Point with indirection operator *: " << *amountPoint << "\n";
}
