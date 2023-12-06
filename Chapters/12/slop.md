# input and output streams

**Must #include\<fstream>**
- ifstream input -> filestream
- ofstream output -> filestream
- fstream input or output -> filestream''


.open(filename, x) 
x can be ...
- ios::in - open for input
- ios::out - open for output
- ios::in | ios::out - open for both

this only needs to be specified for fstream files.
ifstrean and ofstream files do not need this specificiation since theyre already specialized

```c
int main() {
    string filename = "myfile.txt";
    fstream myfile; 

    myfile.open(filename, ios::out);
}
```

```c
int main() {
    string filename = "myfile.txt";
    ifstream myfile; //already specializedi q

    myfile.open(filename);
}
```