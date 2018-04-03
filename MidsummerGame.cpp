# include <iostream>
# include <cstdlib>

using namespace std;

string Hermia(int n){
	switch(n) {
      case 1 :
         cout << "The day I got married to the person who truly loves me. It was the day after I had the strangest dream." << endl;
         break;
      case 2 :
				 cout << "The day before I got married to my love I had a dream that seemed so real. I don’t remember much but I remember a feeling of rejection like I have never felt before." << endl;
      case 3 :
         cout << "Of course, the face of my true love." << endl;
         break;
      case 4 :
         cout << "Of course, though they may stumble, they will always find a way to be together." << endl;
         break;
      case 5 :
         cout << "I can endure the pain of losing my true love for a night." << endl;
         break;
      case 6 :
				 cout << "I let my father control my life too much." << endl;
				 break;
      case 7 :
				 cout << "I hate answering the question, why do you disobey your father?" << endl;
				 break;
      case 8 :
				 cout << "My hero is the one who brought my true love back to me." << endl;
				 break;
      case 9 :
				 cout << "Yes, I have to learn everyday how to be the best person for my true love." << endl;
				 break;
      case 10 :
				 cout << "" << endl;
				 break;
      default :
         cout << "Invalid Question" << endl;
   }
	 return 0;
}

string Lysander(int n){
	switch(n) {
      case 1 :
         cout << "The day I got married to the person who truly loves me. It was the day after I had the strangest dream." << endl;
         break;
      case 2 :
				 cout << "The day before I got married to my love I had a dream that seemed so real. I don’t remember much but I remember a feeling of rejection like I have never felt before." << endl;
      case 3 :
         cout << "Of course, the face of my true love." << endl;
         break;
      case 4 :
         cout << "Of course, though they may stumble, they will always find a way to be together." << endl;
         break;
      case 5 :
         cout << "I can endure the pain of losing my true love for a night." << endl;
         break;
      case 6 :
				 cout << "I let my father control my life too much." << endl;
				 break;
      case 7 :
				 cout << "I hate answering the question, why do you disobey your father?" << endl;
				 break;
      case 8 :
				 cout << "My hero is the one who brought my true love back to me." << endl;
				 break;
      case 9 :
				 cout << "Yes, I have to learn everyday how to be the best person for my true love." << endl;
				 break;
      case 10 :
				 cout << "" << endl;
				 break;
      default :
         cout << "Invalid Question" << endl;
   }
	 return 0;
}


string Bottom(int n){
	switch(n) {
      case 1 :
         cout << "The day I got married to the person who truly loves me. It was the day after I had the strangest dream." << endl;
         break;
      case 2 :
				 cout << "The day before I got married to my love I had a dream that seemed so real. I don’t remember much but I remember a feeling of rejection like I have never felt before." << endl;
      case 3 :
         cout << "Of course, the face of my true love." << endl;
         break;
      case 4 :
         cout << "Of course, though they may stumble, they will always find a way to be together." << endl;
         break;
      case 5 :
         cout << "I can endure the pain of losing my true love for a night." << endl;
         break;
      case 6 :
				 cout << "I let my father control my life too much." << endl;
				 break;
      case 7 :
				 cout << "I hate answering the question, why do you disobey your father?" << endl;
				 break;
      case 8 :
				 cout << "My hero is the one who brought my true love back to me." << endl;
				 break;
      case 9 :
				 cout << "Yes, I have to learn everyday how to be the best person for my true love." << endl;
				 break;
      case 10 :
				 cout << "" << endl;
				 break;
      default :
         cout << "Invalid Question" << endl;
   }
	 return 0;
}

int main() {
	// Set the playing boolean value to true so the while loop continues while the user is playing
	bool playing = true;
	// Output the welcome statement and the rules
	cout << "Welcome to the character guessing game!" << endl;
	cout << "You will try to guess what character I am from A Midsummer Night's Dream" << endl;
	cout << "You only have 20 questions to ask me so goodluck!" << endl;
	// Select the random character
	int randomCharacter = rand() % 5 + 1
	// Output the random character number to check that the rand is working
	cout << randomCharacter << endl;
	// Set the random character to 1 for testing
	randomCharacter = 1
	// Set the number of quesitons asked to 0 to keep track of how many questions the player has asked
	int asked = 0
	// Start the while loop that will run the game and handle the input from the user
	while(playing){
		// Prompt the user to enter the number of the quesiton they want to ask
		cout << "Enter the number of the question you want to ask!" << endl;
		// Take in the question number and store it in the variable "question"
		cin >> question;
		// Make a switch case statement to handle which character the computer will act like
		// Call the character function with the question number to get the response from the character
		switch (randomCharacter){
			case 1 :
				 Hermia(question);
				 break;
			case 2 :
				 Lysander(question);
				 break;
			case 3 :
				 Bottom(question);
				 break;
		}
		// Increase the number of questions the user has asked
		asked++
		// Check if the user has asked 20 quesitons yet
		if (asked == 20){
			// If the user has asked 20 questions tell them they have asked as many questions
			cout << "Looks like you have asked all the questions you are allowed" << endl;
			playing = false;
		}

	}


}
