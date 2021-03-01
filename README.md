# Guessing-Game
 A C++ program that allows user to participate in a number guessing game!

 This program was written using control statements that alter the order of evaluation of the statements within the program, in order to make a simple number-guessing game! 

 Using one of C++'s many implemented librarys, <ctime>, this allows the programmer to create a completely random number that even the programmer does not know. This allows the programmer to play and enjoy the game - just as a random user would!
 The computer chooses a secret number between 1 and 100, by using srand(time(NULL)), then prompts the player to guess the number. 
 If the player's guess is different from the secret number, the program then produces messages to tell the player whether the guess was too high or too low. These "hints" also include the number that was guessed by the player. 
 The game also keeps track of the number of guesses made by the player and when the player guesses the correct number, a message of congratulations is displayed, along with the total number of guesses.

Here is an example what the program will output:

Guess a number 1-100! : 10
Oops, too small! Try again!
Guess a number 1-100! :50
Oops, too large! Try again!
Guess a number 1-100! :40
Oops, too large! Try again!
Guess a number 1-100! :30
Oops, too large! Try again!
Guess a number 1-100! :20
Oops, too large! Try again!
Guess a number 1-100! :1
Oops, too small! Try again!
Guess a number 1-100! :15
Oops, too large! Try again!
Guess a number 1-100! :12
Congratulations, you guessed the number in 8 guess(es)!
