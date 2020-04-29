#include <iostream> 
using namespace std;
int main() 
{    
	ios_base::sync_with_stdio(false);
	cout << "Enter two numbers:" << '\n';
	// prefix std:: indicates namespace
    int v1 = 0, v2 = 0;    // test comment
    printf("test\n");
    (cout << "test () :\n") << '\n';
    cout << "First:" << '\n';
	cin >> v1;
	cout << "Second:" << '\n';
	cin >> v2;
	cout << "The sum of " << v1 << " and " << v2
	<< " is " << v1 + v2 << '\n';
	return 0;
}
