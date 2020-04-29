# include <iostream>
using namespace std;
int main(){
	int *pointer;
	int b=2;
	pointer = &b;
	
	printf("*pointer:value: %d\naddress:%p\nstring:%s", 
	*pointer,&pointer,pointer);
	printf("b: value: %d\n addres:%p\n", b, &b);
	//*pointer = 10;
	b =10;
	printf("*pointer:value: %d\naddress:%p\nstring:%s", 
	*pointer,&pointer,pointer);
	printf("b: value: %d\n addres:%p\n", b, &b);
	return 0;
}
