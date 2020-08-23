#include <iostream> // Libraries Declaration
#include <string>
#include "HVsH .h" // Function Declaration
#include "AIVsH.h" // Function Declaration
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <fstream> // library for read and write 


using namespace std;

void Game_Options() // Game options inside the menu game
{
	system("cls"); //Clear screen
	HVsH  human; // Class for the options of mode to play [human vs human], [human vs AI]. 
	AIVsH AI;

	int player_human = 0; // Input from user 
	int HVsH = 1; // Declaration of the oponents (Versus)
	int AIVsH = 2;
	
	cout << "Please pick your option for play: \t\n OPTIONS: \t\n 1. HUMAN VS HUMAN  \n 2.  HUMAN VS AI" << endl; // menu options for the user 


	cin >> player_human;  // reading player input 

	if (player_human == HVsH) // Conditional for check the playerInput, in this case for the option oh human vs human 
	{
		human.playHVsH(); // Class for the options of mode to play, USER decision, in this case human vs human  
	}

	if (player_human == AIVsH) // Conditional for check the playerInput, in this case for the option oh human vs AI 
	{
		AI.playPvC(); // Class for the options of mode to play, USER decision, in this case human vs AI
	}
}

int main()  // Main funtion 
{
	int play = 1;  // declaration of variables. Options of menu to play 
	int credits = 2;
	int exit = 3;
	int robotictactoe = 0; // bankcheck
	int option_player = 0; // player choice
	void history(void);
	
	
    bool Playing_game = true; // Declaration for the option to play the game 
	HVsH human; // declaration 
	

	while (Playing_game != false) // Conditional while, for the menu game 
	{
		system("cls"); // clean the screen 

		cout << endl;                              //Show in the board the options game 
		cout << endl;
		system("color D7"); // screen  and letters colors
                          
							//menu game, asking what they want to play
		cout << "                  WELCOME TO TIC TAC TOE BY: PAU AND YU\n\n      ";
		cout << "\t                       1.  PLAY GAME \n";
		cout << "\t                       2.  MORE ABOUT THE GAME  \t\n  ";
		cout << "\t                       3.  EXIT...... : \t\n  ";



		cout << "\t" << " Enter 1 to play " << endl;                                // Options to play 

		cin >> option_player; // In options to play from the user

		if (option_player == 1) // Conditional for the player 
		{

			Game_Options(); // Direction to the void function play 

		}

		if (option_player == 2) // Conditional for the player option, direct to the Credits 
		{
			cout << "Credits: Programmers and designers: Paula and Yuly " << endl;
			system("pause");
		}
		
		
		if (option_player == 3) // Conditional for the choice in the game 
		{
			cout << "THIS IS THE EXIT .....SEE YOU SOON !!!" << endl; // Quit option 

			Playing_game = false; // Option for input in the game options 
		}

	}

	return (0); //Exit 

	void history(void);

	{


		fstream file("register.txt");  // reading and writing file for input user, where can save the history of the game
		string name, score;
		int option, option_2;

		do

		{

			cout << "1. New register \n 2. Salir";
			cin >> option;
			cin.ignore();

			if (option == 1)
			{
				if (!file.is_open())
				{

					file.open("register.txt", ios::out);
				}

				cout << "Name of the player:";
				getline(cin, name);

				cout << "1. Save register. \n 2. Exit\n";
				cin >> option_2;

				if (option_2 == 1)

				{

					file << "Name of the player: " << name << endl;

					system("cls");

					cout << "Saved sucessful, Do not worry \n";
					system("pause");
					system("cls");

				}

				file.close();

			}

		} while (option_2 != 2);

		return 0;

	}

}









