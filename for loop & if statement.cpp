# include <iostream>
using namespace std;
int main(){
	int limit = 0;
	printf("please key in a number.\n");
	cin >> limit;	
	for (int val=0; val<=limit; val++)
		if(val%2==0){
		printf("%d is even\n",val);
		}else{
		printf("%d is odd\n",val);	
		}
		
}
