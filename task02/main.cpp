#include <iostream> 
#define SIZE 10

using namespace std;


double calculate_average_score(int marks[]);

int main(){
	int array[SIZE];

	for (int index = 0; index < SIZE; index++)
	{
		cout << "Enter mark number " << index + 1 << ": ";
		cin >> array[index];
	}
	

	double result = calculate_average_score(array);

	cout << "The average mark is " << result;

	return 0;
}

double calculate_average_score(int marks[]) {
	double sum = 0;
	for (int index = 0; index < SIZE; index++){
		sum += marks[index];
	}

	return  sum / SIZE;
}