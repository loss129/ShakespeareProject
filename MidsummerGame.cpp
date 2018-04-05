#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
void displayMenu(){
	cout << "=================MENU===================" << endl;
	cout << "22: Display Questions" << endl;
	cout << "23: Make A Guess" << endl;
	cout << "24: Quit" << endl;
	cout << "========================================" << endl;
	return;
}

bool guess(string name, int character){
	switch (character) {
    case 1:
        if (name == "Hermia"){
        	return true;
        }
        else {
        	return false;
        }
        break;
    case 2:
        if (name == "Lysander"){
        	return true;
        }
        else {
        	return false;
        }
        break;
    case 3:
        if (name == "Bottom"){
        	return true;
        }
        else {
        	return false;
        }
        break;
    case 4:
        if (name == "Demetrius"){
        	return true;
        }
        else {
        	return false;
        }
        break;
    case 5:
       if (name == "Helena"){
        	return true;
        }
        else {
        	return false;
        }
        break;
    }

}

string Qlist(int n)
{
    switch (n) {
    case 1:
        return "What is your happiest memory?";
        break;
    case 2:
        return "What was the weirdest dream you ever had?";
    case 3:
        return "What is the most beautiful thing you have ever seen?";
        break;
    case 4:
        return "Do you believe in soulmates?";
        break;
    case 5:
        return "What is your greatest strength?";
        break;
    case 6:
        return "What is your greatest weakness?";
        break;
    case 7:
        return "What question do you hate to answer?";
        break;
    case 8:
        return "Who is your hero?";
        break;
    case 9:
        return "Are you still learning who you are?";
        break;
    case 10:
        return "Who is the last person you would like to be?";
        break;
    case 11:
    	return "What is the weirdest thing about you?";
    	break;
    case 12:
    	return "How would you describe your love life?";
    	break;
    case 13:
    	return "What is something you are self-conscious about?";
    	break;
    case 14:
    	return "What was the biggest turning point in your life?";
    	break;
    case 15:
    	return "How would you describe yourself?";
    	break;
    case 16:
    	return "What is the worst event of your life?";
    	break;
    case 17:
    	return "";
    	break;
    case 18:
    	return "";
    	break;
    case 19:
    	return "";
    	break;
    case 20:
    	return "";
    	break;
    default:
        return "Invalid Question";
    }
}
string Hermia(int n)
{
    switch (n) {
    case 1:
        return "The day I got married to the person who truly loves me. It was the day after I had the strangest dream.";
        break;
    case 2:
        return "The day before I got married to my love I had a dream that seemed so real. I don’t remember much but I remember a feeling of rejection like I have never felt before.";
    case 3:
        return "Of course, the face of my true love.";
        break;
    case 4:
        return "Of course, though they may stumble, they will always find a way to be together.";
        break;
    case 5:
        return "I can endure the pain of losing my true love for a night.";
        break;
    case 6:
        return "I let my father control my life too much.";
        break;
    case 7:
        return "I hate answering the question, why do you disobey your father?";
        break;
    case 8:
        return "My hero is the one who brought my true love back to me.";
        break;
    case 9:
        return "Yes, I have to learn everyday how to be the best person for my true love.";
        break;
    case 10:
        return "The last person I would want to be is someone who has no one to love.";
        break;
    case 11:
    	return "";
    	break;
    case 12:
    	return "";
    	break;
    case 13:
    	return "";
    	break;
    case 14:
    	return "";
    	break;
    case 15:
    	return "";
    	break;
    case 16:
    	return "";
    	break;
    case 17:
    	return "";
    	break;
    case 18:
    	return "";
    	break;
    case 19:
    	return "";
    	break;
    case 20:
    	return "";
    	break;
    default:
        return "That doesn't look like anything to me";
    }
}

string Lysander(int n)
{
    switch (n) {
    case 1:
        return "My happiest memory was when I fell in love with my true love all over again.";
        break;
    case 2:
        return "The night before my wedding I had a weird dream. I don’t remember much but there may have been a loss of love involving me.";
    case 3:
        return "The face of my spouse.";
        break;
    case 4:
        return "Duh, I am with my true soul mate now. Though my feelings may have wandered off the path of love, I know now I am with the one I truly love.";
        break;
    case 5:
        return "I can overcome unnatural circumstances and return to the person I love.";
        break;
    case 6:
        return "I can’t stand up to fathers, I'd rather run away.";
        break;
    case 7:
        return "I hate to answer the question, why didn’t you get married earlier?";
        break;
    case 8:
        return "My hero is the one who helped me love my true love again.";
        break;
    case 9:
        return "Yes, I learn everyday how to be the best person for the one I married.";
        break;
    case 10:
        return "The last person I would like to be is someone who doesn’t truly love the one they are with.";
        break;
    case 11:
    	return "";
    	break;
    case 12:
    	return "";
    	break;
    case 13:
    	return "";
    	break;
    case 14:
    	return "";
    	break;
    case 15:
    	return "";
    	break;
    case 16:
    	return "";
    	break;
    case 17:
    	return "";
    	break;
    case 18:
    	return "";
    	break;
    case 19:
    	return "";
    	break;
    case 20:
    	return "";
    	break;
    default:
        return "That doesn't look like anything to me";
    }
}

