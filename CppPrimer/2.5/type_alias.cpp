#include <iostream>
using namespace std;
int main()
{
  typedef double wages; // wages is alias of double
  wages pi = 3.14159;
  cout << pi << endl;

  int *p;
  int i1= 10;
  p = &i1;
  cout << *p << endl;

  typedef int *pint;
  pint p2;
  p2 = &i1;
  cout << p2 << endl;
  return 0;
}
