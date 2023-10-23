# Chapter 7 - 10/16/2023 Lecture Notes
- Header files can be stored in a .h notation
    - Class declarations and prototyping occur in this file.
    - Imported with #include"headerfilename.h"
- cpp files have header implementations for the classes that were prototyped.
    - scope should be included in this file.
    - .cpp

- Both files are then converted to .o (object) and compiled prior to running the .cpp file containing main(){}
- IO should be handled by functions that use classes, not within the class

## Structures in C++
- Requires semicolon;
- its literally a dictionary.
- Attributes must be printed out individually.
- Attributes must be assigned individually.
- can have constructors to assign default values.
    - cant omit datatypes without omitting all subsequent datatypes.


# Textbook notes
 **Abstract DataType**_ any datatype whose implementation details are kept separate from the logical properties needed to use it. (Typically datatypes that are created by the programmer.)

### 7.2 OOP
- Objects are abstract datatypes containg attributes and methods. **Attributes** represent data, **methods** represent functions. In C++, both attributes and methods are members of the abstract datatype (typically a class). They are also known as member variables (attributes), and member functions (methods).

Class Declaration boilerplate (BASIC)
```c++
class ClassName {
    //Member variables
    //Private then public

    //Member functions
}; //Yes semicolon
```
### Members can be declared as **public** or **private**.
**Private**_ This data can only be accessed from within the class. In other words, only a method or function from that exact object can use the data stored in these member variables. 

**Public**_ This data can be fished out of any object from anywhere in the program. 

Expanding on the Class declaration boilerplate to include private and public attributes.

```c++
class ClassName {
    private:                    //Invisible from outside
        //datatype variableName;
        int x = 1;
    public:                     //Visible from outside
        //datatpe variableName;
        int y = 2;
};
```
Without knowing exacly how to access either variable yet... It's important to know that calling unto the **x** variable from this class would be impossible. This is because it is set to **private**, and there are no member functions inside the class that can retrieve it.

**y** however is **public** and would be accessible from anywhere.

So far, only variables have been used in the boilerplates, however member functions (class methods) can also be set to private and public in the exact same way.
```c++
class ClassName {
    private:                    //Invisible from outside
        //datatype variableName;
        int add2(int x) {       //Woah im a function
            cout << x + 2;
            return x += 2;
        }
        int x = 1;
    public:                     //Visible from outside
        //datatype variableName;
        int y = 2;
};
```

#### Note: class declarations without any public or private delcarations will result in all members being set to private.

### Order doesn't matter . . .

**public** and **private** don't have to be declared in a specific order, and can be declared multiple times.
- Private can be declared after public (although not really standard).

### This works:
```c++
class publicPrivate {
    private: 
        string recipe = "literally just sugar";
    public:
        string marketing = "This is super healthy for you";
    private:
        string theTruth = "this is not healthy for you";    
};
```

## 7.3 - Object instantiation (the creation of objects from classes)

Insert blueprint metaphor for the billionth time. Classes can be derived from the objects they create. makes it easier to understand using the 'type of' strategy. 
- IE: a BMW 335i is a *type of* -> car. the BMW 335i is the **object** and it is a *(type of)* car which would be the **class** .

Lets make it in code.

This is a simple class declaration for an abstract *car*. Every car has a brand and model, so at a high level, this class definition works because each car you think of can be a **type of** this class.

```c++
class cCar {
    private:                       //Private member attributes.
        string brand,
               model;

        bool driver_uses_blinkers;//jokes make people stay awake.
    public:
        void car_horn {
            cout << "Honk!";
        }
};
```
Now lets make some cars [cCar]:
Just like any other datatype declaration, the type will come before the name.
Classes can take arguments for object instantiation as well.

```c++
cCar BMW335i; //cCar declares the class (data/object) type, then the object name.
```
Because **BMW335i** is of type **cCar**, it gets the same attributes. 
Public attributes are accessible using dot notation.

Continueing the same example . . . 

```c++
BMW335i.car_horn();
//honk
```
