#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
class Guessgame
{
	// Member varables: num for random number,guessnumber for user input, count for attempts
	int num,guessnumber,count;//=0;
	bool flag;//=false;//Declare a flg for additional logic(not used here)
	public:Guessgame():count(0),flag(false)//Constructor to initialize values
	       {
		       srand(getpid());//send the random number generator using process ID
		       num=rand()%100;//Generate a random number  0 amd 99
	       }
	       void playgame()//Method to start the guessing game
	       {
		       while(count<5)//Allow the user up to 5 attempts
		       {
			       count++;//Uncrements the attempt counter
			       cout<<"Enter the guessing number"<<endl;//Prompt user for input
			       cin>>guessnumber;//Take the user's guess
			       if(guessnumber>num)//check if the guess is high
			       {
				       cout<<"guessing number too HIGH"<<endl;
			       }
			       else if(guessnumber<num)//check if the guess is low
			       {
				       cout<<"guessing number too LOW"<<endl;
			       }
			       else//If the guess is correct
			       {
				       cout<<"WOW your guessing number is CORRECT"<<endl;
			       }
		       }

	       }
};
int main()
{
	Guessgame game;//Create an object of the guessgame class
	game.playgame();//Call the playgame method to start the game
	return 0;// Exit the program
}
