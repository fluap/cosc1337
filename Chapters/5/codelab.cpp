#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string writeName;
    string readName;

    ifstream myReadFile; //ifstream reading from file.
    ofstream myWriteFile; //ofsream writing to file.

    myWriteFile.open("myName.txt");
    cout << "Enter the name to be written to the file: ";
    getline(cin, writeName); 
    myWriteFile << writeName << endl; //Write input to file
    myWriteFile.close();

    cout << "READING" << endl;

    myReadFile.open("myName.txt");
    myReadFile >> readName;
    cout << readName << endl;
    myReadFile.close();

    return 0;
}