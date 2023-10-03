// Lab04JoshuaBoone.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {

	int number;

	cout << "Enter a number: ";
	cin >> number;

		if (number < 0) {
			cout << "Nice try, please enter a positive number." << endl;
			return;
		} while (number < 0);

		unsigned long long factorial = 1;

		cout << number << "! = ";
		for (int i = 1; i <= number; ++i) {
			factorial *= i;

			if (i == 1)
				cout << i;
			else
				cout << " * " << i;
		}

		cout << " = " << factorial << endl;
	}

	
	

void arithmetic() {
    int difference, startingNumber, numElements;


    cout << "Enter the starting number: ";
    cin >> startingNumber;

    cout << "Enter a number to add : ";
    cin >> difference;

    cout << "Enter the number of elements in the series: ";
    cin >> numElements;

  //number of elements validating
    if (numElements <= 0) {
        cout << "Nice try, number of elements must be positive." << endl;
        return;
    }

	int current = startingNumber;

	for (int i = 0; i < numElements; ++i) {
		
		if (i != 0) {
			if (difference >= 0)
				cout << " + " << difference << " = ";
			else
				cout << " - " << -difference << " = ";
		}

		cout << current;

		current += difference;
	}

	cout << endl;
}
	
	void geometric() {
		int startingNumber, ratio;
		int numElements;

		cout << "Enter the starting number: ";
		cin >> startingNumber;

		cout << "Enter a number to multiply by each time: ";
		cin >> ratio;

		cout << "Enter the number of elements in the series: ";
		cin >> numElements;

		if (numElements <= 0) {
			cout << "Nice try, but the number of elements must be positive." << endl;
			return;
		}

		cout << startingNumber;

		double current = startingNumber;

		for (int i = 1; i < numElements; ++i) {
		
			current *= ratio;

		
			cout << " * " << ratio;
		}

		cout << " = " << current << endl;
	}


int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}