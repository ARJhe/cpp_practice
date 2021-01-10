#include <bits/stdc++.h>
using namespace std;
int main(){
    // 2.15 Which of the follwing definitions, if any, are invalid? Why?
    //int ival = 1.01;    //    ok:
    //int &rval1 = 1;     // error: cannot bind '&int' to 'int' 
    //int &rval2 = ival;  //    ok:
    //int &rval3;         //   error: not initialized

    // 2.16 Which, if any, of the following assignments are invalid? if they
    // are valid, explain what they do.
//    int i = 0, &r1 = i; double d = 0, &r2 = d;
//    r2 = 3.14159;   // r2 and d become 3.14159
//    r2 = r1;        // r2 and d become 0
//    i = r2;         // still 0
//    r1 = d;         // still 0 
    
    // 2.17 What does the following code print?
    int i, &ri = i;
    i=5; ri = 10; 
    // when i = 5, ri = 5; then when ri = 10, i become 10 as well
    cout << i << " " << ri << '\n';

}

