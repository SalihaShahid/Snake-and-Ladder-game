#pragma once
#include <iostream>//including input output stream
#include <iomanip>//including header file of manipulators 
#include <cstdlib>//including header file of cstandard library
#include <ctime>//including header file of ctime library
using namespace std;
void board(int position)//declaring a void function board()
{
	/*BODY OF FUNCTION*/
	int i, j;//declaring variables of integer type
	int board[10][10] = { {100,99,98,97,96,95,94,93,92,91},{89,88,87,86,85,84,83,82,81,90},{80,79,78,77,76,75,74,73,72,71},{61,62,63,64,65,66,67,68,69,70},{60,59,58,57,56,55,54,53,52,51},{41,42,43,44,45,46,47,48,49,50},{40,39,38,37,36,35,34,33,32,31},{21,22,23,24,25,26,27,28,29,30},{20,19,18,17,16,15,14,13,12,11},{1,2,3,4,5,6,7,8,9,10} };//declaring and initializing the 2d array board to create a board
	cout << "     _________________________________________________________________________________________\n" << endl;//statement to dosplay something on console
	for (i = 0; i < 10; i++)//using nested for loop
	{
		for (j = 0; j < 10; j++)//inner loop
		{
			if (board[i][j] == position)//using if else
			{
				cout << setw(8) << "|   " << "*";//statement to display something on console
			}
			else if (board[i][j] == 11 || board[i][j] == 44 || board[i][j] == 69 || board[i][j] == 78)//using else if
			{
				cout << setw(7) << "|L-" << board[i][j];//statement to display something on console
			}
			else if (board[i][j] == 22 || board[i][j] == 58 || board[i][j] == 77 || board[i][j] == 83 || board[i][j] == 98)//using else if
			{
				cout << setw(7) << "|S-" << board[i][j];//statement to display something on console
			}
			else if (board[i][j] == 100)//using else if
			{
				cout << setw(6) << "| " << board[i][j];//statement to display something on console
			}
			else if (board[i][j] >= 1 && board[i][j] < 3)//using else if
			{
				cout << setw(8) << "|   " << board[i][j];//statement to display something on console
			}
			else if (board[i][j] > 3 && board[i][j] <= 9)//using else if
			{
				cout << setw(8) << "|   " << board[i][j];//statement to display something on console
			}
			else if (board[i][j] == 3)//using else if
			{
				cout << setw(8) << "| L-" << board[i][j];//statement to display something on console
			}
			else
			{
				cout << setw(7) << "|  " << board[i][j];//statement to display something on console
				if (board[i][j] == 91 || board[i][j] == 90 || board[i][j] == 71 || board[i][j] == 70 || board[i][j] == 51 || board[i][j] == 50 || board[i][j] == 31 || board[i][j] == 30 || board[i][j] == 11 || board[i][j] == 10)//using one way selection
				{
					cout << "   |";//statement to display something on console
				}
			}
		}
		cout << endl;//to end a line
	}
	cout << "     _________________________________________________________________________________________" << endl;//statement to dosplay something on console
}
int toss()//declaring function
{
	srand(time(0));//seeding value of time to null
	return rand() % 4 + 1;//returns any number from 1 to 4
}
int turn()//declaring function
{
	srand(time(0));//seeding value of time to null
	return rand() % 6 + 1;//returns any number from 1 to 6
}
