#pragma once
#include "Piece.h"
#include <string>
#include <corecrt_wstring.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

class Game
{
public:
	Game();
	Game(Player* player1, Player* player2);
	~Game();

	//Board initialization
	void init_Board();
	void init_Sample();

	//debug and test function
	void Game::print_Board();

	int aviliable_flag;

	void switch_turn();


	//getter function
	Player* getPlayer1();
	Player* getPlayer2();
	int getturns();
	vector<vector<Piece>> getBoard();

	//setter function
	void setboard(int x, int y, Piece piece);

	int check_win();

private:
	vector<vector<Piece>> Board;
	Player* player1;
	Player* player2;
	int turns;
};

