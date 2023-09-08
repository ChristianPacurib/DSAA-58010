#include <iostream>
using namespace std;

int main()
{
	int num[] = {5 ,4 ,3 ,2, 1};
	
	for(int i =0; i<4;i++){
		for(int j =i + 1; j<5;j++){
			if (num[i] > num[j]){
				swap(num[i], num[j]);
			}
		}
	}

		for(int i =0; i<5;++i){
		cout<<num [i]<<" ";
	}
	return 0;
}
