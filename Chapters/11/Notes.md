# "this" pointer
The keyword 'this' is a pointer to the object of a certain class. 

The keyword this is implicitly passed when retrieving object members to ensure that the correct values are retrieved. 
```c
//assume getter for passed value stored in x
cExampleclass rock(10), paper(5);
rock.getValue() // Returns 10
paper.getValue() //Returns 5
```
The address of 'rock' and 'paper' are each passed along with getValue() behind the scenes. 

```c
this //returns the address of the instantiated class object.
```

Because 'this' is a pointer, it can be dereferenced to explicitly get object values.
```c
(*this).x //Dereferences the address and gets the value of that object's 'x' attribute.
this->x //Modern way of dereferencing and getting object's 'x' value. 
```
Therefore, the getValue functions can look anything like this: 
```c
cExampleClass::getValue(){
    return (*this).x; //Dereference object address, and get x value.
}
//or 
cExampleClass::getValue(){
    return this->x; //Modern dereference and get x value (same as above)
}
//or
cExampleClass::getValue(){
    return x; //Implicit pass of this, still gets value.
}
```
Finally, to get the address of the object, the object name can be called with & or simply combined with this.

```c
cExampleClass::getAddress(){
    return this //address of the object.
}
//or
cout << &rock;
cout << &paper;
```

___
# Constant Member Functions
Similarly to how const keywords inhibit values and pointers from being altered, member functions can be inhibited from modifying the object they belong to.

This is done by adding the const keyword to the end of their declaration.
- Note both the in class and out of class declarations must have the const keyword.

```c
class cExample(){
    // . . .
    public:
        void randomFunction() const;
};

cExample::randomFunction() const {
    //This function cannot modify the object
};
```

# Static member variables
These variables are shared by all instanced objects of a class. If one object changes the variable, all other objects will see the reflected change when accessing it.

These are also known as class-level members / class-level variables.

Their declaration is prefixed by the keyword static:
```c
static int x;
```
Usage in a program requires two declarations. 
- The first declaration is to specify its type and the fact that its a static member of a class.
- The second declaration is to allocate memory for the variable. </br>
**Note:** The second declaration must be outside of the class.
```c
class cExample(){
    public: 
        statc int x; // First Declaration
}

int cExample::x; //Second Declaration
```
Without the second declaration, a linker error will be thrown during compilation.

