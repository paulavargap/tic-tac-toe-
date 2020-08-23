#pragma once
#include<iostream>
using namespace std;



class  AIVsH // Declare  the class Human Vs AI 
{
public:

	int robotictactoe = 0;  // Variable for AI
	char board[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	bool playPvC() // Variable class with the obj, to play in the option Human Vs AI
	{
		//Main board

		cout << endl;
		cout << endl;
		cout << " WELCOME TO TIC TAC TOE BY: PAU AND YUL \n\n ";
		cout << " Welcome!!! You are gonna to play as Player 1 \t\t\n ROBO TIC TAC TOE IS GOING TO BE YOUR OPONENT, AS PLAYER 2";
		cout << endl;
		cout << "\t" << " ROBO TIC TAC TOE : " << robotictactoe << endl;

		//	Draw screen board

		cout << "|" << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << "|" << endl;
		cout << "====================================================================" << endl;
		cout << "|" << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << "|" << endl;
		cout << "====================================================================" << endl;
		cout << "|" << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << "|" << endl;
		cout << "====================================================================" << endl << endl;

		

		cout << "Hi, What is your name " << endl << endl; //user put in the name information 

		string player = " "; //user put in the name information 

		cin >> player;      //user put in the name information 


		cout << player << "  Enter the number with the position you want.  "; // Options 
		int board[9] = { 0 }; // Matriz Draw
		int movAI = 0, k;

		//Min Max Algorithm _ Using the nodes to verify and check the answer Part 1
		//return a value if a terminal state is found

		// Conditionals for moves

		while (movAI < 9) {
			int movAI;

			cin >> movAI;
			if (board[movAI - 1] == 0) {
				board[movAI- 1] = -1;
				movAI++;

				displayBoard(board);
				if (winCondition(board) == 0) {
					k = Computer(board);
					board[k] = 1;

					displayBoard(board);
					movAI++;
					if (winCondition(board) != 0) {
						break;
					}
				}
				else
					break;
			}
			else {
				cout << "Try again, this option is not avaiable, already taken. " << endl << endl;;
			}
		}
		//Menu for the conditions for win

		switch (winCondition(board)) {
		case 0: 
			cout << "Sorry the game is TIE....GOOD TRY!!! \n";
			break;
		case 1: 
			cout << player << " Sorry You are out of the game, you lost the game !!! ROBO TIC TAC TOE is the winner. \n";
			robotictactoe += 1;
			break;
		case -1:
			cout << "Try again, this option is not avaiable, already taken. ";
			break;
		}
		system("pause");

		return true;
	}

	// Void Function to display the board into the screen and start the location node 
	void displayBoard(int* a) {
		int k = 0;
		cout << endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << "| ";
				if (a[k] == 0) {
					cout << k + 1 << " |";
				}
				else {
					if (a[k] == -1) {
						cout << "0 |";
					}
					else {
						cout << "X |";
					}
				}
				k++;
			}
			cout << endl;
		}
	}


	int winCondition(const int* board)
	{
		//Check for winner

		unsigned wins[8][3] = { {0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6} }; // options to win the game on the screen, depends the location 
		int i;
		for (i = 0; i < 8; ++i) {
			if (board[wins[i][0]] != 0 &&
				board[wins[i][0]] == board[wins[i][1]] && board[wins[i][1]] == board[wins[i][2]])
				return board[wins[i][2]];
		}
		return 0;
	}


	/*Minimax function on each available spot*/


	int minimax(int* board, int player) {
		int winner = winCondition(board); // Check for player 

		// Conditional for check move 

		if (winner != 0)
			return winner * player;

		int move = -1;
		int score = -2;

		for (int i = 0; i < 9; i++) {

			if (board[i] == 0) {

				board[i] = player;
				int thisScore = -minimax(board, player * -1);

				if (thisScore > score) {
					score = thisScore;
					move = i;
				}
				board[i] = 0;//Reset board after try
			}
		}
		if (move == -1)
			return 0;

		return score;
	}

	//AI Functions  Declaration and for, in the location
	int Computer(int* board) {
		int move = -1;
		int score = -2;
		system("cls");
		for (int i = 0; i < 9; ++i) {

			if (board[i] == 0) {
				board[i] = 1;
				int tempScore = -minimax(board, -1);
				board[i] = 0;

				if (tempScore > score) {
					score = tempScore;
					move = i;
				}
			}
		}
		//evaluate returning values from function calls and return the best value.
		return move; // Come back the last move
	}

};
