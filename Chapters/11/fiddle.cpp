#include <iostream>
using namespace std;

class StatDemo
{
private:
   static int x;
   int y;

public:
   void setx(int a) { x = a; };
   void sety(int b) { y = b; };
   int getx() { return x; };
   int gety() { return y; };
};

int StatDemo::x;

int main()
{
   StatDemo obj1, obj2;
   obj1.setx(5);
   cout << "Object 2: " << obj2.getx() << endl;
   obj2.setx(10);
   cout << "Object 1: " << obj1.getx() << endl;
   return 0;
}