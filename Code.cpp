// Brayan Villatoro 
// Jennifer Holst CSCI 401 Wed-10:50am 


#include <iostream>
using namespace std;

// User loop global
void loop (int dollar[], int size);
void displayArray(int num[], int sz);

int main()
{
const int MAX{ 20 };
int size[MAX] = { 0 };	
	
inputloop(dollar, MAX );

displayArray(num, MAX);


return 0;
}

void inputloop(int dollar, int size)
{
	int useramount{size};
	
	for (int i = 0; i < dollar; count++)
	{
	// User $ input
	int order;
	// Display to user the question
	cout << "Please enter a US Dollar amount: " ;
	// User input 
	cin >> order;
		while (order[i] || order[i] > 100)
		{
			std::cout << " Numbers";
			std::cin >> order[i];
		}
		
		useramount--;
		std::cout << "You have a total of " << useramount;
}
	
	
	void displayArray(int num[], int sz)
{
    std::cout << "Displaying the numbers you inputted...\n";
    for (int count = 0; count < sz; count++)
	   std::cout << num[count] << std::endl;
}
	
}

