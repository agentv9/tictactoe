// tictactoe.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>

#include "Board.h"
#include "Player.h"

int main()
{
	srand(time(NULL));

	std::cout << "You are playing as: X\n";
	PrintBoard();
	
	std::string input;

	while (true) {
		std::cin >> input;
		ProcessInput(input);
		
	}
}
