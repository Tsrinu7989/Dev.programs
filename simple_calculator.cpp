#include<stdio_ext.h>
#include<ctype.h>
#include<iostream>
using namespace std;
int flag=0;
class calculator
{
	int num1,num2,num3,res=0,cnt=0,result=0;
	public:void display_options(void);//Function to display calculator options
	       void input(void);//Function to take initial inputs from the user
	       void again_input(void);;//Function to take additional input for further calculations
	       void print(int);//Function to display the result
	       void clear(void);//Functiom to clear/Reset the calculator
		
	       int add()//Function to perfrom Addition
	       {
		     
		       if(cnt==0) //if no previous calculations, add num1 and num2
		       {
			       res=num1+num2;
		       }
		       if(cnt>=1) //if no previous calculations, take additional input
		       {
			       again_input();//Call a function to getanother input
			       result=res+num3;//Add num3 to the previous result
			       return result;//Return the updated result
		       }
		       cnt++;//Increment the count of calculations
		       return res;//Return the result of the Addition
				  
	       }
	       int sub()//Function to perfrom Subtraction
	       {
		       if(cnt==0)//if no previous calculations, add num1 and num2
		       {
			       res=num1-num2;
		       }
		       if(cnt>=1)//if no previous calculations, add num1 and num2
		       {
			       again_input();//Call a function to getanother input
			       result=res-num3;//Add num3 to the previous result
			       return result;//Return the updated result
		       }
		       cnt++;//Increment the count of calculations
		       return res;//Return the result of the Subtraction

	       }
	       int mul()//Function to perfrom Multiplication
	       {
		       if(cnt==0)//if no previous calculations, add num1 and num2
		       {
			       res=num1*num2;
		       }
		       if(cnt>=1)//if no previous calculations, add num1 and num2
		       {
			       again_input();//Call a function to getanother input
			       result=res*num3;//Add num3 to the previous result
			       return result;//Return the updated result
		       }
		       cnt++;//Increment the count of calculations
		       return res;//Return the result of the Multiplication

	       }
	       int divi()//Function to perfrom Division
	       {
		       if(cnt==0)//if no previous calculations, add num1 and num2
		       {
			       res=num1/num2;
		       }
		       if(cnt>=1)//if no previous calculations, add num1 and num2
		       {
			       again_input();//Call a function to getanother input
			       result=res/num3;//Add num3 to the previous result
			       return result;//Return the updated result
		       }
		       cnt++;//Increment the count of calculations
		       return res;//Return the result of the Division
	       }
	       int module()//Function to perfrom Modulus
	       {
		       if(cnt==0)//if no previous calculations, add num1 and num2
		       {
			       res=num1%num2;
		       }
		       if(cnt>=1)//if no previous calculations, add num1 and num2
		       {
			       again_input();//Call a function to getanother input
			       result=res%num3;//Add num3 to the previous result
			       return result;//Return the updated result
		       }
		       cnt++;//Increment the count of calculations
		       return res;//Return the result of the Modulus

	       }
};
	    
void calculator::input()
{
	cout<<"enter the value:"<<endl;//Prompt the user ti enter two values
	cin>>num1>>num2;//Read the first two numbers from the user
	
}
void calculator::again_input()
{
	cout<<"Enter the again value:"<<endl;//Prompt the user to enter another value
	cin>>num3;//Read the third numbers from the user
}
void calculator:: print(int value)
{
	cout<<"Total:"<<value<<endl;//Print the total result
}
void calculator::clear()
{
	result=res=0;//Reset Both result and res to 0
	cnt=0;//Reset the calculation counter
	print(result);///Print the reset result
}
void calculator::display_options(void)
{
	char choice;//Declare a character variable for user's choice
input:input();//Label to restart input if necessary
      //Display the Calculator interface
      cout<<"Simple Calculator"<<endl;
      cout<<endl;
      cout<<"AC < ()  /"<<endl;
      cout<<"7  8  9  *"<<endl;
      cout<<"4  5  6  -"<<endl;
      cout<<"1  2  3  +"<<endl;
      cout<<"%  0  .  ="<<endl;
      cout<<endl;
      while(1)//Begin an infinite loop for user  choice input
      {
	      //Display operation options to the user
	      cout<<"'+'.add '-'.sub '*'.mul '/'.div '%'.module '='.result c.clear b.backspace e.exit"<<endl;
	      cout<<"________________________________________________________________________________"<<endl;
	      cout<<endl;
	      cout<<"Enter the choice:"<<endl;//Prompt the user for an operation
	__fpurge(stdin);
	      cin>>choice;//Read the user's  choice
	__fpurge(stdin);
	      switch(choice)//Begin switch-case foe user's choice
	      {
		      case '+'://Perfrom Addition
			       result=add();
			       res=result;
			       break;
		      case '-'://Perfrom Substaction
			       result=sub();
			       res=result;
			       break;
		      case '*'://Perfrom Multiplication
			       result=mul();
			       res=result;
			       break;
		      case '/'://Perfrom Division
			       result=divi();
			       res=result;
			       break;
		      case '%'://Perfrom Modulus operation
			       result=module();
			       res=result;
			       break;
		      case '='://if choice is = then print the result
			       if(choice=='=')
			       {
				       print(result);
			       }
			       break;
		      /*case 'b'://if choice is b remove the last integer value 
			       if(choice=='b')
			       {
				       if((cnt>0)&&(result!=0))
						       cnt--;
			       }
			       break;*/
		      case 'c'://Clear the current context and start again
			       clear();
			       break;
		      case 'e'://Exit the program
			       exit(0);
			//       break;
		      default:cout<<"Wrong Choice Try Again"<<endl;


	      }
      }
}
int main()
{
	calculator cobj;//Creat an object of the calculator class
	cobj.display_options();///Call the display options function to begin the calculatot operations
	return 0;//Return 0 to indicate successful program execution

}
