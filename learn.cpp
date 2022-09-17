#include <stdio.h>
#include <iostream>

using namespace std;

/* New class containing variables that are visible and usable outside the class */
class MyClass {
  public:
    string name;

      /* A constructor */
      MyClass(string ab) {
        name = ab;
      }

      /* Getter */
      string getName() {
        return name;
      }
      
      /* Setter */
      void setName(string cd) {
        name = cd;
      }
      
      /* Function */
      void printName() {
        cout << name << endl;
      }
};

int main() {
    /* 
      I am a comment, i am text that does not affect code, i am useful for TODOs or Explanations on whats happening!
    */
   
    /* Ways to use comments */

    // Ways to use comments

    /* 
       Ways to use comments
    */

    /* This is a String */
    const char name[] = "Geuxy";

    /* once a variable with "const" is initialized, it cannot be changed */

    /* This is a character */
    const char startLetter = name[0]; /* returns with G (0 is the first letter in the name[] variable above. */

    /* This is a number */
    int age = 16;

    /* This is a number with decimals */
    double ageToGetLicense = 16.9;

    /* This is also a number with decimals */
    float numberDecimals = 1.234567890;

    /* Simple way to print (used in C)*/
    printf("Hello, World!\n");

    /* Printing variables with printf */
    printf("Hi, My Name is %s, I am a %d year old coder.\n", name, age);

    /* Printing variables with cout */
    cout << "I do not have enough " << "Braincells" << " to be learning " << "C++" << "." << endl;

    /* Advanced way to print (<< acts like + by adding something to a string, i think its more simple than printf) */
    cout << "Goodbye, World!\n" << endl;

    /* variable set to nothing (null) */
    //int input;

    string input;

    /* just telling the user they can say something in console (entering a character will make the variable initialize to 0 */
    //cout << "Enter your age: ";
    cout << "Enter your name: ";


    /* using the users input to initialize the input variable */
    //cin >> input;

    /* initializes the name variable to cin */
    getline(cin, input);

    /* \n creates a new line */
    //cout << "You are " << input << " years old" << endl;
    cout << "Hello there, " << input << "!" << endl;

    /* An array is a list containing multiple values.
                     0  1  2  3  4  5  6  7  8  9 */
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    /* Prints the first number in the array*/
    cout << numbers[0] << endl;

    /* Prints the last number in the array */
    cout << numbers[9] << "\n-" << endl;

    /* The for loop allows you to execute things specific number of times.
       This for loop is looping it the size of the array (10).
       Every time it does something once, it increases the i value and move
       on to the next. */
    /* theres also while loops but ive never used one in my life (except for while(true)) */
    for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        cout << numbers[i] << endl;
    }
    /* Leaving empty (null) */
    int input2;

    cout << "Say a number (0-3): ";
    /* Initializing our variable */
    cin >> input2;

    /* Adding a new string variable */
    string funny;

    /* Switches are basically the same as multiple else if statements */
    switch(input2) {
      /* iInitializing funny variable */
      case 0:
        funny = "Australia";
        break;
      case 1:
        funny = "America";
        break;
      case 2:
        funny = "England";
        break;
      case 3:
        funny = "Brazilian (I DONT WANNA GO TO BRAZIL!!!)";
        break;
      default:
        funny = "hell";
        break;
        
    }
    /* Printing funny variable with endl (basically /n but it flushes the buffer -Tristian) (OpTiMiSaTiOnS!) */
    cout << funny << endl;

    /* Adding a & before the variable name returns as its memory address */
    string blahaj = "Blahaj";
    cout << &blahaj << endl;

    /* This variable is a pointer */
    string *myPointer = &blahaj;

    /* Making variables with the class (with constructor) */
    MyClass geuxy("Geuxy");
    MyClass anonymous("Anonymous");

    /* You can initialize multiple constructors */

    /* Printing the variables */
    cout << geuxy.getName() << endl;
    anonymous.printName();


}