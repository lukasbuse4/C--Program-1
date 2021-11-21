#include <iostream>

using namespace std;

int main() {

//variables
int S ;
int L;
int A;
int Y;
int E ;
int R ;
int SLAYER =  (100,000* S) + (10,000 * L) + (1,000 * A) + (100* Y) +(10 *E)+ (R);
int LAYERS = (100,000 * L) + (10,000 * A) + (1,000 * Y) + (100 * E) + (10 * R) + S;

//prompt use to guess for SLAYER
cout << "Guess a six-digit number SLAYER so that the following equation is true, where each letter stands for the digit in the position shown: " << endl;
//ask user
cout << "Enter your guess for SLAYER: ";
    cin >> SLAYER;

    //digit in hundred thousands place
    S = (SLAYER/ 100,000) % 10;
    //digit in ten thousand place
    L= (SLAYER/ 10,000) % 10;
    //digit in thousand place
    A= (SLAYER/ 1,000) % 10;
    // digit in hundreds place
    Y= (SLAYER/ 100) % 10;
    //digit in tens place
    E = (SLAYER/ 10) % 10;
    //digit in ones place
    R = (SLAYER % 10);

    if (SLAYER + SLAYER + SLAYER == LAYERS) { //CORRECT
        cout << "Your guess is correct: " << endl;
        cout << "SLAYER + SLAYER + SLAYER = " << LAYERS;
        cout << "LAYERS = " << LAYERS << endl;  //  CALCULATION PART
        cout << "Thanks for playing" << endl;
    }

    else if (SLAYER + SLAYER + SLAYER != LAYERS)  { //INCORRECT (SLAYER != LAYERS)
        cout << "Your guess is incorrect: " << endl;
        cout << "SLAYER + SLAYER + SLAYER = " << LAYERS << endl;
        cout << "LAYERS =" << SLAYER << endl;
        cout << "Thanks for playing" << endl;
    }
    else if (SLAYER > 999,999 && SLAYER < 100,000)
    { //Must be 6 digits
        cout << "Your guess is incorrect: " << endl;
        cout << "SLAYER must be a 6-digit number. " << endl;
        cout << "Thanks for playing" << endl;
    }

    return 0;
}