# File IO

## Five things that need to happen to access and use permanent storage solutions.

- Include the header file needed to perform file input/output.
- Define a file stream object.
- Open the file.
- Use the file.
- Close the file.

### Required header file for file IO
```c
#include <fstream>
```
### Defenition of a filestream object.
There are three types of filestream objects.
- **ofstream** : Used to create and write data to the file.
- **ifstream**: Used to open and read data from the file.
- **fstream**: Used to open and read or write data to / from the file. *Covered later*

Each filestream object must be linked to this type and given a name.

```c
ofstream outputName;
ifstream inputName;
fstream ioName;            //covered later
```
Chasing explanation using only ofstream from here on out but the same applies to all three fileobject types . . . 

### Opening/closing a file.
- .open("filename.fileextension")
- .close(); *No arguments required*
* Note An **Fstream** object will require another argument to specify which mode to open the file in. 

```c
outputName.open("test.txt"); //This will open the file, and create if needed.
// work
// with
// file
outputName.close(); // does not require filename.
```
### Using a file / Working with a file
- Reading from a file
- Writing to a file

*Recall that each use will require its own fstream object type*

#### **Writing to a file**
An fstream object is a stream object and works like the iostream object. Assuming the file has already been linked, created, and opened . . . 

- Writing must be used through an ofstream object.
```c
outputName << "Hello there" << endl;
// Works like cout, except the output is written to the file stream, not the console stream.
```
- Writing userInput to a file requires an interim variable, cin cannot directly place value into a file.
```c
string temp;
cout << "Enter a value that c++ cant directly put in a file: ";
getline(cin, temp);
outputName << temp;
```

#### **Reading from a file**
File reads are delimited by whitespace and newlines, very much like the cin object.
```c
string value;
ifstream inputName;
inputName.open("test.txt");
inputName >> value;
cout << value; //optional, but displays the read value from inputName object / file.
```
Like the cin object, getline can be used to retrieve an entire line from the file being read from.

```c
string line;
inputName.open("test.txt");
getline(inputName, line); 
cout << line;
```

## Until fstream is covered. . .
A workaround can be used to have both read and writes to the same file. This is done simply by attributing the same filename to two different fstream objects. One for read and one for write.

- Assuming there is an existing txt file

```c
#include <fstream>
ofstream fileWriting;
ifstream fileReading;

fileWriting.open("test.txt");
//do stuff
// dont forget to close
fileReading.open("test.txt");
//do stuff
//dont forget to close
```
So long as the file is only open in one context / object at a time. It can be read and written from.
Everything else functions like iostream.

# Continued on chapter 13 fstream object.