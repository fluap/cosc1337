# Chapter 12

## Character Testing

```c
#include <cctype>
```
The cctype library is a functional library with functions to help testing characters. </br>
A full list of functions can be found [here](https://cplusplus.com/reference/cctype/). </br>

Evaluated responses are returned in integer format.
- 0 = False
- 1 = True 

### Review: Character injestion. . . 
A variable must be declared to injest the inputted character. </br>
**cin.get()** is used to read all up to a " " the stream into the declared variable. </br>
**cin.getline()** is used to to read the entire stream into the declared variable. </br>
Some example functions of cctype are shown below . . .
```c
#include<iostream>
#include<cctype>
using namespace std;

int main(){
    char x;

    cout << "Enter a character: ";
    cin.get(x); // Single character is stored into x
    cout << "The character you entered was: " << x << ".";
}
```
## Character Case Conversion

Functions that allow case conversion. </br>
characters are automatically validated and characters that cannot change case are returned as is (ie. !@#$%^&*).
- toupper
- tolower 

```c
cout << toupper("s"); // S
cout << tolower("A"); // a
cout << toupper("^"); // ^
```

## C-Strings

A C-string is a sequence of characters stored in consecutive memory locations and terminated by a null character.

```c
char name[size]; //character nameofstring[sizeofstring]
```

The type of a c string is a pointer to a character array.
```c
char *;
```

## String Literals
Also known as *String constants*. They are written directly into the program as a sequence of characters surrounded by double quotes. </br>
Regardless, these string literals are processed as c-strings by the compiler. An array of the string length is allocated, each character is the placed into the array, and finally the terminator is added in the last element of the array '\0'.

Instantiation from a string literal to a C-String:

**Note:** The maximum size for a string is 80.
```c
const int size = 20;
char company[size] = "Hello world"; // Traditional declaration
//
char corporation[] = "HELLO WORLD"; // Size is optional when declaring with string literal.
```

