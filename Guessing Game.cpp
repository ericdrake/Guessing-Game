#include <iostream>
#include <ctime>

using namespace std; 

int main (int argc, char** argv) {

	srand(time(NULL)) ;

{
	int secret_num; // creates secret number
	int guess; // creates the users guess
	int count_guesses = 0; // creates number of guesses
	
	secret_num = rand() % 100 + 1; // creates a completely random number 1-100
	
	
	while(secret_num != guess) {
		cout << "Guess a number 1-100! :"; // prints instuctions for the game
			cin >> guess; // input guess from the user
				count_guesses++; // counts number of guesses	
	
	if (guess != secret_num) // .. if the guess is incorrect
	
	if (guess > secret_num)
			cout << "Oops, too large! Try again!\n"; // tells the user to pick a smaller number
		else
			cout << "Oops, too small! Try again!\n"; // tells the user to pick a larger number
		
	}

	cout << "Congratulations, you guessed the number in " << count_guesses << " guess(es)!"; // tells the user that they guessed the correct number


return 0;
}
}