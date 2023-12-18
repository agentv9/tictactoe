#include "board.h"
#include <string>
#include <iostream>



std::string coordinates[9] = { "a1","a2", "a3", "b1", "b2", "b3", "c1", "c2", "c3" };

std::string board[4][4] = {
{" ", "a", "b", "c"},
{"1", "-", "-", "-"},
{"2", "-", "-", "-"},
{"3", "-", "-", "-"}
};

void PrintBoard() {

	int i, j;

	for (i = 0; i < 4; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			std::cout << "\t" << board[i][j];
		}
		std::cout << std::endl;
	}
};

bool ValidCoordinate(std::string coordinate) {

	for (int i = 0; i < 9; ++i)
	{
		if (coordinate == coordinates[i])
		{
			return true;
		}
	}

	return false;
}

void EditBoard(std::string coordinate, std::string element) {
	if (coordinate == "a1") {
		board[1][1] = element;
	}
	else if (coordinate == "a2") {
		board[2][1] = element;
	}
	else if (coordinate == "a3") {
		board[3][1] = element;
	}
	else if (coordinate == "b1") {
		board[1][2] = element;
	}
	else if (coordinate == "b2") {
		board[2][2] = element;
	}
	else if (coordinate == "b3") {
		board[3][2] = element;
	}
	else if (coordinate == "c1") {
		board[1][3] = element;
	}
	else if (coordinate == "c2") {
		board[2][3] = element;
	}
	else if (coordinate == "c3") {
		board[3][3] = element;
	}
}

std::string GetPositionOnBoard(std::string coordinate) {
	if (coordinate == "a1") {
		return board[1][1];
	}
	else if (coordinate == "a2") {
		return board[2][1];
	}
	else if (coordinate == "a3") {
		return board[3][1];
	}
	else if (coordinate == "b1") {
		return board[1][2];
	}
	else if (coordinate == "b2") {
		return board[2][2];
	}
	else if (coordinate == "b3") {
		return board[3][2];
	}
	else if (coordinate == "c1") {
		return board[1][3];
	}
	else if (coordinate == "c2") {
		return board[2][3];
	}
	else if (coordinate == "c3") {
		return board[3][3];
	}
}


bool CheckWin() {
	if (board[1][1] == "X" && board[2][1] == "X" && board[3][1] == "X") {
		return true;
	}
	else if (board[1][2] == "X" && board[2][2] == "X" && board[3][2] == "X") {
		return true;
	}
	else if (board[1][3] == "X" && board[2][3] == "X" && board[3][3] == "X") {
		return true;
	}

	if (board[1][1] == "X" && board[1][2] == "X" && board[1][3] == "X") {
		return true;
	}
	else if (board[2][1] == "X" && board[2][2] == "X" && board[2][3] == "X") {
		return true;
	}
	else if (board[3][1] == "X" && board[3][2] == "X" && board[3][3] == "X") {
		return true;
	}

	else if (board[1][1] == "X" && board[2][2] == "X" && board[3][3] == "X") {
		return true;
	}
	else if (board[3][1] == "X" && board[2][2] == "X" && board[1][3] == "X") {
		return true;
	}

	return false;
}