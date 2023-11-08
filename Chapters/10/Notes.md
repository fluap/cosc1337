# Pointers in c++

### Tldr; 
Every variable is assigned a memory location whose address can be retrieved using the address operator "&". The address of a memory location is called a pointer.

## Retrieving addresses in c++
```c
int amount;            //standard variable declaration.
&amount;               //Expression to return the address of amount.
cout << long(&amount); //Expression to output the address to the console.
```
- By default, c++ returns hexadecimal values for addresses.
    - Converting to long gives us the number address.

## Storing addresses in c++ 
```c 
datatype* variable_name;
//or
datatype *variable_name;

//example: 
int* pointer;
int *pointer;
```
- Pointer variables must have a datatype they can point to.
- They must also have a '*' to tell the compiler that they are a pointer variable.
- '*' can be adjacent to datatype, or name; does not matter.
- The name can be any non-keyword.

**Store an address to a pointer variable**: Requires a declared variable.
```c
int x = 0;         //The datatype is int.
                   //The name is x.
                   //The value is.
&x                 //The address of x in memory.
int* pointer = &x; //x's address is now stored in pointer.
                   //Pointer is declared above.
```

- The indirection operator '*' can be used on a pointer variable with a stored address to return its value.

```c
//continuing with declared variables above . . . 
cout << "Pointer variable: " << pointer << "/n";
cout << "Pointer Variable address value: " << *pointer << "\n";

//Console output . . .
Pointer variable: 0x407020        //Changes dynamically, value is just an example.
Pointer variable address value: 0 // The value of x, whos address is stores in pointer.
```
Because the indirection operator references the value at the address, the value can be mutated just as if the variable was called directly in expressions, or functions. (If the variable permits.)

## The Relationship Between Arrays and Pointers
Array size declaration essentially reserves the correct sized block of memory for itself.
- Its name represents the starting address of the array. 

```c
int anArray[3];     //anArray represents an address
                    //3 reserves the amount of space for 3 'int' in memory.
                    //The line above is very important.
anArray = {6, 7, 8};//Giving it some values

cout << *anArray << "/n"; // Indirection operator -> value for starting address
6                         //console output

```
- Pointers can be iterated over with a simple expression due to c++ compilation.

```c
cout << *(anArray + 1) << "/n";
```