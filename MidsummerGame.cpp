# include <iostream>
# include <cstdlib>
# include <time.h>

using namespace std;

string Hermia(int n){
	switch(n) {
      case 1 :
         return "The day I got married to the person who truly loves me. It was the day after I had the strangest dream." ;
         break;
      case 2 :
	return "The day before I got married to my love I had a dream that seemed so real. I don’t remember much but I remember a feeling of rejection like I have never felt before.";
	break;
      case 3 :
         return "Of course, the face of my true love." ;
         break;
      case 4 :
         return "Of course, though they may stumble, they will always find a way to be together.";
         break;
      case 5 :
         return "I can endure the pain of losing my true love for a night.";
         break;
      case 6 :
	 return "I let my father control my life too much.";
	 break;
      case 7 :
	 return "I hate answering the question, why do you disobey your father?";
	 break;
      case 8 :
	 return "My hero is the one who brought my true love back to me." ;
	 break;
      case 9 :
	return "Yes, I have to learn everyday how to be the best person for my true love.";
	 break;
      case 10 :
	return "The last person I would want to be is someone who has no one to love.";
	break;
      default :
         return "That doesn't look like anything to me" ;
   }
}

string Lysander(int n){
	switch(n) {
      case 1 :
         return "My happiest memory was when I fell in love with my true love all over again." ;
         break;
      case 2 :
	return "The night before my wedding I had a weird dream. I don’t remember much but there may have been a loss of love involving me.";
	break;
      case 3 :
         return "The face of my spouse." ;
         break;
      case 4 :
         return "Duh, I am with my true soul mate now. Though my feelings may have wandered off the path of love, I know now I am with the one I truly love.";
         break;
      case 5 :
         return "I can overcome unnatural circumstances and return to the person I love.";
         break;
      case 6 :
	return "I can’t stand up to fathers, I'd rather run away.";
	break;
      case 7 :
	return "I hate to answer the question, why didn’t you get married earlier?";
	break;
      case 8 :
	return "My hero is the one who helped me love my true love again." ;
	break;
      case 9 :
	return "Yes, I learn everyday how to be the best person for the one I married.";
	break;
      case 10 :
	return "The last person I would like to be is someone who doesn’t truly love the one they are with.";
	break;
      default :
        return "That doesn't look like anything to me";
   }
}


string Bottom(int n){
	switch(n) {
      case 1 :
         return "My happiest memory was when I was given the opportunity to perform in front of the king and queen." ;
         break;
      case 2 :
	return "There was one dream where I had a strong appetite for carrots I don’t remember much else.";
	break;
      case 3 :
         return "Me, especially in that dream I had." ;
         break;
      case 4 :
         return "I don’t think you could have just one mate. I have many mates.";
         break;
      case 5 :
         return "I am by far the best actor anyone has ever seen.";
         break;
      case 6 :
				 return " ";
				 break;
      case 7 :
				 return " ";
				 break;
      case 8 :
				 return " " ;
				 break;
      case 9 :
				return " ";
				 break;
      case 10 :
				 return " ";
				 break;
      default :
         return "That doesn't look like anything to me." ;
   }
}

int main() {
	srand(time(0));
	// Set the playing boolean value to true so the while loop continues while the user is playing
	bool playing = true;
	// Output the welcome statement and the rules
	cout << " " << endl;
	cout << "Welcome to the character guessing game!" << endl;
	cout << "You will try to guess what character I am from A Midsummer Night's Dream" << endl;
	cout << "You only have 20 questions to ask me so goodluck!" << endl;
	// Select the random character
	int randomCharacter = rand()%5+1;
	// Output the random character number to check that the rand is working
	cout << randomCharacter << endl;
	// Set the random character to 1 for testing
	randomCharacter = 1;
	// Set the number of quesitons asked to 0 to keep track of how many questions the player has asked
	int asked = 0;
	// Prompt the user to enter the number of the quesiton they want to ask
	cout << "Enter the number of the question you want to ask!" << endl;
	// Start the while loop that will run the game and handle the input from the user
	while(playing){
		// Take in the question number and store it in the variable "question"
		int question;
		cin >> question;
		if (question == 21){
			playing == false;
			break;
		}
		// Make a switch case statement to handle which character the computer will act like
		// Call the character function with the question number to get the response from the character
		switch (randomCharacter){
			case 1 :
         			 cout << Hermia(question) << endl;
				 break;
			case 2 :
				 cout << Lysander(question) << endl;
				 break;
			case 3 :
				 cout << Bottom(question) << endl;
				 break;
		}
		// Increase the number of questions the user has asked
		asked++;
		// Check if the user has asked 20 quesitons yet
		if (asked == 20){
			// If the user has asked 20 questions tell them they have asked as many questions as allowed
			cout << "Looks like you have asked all the questions you are allowed" << endl;
			cout << "Would you like to know which character I was? Enter Y or N." << endl;
			string seeCharacter;
			cin >> seeCharacter;
			if(seeCharacter == "Y"){
				switch(randomCharacter){
					case 1 :
						 cout << "I was Hermia!" << endl;
						 break;
					case 2 :
					 	 cout << "I was Lysander!" << endl;
						 break;
					case 3 :
						 cout << "I was Bottom!" << endl;
						 break;
					case 4 :
						 cout << "I was Demetrius!" << endl;
						 break;
					case 5 :
						 cout << "I was Helena!" << endl;
				}
			}
			else {
				cout << "Ok thanks for playing!" << endl;
			}
			playing = false;
		}
	}
	return 0;
}
