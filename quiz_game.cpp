#include <iostream>
#include <string>
using namespace std;
class QuizGame 
{
	int score=0; // Member variable to track the player's score initialization is 0
	int questionCount=5; // Total number of questions 
	public: QuizGame() // Constructor initializes 
		{
			// Constructor for Quizgame
			cout<<"QuizGame Constructor"<<endl<<endl;
		}
	void askQuestion(string question, string optionA, string optionB, string optionC, string optionD, char correctAnswer) 
	{
		char answer; // Variable to store the user's answer
		cout << question << endl; // Display the question
		cout << "A. " << optionA << endl; // Display option A
		cout << "B. " << optionB << endl; // Display option B
		cout << "C. " << optionC << endl; // Display option C
		cout << "D. " << optionD << endl; // Display option D

		cout << "Enter your answer (A, B, C, D): ";//Display a prompt asking the user to enter their answer in one of the valid options(A,B,C,D)
		cin >> answer; // Get the user's answer

		// Check if the user's answer is correct
		if (toupper(answer) == toupper(correctAnswer)) //Convert both the user's answers and the correct answer to uppercase for case insensitive comparison ,if they match
		{
			cout << "Correct!\n" << endl;// Inform the user that their answer is correct
			score++; // Increment the score for a correct answer
		} 
		else //If the user's answer does not match the correct answer
		{
			cout << "Wrong! The correct answer was " << correctAnswer << ".\n" << endl;//Inform the user that their answer is incorrect and display the correct answer
		}
	}

	void startQuiz() //Define the startQuiz function, which will handle the main quiz process
	{
		// Example questions
		askQuestion("It is possible to define a class within a class termed as nested class. There are _____ types of nested classes ?","2","3","4","5",'A');
		askQuestion("When a method in a subclass has the same name and type signatures as a method in the superclass, then the method in the subclass _____ the method in the superclass?","Overloads","Friendships","Inherits","Overrides",'D');
		askQuestion("Which of the following cannot be passed to a function in C++ ?","Constant","Structure","Array","Header file",'D');
		askQuestion("A member function can always access the data in __________ , (in C++)?","The class of which it is member","The object of which it is a member","The public part of its class","The private part of its class",'B');
		askQuestion("Which of the following is not a member of class?","Static function","Friend function","Const function","Virtual function",'B');

		// Display final score
		cout << "Quiz Over! Your final score is " << score << "/" <<  questionCount<<"."<<endl<<endl;
	}

	~QuizGame() 
		{
			cout<<"QuizGame Destructor"<<endl;// Destructor for QuizGame
		}
};

int main() {
	QuizGame quiz; // Create an object of the QuizGame class
	quiz.startQuiz(); // Start the quiz
	return 0; // Exit the program
}

