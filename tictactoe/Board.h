#pragma once
#ifndef Board_cpp
#define Board_cpp

#include <string>

extern std::string coordinates[9];
extern std::string board[4][4];

void PrintBoard();
bool ValidCoordinate(std::string coordinate);
void EditBoard(std::string coordinate, std::string element);
bool CheckWin();
std::string GetPositionOnBoard(std::string coordinate);

#endif // !Board_cpp
