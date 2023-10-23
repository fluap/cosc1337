#include<iostream>
#include<string>
using namespace std;

//
//Object composition is when an object is a member variable of another object.
//

//this can be separated

//in a header file Rectangle.h
//anything you use in a header file must be included like #inlcude<string>
//must be guarded in case another class has the same name

// #ifndef Rectangle_H //<- guard
// #define Rectangle_H //<- guard
// class Rectangle {
//     private:
//         float length, width;
//     public: 
//         Rectangle(); //<- constructor
//         float area(); //prototype function
// };

// #endif //<- guard

// // in Rectangle.cpp

// //#include "Rectangle.h"m 
// Rectangle::Rectangle() { //<= scope declaration
//     length = width = 0;
// }

// float Rectangle::area(){
//     return length * width; 
// }


// class Carpet {
//     private:
//         double priceOfSquareYard;
//         Rectangle size; //<-- another class therefore is composition
//     public:
//         //carpet methods
// };

// //IO should be used outside a class function

// //Structure declaration
// // cannot be printed out as a whole object like in py
struct Student{
    //datatype value;
    int studentID;
    string name;
    int gpa;
    int gradyear;
    //PersonInfo;

    //can also include constructor
    Student() {
        studentID = 0;
        name = "MIke";
        gradyear = 2000;
        gpa = 4.0;
    }
};


// struct PersonInfo {
//     string name,
//         address,
//         city;
// }

// Student S1;
// PersonInfo P0;


// class Candidate {
//     private:
//         Student student;
// };

// void printStudent(const Student & s);

// struct PersonInfo {
//     string name,
//         address,
//         city;
// };



// //enum
// enum Result {PASS, FAILURE, GREAT};

// Result f;
// // or // enum Result {PASS, FAILURE, GREAT} f;
// enum class Status {SUCCESS, FAILURE, IN_PROGRESS};
// enum class Result {PASS, FAILURE, GREAT};

// Status s = Status::FAILURE;// Avoids compiler getting confused
// Result r = Result::FAILURE;// Despite failure being in both enums
// //Fruit can only take apple, banana, orange types


int main(){
    Student s1; //= {12345, "Mike", 20, 2002};
    s1.studentID = 1234;
    s1.name = "Mike";
    s1.gpa = 4.0;
    s1.gradyear = 2002;
    
    return 0;
}
