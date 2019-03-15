#include <iostream>
using namespace std;

int main() {
	int number_cats = 3;
	int number_dogs = 7;
	int number_animals = number_cats + number_dogs;
	cout << "Number of cats: " << number_cats << endl;
	cout << "Number of dogs: " << number_dogs << endl;
	cout << "Total animals: " << number_animals << endl;
	cout << "A new dog arrived!" << endl;
	number_dogs++;
	cout << "Number of dogs: " << number_dogs << endl;
	return 0;
}
