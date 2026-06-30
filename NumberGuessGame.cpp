#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int num;
    int tries;
    int guess;
    char choice;

    do{
        cout << "Welcome to the Number Guessing Game!" << endl; 
        srand(time(0)); // Seed the random number generator
        num = rand() % 100 + 1; // Generate a random number between 1 and 100
        cout << "You have 5 tries to guess the number between 1 and 100." << endl;
        tries = 5; 
        
        do{
            cout << "Enter your guess: ";
            cin >> guess;

            if (guess < num) {
                cout << "Too low! Try again." << endl;
            } else if (guess > num) {
                cout << "Too high! Try again." << endl;
            } else {
                cout << "Congratulations! You guessed the number!" << endl;
                break; // Exit the loop if the guess is correct
            }

            tries--; // Decrement the number of tries left
            cout << "Tries left: " << tries << endl;

        } while(tries > 0);

            if (tries == 0) {
                cout << "Sorry, you've run out of tries. The number was: " << num << endl;
            }   

           cout << "Do you want to play again? (y/n): ";
           cin >> choice;

    }while (choice == 'y' || choice == 'Y');
    
    cout << "********Thank you for playing the Number Guessing Game!**********\n";

    return 0;
}
