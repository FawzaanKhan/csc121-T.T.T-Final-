#include<iostream>				//cin and cout objects
#include <iomanip>				//setw manipulator 
#include <string>				//strings
#include<Windows.h>				//system 
#include<ctime>					//sleep
#include<random>					//srand
#include<fstream>					//files
#include<vector>				//vector
#include "C:\Users\fawza\source\repos\tictactoeFinal\final\final.h"		//links .h file 
using namespace std;		
tictactoe game;		//declaring object
int main()
{
	game.tittle();		//display tittle
	game.username();	// get username 
	while (true) {
		game.display();		//display the board with scores
		game.start();		//start the game
	}
	
}
