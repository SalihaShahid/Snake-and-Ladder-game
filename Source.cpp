#include <iostream>//including header file of input output stream
#include <cstring>//including header file of cstring library
#include <cstdlib>//including header file of cstandard library
#include <ctime>//including header file of ctime library
#include <iomanip>//including header file of manipulators 
#include "SnakeAndLadder_Functions.h"//including user-defined header file containing some user defined functions used in game
#include <windows.h>//including header file of windows.h library
using namespace std;//using standard namespaces
int main()//start of main function
{
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t****************************************\n";//statement to display something on console
	cout << "\t\t\t\t\t\t\t\t*                                      *\n";//statement to display something on console
	cout << "\t\t\t\t\t\t\t\t*                                      *\n";//statement to display something on console
	cout << "\t\t\t\t\t\t\t\t*                                      *\n";//statement to display something on console
	cout << "\t\t\t\t\t\t\t\t*                                      *\n";//statement to display something on console
	cout << "\t\t\t\t\t\t\t\t*                                      *\n";//statement to display something on console
	cout << "\t\t\t\t\t\t\t\t*   WELCOME TO SNAKE AND LADDER GAME   *\n";//statement to display something on console
	cout << "\t\t\t\t\t\t\t\t*                                      *\n";//statement to display something on console
	cout << "\t\t\t\t\t\t\t\t*                                      *\n";//statement to display something on console
	cout << "\t\t\t\t\t\t\t\t*                                      *\n";//statement to display something on console
	cout << "\t\t\t\t\t\t\t\t*                                      *\n";//statement to display something on console
	cout << "\t\t\t\t\t\t\t\t*                                      *\n";//statement to display something on console
	cout << "\t\t\t\t\t\t\t\t****************************************\n";//statement to display something on console
	Sleep(5000);//setting timer to execute next statement after 5 seconds
	system("cls");//clears screen
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//RULES TO PLAY GAME
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "\t\t\t\tRULES TO PLAY GAME" << endl;//statement to display something on console
	cout << endl;//statemnt to end a line
	cout << "1. Four players can play game." << endl;//statement to display something on console
	cout << "2. You have to enter p to start game." << endl;//statement to display something on console
	cout << "3. Than all the players have to enter their names" << endl;//statement to display something on console
	cout << "4. Then the turn of each player will be displayed and each player has to enter any character to do his turn." << endl;//statement to display something on console
	cout << "5. Any player can start game when he gets 6" << endl;//statement to display something on console
	cout << "6. If two players are at same position then the new player will remain at the same position and other player has to play from begining" << endl;//statement to display something on console
	cout << "7. There are 5 ladders and 5 snakes in game." << endl;//statement to display something on console
	cout << "8. The plyer who will reach at 100th position first will be the winner with 1st position." << endl;//statement to display something on console
	cout << "9. The player who will reach at 100th position after 1st winner will be the winner with 2nd position." << endl;//statement to display something on console
	cout << "10. The player who will reach at 100th position after 2nd winner will get 3rd position." << endl;//statement to display something on console
	cout << "11. The remaining player will lose the game." << endl;//statement to display something on console
	cout << "12. Once the game has finished you can continue playing by entering any number from 1 to 5." << endl;//statement to display something on console
	Sleep(10000);//setting timer to execute next statement after 10 seconds
	system("cls");//clears screen
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//CREDITS
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "\t\t\t\t\tCREDITS\n\n";//statement to display something on console
	cout << "This game is created by SALIHA SHAHID." << endl;//statement to display something on console
	Sleep(5000);//setting timer to execute next statement after 5 seconds
	system("cls");//clears screen
	char playGame;//declaring variable of character type
	bool exit = false;//declaring variables of boolean type
	cout << "Enter p to play game: ";//output statement asking user to enter p to play game
	cin >> playGame;//input statement to take input
	while (playGame == 'p')//using while loop it will run only in case user entered p 
	{
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//taking names of players
		////////////////////////////////////////////////////////////////////////////////////////////////////////////
		string nameOfPlayer1, nameOfPlayer2, nameOfPlayer3, nameOfPlayer4;//declaring variables of string type
		cout << "Enter name of players." << endl;//output statement displaying message to enter name of players
		cout << "Enter name of 1st player: ";//output statement asking 1st player to enter name
		cin >> nameOfPlayer1;//input statement getting name of 1st palyer
		cout << "Enter name of 2nd player: ";//output statement asking 2nd player to enter name
		cin >> nameOfPlayer2;//input statement getting name of 2nd player
		cout << "Enter name of 3rd player: ";//output statement asking 3rd player to enter name
		cin >> nameOfPlayer3;//input statement getting nanme of 3rd player
		cout << "Enter name of 4th player: ";//output statement  asking 4th player to enter name
		cin >> nameOfPlayer4;//input statement getting name of 4th player
		int turn1, turn2, turn3, turn4;//declaring variables of integer type
		string p1, p2, p3, p4;//declaring variables of string type
		turn1 = toss();//initializing value of turn1 with toss() here toss() is a user defined function in user defined header file named SnakeAndLadder_Functions.h
		bool equal = false;//declaring variables of boolean type
		switch (turn1)//using switch statement
		{
		case 1://this case will be executed only when the expression in switch evaluates 1
		{
			p1 = nameOfPlayer1;//assigning nameOfPlayer1 to p1
			cout << "1st turn is of " << p1 << endl;//statement to display something on console
			break;//using break statement
		}
		case 2://this case will be executed only when the expression in switch evaluates 2
		{
			p1 = nameOfPlayer2;//assigning nameOfPlayer2 to p1
			cout << "1st turn is of " << p1 << endl;//statement to display something on console
			break;//using break statement
		}
		case 3://this case will be executed only when the expression in switch evaluates 3
		{
			p1 = nameOfPlayer3;//assigning nameOfPlayer3 to p1
			cout << "1st turn is of " << p1 << endl;//statement to display something on console
			break;//using break statement
		}
		case 4://this case will be executed only when the expression in switch evaluates 4
		{
			p1 = nameOfPlayer4;//assigning nameOfPlayer4 to p1
			cout << "1st turn is of " << p1 << endl;//statement to display something on console
			break;//using break statement
		}
		}
		turn2 = toss();//initializing value of turn2 with toss() here toss() is a user defined function in user defined header file named SnakeAndLadder_Functions.h
		if (turn2 == turn1)//using one way selection
		{
			while (!equal)//using while loop
			{
				turn2 = toss();//initializing value of turn2 with toss() here toss() is a user defined function in user defined header file named SnakeAndLadder_Functions.h
				if (turn2 != turn1)//using one way selection statement
				{
					equal = true;//initializing true to true
				}
			}
		}
		switch (turn2)//using switch statement
		{
		case 1://this case will be executed only when the expression in switch evaluates 1
		{
			p2 = nameOfPlayer1;//assigning nameOfPlayer1 to p2
			cout << "2nd turn is of " << p2 << endl;//statement to display something on console
			break;//using break statement
		}
		case 2://this case will be executed only when the expression in switch evaluates 2
		{
			p2 = nameOfPlayer2;//assigning nameOfPlayer2 to p2
			cout << "2nd turn is of " << p2 << endl;//statement to display something on console
			break;//using break statement
		}
		case 3://this case will be executed only when the expression in switch evaluates 3
		{
			p2 = nameOfPlayer3;//assigning nameOfPlayer3 to p2
			cout << "2nd turn is of " << p2 << endl;//statement to display something on console
			break;//using break statement
		}
		case 4://this case will be executed only when the expression in switch evaluates 4
		{
			p2 = nameOfPlayer4;//assigning nameOfPlayer4 to p2
			cout << "2nd turn is of " << p2 << endl;//statement to display something on console
			break;//using break statement
		}
		}
		turn3 = toss();//initializing value of turn3 with toss() here toss() is a user defined function in user defined header file named SnakeAndLadder_Functions.h
		if (turn3 == turn2 || turn3 == turn1)//using one way selection
		{
			equal = false;//initialtizing true to equal
			while (!equal)//using while loop
			{
				turn3 = toss();//initializing value of turn3 with toss() here toss() is a user defined function in user defined header file named SnakeAndLadder_Functions.h
				if (turn3 != turn2 && turn3 != turn1)//using one way selection 
				{
					equal = true;//initializing true to equal
				}
			}
		}
		switch (turn3)//using switch statement
		{
		case 1://this case will be executed only when the expression in switch evaluates 1
		{
			p3 = nameOfPlayer1;//assigning nameOfPlayer1 to p3
			cout << "3rd turn is of " << p3 << endl;//statement to display something on console
			break;//using break statement
		}
		case 2://this case will be executed only when the expression in switch evaluates 2
		{
			p3 = nameOfPlayer2;//assigning nameOfPlayer2 to p3
			cout << "3rd turn is of " << p3 << endl;//statement to display something on console
			break;//using break statement
		}
		case 3://this case will be executed only when the expression in switch evaluates 3
		{
			p3 = nameOfPlayer3;//assigning nameOfPlayer3 to p3
			cout << "3rd turn is of " << p3 << endl;//statement to display something on console
			break;//using break statement
		}
		case 4://this case will be executed only when the expression in switch evaluates 4
		{
			p3 = nameOfPlayer4;//assigning nameOfPlayer4 to p3
			cout << "3rd turn is of " << p3 << endl;//statement to display something on console
			break;//using break statement
		}

		}
		turn4 = toss();//initializing value of turn4 with toss() here toss() is a user defined function in user defined header file named SnakeAndLadder_Functions.h
			if (turn4 == turn3 || turn4 == turn2 || turn4 == turn1)//using one way selection
			{
				equal = false;//initializing false to equal
				while (!equal)//using while loop
				{
					turn4 = toss();//initializing value of turn4 with toss() here toss() is a user defined function in user defined header file named SnakeAndLadder_Functions.h
					if (turn4 != turn3 && turn4 != turn2 && turn4 != turn1)//using one way selection
					{
						equal = true;//initializing true to equal
					}
				}
			}
			switch (turn4)//using switch statement
			{
			case 1://this case will be executed only when the expression in switch evaluates 1
			{
				p4 = nameOfPlayer1;//assigning nameOfPlayer1 to p4
				cout << "4th turn is of " << p4 << endl;//statement to display something on console
				break;//using break statement
			}
			case 2://this case will be executed only when the expression in switch evaluates 2
			{
				p4 = nameOfPlayer2;//assigning nameOfPlayer2 to p4
				cout << "4th turn is of " << p4 << endl;//statement to display something on console
				break;//using break statement
			}
			case 3://this case will be executed only when the expression in switch evaluates 3
			{
				p4 = nameOfPlayer3;//assigning nameOfPlayer3 to p4
				cout << "4th turn is of " << p4 << endl;//statement to display something on console
				break;//using break statement
			}
			case 4://this case will be executed only when the expression in switch evaluates 4
			{
				p4 = nameOfPlayer4;//assigning nameOfPlayer4 to p4
				cout << "4th turn is of " << p4 << endl;//statement to display something on console
				break;//using break statement
			}
			}
		Sleep(3000);//setting timer to execute next statement after 3 seconds
		system("cls");//clears screen
		cout << "\t\tLADDERS\t\t" << endl;//statement showing ladders on console
		cout << "3-25\n11-46\n44-79\n69-74\n78-99" << endl;//statement showing details of ladders on console
		cout << "\t\tSNAKES\t\t" << endl;//statements showing snakes on console
		cout << "22-6\n58-26\n77-15\n83-65\n98-56" << endl;//statement showing details of snakes
		Sleep(3000);//setting timer to execute next statement after 3 seconds
		system("cls");//clears screen
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//start of game 
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////
		bool endOfGame = false, found;//declaring variables of boolean type 
		char t1, t2, t3, t4;//declaring variables of character type 
		int scoreOfPlayer1 = 0, scoreOfPlayer2 = 0, scoreOfPlayer3 = 0, scoreOfPlayer4 = 0;//declaring variables of integer type
		int move1, move2, move3, move4;//declaring variables of integer type 
		char begin1 = 'b', begin2 = 'b', begin3 = 'b', begin4 = 'b';//declaring variables of character type
		int s1 = 0, s2 = 0, s3 = 0, s4 = 0;//declaring variables of integer type
		int times1 = 0, times2 = 0, times3 = 0, times4 = 0;//declaring variables of integer type
		while (!endOfGame)//using while loop
		{
			if (begin1 == 'b')//using if else
			{
				cout << p1 << " enter a character to do your turn: ";//statement to ask player to enter any character to do his turn
				cin >> t1;//getting character from player 
				move1 = turn();//initializing move1 with user defined function turn defined in user defined SnakeAndLadder_Functions.h header file
				cout << "YOU GOT " << move1 << endl;//statement to display something on console
				if (move1 == 6)//using if-else
				{
					begin1 = 'c';//initializing begin1 with c
					scoreOfPlayer1 = scoreOfPlayer1 + move1;//calculating score of 1st player it gives the position of player on board
					found = false;//initializing found with false
					while (!found)//using while loop
					{
						cout << "WOW, You got 6 enter a character to do your turn again." << endl;//statement displaying message to player that he got 6 and now he has a chance to do his turn again
						cout << p1 << " enter a character to do your turn: ";//statement to ask player to enter any character to do his turn
						cin >> t1;//getting character from player 
						move1 = turn();//initializing move1 with user defined function turn defined in user defined SnakeAndLadder_Functions.h header file
						cout << "YOU GOT " << move1 << endl;//statement to display something on console
						scoreOfPlayer1 = scoreOfPlayer1 + move1;//calculating score of player
						if (move1 != 6)//using one way selection statement to check whether move1 is 6 or not
						{
							found = true;//initializing found with true
						}
					}
					cout << "POSITION OF PLAYER IS " << scoreOfPlayer1 << endl;//statement to display something on console
					board(scoreOfPlayer1);//to display board on console
				}
				else//will be executed in case condition in if is false
				{
					cout << "YOU CAN'T MOVE UNTIL YOU DON'T GET 6." << endl;//statement to display something on console
				}
			}
			else if (begin1 == 'c')//using else-if
			{
				cout << p1 << " enter a character to do your turn: ";//statement to ask player to enter any character to do his turn
				cin >> t1;//getting character from player 
				s1 = 0;//initializing s1 with 0
				move1 = turn();//initializing value of turn1 to move1 here turn1() is function in SnakeAndLadder_Functions.h header file
				cout << "YOU GOT " << move1 << endl;//statement to display something on console
				if (move1 == 6)//using if-else to check if there is a 6 or not
				{
					s1 = s1 + move1;//calculating position of player
					scoreOfPlayer1 = scoreOfPlayer1 + move1;//calculating score of player
					found = false;//assigning false to found
					while (!found)//using while loop
					{
						cout << "WOW, You got 6 enter a character to do your turn again." << endl;//statement displaying message to player that he got 6 and now he has a chance to do his turn again
						cout << p1 << " enter a character to do your turn: ";//statement to ask player to enter any character to do his turn
						cin >> t1;//getting character from player 
						move1 = turn();//initializing move1 with user defined function turn defined in user defined SnakeAndLadder_Functions.h header file
						cout << "YOU GOT " << move1 << endl;//statement to display something on console
						s1 = s1 + move1;//calculating position of player
						scoreOfPlayer1 = scoreOfPlayer1 + move1;//calculating score of player
						if (scoreOfPlayer1 > 100)//using if else
						{
							cout << "SORRY,  YOU CANT TAKE ANY MOVE UNTIL YOUR POSITION IS CROSSING 100." << endl;//statement to display something on console
							scoreOfPlayer1 = scoreOfPlayer1 - s1;//calculating position of player
							s1 = 0;//initializing s1 with 0
						}
						else if (scoreOfPlayer1 == 100)//else if will be executed only when condition in if part is false
						{
							cout << "YOU WON THE GAME." << endl;//statement to display something on console
							begin1 = 'n';//initializing begin1 with n
							times1 = times1 + 1;//calculating number of tme player won game
						}
						if (move1 != 6)//using one way selection statement to check whether move1 is 6 or not
						{
							found = true;//initializing found with true
						}
					}
				}
				else//will be executed only when condition in if part is false
				{
					s1 = s1 + move1;//calculating position of player
					scoreOfPlayer1 = scoreOfPlayer1 + move1;//calculating score of player
					if (scoreOfPlayer1 > 100)//using if else
					{
						cout << "SORRY,  YOU CANT TAKE ANY MOVE UNTIL YOUR POSITION IS CROSSING 100." << endl;//statement to display something on console
						scoreOfPlayer1 = scoreOfPlayer1 - s1;//calculating score of player and it also indicates position of player
						s1 = 0;//initializing s1 with 0
					}
					else if (scoreOfPlayer1 == 100)//else if will be executed only when condition in if part is false
					{
						cout << "YOU WON THE GAME." << endl;//statement to display something on console
						begin1 = 'n';//initializing begin1 with n
						times1 = times1 + 1;//calculating number of tme player won game
					}
				}
				switch (scoreOfPlayer1)//using switch statement
				{
				case 3://this case will be executed only when the expression in switch evaluates 3
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer1 = scoreOfPlayer1 + (25 - 3);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 11://this case will be executed only when the expression in switch evaluates 11
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer1 = scoreOfPlayer1 + (46 - 11);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 44://this case will be executed only when the expression in switch evaluates 44
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer1 = scoreOfPlayer1 + (79 - 44);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 69://this case will be executed only when the expression in switch evaluates 69
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer1 = scoreOfPlayer1 + (74 - 69);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 78://this case will be executed only when the expression in switch evaluates 78
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer1 = scoreOfPlayer1 + (99 - 78);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				}
				switch (scoreOfPlayer1)//using switch statement
				{
				case 22://this case will be executed only when the expression in switch evaluates 22
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer1 = scoreOfPlayer1 - (22 - 6);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 58://this case will be executed only when the expression in switch evaluates 58
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer1 = scoreOfPlayer1 - (28 - 26);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 77://this case will be executed only when the expression in switch evaluates 77
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer1 = scoreOfPlayer1 - (77 - 15);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 83://this case will be executed only when the expression in switch evaluates 83
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer1 = scoreOfPlayer1 - (83 - 65);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 98://this case will be executed only when the expression in switch evaluates 98
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer1 = scoreOfPlayer1 - (98 - 56);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				}
				if (scoreOfPlayer1 == scoreOfPlayer4 && scoreOfPlayer4 < 100)//using if else
				{
					cout << p4 << " HAS TO PLAY FROM BEGINING!" << endl;//statement to display something on console
					scoreOfPlayer4 = 0;//initializing scoreOfPlayer4 with 0
					begin4 = 'b';//initializing begin4 with b
				}
				else if (scoreOfPlayer1 == scoreOfPlayer3 && scoreOfPlayer3 < 100)//else if will be executed only when condition in if part is evaluated false
				{
					cout << p3 << " HAS TO PLAY FROM BEGINING!" << endl;//statement to display something on console
					scoreOfPlayer3 = 0;//initializing scoreOfPlayer3 with 0
					begin3 = 'b';//initializing begin3 with b
				}
				else if (scoreOfPlayer1 == scoreOfPlayer2 && scoreOfPlayer2 < 100)//else if will be executed only when condition in if part is evaluated false
				{
					cout << p2 << " HAS TO PLAY FROM BEGINING!" << endl;//statement to display something on console
					scoreOfPlayer2 = 0;//initializing scoreOfPlayer2 with 0
					begin2 = 'b';//initializing begin2 with b
				}
				cout << "POSITION OF PLAYER IS " << scoreOfPlayer1 << endl;//statement to display something on console
				board(scoreOfPlayer1);//user-defined function board to toss the turns in players included in SnakeAndLadder_Functions.h
			}
			Sleep(3000);//setting timer to execute next statement after 3 seconds
			system("cls");//clears screen
			if (begin2 == 'b')//using if else
			{
				cout << p2 << " enter a character to do your turn: ";//statement to ask player to enter any character to do his turn
				cin >> t2;//getting character from player 
				move2 = turn();//initializing move2 with user defined function turn defined in user defined SnakeAndLadder_Functions.h header file
				cout << "YOU GOT " << move2 << endl;//statement to display something on console
				if (move2 == 6)//using if else
				{
					begin2 = 'c';//initializing begin2 with c
					scoreOfPlayer2 = scoreOfPlayer2 + move2;//calculates score ofplayer and tells his position
					found = false;//assigning false to found
					while (!found)//using while loop
					{
						cout << "WOW, You got 6 enter a character to do your turn again." << endl;//statement displaying message to player that he got 6 and now he has a chance to do his turn again
						cout << p2 << " enter a character to do your turn: ";//statement to ask player to enter any character to do his turn
						cin >> t2;//getting character from player 
						move2 = turn();//initializing move2 with user defined function turn defined in user defined SnakeAndLadder_Functions.h header file
						cout << "YOU GOT " << move2 << endl;//statement to display something on console
						scoreOfPlayer2 = scoreOfPlayer2 + move2;//calculating score of player
						if (move2 != 6)//using one way selection statement to check whether move2 is 6 or not
						{
							found = true;//initializing found with true
						}
					}
					cout << "POSITION OF PLAYER IS " << scoreOfPlayer2 << endl;//statement to display something on console
					board(scoreOfPlayer2);//to display board
				}
				else//else part will be executed only when condition in if part is evaluated as false
				{
					cout << "YOU CAN'T MOVE UNTIL YOU DON'T GET 6." << endl;//statement to display something on console
				}
			}
			else if (begin2 == 'c')//else if part will be executed only in case condition in if part is evaluated false
			{
				cout << p2 << " enter a character to do your turn: ";//statement to ask player to enter any character to do his turn
				cin >> t2;//getting character from player 
				s2 = 0;
				move2 = turn();//initializing value of turn2 to move2 here turn2() is function in SnakeAndLadder_Functions.h header file
				cout << "YOU GOT " << move2 << endl;//statement to display something on console
				if (move2 == 6)//using if-else to check if there is a 6 or not
				{
					s2 = s2 + move2;//calculating position of player
					scoreOfPlayer2 = scoreOfPlayer2 + move2;//calculating score of player
					found = false;//assigning false to found
					while (!found)//using while loop
					{
						cout << "WOW, You got 6 enter a character to do your turn again." << endl;//statement displaying message to player that he got 6 and now he has a chance to do his turn again
						cout << p2 << " enter a character to do your turn: ";//statement to ask player to enter any character to do his turn
						cin >> t2;//getting character from player 
						move2 = turn();//initializing move1 with user defined function turn defined in user defined SnakeAndLadder_Functions.h header file
						cout << "YOU GOT " << move2 << endl;//statement to display something on console
						s2 = s2 + move2;//calculating position of player
						scoreOfPlayer2 = scoreOfPlayer2 + move2;//calculating score of player
						if (scoreOfPlayer2 > 100)//using if else
						{
							cout << "SORRY,  YOU CANT TAKE ANY MOVE UNTIL YOUR POSITION IS CROSSING 100." << endl;//statement to display something on console
							scoreOfPlayer2 = scoreOfPlayer2 - s2;//calculating score of player and position
							s2 = 0;//initializing s2 with 0
						}
						else if (scoreOfPlayer2 == 100)//else if will be executed only in case condion in if part is evaluated as false
						{
							cout << "YOU WON THE GAME." << endl;//statement to display something on console
							begin2 = 'n';//initializing begin2 with n
							times2 = times2 + 1;//calculating number of tme player won game
						}
						if (move2 != 6)//using one way selection statement to check whether move2 is 6 or not
						{
							found = true;//initializing found with true
						}
					}
				}
				else//else part will be executed only when condition in if part is false
				{
					s2 = s2 + move2;//calulating position of player
					scoreOfPlayer2 = scoreOfPlayer2 + move2;//calculating score and position of player
					if (scoreOfPlayer2 > 100)//using if else
					{
						cout << "SORRY,  YOU CANT TAKE ANY MOVE UNTIL YOUR POSITION IS CROSSING 100." << endl;//statement to display something on console
						scoreOfPlayer2 = scoreOfPlayer2 - s2;//calculating score and position of player
						s2 = 0;//initializing s1 with 0
					}
					else if (scoreOfPlayer2 == 100)//else if will be executed only when condition in if part is evaluated as false
					{
						cout << "YOU WON THE GAME." << endl;//statement to display something on console
						begin2 = 'n';//initializing begin2 with n
						times2 = times2 + 1;//calculating number of tme player won game
					}
				}
				switch (scoreOfPlayer2)//using switch statement
				{
				case 3://this case will be executed only when the expression in switch evaluates 3
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer2 = scoreOfPlayer2 + (25 - 3);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 11://this case will be executed only when the expression in switch evaluates 11
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer2 = scoreOfPlayer2 + (46 - 11);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 44://this case will be executed only when the expression in switch evaluates 44
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer2 = scoreOfPlayer2 + (79 - 44);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 69://this case will be executed only when the expression in switch evaluates 69
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer2 = scoreOfPlayer2 + (74 - 69);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 78://this case will be executed only when the expression in switch evaluates 78
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer2 = scoreOfPlayer2 + (99 - 78);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				}
				switch (scoreOfPlayer2)//using switch statement
				{
				case 22://this case will be executed only when the expression in switch evaluates 22
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer2 = scoreOfPlayer2 - (22 - 6);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 58://this case will be executed only when the expression in switch evaluates 58
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer2 = scoreOfPlayer2 - (28 - 26);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 77://this case will be executed only when the expression in switch evaluates 77
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer2 = scoreOfPlayer2 - (77 - 15);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 83://this case will be executed only when the expression in switch evaluates 83
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer2 = scoreOfPlayer2 - (83 - 65);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 98://this case will be executed only when the expression in switch evaluates 98
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer2 = scoreOfPlayer2 - (98 - 56);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				}
				if (scoreOfPlayer2 == scoreOfPlayer1 && scoreOfPlayer1 < 100)//using if else
				{
					cout << p1 << " HAS TO PLAY FROM BEGINING!" << endl;//statement to display something on console
					scoreOfPlayer1 = 0;//initializing scoreOfPlayer1 with 0
					begin1 = 'b';//initializing begin1 with b
				}
				else if (scoreOfPlayer2 == scoreOfPlayer3 && scoreOfPlayer3 < 100)//else if will be executed only when condition in if part is false
				{
					cout << p3 << " HAS TO PLAY FROM BEGINING!" << endl;//statement to display something on console
					scoreOfPlayer3 = 0;//initializing scoreOfPlayer3 with 0
					begin3 = 'b';//initializing begin3 with b
				}
				else if (scoreOfPlayer2 == scoreOfPlayer4 && scoreOfPlayer4 < 100)//else if will be executed only when condition in if part is false
				{
					cout << p4 << " HAS TO PLAY FROM BEGINING!" << endl;//statement to display something on console
					scoreOfPlayer4 = 0;//initializing scoreOfPlayer4 with 0
					begin4 = 'b';//initializing begin4 with b
				}
				cout << "POSITION OF PLAYER IS " << scoreOfPlayer2 << endl;//statement to display something on console

				board(scoreOfPlayer2);//user-defined function board to toss the turns in players included in SnakeAndLadder_Functions.h
			}
			Sleep(3000);//setting timer to execute next statement after 3 seconds
			system("cls");//clears screen
			if (begin3 == 'b')
			{
				cout << p3 << " enter a character to do your turn: ";//statement to ask player to enter any character to do his turn
				cin >> t3;//getting character from player 
				move3 = turn();//initializing move3 with user defined function turn defined in user defined SnakeAndLadder_Functions.h header file
				cout << "YOU GOT " << move3 << endl;//statement to display something on console
				if (move3 == 6)//using if else
				{
					begin3 = 'c';//initializing begin 3 with c
					scoreOfPlayer3 = scoreOfPlayer3 + move3;//calculating score and position of player
					found = false;//assigning false to found
					while (!found)//using while loop
					{
						cout << "WOW, You got 6 enter a character to do your turn again: " << endl;//statement displaying message to player that he got 6 and now he has a chance to do his turn again
						cout << p3 << " enter a character to do your turn: ";//statement to ask player to enter any character to do his turn
						cin >> t3;//getting character from player 
						move3 = turn();//initializing move3 with user defined function turn defined in user defined SnakeAndLadder_Functions.h header file
						cout << "YOU GOT " << move3 << endl;//statement to display something on console
						scoreOfPlayer3 = scoreOfPlayer3 + move3;//calculating score of player
						if (move3 != 6)//using one way selection statement to check whether move3 is 6 or not
						{
							found = true;//initializing found with true
						}
					}
					cout << "POSITION OF PLAYER IS " << scoreOfPlayer3 << endl;//statement to display something on console
					board(scoreOfPlayer3);//to display board
				}
				else//else part will be executed only when condition in if part is false
				{
					cout << "YOU CAN'T MOVE UNTIL YOU DON'T GET 6." << endl;//statement to display something on console
				}
			}
			else if (begin3 == 'c')//else if will be executed only when condition in if part is false
			{
				s3 = 0;//initializing s3 with 0
				cout << p3 << " enter a character to do your turn." << endl;//statement to ask player to enter any character to do his turn
				cin >> t3;//getting character from player 
				move3 = turn();//initializing move3 with user defined function turn defined in user defined SnakeAndLadder_Functions.h header file
				cout << "YOU GOT " << move3 << endl;//statement to display something on console
				if (move3 == 6)//using if-else to check if there is a 6 or not
				{
					s3 = s3 + move3;//calculating position of player
					scoreOfPlayer3 = scoreOfPlayer3 + move3;//calculating score of player
					found = false;//assigning false to found
					while (!found)//using while loop
					{
						cout << "WOW, You got 6 enter a character to do your turn again: " << endl;//statement displaying message to player that he got 6 and now he has a chance to do his turn again
						cout << p3 << " enter a character to do your turn: ";//statement to ask player to enter any character to do his turn
						cin >> t3;//getting character from player 
						move3 = turn();//initializing move3 with user defined function turn defined in user defined SnakeAndLadder_Functions.h header file
						cout << "YOU GOT " << move3 << endl;//statement to display something on console
						s3 = s3 + move3;//calculating position of player
						scoreOfPlayer3 = scoreOfPlayer3 + move3;//calculating score of player
						if (scoreOfPlayer3 > 100)//using if else
						{
							cout << "SORRY,  YOU CANT TAKE ANY MOVE UNTIL YOUR POSITION IS CROSSING 100." << endl;//statement to display something on console
							scoreOfPlayer3 = scoreOfPlayer3 - s3;//calculating score and position of player
							s3 = 0;//initializing s3 with 0
						}
						else if (scoreOfPlayer3 == 100)//else if will be executed only when condition in if part is false
						{
							cout << "YOU WON THE GAME." << endl;//statement to display something on console
							begin3 = 'n';//initializing begin3 with n
							times3 = times3 + 1;//calculating number of tme player won game
						}
						if (move3 != 6)//using one way selection statement to check whether move3 is 6 or not
						{
							found = true;//initializing found with true
						}
					}
				}
				else//else part will be executed only when condition in if part is false
				{
					s3 = s3 + move3;//calculating position of player
					scoreOfPlayer3 = scoreOfPlayer3 + move3;//calculating score of player
					if (scoreOfPlayer3 > 100)//using if else
					{
						cout << "SORRY,  YOU CANT TAKE ANY MOVE UNTIL YOUR POSITION IS CROSSING 100." << endl;//statement to display something on console
						scoreOfPlayer3 = scoreOfPlayer3 - s3;//calculating score and position of player
						s3 = 0;//initializing s3 with 0
					}
					else if (scoreOfPlayer3 == 100)//else if will be executed only when condition in if part is false
					{
						cout << "YOU WON THE GAME." << endl;//statement to display something on console
						begin3 = 'n';//initializing begin3 with n
						times3 = times3 + 1;//calculating number of tme player won game
					}
				}
				switch (scoreOfPlayer3)//using switch statement
				{
				case 3://this case will be executed only when the expression in switch evaluates 3
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer3 = scoreOfPlayer3 + (25 - 3);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 11://this case will be executed only when the expression in switch evaluates 11
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer3 = scoreOfPlayer3 + (46 - 11);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 44://this case will be executed only when the expression in switch evaluates 44
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer3 = scoreOfPlayer3 + (79 - 44);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 69://this case will be executed only when the expression in switch evaluates 69
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer3 = scoreOfPlayer3 + (74 - 69);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 78://this case will be executed only when the expression in switch evaluates 78
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer3 = scoreOfPlayer3 + (99 - 78);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				}
				switch (scoreOfPlayer3)//using switch statement
				{
				case 22://this case will be executed only when the expression in switch evaluates 22
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer3 = scoreOfPlayer3 - (22 - 6);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 58://this case will be executed only when the expression in switch evaluates 58
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer3 = scoreOfPlayer3 - (28 - 26);//calculating score of player
					system("color C0");
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 77://this case will be executed only when the expression in switch evaluates 77
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer3 = scoreOfPlayer3 - (77 - 15);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 83://this case will be executed only when the expression in switch evaluates 83
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer3 = scoreOfPlayer3 - (83 - 65);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 98://this case will be executed only when the expression in switch evaluates 98
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer3 = scoreOfPlayer3 - (98 - 56);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				}
				if (scoreOfPlayer3 == scoreOfPlayer2 && scoreOfPlayer2 < 0)//using if else
				{
					cout << p2 << " HAS TO PLAY FROM BEGINING!" << endl;//statement to display something on console
					scoreOfPlayer2 = 0;//initalizing scoreOfPlayer2 with 0
					begin2 = 'b';//initializing begin2 with b
				}
				else if (scoreOfPlayer3 == scoreOfPlayer1 && scoreOfPlayer1 < 0)//else if will be executed only when condition in if part is false
				{
					cout << p1 << " HAS TO PLAY FROM BEGINING!" << endl;//statement to display something on console
					scoreOfPlayer1 = 0;//initalizing scoreOfPlayer1 with 0
					begin1 = 'b';//initializing begin1 with b
				}
				else if (scoreOfPlayer3 == scoreOfPlayer4 && scoreOfPlayer4 < 0)//else if will be executed only when condition in if part is false
				{
					cout << p4 << " HAS TO PLAY FROM BEGINING!" << endl;//statement to display something on console
					scoreOfPlayer4 = 0;//initalizing scoreOfPlayer4 with 0
					begin4 = 'b';//initializing begin4 with b
				}
				cout << "YOU GOT " << move4 << endl;//statement to display something on console
				cout << "POSITION OF PLAYER IS " << scoreOfPlayer3 << endl;//statement to display something on console
				board(scoreOfPlayer3);//user-defined function board to toss the turns in players included in SnakeAndLadder_Functions.h
			}
			Sleep(3000);//setting timer to execute next statement after 3 seconds
			system("cls");//clears screen
			if (begin4 == 'b')//using if else
			{
				cout << p4 << " enter a character to do your turn: ";//statement to ask player to enter any character to do his turn
				cin >> t4;//getting character from player 
				move4 = turn();//initializing move4 with user defined function turn defined in user defined SnakeAndLadder_Functions.h header file
				cout << "YOU GOT " << move4 << endl;//statement to display something on console
				if (move4 == 6)//using if else
				{
					begin4 = 'c';//initializing begin4 with c
					scoreOfPlayer4 = scoreOfPlayer4 + move4;//calculating score and position of player
					found = false;//initializing found with false
					while (!found)//using while loop
					{
						cout << "WOW, You got 6 enter a character to do your turn again: " << endl;//statement displaying message to player that he got 6 and now he has a chance to do his turn again
						cout << p4 << " enter a character to do your turn: ";//statement to ask player to enter any character to do his turn
						cin >> t4;//getting character from player 
						move4 = turn();//initializing move4 with user defined function turn defined in user defined SnakeAndLadder_Functions.h header file
						cout << "YOU GOT " << move4 << endl;//statement to display something on console
						scoreOfPlayer4 = scoreOfPlayer4 + move4;//calculating score of player
						if (move4 != 6)//using one way selection statement to check whether move4 is 6 or not
						{
							found = true;//initializing found with true
						}
					}
					cout << "POSITION OF PLAYER IS " << scoreOfPlayer4 << endl;//statement to display something on console
					board(scoreOfPlayer4);//to display board
				}
				else//else part will be executed only when condition in if part is false
				{
					cout << "YOU CAN'T MOVE UNTIL YOU DON'T GET 6." << endl;//statement to display something on console
				}
			}
			else if (begin4 == 'c')//else if will be executed only when condition in if part is false
			{
				s4 = 0;//initializing s4 with 0
				cout << p4 << " enter a character to do your turn." << endl;//statement to ask player to enter any character to do his turn
				cin >> t4;//getting character from player 
				move4 = turn();//initializing move1 with user defined function turn defined in user defined SnakeAndLadder_Functions.h header file
				cout << "YOU GOT " << move4 << endl;//statement to display something on console
				if (move4 == 6)//using if-else to check if there is a 6 or not
				{
					s4 = s4 + move4;//calculating position of player
					scoreOfPlayer4 = scoreOfPlayer4 + move4;//calculating score of player
					found = false;//assigning false to found
					while (!found)//using while loop
					{
						cout << "WOW, You got 6 enter a character to do your turn again: " << endl;//statement displaying message to player that he got 6 and now he has a chance to do his turn again
						cout << p4 << " enter a character to do your turn: ";//statement to ask player to enter any character to do his turn
						cin >> t4;//getting character from player 
						move4 = turn();//initializing move4 with user defined function turn defined in user defined SnakeAndLadder_Functions.h header file
						cout << "YOU GOT " << move4 << endl;//statement to display something on console
						s4 = s4 + move4;//calculating position of player
						scoreOfPlayer4 = scoreOfPlayer4 + move4;//calculating score of player
						if (scoreOfPlayer4 > 100)//using if else
						{
							cout << "SORRY,  YOU CANT TAKE ANY MOVE UNTIL YOUR POSITION IS CROSSING 100." << endl;//statement to display something on console
							scoreOfPlayer4 = scoreOfPlayer4 - s4;//calculating score and position of palyer
							s4 = 0;//initializing s4 with 0
						}
						else if (scoreOfPlayer4 == 100)//else if will be executed only when condition in if part is false
						{
							cout << "YOU WON THE GAME." << endl;//statement to display something on console
							begin4 = 'n';//initializing begin4 with n
							times4 = times4 + 1;//calculating number of tme player won game
						}
						if (move4 != 6)//using one way selection statement to check whether move4 is 6 or not
						{
							found = true;//initializing found with true
						}
					}
				}
				else//else part will be executed only when condition in if part is false
				{
					s4 = s4 + move4;//calculating position of player
					scoreOfPlayer4 = scoreOfPlayer4 + move4;//calculating score of player
					if (scoreOfPlayer4 > 100)//using if else
					{
						cout << "SORRY,  YOU CANT TAKE ANY MOVE UNTIL YOUR POSITION IS CROSSING 100." << endl;//statement to display something on console
						scoreOfPlayer4 = scoreOfPlayer4 - s4;//calculating score and position of player
						s4 = 0;//initializing s4 with 0
					}
					else if (scoreOfPlayer4 == 100)//else if will be executed only when condition in if part is false
					{
						cout << "YOU WON THE GAME." << endl;//statement to display something on console
						begin4 = 'n';//initializing begin4 with n
						times4 = times4 + 1;//calculating number of tme player won game
					}
				}
				switch (scoreOfPlayer4)//using switch statement
				{
				case 3://this case will be executed only when the expression in switch evaluates 3
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer4 = scoreOfPlayer4 + (25 - 3);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 11://this case will be executed only when the expression in switch evaluates 11
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer4 = scoreOfPlayer4 + (46 - 11);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 44://this case will be executed only when the expression in switch evaluates 44
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer4 = scoreOfPlayer4 + (79 - 44);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 69://this case will be executed only when the expression in switch evaluates 69
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer4 = scoreOfPlayer4 + (74 - 69);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 78://this case will be executed only when the expression in switch evaluates 78
				{
					cout << "WOW, YOU CLIMBED UP A LADDER!" << endl;//statement to display something on console
					scoreOfPlayer4 = scoreOfPlayer4 + (99 - 78);//calculating score of player
					system("color A7");//changes color of console to green and text to white
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				}
				switch (scoreOfPlayer4)//using switch statement
				{
				case 22://this case will be executed only when the expression in switch evaluates 22
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer4 = scoreOfPlayer4 - (22 - 6);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 58://this case will be executed only when the expression in switch evaluates 58
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer4 = scoreOfPlayer4 - (28 - 26);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 77://this case will be executed only when the expression in switch evaluates 77
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer4 = scoreOfPlayer4 - (77 - 15);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 83://this case will be executed only when the expression in switch evaluates 83
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer4 = scoreOfPlayer4 - (83 - 65);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				case 98://this case will be executed only when the expression in switch evaluates 98
				{
					cout << "OPPS, SNAKE BITE YOU!" << endl;//statement to display something on console
					scoreOfPlayer4 = scoreOfPlayer4 - (98 - 56);//calculating score of player
					system("color C0");//changes color of console to red and text to black
					Sleep(3000);//setting timer to execute next statement after 3sec
					system("color 0F");//changes color of console to black and text to white
					break;//using break statement
				}
				}
				if (scoreOfPlayer4 == scoreOfPlayer3 && scoreOfPlayer3 < 100)//using if else
				{
					cout << p3 << " HAS TO PLAY FROM BEGINING!" << endl;//statement to display something on console
					scoreOfPlayer3 = 0;//initializing scoreOfPlayer3 with 0
					begin3 = 'b';//initializing begin3 with b
				}
				else if (scoreOfPlayer4 == scoreOfPlayer2 && scoreOfPlayer2 < 100)//else if will be executed only when condition in if part is false
				{
					cout << p2 << " HAS TO PLAY FROM BEGINING!" << endl;//statement to display something on console
					scoreOfPlayer2 = 0;//initializing scoreOfPlayer2 with 0
					begin2 = 'b';//initializing begin2 with b
				}
				else if (scoreOfPlayer4 == scoreOfPlayer1 && scoreOfPlayer1 < 100)//else if will be executed only when condition in if part is false
				{
					cout << p1 << " HAS TO PLAY FROM BEGINING!" << endl;//statement to display something on console
					scoreOfPlayer1 = 0;//initializing scoreOfPlayer1 with 0
					begin1 = 'b';//initializing begin1 with b
				}
				cout << "POSITION OF PLAYER IS " << scoreOfPlayer4 << endl;//statement to display something on console
				board(scoreOfPlayer4);//user-defined function board to toss the turns in players included in SnakeAndLadder_Functions.h
			}
			Sleep(3000);//setting timer to execute next statement after 3 seconds
			system("cls");//clears screen
			if (scoreOfPlayer1 == 100 && scoreOfPlayer2 == 100 && scoreOfPlayer3 == 100)//using if else
			{
				endOfGame = true;//initializing endOfGame with true
			}
			else if (scoreOfPlayer1 == 100 && scoreOfPlayer2 == 100 && scoreOfPlayer4 == 100)//else if will be executed only when condition in if part is false
			{
				endOfGame = true;//initializing endOfGame with true
			}
			else if (scoreOfPlayer1 == 100 && scoreOfPlayer3 == 100 && scoreOfPlayer4 == 100)//else if will be executed only when condition in if part is false
			{
				endOfGame = true;//initializing endOfGame with true
			}
			else if (scoreOfPlayer2 == 100 && scoreOfPlayer3 == 100 && scoreOfPlayer4 == 100)//else if will be executed only when condition in if part is false
			{
				endOfGame = true;//initializing endOfGame with true
			}
		}
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//RECORDS
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		Sleep(5000);//setting timer to execute next statement after 5 seconds
		system("cls");//clears screen
		cout << "\t\t\t\tRECORDS" << endl;//statement to display something on console
		if (scoreOfPlayer1 == 100)//using one way selection
		{
			cout << p1 << " WON THE GAME " << times1 << " times." << endl;//statement to display something on console
		}
		if (scoreOfPlayer2 == 100)//using one way selection
		{
			cout << p2 << " WON THE GAME " << times2 << " times." << endl;//statement to display something on console
		}
		if (scoreOfPlayer3 == 100)//using one way selection
		{
			cout << p3 << " WON THE GAME " << times3 << " times." << endl;//statement to display something on console
		}
		if (scoreOfPlayer4 == 100)//using one way selection
		{
			cout << p4 << " WON THE GAME " << times4 << " times." << endl;//statement to display something on console
		}
		Sleep(5000);//setting timer to execute next statement after 5 seconds
		system("cls");//clears screen
		int playAgain;//declaring variables of integer type
		cout << "If you want to play again enter any number from 1 to 5: ";//statement to display something on console
		cin >> playAgain;//statement to get input
		if (playAgain == 1 || playAgain == 2 || playAgain == 3 || playAgain == 4 || playAgain == 5)//using if else
		{
			playGame = 'p';//initializing playGame with p
		}
		else//else part will be executed only when condition in if part is false
		{
			playGame = 'e';//initializing playGame with e
		}
	}
}