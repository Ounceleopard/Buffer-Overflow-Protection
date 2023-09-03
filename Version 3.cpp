/* 
Brayan Villatoro
Testing Buffer Overflow Protection
- Take input from the user for a number (integer) of orders
- Use a loop to get input from the user of a dollar amount (integer) for each order
- Keep track of the total of the dollar amounts entered in the loop
- Take input from the user of the customer's name (use only a character array, not the string type in C++ to store the name)
- Print the customer name and total dollar amount of their orders to the screen
*/
#include <iostream>
#include <string> // getline function
#include <limits> // number input

int main()
{
	// User's Name
    char name[20];
    // User input *int*
    int transaction_num; 
    // Tracking order totals, allows for cents
	double current = 0, total = 0;	
	
	std::cout <<"\t===================================================="; 
	
	// Program request for user input of their name 
    std::cout << "\n\tPlease only enter your first name: ";
    // Limits input of name to 19 characters 
	std::cin.getline(name,20);
	
   // Program request for user input of amount of transcations 
   	while(std::cout << "\n\tPlease enter your desired amount of transactions: " && 
	   (!(std::cin >> transaction_num) || transaction_num < 0))
    {
    	// Catch so that program doesn't crash
        std::cout << "\n\tPlease try again, only positive numbers are allowed.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

	// Loop to keep track of the transactions from the user  
    for(int i = 0; i < transaction_num; i++)
	{
   	while(std::cout << "\n\tPlease enter a valid amount of USD: $" && 
	   (!(std::cin >> current) || current < 0))
    {
    	// Catch so that program doesn't crash
        std::cout << "\n\tPlease try again, only positive numbers are allowed.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
		// Adding to total
       total = current + total;
	}   
    
	// End of program output 
    std::cout <<"\t===================================================="; 
    std::cout << "\n\t" << name << "'s total amount for " << transaction_num << " transaction(s) = $" << total << "\n"; 
   	return 0;
}




