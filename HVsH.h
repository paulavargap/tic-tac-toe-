#pragma once
#include <iostream> // Include main library

using namespace std; 

class HVsH  // Declare  the class Human Vs Human 
{
public:
	

	// Display the board to play 
	int UNO = 1;
	int DOS = 2;
	int TRES = 3;
	int CUATRO = 4;
	int CINCO = 5;
	int SEIS = 6;
	int SIETE = 7;
	int OCHO = 8;
	int NUEVE = 9;

	// Variables for the name players 
	string player1 = " ";
	string player2 = " ";

	char Quit = ' ';
	char markX = 'X';
	char markY = 'y';

	int player_1;  // Input for the players 
	int player_2; 
	int userInput; 
	int score;

	bool GameOver = false; //Option to start the game 
	bool gameIsRunning = true; 


	bool playHVsH() // Variable class with the obj, to play in the option Human Vs Human 
	{

		while (GameOver != true) // Conditional for play the loop game 
		{

			system("cls");  // Clean the screen  


			cout << endl;   // put the variables of name for the user get in. 
			cout << endl;
			cout << endl;
			cout << "\t" << "Human Vs Human......Lets Start the Mortal Combat!!!" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "Player 1 What is your name " << endl;
			cout << endl;
			cout << endl;

			cin >> player1; //user put in the name information 

			cout << endl;
			cout << endl;
			cout << endl;
			cout << "Player 2 What is your name" << endl;
			cout << endl;
			cout << endl;

			cin >> player2;  //user put in the name information 

			system("cls");

			cout << endl;
			cout << endl;
			cout << " Welcome " << player1 << " and " << player2 << endl;   // reading and give data names of the players 
			cout << endl;
			cout << " Enter 1 to continue Playing " << endl << endl;
			cout << " Enter 0 to Quit " << endl << endl;

         cin >> userInput;   // user input options 


			while (gameIsRunning != false) // conditional for the loop game 
			{
				if (userInput == 0)   // Option in case the user loose 
				{
					std::cout << " Is a GameOver ";  // Out text for the user in case lost the play 

					gameIsRunning = false; // and the game stop the loop  

				}
				else //  second conditional in case the option is not be 
				{
					if (gameIsRunning) // Conditional loop when the game is running
					{
						PlayerOnePlay(); // Void Function between Human vs Human, for one player
						winCondition();// Void Function between Human vs Human for give the winner 
						void drawchecking(); //Void Function between Human vs Human for give the looser 

						PlayerTwoPlay();// Void Function between Human vs Human, for second player 
						winCondition(); //Void Function between Human vs Human for give the winner
						void drawchecking();//Void Function between Human vs Human for give the looser 
					}
					else //In case not, second conditional when the game has stop 
					{
						gameIsRunning = false; // Conditional loop when the game is not running
					}
				}
			}
			return 0; // Exit 
		}

		return true; // give back the boolean statment 
	}

	void displayBoard() // Function to display the board game 
	{
		cout << "\t" << "  " << UNO << "  " << "|" << "  " << DOS << "  " << "|" << "  " << TRES << "  " << endl;
		cout << "\t" << " -- " << " | " << " -- " << "| " << " -- " << endl;
		cout << "\t" << "  " << CUATRO << "  " << "|" << "  " << CINCO << "  " << "|" << "  " << SEIS << "  " << endl;
		cout << "\t" << " -- " << " | " << " -- " << "| " << " -- " << endl;
		cout << "\t" << "  " << SIETE << "  " << "|" << "  " << OCHO << "  " << "|" << "  " << NUEVE << "  " << endl;
	}