string Bottom(int n)
{
    switch (n) {
    case 1:
        return "My happiest memory was when I was given the opportunity to perform in front of the king and queen.";
        break;
    case 2:
        return "There was one dream where I had a strong appetite for carrots I don’t remember much else.";
    case 3:
        return "Me, especially in that dream I had.";
        break;
    case 4:
        return "I don’t think you could have just one mate. I have many mates.";
        break;
    case 5:
        return "I am by far the best actor anyone has ever seen.";
        break;
    case 6:
        return "My acting can be too good and scare the ladies in a crowd.";
        break;
    case 7:
        return "I hate answering the question, why aren’t you better looking?";
        break;
    case 8:
        return "My hero is the person that can tell me what happened in my dream.";
        break;
    case 9:
        return "I am myself, I know who I am.";
        break;
    case 10:
        return "I’d hate to be someone who acts like an ass.";
        break;
    case 11:
    	return "";
    	break;
    case 12:
    	return "";
    	break;
    case 13:
    	return "";
    	break;
    case 14:
    	return "";
    	break;
    case 15:
    	return "";
    	break;
    case 16:
    	return "";
    	break;
    case 17:
    	return "";
    	break;
    case 18:
    	return "";
    	break;
    case 19:
    	return "";
    	break;
    case 20:
    	return "";
    	break;
    default:
        return "That doesn't look like anything to me.";
    }
}

string Demetrius(int n)
{
    switch (n) {
    case 1:
        return "My happiest memory was when I found my true love in some crazy night, and married my love the next day.";
        break;
    case 2:
        return "The weirdest dream I ever had happened the night before I got married. I don’t remember much, but something, I think, got in my eyes.";
    case 3:
        return "The face of my true love.";
        break;
    case 4:
        return "Yes, I am with my soulmate.";
        break;
    case 5:
        return "I can fight off anyone who threatens to take my love from me.";
        break;
    case 6:
        return "I have a weak heart that is vulnerable to outside forces.";
        break;
    case 7:
        return "I hate to answer the question, do you truly love the one you’re with? It’s just absurd.";
        break;
    case 8:
        return "My hero is the one who opened my eyes to my true love.";
        break;
    case 9:
        return "Everyday I learn how to be the person that loves my spouse.";
        break;
    case 10:
        return "I would hate to be a person who doesn’t truly love someone.";
        break;
    case 11:
    	return "";
    	break;
    case 12:
    	return "";
    	break;
    case 13:
    	return "";
    	break;
    case 14:
    	return "";
    	break;
    case 15:
    	return "";
    	break;
    case 16:
    	return "";
    	break;
    case 17:
    	return "";
    	break;
    case 18:
    	return "";
    	break;
    case 19:
    	return "";
    	break;
    case 20:
    	return "";
    	break;
    default:
        return "That doesn't look like anything to me.";
    }
}

string Helena(int n)
{
    switch (n) {
    case 1:
        return "My happiest memory is when the one I love woke up loving me.";
        break;
    case 2:
        return "The weirdest dream I ever had occurred the night before my wedding day. I can’t remember much, but I can remember feeling mocked and rejected.";
    case 3:
        return "My true love of course.";
        break;
    case 4:
        return "Yes I have a soulmate and they are with me now.";
        break;
    case 5:
        return "I can handle a verbal beating.";
        break;
    case 6:
        return "I can’t move on to love a different person.";
        break;
    case 7:
        return "I hate answering the question, does your true love really love you?";
        break;
    case 8:
        return "My hero is the one who opened the eyes of my true love.";
        break;
    case 9:
        return "Yes, I learn everyday how much I can love another person.";
        break;
    case 10:
        return "I would hate to be a person who isn’t truly loved.";
        break;
    case 11:
    	return "";
    	break;
    case 12:
    	return "";
    	break;
    case 13:
    	return "";
    	break;
    case 14:
    	return "";
    	break;
    case 15:
    	return "";
    	break;
    case 16:
    	return "";
    	break;
    case 17:
    	return "";
    	break;
    case 18:
    	return "";
    	break;
    case 19:
    	return "";
    	break;
    case 20:
    	return "";
    	break;
    default:
        return "That doesn't look like anything to me.";
    }
}

