#include "Board.h"
#include "Player.h"
#include "Bot.h"


#include <string>
#include <iostream>


void ProcessInput(std::string input) {

	if (ValidCoordinate(input)) {
		std::cout << "Your input was: " + input + "\n";

		if (GetPositionOnBoard(input) == "X" || GetPositionOnBoard(input) == "O") {
			std::cout << "You cannot choose this place!\n";

		}
		else {
			EditBoard(input, "X");

			BotMove();
		}

		if (CheckWin()) {
			std::cout << "You won!\n";

			PrintBoard();
		}
		else {


			PrintBoard();
		}

	}
	else {
		std::cout << "That is not a valid coordinate \n";
	}
};