#include <iostream> 
#define SIZE 20

using namespace std;


double calculate_average_score(int marks[], int lenght);

int main() {
	int marks[SIZE];

	int lenght;

	do{
		cout << "Enter marks number" << ": ";
		cin >> lenght;
	} while (lenght <= 2 && lenght > SIZE);

	for (int index = 0; index < lenght; index++)
	{
		cout << "Enter mark number " << index + 1 << ": ";
		cin >> marks[index];
	}


	double result = calculate_average_score(marks, lenght);

	cout << "The average mark is " << result;

	return 0;
}

double calculate_average_score(int marks[], int lenght) {
	double sum = 0;
	for (int index = 0; index < lenght; index++) {
		sum += marks[index];
	}

	return  sum / lenght;
}