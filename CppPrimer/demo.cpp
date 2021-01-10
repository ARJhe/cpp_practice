#include <bits/stdc++.h>
using namespace std;
int main(){
    int i = 42;
    int *p;
    int *&r = p;
    cout << setw (2) << "i" << setw (9) << "&i";
    cout << setw (10) << "p" << setw (11) <<"*p";
    cout << setw (9) << "*&r";
    cout << setw (9) << "&r" << setw (11) << "*r";
    cout << setw (9) << "r" << '\n';


    cout << i << " " << &i << " ";
    cout << setw (10) << p << " "  << setw (10) << *p << " ";
    cout << setw (10) << *&r << " " << &r;
    cout << " " << setw (10) << *r << " " << r <<'\n';

    r = &i;
    cout << setw (2) << i << " " << &i << " ";
    cout << setw (10) << p << " "  << setw (10) << *p << " ";
    cout << setw (10) << *&r << " " << &r;
    cout << " " << setw (10) << *r << " " << r <<'\n';
    
    *r = 0;
    cout << setw (2) << i << " " << &i << " ";
    cout << setw (10) << p << " "  << setw (10) << *p << " ";
    cout << setw (10) << *&r << " " << &r;
    cout << " " << setw (10) << *r << " " << r <<'\n';

    int ival = 1024;
    int *pi = &ival;
    int **ppi = &pi;
}

