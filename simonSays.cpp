#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <vector>
#include <string>
#include "simonSaysBoard.h"

// Set time values for different difficulty levels

#define e 1000000
#define m 500000
#define h 250000

using namespace std;

// Function prototypes

void PrintCongrats(int);

char GetDifficulty();


int main(){
	
	// Declare varriables
	
	bool isCorrect = true;
	int randomNumber;
	string userEntry;
	char mode;
	int delay;
	int roundNum = 0;
	vector<char> colorSequence(0);
	srand(time(0));
    char a;
    
    // Call file "PrintBoard" and pass char A which will print the full board with all four letters
    
    PrintBoard('A');
    cout<<" Press any key to continue..."<<endl;
    cin>>a;
    
    // Ask player for to set thier perferred difficulty
    
    mode=GetDifficulty();
    
	if (mode == 'e') {
    	delay = e;
	}
	else if (mode == 'm') {
    	delay = m;
	}
	else if (mode == 'h') {
    	delay = h;
	}

    // Beginning of game, starts by showing one board with one color.
    
	while (isCorrect) {
    	if(roundNum > 0){
        	PrintCongrats(roundNum);
        	usleep(1500000);
        	system("tput clear");
    	}
    	
    	// Round tracker
    	
    	roundNum++;
    	
    	// Generate a random number to chose which board will be displayed
    	
    	randomNumber = rand() % 4;
    	
    	//The following code corrosponds the random number value genarated to a specific character. That character is then added to the colorSequence.
   	 
    	if (randomNumber == 0) {
        	colorSequence.push_back('G');
    	}
    	else if (randomNumber == 1) {
        	colorSequence.push_back('R');
    	}
    	else if (randomNumber == 2) {
        	colorSequence.push_back('Y');
    	}
    	else if (randomNumber == 3) {
        	colorSequence.push_back('B');
    	}
   	 
   	 // The for loop loops through the total colorSequence and calls to the PrintBoard funtion and passes the character that is located at the corrosponding location in colorSequence
   	 
    	for (int i = 0; i < colorSequence.size(); i++) {
        	if(colorSequence.at(i) == 'G') {
            	PrintBoard('G');
        	}
        	else if(colorSequence.at(i) == 'R') {
            	PrintBoard('R');
        	}
        	else if(colorSequence.at(i) == 'Y') {
            	PrintBoard('Y');
        	}
        	else if(colorSequence.at(i) == 'B') {
            	PrintBoard('B');
        	}
       	 
       	 // This will cause a delay after printing the current board before the following line erases it from the screen. If there are more boards to print the loop iterates again.
        	usleep(delay);
        	system("tput clear");
       	 
        	cout << ' ' << endl;
       	 
        	usleep(delay);
        	system("tput clear");
    	}
    	
    	// Request and store user input
    	
    	cout << "Enter color sequence: ";
    	cin >> userEntry;
   	 
   	 // Check user input size vs colorSequence and if different, break loop
   	 
	    if (userEntry.size() != colorSequence.size()){
        	isCorrect = false;
        	break;
    	}
    	
    	// Check each indivudual location to its equivilant in colorSequence
    	
    	for (int i = 0; i < colorSequence.size(); i++) {
        	if (toupper(userEntry.at(i)) != colorSequence.at(i)) {
            	isCorrect = false;
            	break;
        	}
    	}
   	 
	}
	
	// Display loss and rounds completed
	
	cout << "You lose!" << endl;
	cout << "You completed " << roundNum-1 << " rounds." <<  endl;
    
	return 0;
}


// Funtion definition for printing a message at the end at each turn.

void PrintCongrats(int i){
	cout << "Congratulations on passing round " << i << ". Get ready for round " << i+1 << "!" << endl;
}

// Checks to see that the input for difficulty corrosponds to a correct possibility

char GetDifficulty(){
    char mode;
    
	while(1) {
    	cout << "Choose your difficulty level. Type 'e' for easy mode. Type 'm' for medium mode. Type 'h' for hard mode. ";
    	cin >> mode;
   	 
    	if (mode == 'e' || mode == 'm' || mode == 'h') {
        	return mode;
    	}
   	 
    	else {
        	cout << "Invalid entry. Try again. " << endl;
    	}
	}
}