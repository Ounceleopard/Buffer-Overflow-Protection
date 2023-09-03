/* 
Brayan Villatoro
Testing Buffer Overflow
- Take input from the user for a number (integer) of orders
- Use a loop to get input from the user of a dollar amount (integer) for each order
- Keep track of the total of the dollar amounts entered in the loop
- Take input from the user of the customer's name (use only a character array, not the string type in C++ to store the name)
- Print the customer name and total dollar amount of their orders to the screen
*/
#include <iostream>

int main()
{
	// User's Name
    char name[10];
    // User input *int*
    int transaction_num; 
    // Tracking order totals *int*
	int current = 0, total = 0;	
	// Program request for user input of their name 
    std::cout << "\n\tPlease enter your name: ";
    std::cin >> name;
   // Program request for user input of amount of transcations 
    std::cout << "\tPlease enter your desired amount of transactions: ";
    std::cin >> transaction_num;
	// Loop to keep track of the transactions from the user  
    for(int i = 0; i < transaction_num; i++)
	{
        std::cout << "\tPlease enter a valid amount of USD: $";
        std::cin >> current;
        total = current + total;
	}   
    // End of program output 
    std::cout << "\t" << name << "'s total amount for " << transaction_num << " transaction(s) = $" << total << "\n"; 
   	return 0;
}


