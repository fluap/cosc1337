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