	void PlayerOnePlay() // Function to void the player option 1 
	{
    system("cls"); // Clean the screen 
    displayBoard(); // Function void to display the board for play 
    
	cout << "\t" << player1 << "  What is your next option:  " << endl; // Player 1 options to play in the sceen board 
    cin >> player_1; // user option to play 

	// Conditionals in the screen board to play 

		if (player_1 == 0)
		{
			GameOver = true;
		}
		if (player_1 == UNO && UNO != 7 || 0)
		{
			UNO = 0;
			displayBoard();
		}
		else if (player_1 == DOS && DOS != 7 || 0)
		{
			DOS = 0;
			displayBoard();
		}
		else if (player_1 == TRES && TRES != 7 || 0)
		{
			TRES = 0;
			displayBoard();
		}
		else if (player_1 == CUATRO && CUATRO != 7 || 0)
		{
			CUATRO = 0;
			displayBoard();
		}
		else if (player_1 == CINCO && CINCO != 7 || 0)
		{
			CINCO = 0;
			displayBoard();
		}
		else if (player_1 == SEIS && SEIS != 7 || 0)
		{
			SEIS = 0;
			displayBoard();
		}
		else if (player_1 == SIETE && SIETE != 7 || 0)
		{
			SIETE = 0;
			displayBoard();
		}

		else if (player_1 == OCHO && OCHO != 7 || 0)
		{
			OCHO = 0;
			displayBoard();
		}
		else if (player_1 == NUEVE && NUEVE!= 7 || 0)
		{
			NUEVE = 0;
			displayBoard();
		}
		
		else
		{       // Send a message to the player for another option 

			cout << "\t" << " Wrong number position, please try again " << endl;  
            cout << "\t" << " Player 1 enter another number position to play the game " << endl;
            cin >> player_1;
			
			// Menu conditional when the option is already taken for the user  

			if (player_1 == 0)
			{
				GameOver = true;
			}
			if (player_1 == UNO && UNO != 7 || 0)
			{
				UNO = 0;
				displayBoard();
			}
			else if (player_1 == DOS && DOS != 7 || 0)
			{
				DOS = 0;
				displayBoard();
			}
			else if (player_1 == TRES && TRES != 7 || 0)
			{
				TRES = 0;
				displayBoard();
			}
			
			else if (player_1 == CUATRO && CUATRO != 7 || 0)
			{
				CUATRO = 0;
				displayBoard();
			}
			else if (player_1 == CINCO && CINCO != 7 || 0)
			{
				CINCO = 0;
				displayBoard();
			}
			else if (player_1 == SEIS && SEIS != 7 || 0)
			{
				SEIS = 0;
				displayBoard();
			}
			else if (player_1 == SIETE && SIETE != 7 || 0)
			{
				SIETE = 0;
				displayBoard();
			}
			else if (player_1 == OCHO && OCHO != 7 || 0)
			{
				OCHO = 0;
				displayBoard();
			}
			else if (player_1 == NUEVE && NUEVE != 7 || 0)
			{
				NUEVE = 0;
				displayBoard();
			}
			
			else
			{
            cout << "\t" << " Sorry, this is not possible, already marked, please see properly! " << endl;
            }
		}

		winCondition();// Void Function between Human vs Human for give the winner 
		void drawchecking(); //Void Function between Human vs Human for give the looser 
	}

