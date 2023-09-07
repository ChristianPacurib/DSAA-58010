#include <iostream>
using namespace std;

int main()
{
	int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int length = sizeof(num) / sizeof (num[0]);
	
	num [length - 0] = 11;
	for(int i =0; i<length;++i)
	{
		cout<<num [i]<<" ";
	}
	return 0;
}
