// This program calculates the area of a circle. It asks the user
// if he or she wishes to continue. A loop that demonstrates the
// toupper function repeats until the user enters 'y', 'Y',
// 'n', or 'N'.
#include <iostream>
#include <iomanip>
using namespace std;
// injest a string and print it out 
int main()
{
    const int size = 80;
    char cstring[size];

    cout << "Enter a sentence up to 79 characters long: ";
    cin.getline(cstring, size);
    cout << "working \n";
    cout << "cstring cout test: " << cstring << endl;

    for(int i = 0; cstring[i] != '\0'; i++){
        cout << cstring[i];
    }
    return 0;
}