// Lecture 11/6/2023 Monday Slop notes.
// This program uses two functions that accept 
// addresses of variables as arguments.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getNumber(int *);
void doubleValue(int *);
double arrayStuff(double *sales, int size);
void totalSales(double*[], int);


int main()
{
   int number;
   
   // Call getNumber and pass the address of number
   getNumber(&number);
   
   // Call doubleValue and pass the address of number
   doubleValue(&number); 
   
   // Display the value in number
   cout << "That value doubled is " << number << endl;
   const int QUARTERS = 4;
   double sales[QUARTERS];
   
   getSales(sales, QUARTERS);
   cout << setprecision(2);
   cout << fixed << showpoint;
   cout << "The total sales for the year are $";
   cout << totalSales(sales, QUARTERS) << endl;
   
   return 0;
}

//*******************************************************
// Definition of getNumber. The parameter, input, is a  *
// pointer. This function asks the user for a number.   *
// The value entered is stored in the variable          *
// pointed to by input.                                 *
//*******************************************************




void getNumber(int* input) //Takes an address
{
   cout << "Enter an integer number: ";
   cin >> *input;          // dereferences and stores value.
   cout << input;          // Output's address.
   cout << *input;         // Dereferences and outputs value.
}

//*******************************************************
// Definition of doubleValue. The parameter, val, is a  *
// pointer. This function multiplies the variable       *
// pointed to by val by two.                            *
//*******************************************************

void doubleValue(int* val) //Takes an address
{
   *val *= 2;             // Dereferences and multiplies value by 2.
}

//******************************************************************
// Definition of getSales. This function uses a pointer to accept  *
// the address of an array of doubles. The number of elements      *
// in the array is passed as a separate integer parameter.         *
// The function asks the user to enter the sales figures for       *
// four quarters, then stores those figures in the array using     *
// subscript notation.                                             *
//******************************************************************
void getSales(double* array, int size)
{
   for (int count = 0; count < size; count++)
   {
     cout << "Enter the sales figure for quarter ";
     cout << (count + 1) << ": ";
     cin >> array[count];
   }
}

//****************************************************************
// Definition of totalSales. This function uses a pointer to     *
// accept the address of an array of doubles whose size          *
// is passed as a separate parameter. The function uses pointer  *
// notation to sum the elements of the array.                    *
//****************************************************************
double totalSales(double* array, int size)
{
   double sum = 0.0;
   
   for (int count = 0; count < size; count++)
   {
     sum += *array;
     array++;
   }
   return sum;
}