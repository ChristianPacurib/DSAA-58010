#include <iostream>
using namespace std;

int main()
{
	double num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int length = sizeof(num) / sizeof (num[0]);
	double newNumber = 1.5;
	
	for(int i =length - 0; i > 0;i--){
	    num [i] =num[i - 1];
    }
    num[1] = newNumber;
    
	for(int i = 0; i < length;i++){

		cout<<num [i]<<" ";
	}
	return 0;
}
