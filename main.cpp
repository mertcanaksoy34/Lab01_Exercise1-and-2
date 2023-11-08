#include<iostream>

using namespace std;

int main() {

	//// Question 1 --START--

	int h, s, t;
	string repeatQuestion;


	while (true) {
			cout << "Enter two sides of the triangle : ";
			cin >> s >> t;


			cout << "Enter to hypotenuse of the triangle : ";
			cin >> h;

			int h2 = h * h;
			int s2 = s * s;
			int t2 = t * t;


			if(h2 == s2 + t2){
				cout << "Right-angled triangle \n";
			}
			else{
				cout << "Not a right-angled triangle \n";
			}

		askAgain:
			cout << "Would you like to continue ? ( n / Y ) :";
			cin >> repeatQuestion;

			if (repeatQuestion == "n" || repeatQuestion == "N") {
				return 0;
			}
			else if(repeatQuestion == "y" || repeatQuestion == "Y") {

			}
			else {
				cout << "Invalid value. please enter a valid value." << endl;
				goto askAgain;
			}


	}
	//// Question 1 --END--



	//// Question 2 --START--
	/*int number;
	string repeatQuestion;


	while (true) {
		cout << "Enter a number: ";
		cin >> number;

		if (number <= 0) {
			cout << "Number must be greater than zero \n";
		}
		else {

			for (int i = 1; i <= 9; i++) {
				int trueResult = number * i;
				int userResult;

				cout << number << "*" << i << " = ";
				cin >> userResult;

				if (userResult == trueResult) {
					cout << "Correct Answer \n";
				}
				else {
					cout << "Wrong Answer \n";
					cout << "Correct answer: " << number << " * " << i << " = " << trueResult << endl;
				askAgain:
					cout << "Would you like to continue ? (n / y) :";
					cin >> repeatQuestion;
					if (repeatQuestion == "n" || repeatQuestion == "N") {
						return 0;
					}
					else if (repeatQuestion == "y" || repeatQuestion == "Y") {

						if (number <= 0) {
							cout << "Number must be greater than zero \n";
						}
					}
					else {
						cout << "Invalid value. please enter a valid value." << endl;
						goto askAgain;
					}
				}


			}

		}

	}*/
	//// Question 2 --END--

	return 0;
}