	void PlayerTwoPlay() // Function to void the player option 1 
	{
		system("cls"); // Clean the screen 
		displayBoard(); // Function void to display the board for play 

		cout << "\t" << player2 << "  Please tell me your option to play:  " << endl;   // Player 2 options to play in the sceen board
        cin >> player_2; // user option to play 

		if (player_2 == 0) // Exit of the conditional and finish the game
		{
			cout << " Sorry this is a Big GAME OVER !!!!!";
			GameOver = true;
		}
		

	// Conditionals in the screen board to play 

		if (player_2 == UNO && UNO != 7 || 0)
		{
			UNO = 7;
			displayBoard();
		}

		else if (player_2 == DOS && DOS != 7 || 0)
		{
			DOS = 7;
			displayBoard();
		}
		else if (player_2 == TRES && TRES != 7 || 0)
		{
			TRES = 7;
			displayBoard();
		}
		
		else if (player_2 == CUATRO && CUATRO != 7 || 0)
		{
			CUATRO = 7;
			displayBoard();
		}
		else if (player_2 == CINCO && CINCO != 7 || 0)
		{
			CINCO = 7;
			displayBoard();
		}
		else if (player_2 == SEIS && SEIS != 7 || 0)
		{
			SEIS = 7;
			displayBoard();
		}
		else if (player_2 == SIETE && SIETE != 7 || 0)
		{
			SIETE = 7;
			displayBoard();
		}
		else if (player_2 == OCHO && OCHO != 7 || 0)
		{
			OCHO = 7;
			displayBoard();
		}
		else if (player_2 == NUEVE && NUEVE != 7 || 0)
		{
			NUEVE = 7;
			displayBoard();
		}
		else
		{
         cout << "\t" << " This option has been already taken, try again  " << endl;

			cout << "\t" << player2 << " Please another numbers location to play:  " << endl;
			cin >> player_2;

			// Menu conditional when the option is already taken for the user  

			if (player_2 == 0)
			{
				cout << " Sorry, This is a big GAME OVER !!!! ";
				GameOver = true;
			}
			if (player_2 == UNO && UNO != 7 || 0)
			{
				UNO = 7;
				displayBoard();
			}

			else if (player_2 == DOS && DOS != 7 || 0)
			{
				DOS = 7;
				displayBoard();
			}
			else if (player_2 == TRES && TRES != 7 || 0)
			{
				TRES = 7;
				displayBoard();
			}

			else if (player_2 == CUATRO && CUATRO != 7 || 0)
			{
				CUATRO = 7;
				displayBoard();
			}
			else if (player_2 == CINCO && CINCO != 7 || 0)
			{
				CINCO = 7;
				displayBoard();
			}
			else if (player_2 == SEIS && SEIS != 7 || 0)
			{
				SEIS = 7;
				displayBoard();
			}
			else if (player_2 == SIETE && SIETE != 7 || 0)
			{
				SIETE = 7;
				displayBoard();
			}
			else if (player_2 == OCHO && OCHO != 7 || 0)
			{
				OCHO = 7;
				displayBoard();
			}
			else if (player_2 == NUEVE && NUEVE != 7 || 0)
			{
				NUEVE = 7;
				displayBoard();
			}
			else
			{

				cout << "\t" << " This position has been already filled, check again  " << endl;
			}
		}
		winCondition();// Void Function between Human vs Human for give the winner 
		void drawchecking(); //Void Function between Human vs Human for give the looser 
	}

