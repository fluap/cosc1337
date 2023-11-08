# Pointers in c++

## Tldr; 
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
- Pointers must point to their corresponding datatypes.
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
- In other words, an array name is a pointer variable to the first element of that array.
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
Indirection operator calls for the value of the starting address of the array + x(the size of the array's datatype).

When working with arrays, the following two lines of code mean the same thing. 
```c
anArray[x];
*(anArray + x);
```
**Note**: Despite array names being pointers, they are constant and cannot be mutated like traditional pointer datatypes...
```c
int anArray[5], anoArray[5];
int* arrPtr;

//Allowed
arrPtr = anArray;   //valid..
arrPtr = anoArray;  //Change address.
                    //valid.
//Not allowed
anArray = anoArray; //invalid.
anoArray = anArray; //invalid.
```

## Pointer Arithmetic
With the basic rules for pointers being established, valid arithmetic can be implied.

**++, --, +, -, +=, -=**

## Pointer Initialization (declaration reviews. . .)

Pointers can be declared on the same line as what they're pointing to.
```c
double readings[50], *marker = readings;
```
Readings is declared, then *marker points to the first address of the array.
- They are both type double so its valid.
- Datatype must be declared prior to its pointer.

Pointers that do not yet have a value are automatically assigned 0.
- This address (0) is often reserved and in use by operating system files making it a safe choice since it cannot be used by any runtime / user programs. 
- NULL is a predefined constant that represents the address 0.
- An address with the value is called a null pointer. c++ has a keyword for this: nullptr.
```c
int* aPtr;             // set to integer 0
int* anoPtr = NULL;    // Set to address of 0
int* an2Ptr = nullptr; // Set to invalid address
```
**Note:** nullptr is the default keyword for pointer variables declared without a value.

## Pointer Comparison (comparative reviews. . .)

Memory addresses are sequential therefore generic integer comparisons apply here. They're essentially integers. . .

Adresses can be: 
- larger than others >
-   less than others <
- Equal to others ==
- Not equal to others !=

## Pointers in functions 
### Function definition must declare a pointer as a parameter.
```c
int pointerFunction(int* ptr) { //Declare that an address must be argued.
    *ptr *= 2;                  //Dereference the address
    return ptr;                 //Multiply the address' value by 2
}

//Function prototyping
void pointerFunction(int *); //int not required, * is required.
```

### Function calling with pointer as arument. . .
An address must be sent to the function, therefore . . . 
- A) Can accept pointer variable of the correct datatype.
- B) Can accept address from a variable of the correct datatype.
```c
int x = 5;             //Declare x
int* aPtr = x;         //Set aPtr to the address of variable x

//A
pointerFunction(aPtr); //Using pointer variable of type int. GOOD
//B
pointerFunction(&x);   //Referencing address of int variable x. GOOD
```


