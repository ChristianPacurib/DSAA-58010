#include <iostream>
using namespace std;

int main()
{
	int num[] = {1, 2, 3, 4, 5 };
	int x = sizeof(num) / sizeof (num[0]);
	
    {
		cout<<x<<endl;
	}
	return 0;
}
