#include<iostream>
using namespace std;
 
class A
{
public:
  prabas()  { cout << "hero" << endl; }
};
 
class B
{
public:
  ram charan()  { cout << "vilan" << endl; }
};
 
class C: public B, public A  
{
public:
  ram()  { cout << "side actor " << endl; }
};
 
int main()
{
    C c;
    return 0;
}
