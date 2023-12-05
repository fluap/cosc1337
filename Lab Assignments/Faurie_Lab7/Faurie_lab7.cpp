#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

void get_the_data(int* arr, int size);
void sort_the_data(int* arr, int size);
void display_data(int* arr, int size);
float display_average(int* arr, int size);

int main(){
    int number_of_students;

    cout << "Enter the number of students: ";
    cin >> number_of_students;
    if (cin.fail()){
        bool failed = true;
        while (failed || number_of_students < 1){
            cin.clear();
            cin.ignore();
            cout << "Error, please enter a positive integer: ";
            cin >> number_of_students;
            if (number_of_students > 0){
                failed = false;
            }
        }
    }

    //dynamic allocation
    int* movies_watched = new int[number_of_students];

    get_the_data(movies_watched, number_of_students);    
    sort_the_data(movies_watched, number_of_students);   
    display_data(movies_watched, number_of_students);    
    cout << setprecision(2) << "Average  " <<  display_average(movies_watched, number_of_students); 

    //free memory
    delete movies_watched;
    movies_watched = nullptr;
    
    return 0;
}

void get_the_data(int* arr, int size){
    cout << "Array" << arr << endl;
    cout << "Size" << size << endl;
    cout << "Enter the number of movies for each student: \n";
    //requires input validation
    for (int x = 0; x < size; x++){
        cout << x + 1 << ":";
        cin >> arr[x];
        if (cin.fail()){
            bool failed = true;
            while (failed || arr[x] < 0){
                cin.clear();
                cin.ignore();
                cout << "Error, please enter a positive integer: ";
                cin >> arr[x] ;
                if (arr[x] > 0){
                    failed = false;
                }
        }
    }
    }
}

void sort_the_data(int* arr, int size){
    sort(arr, arr + size);
}

void display_data(int* arr, int size){
    cout << '\n' << "Number of Movies Watched\n";
    cout << "------------------------\n";
    for (int x = 0; x < size; x++){
        cout << arr[x] << endl;
    }
    cout << "-------------\n";
}

float display_average(int* arr, int size){
    float accumulator = 0; 
    for (int x = 0; x < size; x++){
        accumulator += arr[x];
    }
    return accumulator / size;
}