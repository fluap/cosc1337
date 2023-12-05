# Pointers in c++

### Tldr; 
Every variable is assigned a memory location whose address can be retrieved using the address operator "&". The address of a memory location is called a pointer.

## Retrieving addresses in c++
```c
int amount;            //standard variable declaration.
&amount;               //Expression to return the address of amount.
cout << long(&amount); //Expression to output the address to the console in decimal.
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

### Function calling with pointer as argument. . .
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

### Pointers to Constants and Constant Pointers. . .
- Constant datatypes require constant pointers
```c
const int constnum = 4;
cont int* constptr = constnum;
// Same goes for function calls
void randomFunction(const int* argument);
```
- Functions that have const parameters can accept const and non-const arguments.
It's good practice to use const parameters in functions that do not mutate the argument.

### Constant Pointers
- A pointer to *const* implies that the data cannot change, but the pointer can.
- A *const* pointer is locked to the initialized address, and cannot point to anything else.
- A *const* pointer to *const* means both the pointer and the value is locked at initialization.

```c
const int x = 5;       //Example of const data.
int* const ptr = &x    //Example of const pointer.
const int* const ptr; //Example of a const pointer pointing to a constant int

```
Above, *x* is declared as a *constant int*, and is assigned the value 5. 
Then, *ptr* is declared as a *constant int pointer*, and is assigned the address of *x*. 

Again, the same structure is used for function calls with const pointers being a parameter.
```c
void randomFunction(int* const ptr);
```
*A good way to remember the weird structure of constant pointer declarations, is by asking what a const pointer is pointing to? In this case, a const pointer called ptr (const ptr) is pointing to ( * ) an integer datatype (int).*

## Dynamic Memory Allocation
Dynamic memory allocation is the conditional creation and deletion of variables and objects during a program's runtime. It is only achievable through the use of pointers.

- A pointer is created for the *possibility* of a varialble creation.
- A keyword is then used to dynamically create a variable and assign it to the pointer.

```c
int* iptr = nullptr;           //creation of a pointer
int x;                         //Statically created variable.
cout << "Enter 1 or 0" << endl;//Prompt condition
cin >> x;                      //Set up condition
if (x == 1) {                  //Check condition
    iptr = new int;            //Dynamically create int variable, pointed to by iptr.
    *iptr = 25;                //Pointer now points to the integer value 25.
}
```
*int x* is statically created because it is assigned a place in memory regardless of what happens during the program's runtime. x will always be present.
iptr is also statically created for the same reason.

**iptr* however is dynamically created because it is assigned a value both after the execution has started, and only if x is equal to 1. The fact that x can equal any other number and therefore the *iptr would never be created, is what makes *iptr dynamic.

Dynamic memory allocation occurs in the *heap* of memory. Once the heap is used, C++ runtime throws a *bad_alloc* exception. **The default action of this exception is to terminate the program.**

Good practice is to clear unneeded memory usage from the heap (Memory management).
```c
delete iptr;    //Frees up the allocated memory
iptr = nullptr; //Set the pointer to null so that another pointer can point to the address.
```
- Array pointers require square brackets when deleted
```c
delete [] iptr;
```
### Dangling Ponters and Memory Leaks. . . 
Dangling pointers are those that point to memory which has been freed. (not set to null)
Dangling pointera are the cause for memory leaks.

To avoid:
- Set the pointer to null when memory is freed.
- Verify that pointer is not null before accessing the memory.

## Returning Pointers from Functions

A function can return a pointer to dynamically allocated memory so long as the allocated memory is not deleted.
- Functions that return pointers to local variables will error out because local variables are automatically destroyed once their scope ends.

## Pointers to Class objects and Structures
Pointing to a class is the same as pointing to any native datatype. Recall that classes are datatypes, only abstract.

```c
class Rectangle { //Class definition
    int x;
};
Rectangle *pRect = nullptr; //Pointer definition
Rectangle rect;             //Instantiate a class object.
pRect = &rect;              //Assign the address of the object to pointer.
```
Calling methods / attributes to objects accessed through a pointer is done differently than if the object is accessed directly.
```c
pRect.width    // Wont work
*pRect.width   // Wont work
(*pRect).width // Works
pRect->width   // Works
```

- **pRect.width;** : pRect is an address and therefore doesnt have a width attribute.
- ***pRect.width;** : the *dot* '.' is a higher order of operation than the dereferencer. The evaluation (highlighted below) would be evaluated and result in an error: 
```c
*(pRect.width);
```
- **(*pRect).width;** : By forcing the evaluation to occur by dereferencing the object first, then calling the method, it would succeed.
- **pRect->width;** : This is a c++ shorthand method of calling members on objects whom are referenced and also works. 

## Selecting Members of Objects

**Take your time on this part, experiment with it in an IDE. . .**

If the object is directly accessible, then the member access operator '**.**' is used.
If the object is pointed to, then the pointer-to-member access operator '**->**' or deference operator '**\***' must me used.

Sometimes, both can be used!

**Object is directly accessible, member is a pointer:**
```c
struct aHouse {
    string color;
    int *address = nullptr; //pointer to the house's address (get the metaphor?)
};

