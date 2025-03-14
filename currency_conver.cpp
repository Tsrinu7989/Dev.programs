#include<iostream> 
using namespace std; 

class CurrencyConverter // Define a class named CurrencyConverter
{
	private:
		float exchangeRate; // Store the exchange rate from source to target currency

	public:
		CurrencyConverter(float rate) // Constructor to initialize the exchange rate
		{
			exchangeRate = rate; // Assign the provided exchange rate to the member variable
		}
		float convert(float amount)  // Function to convert the amount from source to target currency
		{
			return amount * exchangeRate; // Multiply the amount by the exchange rate and return
		}
		void displayConversion(float amount, string sourceCurrency, string targetCurrency)  // Function to display the conversion result
		{
			float convertedAmount = convert(amount); // Call the convert function to get the converted value
			cout<<amount<<" "<<sourceCurrency<<" = "<<convertedAmount<<" "<<targetCurrency<<endl; // Display the result
		}
};

int main()
{
	float rate, amount; // Declare variables to store the exchange rate and amount
	string sourceCurrency, targetCurrency; // Declare variables to store the names of currencies
	cout << "Enter source currency (e.g., USD): "; // Prompt user for source currency
	cin >> sourceCurrency; // Get the source currency from user
	cout << "Enter target currency (e.g., INR): "; // Prompt user for target currency
	cin >> targetCurrency; // Get the target currency from user
	cout << "Enter the exchange rate (" << sourceCurrency << " to " << targetCurrency << "): "; // Prompt user for exchange rate
	cin >> rate; // Get the exchange rate from user
	cout << "Enter amount in " << sourceCurrency << ": "; // Prompt user for the amount in the source currency
	cin >> amount; // Get the amount from user

	// Create an instance of the CurrencyConverter class with the provided exchange rate
	CurrencyConverter converter(rate);

	// Perform the conversion and display the result
	converter.displayConversion(amount, sourceCurrency, targetCurrency);
	return 0; // End of program
}

