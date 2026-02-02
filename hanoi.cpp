//***************************************************************************
//
//  hanoi.cpp
//  CSCI 241 Assignment 4
//
//  Created by Aaron Scott
//
//***************************************************************************
#include <iostream>


using namespace std;
/**
 * Towers of Hanoi function
 *
 * @param n numbers of disks to move
 * @param source - source peg
 * @param destination - destination peg
 * @param temporary - temporary holding for peg
 *
 */
void towersOfHanoi(int n, int source, int destination, int temporary) {
    if (n == 1) {
        cout << "1 " << source << "->" << destination << endl;
        return;
    }
    
    // Step 1
    towersOfHanoi(n - 1, source, temporary, destination);
    
    // Step 2
    cout << n << " " << source << "->" << destination << endl;
    
    // Step 3
    towersOfHanoi(n - 1, temporary, destination, source);
}
int main(int argc, char* argv[]) {
    //checks correct numb of arguments
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <number_of_disks>" << endl;
        return 1;
    }
    
    //converts to int
    int n = atoi(argv[1]);
    if (n <= 0) {
        cerr << "Error: Number of disks must be a positive integer" << endl;
        return 1;
    }
    towersOfHanoi(n, 1, 2, 3);
    
    return 0;
}

