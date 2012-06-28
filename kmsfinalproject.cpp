// Kristi M. Short 
// COP100.C01
// Final Project! (Much more fun than an exam!)
// AKA: Project 7

#include <iostream>
#include <iomanip>
using namespace std;

// Variables 
const int COLS = 4;   // Number of columns
const int ROWS = 4;   // Number of rows
int magic[ROWS][COLS];


// Function Prototypes
void hello();
void DisplayMenu();
void validate(int);
void square(int);
//void magic(int [ROWS][COLS], int);   // Magic Square Array function prototype



// Main Function
int main()
{

	// Variables
	int choice = 0;
	const int number = 16;
	int magic[ROWS][COLS];


	// Program Purpose
	hello();


	
	
	
	// Run displaymenu function
	DisplayMenu();

	// Prompt user for choice 
	cout << "\t** Please input 1, 2, or 3 as a menu choice!            \n\n";
	cout << "\t********************************************************\n\n";
	cout << "\t"; cin >> choice; cout << endl;


	while (choice < 1 || choice > 3)
	{
		cout << "Please enter 1, 2, or 3 as a menu choice.\n";
	}
	
	if (choice != 3) 
		validate(choice);
		

	
	// Run evalution function on user choice.
	

	}


	// Validate user input. 
	

	// Display square or not status.


	return 0;   

}



/*************************************************************
***** Hello! Function (Program Purpose)                  *****
*************************************************************/
void hello()
{

	cout << "*********************************************************************";
	cout << "  /\/\    __ _   __ _ (_)  ___  / _\  __ _  _   _   __ _  _ __  ___ "
         <<  "/    \  / _` | / _` || | / __| \ \  / _` || | | | / _` || '__|/ _ \ "
         << "/ /\/\ \| (_| || (_| || || (__  _\ \| (_| || |_| || (_| || |  |  __/ "
         << "\/    \/ \__,_| \__, ||_| \___| \__/ \__, | \__,_| \__,_||_|   \___| "
         << "                |___/                   |_|                          ";
	cout << "*********************************************************************";
	cout << "***                !Enter sixteen positive integers                ***";
	cout << "***          and see if they make a (4 X 4) magic square!          ***";
	cout << "**********************************************************************\n\n";

}


/*************************************************************
***** DisplayMenu Function (hint: it displays a menu :)  *****
*************************************************************/
void DisplayMenu()
{
	cout << "\t********************************************************\n";
	cout << "\t***                Magic Square Menu                 ***\n"; 
	cout << "\t********************************************************\n";
	cout << "\t*** 1. About Magic Squares!                          ***\n";
	cout << "\t*** 2. Test 16 positive integers greater than 0!     ***\n";
	cout << "\t*** 3. Quit Program!                                 ***\n";
	cout << "\t********************************************************\n";
}


/*******************************************************************************
***** Eval Function: Evaluates user menu choices                          ******
*******************************************************************************/
void validate(int choice)
{
	
	if(choice == 1)
	{
		// About Magic Squares! User chose 1! 
		cout << "\t You Chose: " << choice << endl << endl;
		cout << "\t This choice tells you a little bit about Magic Squares! \n";
		cout << "\t More here....\n";
	}

	if(choice == 2)
	{
		cout << "\t You Chose: " << choice << endl << endl;
		square();

	}

	else
	{
		cout << "Bye! Have a nice day!";
				
	}
}


/*******************************************************************************
***** Square Function: Gets user input for the magic Square                *****
*******************************************************************************/
int square()
{
	cout << "\t***   Enter your first four positive integers,    ***\n";
	cout << "\t***  In the order you would like them to appear!  ***\n";
	cout << "\t*****************************************************\n";
	cin >> magic[0][0];
	cin >> magic[0][1];
	cin >> magic[0][2];
	cin >> magic[0][3];

	if(magic[ROWS][COLS] <= 0)
	{
		cout << "Please enter positive integers, greater than 0!\n";
		cin >> magic[0][0];
	    cin >> magic[0][1];
	    cin >> magic[0][2];
	    cin >> magic[0][3];
	}    

	else
	{
		cout << "The numbers you entered are: " << magic[0][0] << magic[0][1] << magic[0][2] << magic[0][3] << endl;

	    int sum = ( magic[0][0] + magic[0][1] + magic[0][2] + magic[0][3] );

        cout << "\tThe constant, m, all rows and collums must equal is: " << sum << "! \n";
	}

	// Get rest of values from user. 
	    cout << "Please enter then next four positive integers.\n";
		cin >> magic[1][0];
	    cin >> magic[1][1];
	    cin >> magic[1][2];
	    cin >> magic[1][3];

		if(magic[ROWS][COLS] <= 0)
	{
		cout << "Please enter positive integers, greater than 0!\n";
		cin >> magic[1][0];
	    cin >> magic[1][1];
	    cin >> magic[1][2];
	    cin >> magic[1][3];
	}    

	else
	{
		cout << "The numbers you entered are: " << magic[1][0] << magic[1][1] << magic[1][2] << magic[1][3] << endl;

		int sum2 = (magic[1][0] + magic[1][1] + magic[1][2] + magic[1][3]);

		if(sum != sum2)
		{
			cout << "Sorry this is not a magic square!\n";
			cout << sum2 << " is not equal to m: " << sum << "! \n";
		}

		else
		{
			cout << "Please enter the next four positive integers!\n";
			cin >> magic[2][0];
	        cin >> magic[2][1];
	        cin >> magic[2][2];
	        cin >> magic[2][3];

			if(magic[ROWS][COLS] <= 0)
	        {
		       cout << "Please enter positive integers, greater than 0!\n";
		       cin >> magic[2][0];
	           cin >> magic[2][1];
	           cin >> magic[2][2];
	           cin >> magic[2][3];
			}
			else
			{
				cout << "The numbers you entered are: " << magic[2][0] << magic[2][1] << magic[2][2] << magic[2][3] << endl;

		        int sum3 = (magic[2][0] + magic[2][1] + magic[2][2] + magic[2][3]);

				if(sum3 != sum)
				{
					cout << "I am sorry these numbers do not make a magic square! \n"
					cout << sum3 <<" is not equal to: " << sum << "! \n";
					
				}
				else 
				{
					
					cout << "Please enter the next four positive integers!\n";
			        cin >> magic[3][0];
	                cin >> magic[3][1];
	                cin >> magic[3][2];
	                cin >> magic[3][3];

			if(magic[ROWS][COLS] <= 0)
	        {
		       cout << "Please enter positive integers, greater than 0!\n";
		       cin >> magic[3][0];
	           cin >> magic[3][1];
	           cin >> magic[3][2];
	           cin >> magic[3][3];
			}
			else
			{
				cout << "The numbers you entered are: " << magic[3][0] << magic[3][1] << magic[3][2] << magic[3][3] << endl;
				
		        int sum4 = (magic[3][0] + magic[3][1] + magic[3][2] + magic[3][3]);
				if(sum4 != sum)
				{
					cout << "I am sorry the numbers you entered do not create a magic square!\n";
					cout << sum4 << " is not equal to: " << sum << "!\n";
				}
				else
				{
					// Diagonal Sums 
				int sum5 = (magic[0][0] + magic[1][1] + magic[2][2] + magic[3][3]);
				int sum6 = (magic[0][3] + magic[1][2] + magic[2][1] + magic[3][0]);

				
				   // Down Sum Check 

				}

			}
	


	