	void winCondition() // Void funtion to check the winner 
	{
		if (gameIsRunning)    // Conditional for position 
		{
			if (UNO ==  CUATRO && CUATRO == SIETE) 
			{
				if (UNO || CUATRO || SIETE == 0)
				{
					cout << "\t" << player1 << " OMG!!! YOU ARE A WINNER  " << endl;
					score ++;
					cout << "You make 1 Point \t CONGRATULALTIONS ....";
					
				}
				else if (UNO || CUATRO || SIETE == 11)
				{
					cout << "\t" << player2 << " OMG!!! YOU ARE A WINNER " << endl;
					score++;
					cout << "You make 1 Point \t CONGRATULALTIONS ....";

				}
				cout << endl;
				cout << "\t" << " Enter 0 if you want to continue ";



				cin >> userInput;
				if (userInput == 0)
				{
					//Conditional for checking in position 

					gameIsRunning = false;
				}
			}
			else if (DOS == CINCO && CINCO == OCHO) 
			{
				if (DOS ||CINCO || OCHO == 0)
				{
					cout << "\t" << player1 << "  OMG!!! YOU ARE A WINNER " << endl;
					
				}
				else if (DOS || CINCO || OCHO == 11)
				{
					cout << "\t" << player2 << "  OMG!!! YOU ARE A WINNER " << endl;
					
				}
				cout << endl;
				cout << "\t" << " enter 0 if you want to continue ";

                cin >> userInput;
				if (userInput == 0)
				{
					gameIsRunning = false;
				}
			}
			else if (TRES == SEIS && SEIS == NUEVE) 
			{
				if (TRES || SEIS || NUEVE == 0)
				{
					cout << "\t" << player1 << "  OMG!!! YOU ARE A WINNER " << endl;
					
				}
				else if (TRES || SEIS || NUEVE == 11)
				{
					cout << "\t" << player2 << " OMG!!! YOU ARE A WINNER " << endl;
					
				}
				cout << endl;
				cout << "\t" << " enter 0 if you want to continue ";



				cin >> userInput;
				if (userInput == 0)
				{
					gameIsRunning = false;
				}
			}
			else if (UNO == DOS && DOS== TRES) 
			{
				if (UNO || DOS || TRES == 0)
				{
					cout << "\t" << player1 << "  OMG!!! YOU ARE A WINNER " << endl;
					
				}
				else if (UNO || DOS || TRES == 11)
				{
					cout << "\t" << player2 << "  OMG!!! YOU ARE A WINNER " << endl;
				
				}
				cout << endl;
				cout << "\t" << " enter 0 if you want to continue ";

				cin >> userInput;
				if (userInput == 0)
				{
					gameIsRunning = false;
				}
			}
			else if (CUATRO == CINCO && CINCO == SEIS) 
			{
				if (CUATRO || CINCO || SEIS == 0)
				{
					cout << "\t" << player1 << "  OMG!!! YOU ARE A WINNER " << endl;
					
				}
				else if (CUATRO || CINCO || SEIS == 11)
				{
					cout << "\t" << player2 << " OMG!!! YOU ARE A WINNER " << endl;
					
				}
				cout << endl;
				cout << "\t" << " enter 0 if you want to continue ";



				cin >> userInput;
				if (userInput == 0)
				{
					gameIsRunning = false;
				}
			}
			else if (SIETE == OCHO && OCHO == NUEVE) 
			{
				if (SIETE || OCHO || NUEVE == 0)
				{
					cout << "\t" << player1 << "  OMG!!! YOU ARE A WINNER " << endl;
					
				}
				else if (SIETE || OCHO|| NUEVE == 11)
				{
					cout << "\t" << player2 << "  OMG!!! YOU ARE A WINNER " << endl;
					
				}
				cout << endl;
				cout << "\t" << " enter 0 if you want to continue ";



				cin >> userInput;
				if (userInput == 0)
				{
					gameIsRunning = false;
				}
			}
			else if (UNO == CINCO && CINCO== NUEVE) 
			{
				if (UNO ||CINCO || NUEVE == 0)
				{
					cout << "\t" << player1 << "  OMG!!! YOU ARE A WINNER " << endl;
					
				}
				else if (UNO || CINCO|| NUEVE == 11)
				{
					cout << "\t" << player2 << " OMG!!! YOU ARE A WINNER " << endl;
					
				}
				cout << endl;
				cout << "\t" << " Type 0 double time for continue ";



				cin >> userInput;

				if (userInput == 0)
				{
					gameIsRunning = false;
				}
			}
			else if (TRES == CINCO && CINCO == SEIS) 
			{
				if (TRES || CINCO || SIETE == 0)
				{
					cout << "\t" << player1 << "  OMG!!! YOU ARE A WINNER " << endl;
					
				}
				else if (TRES|| CINCO || SIETE == 11)
				{
					cout << "\t" << player2 << "  OMG!!! YOU ARE A WINNER " << endl;
				
				}
				cout << endl;
				cout << "\t" << " Type 0 double time for continue ";
                cin >> userInput;

			}

			if (userInput == 0)
			{
				gameIsRunning = false;
			}
		}
	}

	void drawchecking()  //Void function to verify 
	{		if ((GameOver != true) && (UNO != 1 && (DOS != 2) && (TRES != 3) &&
			(CUATRO != 4) && (CINCO != 5) && (SEIS != 6) &&			
			(SIETE != 7) && (OCHO != 8) && (NUEVE != 9)))         
		{
			cout << endl << endl;
			cout << "\t" << " Good try, the game is TIE !!! " << endl << endl;

			cout << "\t" << " Type 0 double time for continue "; \

				cin >> userInput;

			if (userInput == 0)
			{
				gameIsRunning = false;
			}
		}
	}
};

