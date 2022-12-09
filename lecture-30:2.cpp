#include <iostream>
using namespace std;

int main(void) {

	int x; 
    int sum = 0;
    int size = 5;
    int avg = 0;
	int *array{ new int[size]{ 3, 13, 5 ,18, 41 } };

	cout << "მასივის ელემენტები: " << endl;

	for (x = 0; x < 5; x++) {

		cout << array[x] << endl;
	}
	
	for(int i = 0; i < size; i++){
	    sum = sum + array[i];
	    }
	    
	    avg = sum / 5;
    cout << "ჯამი არის: "<<sum<<endl;
    cout<<"საშუალო არის: "<<avg<<endl;
	return 0;
}