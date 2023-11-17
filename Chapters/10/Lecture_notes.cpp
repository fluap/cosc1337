
// This program demonstrates a function that returns
// a pointer.
#include <iostream>
#include <string>
using namespace std;

// Function prototype
struct GradeInfo {
   string name;
   int *testScores = nullptr;
   double average;
};


int main()
{  
   GradeInfo *astudent = nullptr;
   GradeInfo student;
   student.testScores = new int;
   *student.testScores = 5;
   cout << *student.testScores << 
   endl;

   if(true) {
      astudent = new GradeInfo;
      (*astudent).testScores = new int;
      cout << astudent->testScores;
   }
}
