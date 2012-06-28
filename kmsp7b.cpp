// Kristi M. Short
// COP1000.C01
// Project 7: Final Edit

/***********************************************************************************
******* Please note, I wrote a really over complicated program, which wont run *****
******* I know that this program is messy, and it's kinda wow what did         *****
******* you do there, but the only thing I can say for myself at this point is *****
******* ,it runs! Sorry for the wierd array variable addition!                 *****
***********************************************************************************/


#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 4;
const int COLS = 4;
int square[ROWS][COLS];
int i = 0, j = 0, x = 0, y = 0;

// Function prototypes
void hello();
void displaysquare(int square[][COLS], int rows);

// Global Variables


// Main Function
int main()
{

	// Main variables
	const int ROWS = 4;
	const int COLS = 4;
	const int LOT = 16;
	int square[ROWS][COLS];
	int i = 0, j = 0;
	

	// Hello Function (Program Purpose) 
	hello();
	

	// Get user input
	cout << "\tEnter 16 positive integers, separated by a space:\n " << endl;

	for(i = 0; i < 4; i++)
	{
			
		for (j = 0; j < 4; j++)
		{
			cin >> square[i][j];

			if( square[i][j] < 1)
			{
				cout << "\tPlease enter only positive integers!\n";
				cout << "\tPlease run the program again using valid input!\n\n";

				return 0;
			}

			
			
			
		}
                   
	}
	
	// Row 0 assigned and added here to use below.
	 int row00 = square[0][0]; 
	 int row01 = square[0][1]; 
	 int row02 = square[0][2];
	 int row03 = square[0][3];
	 int row0sum = ( row00 + row01 + row02 + row03);


	
	 cout << "\n\t**********************************************************************\n";
	 cout << "\t      M, is the constant assigned to the magic sum of the square.\n";
	 cout << "\t     If the rows, columns and diagonals of the square all add up,\n";
	 cout << "\t            to the constant m, or the sum of the first row, \n";
	 cout << "\t                 then the numbers make a magic square!\n";
	 cout << "\t     The sum of the first row is: " << row0sum << ", we will use this as m!" << endl;
	cout << endl;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
						
			
		}
		cout << endl;
	}

	displaysquare(square, 4);

	return 0;
}


/**************************************************************************************
********* Hello Function (Program Purpose): This program asks the user for  ***********
********* 16 positive integers and checks them for magic square status!     ***********
**************************************************************************************/
void hello()
{

	cout << "\t**********************************************************************\n";
	cout << "\t***                      !!!Magic Square!!!                        ***\n"
         << "\t***                                                                ***\n";
    cout << "\t**********************************************************************\n";
	cout << "\t***               !Enter sixteen positive integers!                ***\n";
	cout << "\t***         !And see if they make a (4 X 4) magic square!          ***\n";
	cout << "\t**********************************************************************\n\n";

}
/***************************************************************************************
********** Display Square function: Displays entered values,          ******************
********** displays the constant, m, and the sum of each row,         ******************
********** the sum of each collumn and the diagonals, and then        ******************
********** evaluates the entered values for square status             ******************
***************************************************************************************/
void displaysquare(int square[][COLS], int rows)
{
	for(int x = 0; x < ROWS; x++)
	{
		for(int y = 0; y < COLS; y++)
		{
			cout << setw(4) << "\t " << square[x][y] << " ";
		}
		cout << endl << endl;
	}

	// Elements: yea this is really messy. I know there is a better way to do this but my other program still wont run.
	// Row00 elements and addition, used as m. 
	 int row00 = square[0][0]; // column 0 element 0
	 int row01 = square[0][1]; // column 1 element 0
	 int row02 = square[0][2];
	 int row03 = square[0][3];
	 int row0sum = ( row00 + row01 + row02 + row03);

	 // Row11 elements and addition
	 int row10 = square[1][0]; // column 0 element 1
	 int row11 = square[1][1]; // column 1 element 1
	 int row12 = square[1][2];
	 int row13 = square[1][3];
	 int row1sum = ( row10 + row11 + row12 + row13);

	 // Row22 elements and addition
	 int row20 = square[2][0]; // column 0 element 2
	 int row21 = square[2][1]; // column 1 element 2
	 int row22 = square[2][2];
	 int row23 = square[2][3];
	 int row2sum = ( row20 + row21 + row22 + row23);

	 // Row33 elements and addition
	 int row30 = square[3][0]; // column 0 element 3
	 int row31 = square[3][1]; // column 1 element 3
	 int row32 = square[3][2];
	 int row33 = square[3][3];
	 int row3sum = ( row30 + row31 + row32 + row33 );

	 // Column Sums!
	 int col0sum = ( row00 + row10 + row20 + row30);
	 int col1sum = ( row01 + row11 + row21 + row31);
	 int col2sum = ( row02 + row12 + row22 + row32);
	 int col3sum = ( row03 + row13 + row23 + row33);

	 //Diagonal Sums!
	 int diag1 = ( row00 + row11 + row22 + row33);
	 int diag2 = ( row30 + row21 + row12 + row03);


	 cout << "\t*The sum of the first row is: " << row0sum << endl;
	 cout << "\t*The sum of the second row is: " << row1sum << endl;
	 cout << "\t*The sum of the third row is: " << row2sum << endl;
	 cout << "\t*The sum of the fourth row is: " << row3sum << endl << endl;
	 cout << "\t*The sum of the first column is: " << col0sum << endl;
	 cout << "\t*The sum of the second column is: " << col1sum << endl;
	 cout << "\t*The sum of the third column is: " << col2sum << endl;
	 cout << "\t*The sum of the fourth column is: " << col3sum << endl << endl;
	 cout << "\t*The sum of the first diagonal is: " << diag1 << endl;
	 cout << "\t*The sum of the second diagonal is: " << diag2 << endl;

	
	  if(row0sum != row1sum)
	 {
		cout << "\n\t \n";
	 }
	 else
	 {
		 if(row1sum != row2sum)
			cout << "\n\t  \n";

		 else
		 {
			 if(row2sum != row3sum)
				 cout << "\n\t \n\n\n";
			 
		 }
	 }
	 if (row0sum == row1sum && row1sum == row2sum && row2sum == row3sum && col0sum == row3sum && col1sum == col0sum && col1sum == col2sum && col2sum == col3sum && row0sum == diag1 && diag1 == diag2)
		 cout << "\n\t!Yay! Magic Square!\n"; 
	 else
		 cout << "\n\tI am sorry these values do not create a magic square!\n\n";




}