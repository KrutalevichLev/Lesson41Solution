#include <iostream>  
#define DEFAULT_SIZE 10 // C

using namespace std;


int main() {
	//int numbers[10];
	//int vector[10];
	 
	// 1)
	//int array[10];
	// 2)
	//const int LENGHT = 10;
	const int SIZE = 10;         //C++

	int array[SIZE];

	int index = 0;

	for (int index = 0; index < SIZE; index++)
	{
		array[index] = index;
	}

	for (int index = 0; index < SIZE; index++)
	{
		cout << '[' << index + 1 << "] - " << array[index] << endl;
	}


	return 0;
}