int main {
    aHouse myHouse;            //Directly accessible object.
    myHouse.address = new int; // Address now reserved
    *myHouse.address = 5;      // Dot operation evaluated to address THEN dereferenced to equal five. 
}
```
**Object is pointed to and member is a pointer:**
```c
struct aCar {
    string color;
    string *parking_space_area = nullptr;
};

int main {
    aCar *ptrCar = nullptr;               // Pointer to car object.
    ptrHouse = new aHouse;                // Reserve address for car object.
    aCar.parking_space_area = new string; // parking space reserved.
    *(*aCar).parking_space_area = "VIP";  // *aCar address evaluated to car object.
                                          // Then, car object . parking_space_area address is accessible.
                                          // Then, * parking space_area address is dereferenced, and given the value "VIP"
}
```

1) *(*aCar).parking_space_area
2) *(acarobject).parking_space_area
3) *parking_space_area
4) = "VIP"

SHORTHAND
```c
*aCar->parking_space_area = "VIP";   // -> is used for pointer type dereferencing.
*(*aCar).parking_space_area = "VIP"; // this line means the same as the one above it.
```
## Smart Pointers
### Tldr
Smart pointers are objects that function indentically to pointers, and they have more built-in features such as context management (automatic memory allocation, and freeing abilities).

- Smart pointer objects should not have other references to them.
- Smart pointers do not support pointer arithmetic.

They essentially are objects that wrap around a regular pointer, called *raw_pointer*s.


Reasons for using smart pointers: 
- **Dangling pointer:** Pointer is deleted while memory is still in use.
- **Memory leak:** Pointers are not deleted after memory is no longer in use.
- **Double deletion:** Occurs when the same pointer is deleted twice. (Important in case the pointer was reallocated to something else in the interim.)

Types of smart pointers:
- **unique_ptr:** Used when an object only has one pointer. Can reassign which pointer owns the object, and automatically deallocate the object if needed.
- **Shared_ptr:** A reference count manager that allocates joint ownership of an object. Automatically deletes object when count goes to 0.
- **weak_ptr:** A shared pointer that does not affect the reference count. (useful if two objects point to eachother)

The three types of classes are defined in the <memory> header file. Therefore it is required.
```c
#include<memory>
```

### Unique_ptr
Declaration
```c
unique_ptr<int> uptr1(new int);      //Declared and initialized immediately
unique_ptr<double> uptr2(new double);//Declared and initialized immediately
unique_ptr<int> uptr3;               //Declared but not initialized.
uptr3 = new unique_ptr<int>;         //Initialied previously declared ptr.
```

Unique pointers can only have one address pointing to the object. Therefore you cannot assign them to eachother.
```c
unique_ptr<int> uptr1(new int);
unique_ptr<int> uptr2(new int) = uptr1 //Illegal
unique_ptr<int> uptr3;
uptr3 = uptr1                          //Illegal
```
To transfer ownership of a unique_ptr, the move library function is used:
```c
uptr3 = move(uptr1)
```
First, the object pointed to by uptr3 is deallocated, then uptr1 deallocates its object, finally uptr3 is allocated to the object that uptr1 was previously allocated to.

unique_ptr objects cannot be passed by value as function arguments due to them being copied. They must be passed by reference, or moved.
```c
void print_uptr(unique_ptr<int> uptrparam){cout << *uptrparam}; //Must be moved.
print_uptr(move(uptr3)); //uptr passed by value, and therefore is moved.

void print_uptr(unique_ptr<int>& uptrparam){cout << *uptrparam}; //reference pass called.
print_uptr(uptr3); //uptr passed by reference, therefore not moved.
```

While smart pointers delete themselves when the object leaves the scope, they can manually be deleted while in the scope.
```c
uptr = nullptr; //setting value to nullptr automatically deletes object.
                //or
uptr.reset();   //member function that does the same thing.
```
