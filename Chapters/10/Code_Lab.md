# Chapter 10 CodeLab
If youre here for answers instead of problemsolving using the internet, quit now. 
You'll never make it in the field.

## 10692
Assume the variable diff has already been declared. Write an expression whose value is the address of diff.

```c
&diff
```
## 10689
Declare a variable ip that can be assigned the address of an int variable. In other words, declare ip to be of type "pointer to int".

```c
int* ip;
```
## 10690
Declare a variable cp that can be assigned the address of a char variable. In other words, declare cp to be of the type "pointer to char".
```c
char* cp;
```
## 10693
Assume that an int variable diff has already been declared. Assume further a variable diffPointer of the type "pointer to int" has also already been declared. 

Write a statement that assigns the address of diff to diffPointer.
```c
diffPointer = &diff;
```
## 10695
Assume that strikeCounter has already been declared to be a "pointer to int". Assume further that strikeCounter has been initialized -- its value is the address of some int variable.

Write an expression whose value is four(4) times the value of the variable that strikeCounter is pointing to.
```c
*strikeCounter * 4
```
## 10696
Assume that strikeCounter has laready been declared to be a "pointer to int". Assume further that strikeCounter has been initialized -- its value is the address of some int variable.

Write a statement that assigns the value 27 to the variable that strikeCounter is pointing to.
```c
*strikeCounter = 27;
```
## 10697
Assume that strikeCounter has already been declared to be a "pointer to int". Assume further that strikeCounter has been initialized -- its vale is the address of some int variable.

Write a statement that adds 22 to the variable that strikeCounter is pointing to.
```c
*strikeCounter += 22;
```
## 10698
Assume that ip1, ip2, and ip3 have already been declared to be of the type "pointer to int". Assume further that each of these pointer variables have been initialized -- each points to some int variable.

Write a statement that computes the sum of the variables that ip1 and ip2 point to, and assigns that value (the sum) to the variable that ip3 points to.
```c
*ip3 = *ip1 + *ip2;
```
## 10687
Write an expression that evaluates to 1 more than the value in the location pointed to by the integer pointer variable ip. Thus, if ip points to a location containing the value 3, the expression should evaluate to 4.
```c
*ip + 1
```
## 10688
Write an expression that retrieves the value in the location immediately after the location pointed to by the integer pointer variable ip.
```c
*(ip + 1)
```
## 10699
Assume that ip has been declared to be a pointer to int and that result has been declared to be an array of 100 elements. Assume further that ip has been initialized to point to an element in the first half of the array.

Write an expression whose value is the element in the array after the element that ip points to.
```c
*(ip + 1)
```
## 10700
Assume that ip has been declared to be a pointer to int and that result has been declared to be an array of 100 elements. Assume further that ip has been initialized to point to an element in the first half of the array.

Write a statement that makes ip point to the next element in the array.
```c
ip = ip + 1;
```
## 10705
Assume that ip has been declared to be a pointer to int and that enrollment has been declared to be an array of 20 elements.

Write a statement that makes ip point to the first element in the array.
```c
ip = enrollment;
```
## 10706
Assume that ip has been declared to be a pointer to int and that enrollment has been declared to be an array of 20 elements.

Write a statement that makes ip point to the last element in the array.
```c
ip = enrollment + 19;
```
## 10701
Assume that ip and jp have both been declared to be pointers to int and that result has been declared to be an array of 100 elements.

Assume further that ip has been initialized to point to an element in the first half of the array.

Write a statement that makes jp point to the element in the array just after the one that ip points to.

```c
jp = ip + 1;
```
## 10679
tripleIt is a function that takes one argument and returns no value. The argument is a pointer to int. The function triples the value that the argument points to and stores it back.

penalty is an int variable that has been declared and initialized.

Write a statement that triples the value stored in penalty by invoking the function tripleIt. For example, if the value in penalty was 7 before your statement, after your statement its value would be 21.
```c
tripleIt(&penalty);
```
## 10684
Write a statement that declares a prototype for a function tripleIt, which can be used as follows:

```c
int x = 5; tripleIt(&x) // x is now equal to 15
```
```c
void tripleIt(int* p);
```
## 10673
Write the definition of a function doubleIt, which doubles the value of its argument but returns nothing so that i can be used as follows:

```c
int x = 5;
doubleIt(&x);
// x is not equal to 10
```
```c
void doubleIt(int* p){
    *p *= 2;
}
```
## 10782
Given the variable ip, already declared as a pointer to an integer, write the code to dynamically allocate memory for a single integer value, assign the resulting pointer to ip, and initialize the integer value to 27.
```c
ip = new int;
*ip = 27;
```

## 10768
The variable dp refers to an array of type double. Assuming the integer variable n has been assigned a value, declare dp appropriately, allocate an array of n doubles and assign the resulting pointer to dp.
```c
double* dp;
dp = new double[n];
```