int main()
{
    srand(time(0));
    // Set the playing boolean value to true so the while loop continues while the user is playing
    bool playing = true;
    // Output the welcome statement and the rules
    cout << "\n\n\n\n" << endl;
    cout << "================================================================================" << endl;
    cout << "Welcome to the character guessing game!" << endl;
    cout << "You will try to guess what character I am from A Midsummer Night's Dream" << endl;
    cout << "You only have 20 questions to ask me so goodluck!\n" << endl;
    // Select the random character
    int randomCharacter = rand() % 5 + 1;
    // Output the random character number to check that the rand is working
    // Set the random character to 1 for testing
    // Set the number of quesitons asked to 0 to keep track of how many questions the player has asked
    int asked = 0;
    // Prompt the user to enter the number of the question they want to ask
    cout << "Enter the number of the question you want to ask!" << endl;
    string answer = "";
    bool correctGuess;
    string guess1;
    // Start the while loop that will run the game and handle the input from the user
    while (playing) {
    	cout << "Enter 21 to see the menu\n" << endl;
        // Take in the question number and store it in the variable "question"
        int question;
        cin >> question;
        if (question == 21) {
        	displayMenu();
        }
        else if (question == 22){
        	for(int i = 1; i < 21; i++){
        		cout << i << ". " << Qlist(i) << "\n" << endl;
        	}
        }
        else if (question == 23){
        	cout << "Who do you think I am?\n" << endl;
        	cin >> guess1;
        	correctGuess = guess(guess1, randomCharacter);
        	if (correctGuess){
        		cout << "Congratulations!! You won!!" << endl;
        		playing = false;
        	}
        	else{
        		cout << "You did not guess correctly :( keep going. That counts as a question" << endl;
        		asked++;
        	}
        }
        else if (question == 24){
        	cout << "Ok thanks for playing." << endl;
        	playing = false;
        }
        else if ( 1 <= question <= 20) {
        	// Make a switch case statement to handle which character the computer will act like
        // Call the character function with the question number to get the response from the character
	        switch (randomCharacter) {
	        case 1:
	            cout << "You asked: " << Qlist(question) << "\n" << endl;
	            answer = Hermia(question);
	            cout << answer << "\n" << endl;
	            cout << "What question would you like to ask next?\n" << endl;
	            break;
	        case 2:
	        	cout << "You asked: " << Qlist(question) << "\n" << endl;
	            answer = Lysander(question);
	            cout << answer << "\n" << endl;
	            cout << "What question would you like to ask next?\n" << endl;
	            break;
	        case 3:
	        	cout << "You asked: " << Qlist(question) << "\n" << endl;
	            answer = Bottom(question);
	            cout << answer << endl;
	            cout << "What question would you like to ask next?\n" << endl;
	            break;
	        case 4:
	        	cout << "You asked: " << Qlist(question) << endl;
	            answer = Demetrius(question);
	            cout << answer << endl;
	            cout << "What question would you like to ask next?" << endl;
	            break;
	        case 5:
	        	cout << "You asked: " << Qlist(question) << endl;
	            answer = Helena(question);
	            cout << answer << endl;
	            cout << "What question would you like to ask next?" << endl;
	            break;
	        }
	        // Increase the number of questions the user has asked
        	asked++;
        }
        else{
        	cout << "That doesn’t look like anything to me." << endl;
        }
        
        
        // Check if the user has asked 20 quesitons yet
        if (asked == 20) {
            // If the user has asked 20 questions tell them they have asked as many questions as allowed
            cout << "Looks like you have asked all the questions you are allowed" << endl;
            cout << "Would you like to know which character I was? Enter Y or N." << endl;
            string seeCharacter;
            cin >> seeCharacter;
            if (seeCharacter == "Y") {
                switch (randomCharacter) {
                case 1:
                    cout << "I was Hermia!" << endl;
                    break;
                case 2:
                    cout << "I was Lysander!" << endl;
                    break;
                case 3:
                    cout << "I was Bottom!" << endl;
                    break;
                case 4:
                    cout << "I was Demetrius!" << endl;
                    break;
                case 5:
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
