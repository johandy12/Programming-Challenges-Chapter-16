#include <iostream>

using namespace std;

template <class T>
T absoluteValue(T number){
	
	if(number < 0){
		number *= -1;
	}
	
	return number;	
}

int main(){
	
	int number1;
	double number2;
	
	cout << endl << "Enter the first number: ";
	cin >> number1;
	
	cout << "Enter the second number: ";
	cin >> number2;
	
	cout << "The absolute number of " << number1 << " is " << absoluteValue(number1) << endl << endl;
	
	cout << "The absolute value of the number " <<number2 << " is " <<absoluteValue(number2) << endl;
	
	return 0;
}
