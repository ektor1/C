// because we need the input-output libraries (cin and cout are defined in iostream)
#include <iostream>

// main function returns an integer (int)
int main() {
    // creates an integer variable called favourite_number
    int favourite_number;
    // cout statement prompts user to input a number "<<" inserts something into that stream
    // cout writes to the console, cin reads from the console
    std::cout << "Enter your favourite number: ";
    std::cin >> favourite_number;
    // endl adds a new line at the end
    std::cout << "Your favourite number is " << favourite_number << ". I hate this number!" << std::endl;
    // returns 0 if everything is good
    return 0;
}

// To run the program we will need to: 1. compile it 2. link it then 3. execute it