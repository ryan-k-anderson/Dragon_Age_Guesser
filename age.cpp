//Lab 4 Dragon Age
//Guess the Dragon's Age
//Ryan Anderson
//9/14/23


#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout; using std::cin; using std::endl;

int main() {
	//Randomly initialize dragons age
	srand(time(nullptr));
	int dragonAge = rand() % 99 + 1;// This is successfully generating dragon age initially
	//cout << dragonAge << endl;//Currently debugging to see what the dragons age is

	//Maiden Guess
	int guess = -1;
	int year = 1000;
	while (guess != dragonAge) {
		cout << "Year " << year << ": Hello, fair maiden. I am a fearsome dragon. How old am I?  ";
		cin >> guess;
		if (guess > dragonAge) {
			cout << "Wrong, I am younger. No handsome prince for you. See you in five years." << endl;
			dragonAge += 5;
			year += 5;
		}
		else if (guess < dragonAge) {
			cout << " Wrong, I am older. No handsome prince for you. See you in five years." << endl;
			dragonAge += 5;
			year += 5;
		}
		else {
			cout << "You got it! Here is the handsome prince. Live happily ever after!";
			break;
		}
	}

}