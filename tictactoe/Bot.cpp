#include "Bot.h"
#include "Board.h"

void BotMove() {
	std::string position = coordinates[rand() % 9];

	if (GetPositionOnBoard(position) == "X" || GetPositionOnBoard(position) == "O") {
		BotMove();
	}
	else {
		EditBoard(position, "O");
	}
}