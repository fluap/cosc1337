// Monday 25.10.2023 Chapter 8 Searching, Sorting, and Algorith, Analysis
// slop lecture notes for chapter 9
#include<iostream>
#include<vector>
using namespace std;


// Linear search example: 
int linearSearch(const int array[], int size, int value) {
    int index = 0;
    int position = -1;
    bool found false;

    while (index < size && !found) {
        if (array[index] == value) {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}
//Binary Search #MUST BE SORTED
int binarySearch(const int array[], int size, int value) {
    int first = 0,
        last = size -1,
        middle,
        position = -1; 

    bool found = false;
    while( !found && first <= last ) {
        middle = ( first + last ) / 2;
        if ( array[middle] == value) {
            found = true;
            position = middle;
        }
        else if ( array[middle] > value) {
            last = middle - 1;
        }
        else {
            first = middle + 1;
        }
    }
    return position;
}

//Bubble sort
void bubbleSort( int array[], int size ) {
    int temp;
    bool madeAswap;

    do {
        madeAswap = false;
        for ( int index = 0; index < ( size - 1 ); index++ ) {
            if ( array[index] > array[index + 1] ) {
                temp = array[index];
                array[index] = array[index + 1];
                array[index + 1] = temp;
                madeAswap = true;
            }
        }
    } while(madeAswap);
}

//Selection Sort
void selectionSort(int array[], int size) {
    int startScan,
        minIndex,
        minValue;
    for (startScan = 0; startScan < (size - 1); startScan++) {
        minIndex = startScan;
        minValue = array[startScan];

        for (int index = startScan + 1; index < size; index++) {
            if (array[index] < minValue) {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}

//Searching for a value in a vector
int searchForAValueInAVector(vector<int> v, int value) {
    int position = -1;
    bool found = false;
    int index = 0;

    while (index < v.size() && !found) {
        if (v[index] == value) {
            position = index;
        }
        index++;
    }
    return position;
}

int main(){{
    
}}

#include <iostream>
#include <cmath>
using namespace std;

class Circle {  
    private:
        double radius;              
    public:
        void  setRadius(double);   
        double calcArea();         
};

void Circle::setRadius(double r) { 
radius = r;
}

double Circle::calcArea() {
return 3.14 * pow(radius, 2); 
}
