#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
void displayMenu(){
    cout << "=================MENU===================" << endl;
    cout << "22: Display Questions" << endl;
    cout << "23: Make A Guess" << endl;
    cout << "24: Display Question Count" << endl;
    cout << "25: Quit" << endl;
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
    default:
        return false;
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
        return "Is there something you are passionate about? If so, what?";
        break;
    case 18:
        return "What is the biggest obstacle you’ve had to overcome?";
        break;
    case 19:
        return "What is an average day in your life like?";
        break;
    case 20:
        return "What does your dream day look like?";
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
        return "I am willing to stand up for myself and those I love in the face of our society’s patriarchal standards.";
        break;
    case 12:
        return "For a time my love life was very stressful but everything worked out and I couldn’t be happier!";
        break;
    case 13:
        return "I am self-conscious about my height and wish I was taller.";
        break;
    case 14:
        return "When my love and I decided to run away and spend our lives together!";
        break;
    case 15:
        return "I am persistent and bold; I will always fight for what I believe in or for love.";
        break;
    case 16:
        return "When my dear beloved seemed to have lost his love for me, but perhaps that was just a dream.";
        break;
    case 17:
        return "I am more passionate about the man I love than anything else in my life.";
        break;
    case 18:
        return "I had to overcome my father’s persistent attempts to control my life and force me into a marriage I had no interest in.";
        break;
    case 19:
        return "I spend most of my days with my husband, now that he is mine I never want to be without him.";
        break;
    case 20:
        return "I would love nothing more than a full day with just my love and a beautiful day perhaps strolling in the woods.";
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
        return "The weirdest thing about me is that I am a hopeless romantic and very poetic.";
        break;
    case 12:
        return "My love life gave me a great deal of trouble as I was told the one loved could not be with me but now everything is as perfect as could be.";
        break;
    case 13:
        return "I am self conscious about not having a strong enough backbone.";
        break;
    case 14:
        return "The biggest turning point in my life was when my love and I took our fates into our own hands and ran away to be together.";
        break;
    case 15:
        return "I would say I am romantic and will do whatever I need for love.";
        break;
    case 16:
        return "When the duke sided with my beloved’s father to force her to marry another.";
        break;
    case 17:
        return "My love for my new spouse is so strong it makes all my other passions seem pale and weak.";
        break;
    case 18:
        return "I had to overcome the duke’s commands that would force my love to marry another.";
        break;
    case 19:
        return "I spend the greater part of all my days with my beautiful spouse.";
        break;
    case 20:
        return "Every day spent with my love is like a dream.";
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
        return "It is weird how unnaturally talented at acting I am.";
        break;
    case 12:
        return "My love life is about what one would expect from such a gifted actor as myself.";
        break;
    case 13:
        return "How could a person as talented as I ever be self-conscious about anything?";
        break;
    case 14:
        return "Going from simply being a weaver to becoming an actor was a huge turning point for me.";
        break;
    case 15:
        return "How to describe one as talented as myself is truly a challenge. Since I do not wish to carry on about my incredible acting ability for too long I will simply describe myself as magnificent.";
        break;
    case 16:
        return "The worst event of my life is every moment I spend off the stage not getting the recognition deserve.";
        break;
    case 17:
        return "I am passionate about my acting troupe and the fame I will receive when my talents are recognized.";
        break;
    case 18:
        return "I had to overcome my humble beginnings to become a renowned actor.";
        break;
    case 19:
        return "I spend most of my days still working as a weaver but I know soon I will make a name for myself as an actor.";
        break;
    case 20:
        return "My dream day would consist of putting on a massive play for all the royalty in the region with me playing all of the major roles.";
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
        return "The weirdest thing about me is how I obstinately pursued a woman who did not want me while ignoring my love for a long time.";
        break;
    case 12:
        return "My love life was very frustrating for a long time as the one I loved refused my marriage even though her father and the duke ordered it but now I am finally content.";
        break;
    case 13:
        return "I am sometimes self-conscious about my personality and how I treated my love before I discovered my love for her.";
        break;
    case 14:
        return "The biggest turning point of my life was the night of the strange dreams I had but when I awoke I had a newfound love.";
        break;
    case 15:
        return "I would describe myself as persistent, I will take that which I believe should be mine.";
        break;
    case 16:
        return "The worst event of my life was when my promised spouse ran away with another.";
        break;
    case 17:
        return "I have learned to become passionate about my spouse whom I love deeply.";
        break;
    case 18:
        return "Having to overcome my previous love and choose my new love, although it felt like there was some other force at work.";
        break;
    case 19:
        return "I spend most days with my spouse learning to love the right way.";
        break;
    case 20:
        return "I think I already had my dream day, when everything changed and I married my newfound love.";
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
        return "The weirdest thing about me is I am almost unable to accept the idea that someone would love me.";
        break;
    case 12:
        return "My love life was absolutely tragic for the longest time but I think it is now perfect.";
        break;
    case 13:
        return "I am very self-conscious about my looks, I think many men ignored me to pursue my prettier friend.";
        break;
    case 14:
        return "The biggest turning point in my life was when  my love began loving me back.";
        break;
    case 15:
        return "I would say I am skeptical about love but also want nothing more than to be loved.";
        break;
    case 16:
        return "The worst event of my life was when my betrothed abandoned me to be with my friend instead.";
        break;
    case 17:
        return "I am passionate about my love, I never gave up on him even when he abandoned me.";
        break;
    case 18:
        return "I had to overcome my love’s abandonment and harsh treatment of me.";
        break;
    case 19:
        return "I am spending nearly all my days with my spouse and making sure he never leaves me again.";
        break;
    case 20:
        return "I think my dream day already happened when my love began loving me back and we got married.";
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
        else if (question == 201) {
            asked = asked + 20;
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
            cout << "You've asked " << asked << " question(s)" << endl;
        }
        else if (question == 25){
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
        else if ( 1 <= question && question <= 20 ) {
            // Make a switch case statement to handle which character the computer will act like
        // Call the character function with the question number to get the response from the character
            switch (randomCharacter) {
            case 1:
                cout << "You asked: " << Qlist(question) << endl;
                answer = Hermia(question);
                cout << answer << "\n" << endl;
                cout << "What question would you like to ask next?" << endl;
                break;
            case 2:
                cout << "You asked: " << Qlist(question) << endl;
                answer = Lysander(question);
                cout << answer << "\n" << endl;
                cout << "What question would you like to ask next?" << endl;
                break;
            case 3:
                cout << "You asked: " << Qlist(question) << endl;
                answer = Bottom(question);
                cout << answer << "\n" << endl;
                cout << "What question would you like to ask next?" << endl;
                break;
            case 4:
                cout << "You asked: " << Qlist(question) << endl;
                answer = Demetrius(question);
                cout << answer << "\n" << endl;
                cout << "What question would you like to ask next?" << endl;
                break;
            case 5:
                cout << "You asked: " << Qlist(question) << endl;
                answer = Helena(question);
                cout << answer << "\n" << endl;
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
            cout << "Looks like you have reached the question limit." << endl;
            cout << "Who do you think I am?\n" << endl;
            cin >> guess1;
            correctGuess = guess(guess1, randomCharacter);
            if (correctGuess){
                cout << "Congratulations!! You won!!" << endl;
                playing = false;
            }
            else{
                cout << "You did not guess correctly." << endl;
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
    }
    return 0;
}
