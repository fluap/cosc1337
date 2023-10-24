// Monday 23.10.2023 Chapter 8 ARRAYS Lecture notes
// slop lecture notes for chapter 8

#include<vector>
#include<iostream>
#include<string>
using namespace std;

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++){
        cout << array[i];
    }
}

//ARRAY OF OBJECTS REFERENCE
class Square {
    private:
        int side;
    public:
        Square() {
            side = 0;
        }
        Square(int x){
            side = x;
        }
};


int main(){
    int size = 5;
    int firstArray[] = {1, 2, 3, 5, 10}; // array declaration
    int secondArray[] = {2, 3, 5 , 9, 10};
    string thirdArray[] = {"Hi", "Sam", "Michael", "John"};
    // cannot do thirdArray = secondArray. Must loop through existing array and apply elements one by one
    // same with comparing arrays. Cannot do firstArray = secondArray. Must go through each element one by one.

    //parallel arrays
    //more of an implementation than a type of array?
    for(int i = 0; i < 5; i++) { //i suppose that the parallelism derives from the index being the same when iterating through the arrays.
        firstArray[i] = secondArray[i];
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     thirdArray[i] = thirdArray[i] + " " + secondArray[i]; //whats wrong
    // }
    

    //typedef creates an alias for a simple or structured datatype

    //typedef existingtype newname;
    typedef int INT;
    //now INT means int
    INT x = 5;
    int y = 5;
    //x and y are the same datatype.

    //using array in function
   
    
    printArray(firstArray, size);


    // 2 dimensional arrays are just an excel sheet.
    // THey are navidated with a nested loop
    // for (int row = 0; row < 10; row++ {
    //     //access each item in each row //youre increasing the y 
    //     for (int col = 0; col < 10; col++){
    //         true //acces each item in the column
    //         // youre increasing the x
    //     }
    // })

    // INITIALIZATION FOR A TWO DIMENSIONAL ARRAY
    int exams[2][2] = { {84, 78}, {92, 97}};
    // the [2][2] is the size declaration, values fill the size row by row.

    //VECTORS like arrays but more flexible
    // behaves like an array
    //dont need to declare size: grows and shrinks automatically
    // must #include<vector>
    //declaration example
    //vector<datatype> name;
    //optional naming size too:
    //vector<datatype> name(size);

    vector<int> scores;
    vector<int> moreScores(5);

    //members accessed identically to arrays using index 
    // scores[5];

    //can init a vector from another vector
    // vector<int> moreScores(5);

    //declaration with values doesnt need '='
    vector<int> lastscores {1 , 2, 3, 4, 5};

    //because its a class, its got a bunch of juice that help out. (like arrays in python)
    //check documentation its got .size()


    //ARRAY OF OBJECTS
    Square shapes[3] = {1, 2, 3}; //new array called shapes, which contains three constructed squares.
    //long hand notation
    Square moreshapes[2] = {Square(2), Square(5)};

    //works the same with struct
    //struct attribues within a struct are accessible via index then attribute
    //array[index].attribute

    return 0;
}



