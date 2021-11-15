#include "Game.h"


void Welcome()
{

	system("color a");

	std::cout << "                                           Marty McFly   \n";
	std::cout << "                                            Presents     \n";
	std::cout << "                                           Connect - 4   \n";

	Sleep(3000);

	system("cls");

	std::cout << "                             ~~~~~~~~~~~~~~ Welcome ~~~~~~~~~~~~~~ \n";

	std::cout << "                                                           \n";
	std::cout << "                             Connect 4 is a game where the player wins \n";
	std::cout << "                             by getting 4 in a row in any possible direction. \n";
	std::cout << "                                                           \n";

	std::cout << "                             Each turn the player will place their chips in \n";
	std::cout << "                             a colum where it will fall down the bottum row, \n";
	std::cout << "                             or as close it can get. \n";
	std::cout << "                                                           \n";

	std::cout << "                             The two players will be switching turns. \n";
	std::cout << "                                                           \n";

	std::cout << "                             Each time a player win they will gain points  \n";
	std::cout << "                             which will be show at the end of the game and \n";
	std::cout << "                             is also placed on the Score Board in the Menu. \n";
	std::cout << "                                                           \n";
	std::cout << "                             ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
	std::cout << "                                                           \n";

	Sleep(40000);

	std::cout << "                             Okey, Let's Play!  \n";

	Sleep(3000);

	system("cls");
}


void PlayDisplay() {

	char board[6][7] = {
	{' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' '} };

	std::cout << '\n';
	std::cout << " | 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n";
	std::cout << " | " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " | " << board[0][3] << " | " << board[0][4] << " | " << board[0][5] << " | " << board[0][6] << " |" << '\n';
	std::cout << " | " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " | " << board[1][3] << " | " << board[1][4] << " | " << board[1][5] << " | " << board[1][6] << " |" << '\n';
	std::cout << " | " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " | " << board[2][3] << " | " << board[2][4] << " | " << board[2][5] << " | " << board[2][6] << " |" << '\n';
	std::cout << " | " << board[3][0] << " | " << board[3][1] << " | " << board[3][2] << " | " << board[3][3] << " | " << board[3][4] << " | " << board[3][5] << " | " << board[3][6] << " |" << '\n';
	std::cout << " | " << board[4][0] << " | " << board[4][1] << " | " << board[4][2] << " | " << board[4][3] << " | " << board[4][4] << " | " << board[4][5] << " | " << board[4][6] << " |" << '\n';
	std::cout << " | " << board[5][0] << " | " << board[5][1] << " | " << board[5][2] << " | " << board[5][3] << " | " << board[5][4] << " | " << board[5][5] << " | " << board[5][6] << " |" << '\n';
	std::cout << " -----------------------------" << '\n';

}

void EmptyDisplay() {
	char Board[6][7] = { 
	{' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' '}};

	std::cout << '\n';
	std::cout << " | 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n";
	std::cout << " | " << Board[0][0] << " | " << Board[0][1] << " | " << Board[0][2] << " | " << Board[0][3] << " | " << Board[0][4] << " | " << Board[0][5] << " | " << Board[0][6] << " |" << '\n';
	std::cout << " | " << Board[1][0] << " | " << Board[1][1] << " | " << Board[1][2] << " | " << Board[1][3] << " | " << Board[1][4] << " | " << Board[1][5] << " | " << Board[1][6] << " |" << '\n';
	std::cout << " | " << Board[2][0] << " | " << Board[2][1] << " | " << Board[2][2] << " | " << Board[2][3] << " | " << Board[2][4] << " | " << Board[2][5] << " | " << Board[2][6] << " |" << '\n';
	std::cout << " | " << Board[3][0] << " | " << Board[3][1] << " | " << Board[3][2] << " | " << Board[3][3] << " | " << Board[3][4] << " | " << Board[3][5] << " | " << Board[3][6] << " |" << '\n';
	std::cout << " | " << Board[4][0] << " | " << Board[4][1] << " | " << Board[4][2] << " | " << Board[4][3] << " | " << Board[4][4] << " | " << Board[4][5] << " | " << Board[4][6] << " |" << '\n';
	std::cout << " | " << Board[5][0] << " | " << Board[5][1] << " | " << Board[5][2] << " | " << Board[5][3] << " | " << Board[5][4] << " | " << Board[5][5] << " | " << Board[5][6] << " |" << '\n';
	std::cout << " -----------------------------" << '\n';

}

void MainMenu() {
	int Choice{};

	std::cout << "                             ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
	std::cout << "  \n";
	std::cout << "                             Who do you want to play with?\n";
	std::cout << "  \n";
	std::cout << "                                   1) Against a player\n";
	std::cout << "                                   2) Against The AI\n";
	std::cout << "                                   3) Not up for a game right now\n";
	std::cout << "  \n";
	std::cout << "                             ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";

	std::cin >> Choice;

	switch (Choice)
	{
	case '1':
		// Play Two Player.
		break;
	case '2' :
		// Play With AI.
		break;
	case '3' :
		// Exit.

	default:
		break;
	}

}

void GamePlayer() {

	PlayDisplay();
	
	for (int r{}; r < 42; r++)
	{
		system("color a");
		PlayDisplay();

		if (r % 2 == 0) {
			PlayerOne();
			PlayDisplay();
			wins();

		}
		else {
			PlayerTwo();
			PlayDisplay();
			wins();

		}
	}

}

void GameAI() {

	PlayDisplay();

	for (int r{}; r < 42; r++)
	{
		system("color a");
		PlayDisplay();

		if (r % 2 == 0) {
			PlayerOne();
			PlayDisplay();
			wins();

		}
		else {
			AI();
			PlayDisplay();
			wins();

		}
	}

}


void AI() {

	

}

void PlayerOne() {
	std::string NameOne;

	std::cout << " PlayerOne enter your name here : ";
	std::cin >> NameOne;
	std::cout << " " << NameOne << "'s avatar is 'X'\n";

	char player = 'X';

	int a;

	std::cout << " " << NameOne << " select the number on the row you want to place your chip : \n";
	std::cout << " "; std::cin >> a;
	std::cout << " Selected Number :  " << a << '\n';



	if (a == 1)

	{

		if (board[5][0] == ' ')
			board[5][0] = player;
		if (board[4][0] == ' ')
			board[4][0] = player;
		if (board[3][0] == ' ')
			board[3][0] = player;
		if (board[2][0] == ' ')
			board[2][0] = player;
		if (board[1][0] == ' ')
			board[1][0] = player;
		if (board[0][0] == ' ')
			board[0][0] = player;
		else PlayerOne();

	}
	else if (a == 2) {
		if (board[5][1] == ' ')
			board[5][1] = player;
		if (board[4][1] == ' ')
			board[4][1] = player;
		if (board[3][1] == ' ')
			board[3][1] = player;
		if (board[2][1] == ' ')
			board[2][1] = player;
		if (board[1][1] == ' ')
			board[1][1] = player;
		if (board[0][1] == ' ')
			board[0][1] = player;
		else PlayerOne();

	}
	else if (a == 3) {

		if (board[5][2] == ' ')
			board[5][2] = player;
		if (board[4][2] == ' ')
			board[4][2] = player;
		if (board[3][2] == ' ')
			board[3][2] = player;
		if (board[2][2] == ' ')
			board[2][2] = player;
		if (board[1][2] == ' ')
			board[1][2] = player;
		if (board[0][2] == ' ')
			board[0][2] = player;
		else PlayerOne();

	}
	else if (a == 4) {
		if (board[5][3] == ' ')
			board[5][3] = player;
		if (board[4][3] == ' ')
			board[4][3] = player;
		if (board[3][3] == ' ')
			board[3][3] = player;
		if (board[2][3] == ' ')
			board[2][3] = player;
		if (board[1][3] == ' ')
			board[1][3] = player;
		if (board[0][3] == ' ')
			board[0][3] = player;
		else PlayerOne();
	}
	else if (a == 5) {
		if (board[5][4] == ' ')
			board[5][4] = player;
		if (board[4][4] == ' ')
			board[4][4] = player;
		if (board[3][4] == ' ')
			board[3][4] = player;
		if (board[2][4] == ' ')
			board[2][4] = player;
		if (board[1][4] == ' ')
			board[1][4] = player;
		if (board[0][4] == ' ')
			board[0][4] = player;
		else PlayerOne();
	}
	else if (a == 6) {
		if (board[5][5] == ' ')
			board[5][5] = player;
		if (board[4][5] == ' ')
			board[4][5] = player;
		if (board[3][5] == ' ')
			board[3][5] = player;
		if (board[2][5] == ' ')
			board[2][5] = player;
		if (board[1][5] == ' ')
			board[1][5] = player;
		if (board[0][5] == ' ')
			board[0][5] = player;
		else PlayerOne();
	}
	else {
	if (board[5][6] == ' ')
		board[5][6] = player;
	if (board[4][6] == ' ')
		board[4][6] = player;
	if (board[3][6] == ' ')
		board[3][6] = player;
	if (board[2][6] == ' ')
		board[2][6] = player;
	if (board[1][6] == ' ')
		board[1][6] = player;
	if (board[0][6] == ' ')
		board[0][6] = player;
	else PlayerOne();
	}
	}
 

void PlayerTwo() {
	std::string NameTwo;

	std::cout << " PlayerTwo enter your name here : ";
	std::cin >> NameTwo;
	std::cout << " " << NameTwo << "'s avatar is 'O'\n";

	char Player = 'O'; 

	int b;

	std::cout << " " << NameTwo << " select the number on the row you want to place your chip : \n";
	std::cout << " "; std::cin >> b;
	std::cout << " Selected Number :  " << b << '\n';


	if (b == 1)

	{

		if (board[5][0] == ' ')
			board[5][0] = Player;
		if (board[4][0] == ' ')
			board[4][0] = Player;
		if (board[3][0] == ' ')
			board[3][0] = Player;
		if (board[2][0] == ' ')
			board[2][0] = Player;
		if (board[1][0] == ' ')
			board[1][0] = Player;
		if (board[0][0] == ' ')
			board[0][0] = Player;
		else PlayerTwo();

	}
	else if (b == 2) {
		if (board[5][1] == ' ')
			board[5][1] = Player;
		if (board[4][1] == ' ')
			board[4][1] = Player;
		if (board[3][1] == ' ')
			board[3][1] = Player;
		if (board[2][1] == ' ')
			board[2][1] = Player;
		if (board[1][1] == ' ')
			board[1][1] = Player;
		if (board[0][1] == ' ')
			board[0][1] = Player;
		else PlayerTwo();

	}
	else if (b == 3) {

		if (board[5][2] == ' ')
			board[5][2] = Player;
		if (board[4][2] == ' ')
			board[4][2] = Player;
		if (board[3][2] == ' ')
			board[3][2] = Player;
		if (board[2][2] == ' ')
			board[2][2] = Player;
		if (board[1][2] == ' ')
			board[1][2] = Player;
		if (board[0][2] == ' ')
			board[0][2] = Player;
		else PlayerTwo();

	}
	else if (b == 4) {
		if (board[5][3] == ' ')
			board[5][3] = Player;
		if (board[4][3] == ' ')
			board[4][3] = Player;
		if (board[3][3] == ' ')
			board[3][3] = Player;
		if (board[2][3] == ' ')
			board[2][3] = Player;
		if (board[1][3] == ' ')
			board[1][3] = Player;
		if (board[0][3] == ' ')
			board[0][3] = Player;
		else PlayerTwo();
	}
	else if (b== 5) {
		if (board[5][4] == ' ')
			board[5][4] = Player;
		if (board[4][4] == ' ')
			board[4][4] = Player;
		if (board[3][4] == ' ')
			board[3][4] = Player;
		if (board[2][4] == ' ')
			board[2][4] = Player;
		if (board[1][4] == ' ')
			board[1][4] = Player;
		if (board[0][4] == ' ')
			board[0][4] = Player;
		else PlayerTwo();
	}
	else if (b == 6) {
		if (board[5][5] == ' ')
			board[5][5] = Player;
		if (board[4][5] == ' ')
			board[4][5] = Player;
		if (board[3][5] == ' ')
			board[3][5] = Player;
		if (board[2][5] == ' ')
			board[2][5] = Player;
		if (board[1][5] == ' ')
			board[1][5] = Player;
		if (board[0][5] == ' ')
			board[0][5] = Player;
		else PlayerTwo();
	}
	else {
		if (board[5][6] == ' ')
			board[5][6] = Player;
		if (board[4][6] == ' ')
			board[4][6] = Player;
		if (board[3][6] == ' ')
			board[3][6] = Player;
		if (board[2][6] == ' ')
			board[2][6] = Player;
		if (board[1][6] == ' ')
			board[1][6] = Player;
		if (board[0][6] == ' ')
			board[0][6] = Player;
		else PlayerTwo();
	}
}

void Score() {

}

void NewMenu() {

	int choice{};

	std::cout << "                             ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
	std::cout << "  \n";
	std::cout << "                             Do you want to play again?\n";
	std::cout << "  \n";
	std::cout << "                                   1) Yes, against a player\n";
	std::cout << "                                   2) Yes, against The AI\n";
	std::cout << "                                   3) No, not right now\n";
	std::cout << "  \n";
	std::cout << "                             ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";

	std::cin >> choice;

	switch (choice)
	{
	case '1':
		// Play Two Player.
		break;
	case '2':
		// Play With AI.
		break;
	case '3':
		// Exit.

	default:
		break;
	}

}

bool wins(char x) {
		// Horizontal ->

	if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X' && board[0][3] == 'X') {
		return 'X';
	}
	if (board[0][1] == 'X' && board[0][2] == 'X' && board[0][3] == 'X' && board[0][4] == 'X') {
		return 'X';
	}
	if (board[0][2] == 'X' && board[0][3] == 'X' && board[0][4] == 'X' && board[0][5] == 'X') {
		return 'X';
	}
	if (board[0][3] == 'X' && board[0][4] == 'X' && board[0][5] == 'X' && board[0][6] == 'X') {
		return 'X';
	}

	if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X' && board[1][3] == 'X') {
		return 'X';
	}
	if (board[1][1] == 'X' && board[1][2] == 'X' && board[1][3] == 'X' && board[1][4] == 'X') {
		return 'X';
	}
	if (board[1][2] == 'X' && board[1][3] == 'X' && board[1][4] == 'X' && board[1][5] == 'X') {
		return 'X';
	}
	if (board[1][3] == 'X' && board[1][4] == 'X' && board[1][5] == 'X' && board[1][6] == 'X') {
		return 'X';
	}

	if (board[3][0] == 'X' && board[3][1] == 'X' && board[3][2] == 'X' && board[3][3] == 'X') {
		return 'X';
	}
	if (board[3][1] == 'X' && board[3][2] == 'X' && board[3][3] == 'X' && board[3][4] == 'X') {
		return 'X';
	}
	if (board[3][2] == 'X' && board[3][3] == 'X' && board[3][4] == 'X' && board[3][5] == 'X') {
		return 'X';
	}
	if (board[3][3] == 'X' && board[3][4] == 'X' && board[3][5] == 'X' && board[3][6] == 'X') {
		return 'X';
	}

	if (board[4][0] == 'X' && board[4][1] == 'X' && board[4][2] == 'X' && board[4][3] == 'X') {
		return 'X';
	}
	if (board[4][1] == 'X' && board[4][2] == 'X' && board[4][3] == 'X' && board[4][4] == 'X') {
		return 'X';
	}
	if (board[4][2] == 'X' && board[4][3] == 'X' && board[4][4] == 'X' && board[4][5] == 'X') {
		return 'X';
	}
	if (board[4][3] == 'X' && board[4][4] == 'X' && board[4][5] == 'X' && board[4][6] == 'X') {
		return 'X';
	} 

	if (board[5][0] == 'X' && board[5][1] == 'X' && board[5][2] == 'X' && board[5][3] == 'X') {
		return 'X';
	}
	if (board[5][1] == 'X' && board[5][2] == 'X' && board[5][3] == 'X' && board[5][4] == 'X') {
		return 'X';
	}
	if (board[5][2] == 'X' && board[5][3] == 'X' && board[5][4] == 'X' && board[5][5] == 'X') {
		return 'X';
	}
	if (board[5][3] == 'X' && board[5][4] == 'X' && board[5][5] == 'X' && board[5][6] == 'X') {
		return 'X';
	}

		// Diagonal
		// ->
	
	if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' && board[3][3] == 'X') {
		return 'X';
	}
	if (board[0][1] == 'X' && board[1][2] == 'X' && board[2][3] == 'X' && board[3][4] == 'X') {
		return 'X';
	}
	if (board[0][2] == 'X' && board[1][3] == 'X' && board[2][4] == 'X' && board[3][5] == 'X') {
		return 'X';
	}
	if (board[0][3] == 'X' && board[1][4] == 'X' && board[2][5] == 'X' && board[3][6] == 'X') {
		return 'X';
	}

	if (board[1][0] == 'X' && board[2][1] == 'X' && board[3][2] == 'X' && board[4][3] == 'X') {
		return 'X';
	}
	if (board[1][1] == 'X' && board[2][2] == 'X' && board[3][3] == 'X' && board[4][4] == 'X') {
		return 'X';
	}
	if (board[1][2] == 'X' && board[2][3] == 'X' && board[3][4] == 'X' && board[4][5] == 'X') {
		return 'X';
	}
	if (board[1][3] == 'X' && board[2][4] == 'X' && board[3][5] == 'X' && board[4][6] == 'X') {
		return 'X';
	}

	if (board[2][0] == 'X' && board[3][1] == 'X' && board[4][2] == 'X' && board[5][3] == 'X') {
		return 'X';
	}
	if (board[2][1] == 'X' && board[3][2] == 'X' && board[4][3] == 'X' && board[5][4] == 'X') {
		return 'X';
	}
	if (board[2][2] == 'X' && board[3][3] == 'X' && board[4][4] == 'X' && board[5][5] == 'X') {
		return 'X';
	}
	if (board[2][3] == 'X' && board[3][4] == 'X' && board[4][5] == 'X' && board[5][6] == 'X') {
		return 'X';
	}

		// <-
	
	if (board[0][6] == 'X' && board[1][5] == 'X' && board[2][4] == 'X' && board[3][3] == 'X') {
		return 'X';
	}
	if (board[0][5] == 'X' && board[1][4] == 'X' && board[2][3] == 'X' && board[3][2] == 'X') {
		return 'X';
	}
	if (board[0][4] == 'X' && board[1][3] == 'X' && board[2][2] == 'X' && board[3][1] == 'X') {
		return 'X';
	}
	if (board[0][3] == 'X' && board[1][2] == 'X' && board[2][1] == 'X' && board[3][0] == 'X') {
		return 'X';
	}

	if (board[1][6] == 'X' && board[2][5] == 'X' && board[3][4] == 'X' && board[4][3] == 'X') {
		return 'X';
	}
	if (board[1][5] == 'X' && board[2][4] == 'X' && board[3][3] == 'X' && board[4][2] == 'X') {
		return 'X';
	}
	if (board[1][4] == 'X' && board[2][3] == 'X' && board[3][2] == 'X' && board[4][1] == 'X') {
		return 'X';
	}
	if (board[1][3] == 'X' && board[2][2] == 'X' && board[3][1] == 'X' && board[4][0] == 'X') {
		return 'X';
	}

	if (board[2][6] == 'X' && board[3][5] == 'X' && board[4][4] == 'X' && board[5][3] == 'X') {
		return 'X';
	}
	if (board[2][5] == 'X' && board[3][4] == 'X' && board[4][3] == 'X' && board[5][2] == 'X') {
		return 'X';
	}
	if (board[2][4] == 'X' && board[3][3] == 'X' && board[4][2] == 'X' && board[5][1] == 'X') {
		return 'X';
	}
	if (board[2][3] == 'X' && board[3][2] == 'X' && board[4][1] == 'X' && board[5][0] == 'X') {
		return 'X';
	}

		// B ->

	if (board[5][0] == 'X' && board[4][1] == 'X' && board[3][2] == 'X' && board[2][3] == 'X') {
		return 'X';
	}
	if (board[5][1] == 'X' && board[4][2] == 'X' && board[3][3] == 'X' && board[2][4] == 'X') {
		return 'X';
	}
	if (board[5][2] == 'X' && board[4][3] == 'X' && board[3][4] == 'X' && board[2][5] == 'X') {
		return 'X';
	}
	if (board[5][3] == 'X' && board[4][4] == 'X' && board[3][5] == 'X' && board[2][6] == 'X') {
		return 'X';
	}

	if (board[4][0] == 'X' && board[3][2] == 'X' && board[2][3] == 'X' && board[1][4] == 'X') {
		return 'X';
	}
	if (board[4][1] == 'X' && board[3][3] == 'X' && board[2][4] == 'X' && board[1][5] == 'X') {
		return 'X';
	}
	if (board[4][2] == 'X' && board[3][4] == 'X' && board[2][5] == 'X' && board[1][6] == 'X') {
		return 'X';
	}
	if (board[4][3] == 'X' && board[3][4] == 'X' && board[2][5] == 'X' && board[1][6] == 'X') {
		return 'X';
	}

	if (board[3][0] == 'X' && board[2][1] == 'X' && board[1][2] == 'X' && board[0][3] == 'X') {
		return 'X';
	}
	if (board[3][1] == 'X' && board[2][2] == 'X' && board[1][3] == 'X' && board[0][4] == 'X') {
		return 'X';
	}
	if (board[3][2] == 'X' && board[2][3] == 'X' && board[1][4] == 'X' && board[0][5] == 'X') {
		return 'X';
	}
	if (board[3][3] == 'X' && board[2][4] == 'X' && board[1][5] == 'X' && board[0][6] == 'X') {
		return 'X';
	}
	
		// B <-


	if (board[5][6] == 'X' && board[4][5] == 'X' && board[3][4] == 'X' && board[2][3] == 'X') {
		return 'X';
	}
	if (board[5][5] == 'X' && board[4][4] == 'X' && board[3][3] == 'X' && board[2][2] == 'X') {
		return 'X';
	}
	if (board[5][4] == 'X' && board[4][3] == 'X' && board[3][2] == 'X' && board[2][1] == 'X') {
		return 'X';
	}
	if (board[5][3] == 'X' && board[4][2] == 'X' && board[3][1] == 'X' && board[2][0] == 'X') {
		return 'X';
	}

	if (board[4][6] == 'X' && board[3][5] == 'X' && board[2][4] == 'X' && board[1][3] == 'X') {
		return 'X';
	}
	if (board[4][5] == 'X' && board[3][4] == 'X' && board[2][3] == 'X' && board[1][2] == 'X') {
		return 'X';
	}
	if (board[4][4] == 'X' && board[3][3] == 'X' && board[2][2] == 'X' && board[1][1] == 'X') {
		return 'X';
	}
	if (board[4][3] == 'X' && board[3][2] == 'X' && board[2][1] == 'X' && board[1][0] == 'X') {
		return 'X';
	}


	if (board[3][6] == 'X' && board[2][5] == 'X' && board[1][4] == 'X' && board[0][3] == 'X') {
		return 'X';
	}
	if (board[3][5] == 'X' && board[2][4] == 'X' && board[1][3] == 'X' && board[0][2] == 'X') {
		return 'X';
	}
	if (board[3][4] == 'X' && board[2][3] == 'X' && board[1][2] == 'X' && board[0][1] == 'X') {
		return 'X';
	}
	if (board[3][3] == 'X' && board[2][2] == 'X' && board[2][1] == 'X' && board[0][0] == 'X') {
		return 'X';
	}


			//Verdical


	if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X' && board[3][0] == 'X') {
		return 'X';
	}
	if (board[1][0] == 'X' && board[2][0] == 'X' && board[3][0] == 'X' && board[4][0] == 'X') {
		return 'X';
	}
	if (board[2][0] == 'X' && board[3][0] == 'X' && board[4][0] == 'X' && board[5][0] == 'X') {
		return 'X';
	}
	

	if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X' && board[3][1] == 'X') {
		return 'X';
	}
	if (board[1][1] == 'X' && board[2][1] == 'X' && board[3][1] == 'X' && board[4][1] == 'X') {
		return 'X';
	}
	if (board[2][1] == 'X' && board[3][1] == 'X' && board[4][1] == 'X' && board[5][1] == 'X') {
		return 'X';
	}




		return false;
	}

bool win(char o) {
		// Horizontal ->

		if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X' && board[0][3] == 'X') {
			return 'X';
		}
		if (board[0][1] == 'X' && board[0][2] == 'X' && board[0][3] == 'X' && board[0][4] == 'X') {
			return 'X';
		}
		if (board[0][2] == 'X' && board[0][3] == 'X' && board[0][4] == 'X' && board[0][5] == 'X') {
			return 'X';
		}
		if (board[0][3] == 'X' && board[0][4] == 'X' && board[0][5] == 'X' && board[0][6] == 'X') {
			return 'X';
		}

		if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X' && board[1][3] == 'X') {
			return 'X';
		}
		if (board[1][1] == 'X' && board[1][2] == 'X' && board[1][3] == 'X' && board[1][4] == 'X') {
			return 'X';
		}
		if (board[1][2] == 'X' && board[1][3] == 'X' && board[1][4] == 'X' && board[1][5] == 'X') {
			return 'X';
		}
		if (board[1][3] == 'X' && board[1][4] == 'X' && board[1][5] == 'X' && board[1][6] == 'X') {
			return 'X';
		}

		if (board[3][0] == 'X' && board[3][1] == 'X' && board[3][2] == 'X' && board[3][3] == 'X') {
			return 'X';
		}
		if (board[3][1] == 'X' && board[3][2] == 'X' && board[3][3] == 'X' && board[3][4] == 'X') {
			return 'X';
		}
		if (board[3][2] == 'X' && board[3][3] == 'X' && board[3][4] == 'X' && board[3][5] == 'X') {
			return 'X';
		}
		if (board[3][3] == 'X' && board[3][4] == 'X' && board[3][5] == 'X' && board[3][6] == 'X') {
			return 'X';
		}

		if (board[4][0] == 'X' && board[4][1] == 'X' && board[4][2] == 'X' && board[4][3] == 'X') {
			return 'X';
		}
		if (board[4][1] == 'X' && board[4][2] == 'X' && board[4][3] == 'X' && board[4][4] == 'X') {
			return 'X';
		}
		if (board[4][2] == 'X' && board[4][3] == 'X' && board[4][4] == 'X' && board[4][5] == 'X') {
			return 'X';
		}
		if (board[4][3] == 'X' && board[4][4] == 'X' && board[4][5] == 'X' && board[4][6] == 'X') {
			return 'X';
		}

		if (board[5][0] == 'X' && board[5][1] == 'X' && board[5][2] == 'X' && board[5][3] == 'X') {
			return 'X';
		}
		if (board[5][1] == 'X' && board[5][2] == 'X' && board[5][3] == 'X' && board[5][4] == 'X') {
			return 'X';
		}
		if (board[5][2] == 'X' && board[5][3] == 'X' && board[5][4] == 'X' && board[5][5] == 'X') {
			return 'X';
		}
		if (board[5][3] == 'X' && board[5][4] == 'X' && board[5][5] == 'X' && board[5][6] == 'X') {
			return 'X';
		}

		// Diagonal
		// ->

		if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' && board[3][3] == 'X') {
			return 'X';
		}
		if (board[0][1] == 'X' && board[1][2] == 'X' && board[2][3] == 'X' && board[3][4] == 'X') {
			return 'X';
		}
		if (board[0][2] == 'X' && board[1][3] == 'X' && board[2][4] == 'X' && board[3][5] == 'X') {
			return 'X';
		}
		if (board[0][3] == 'X' && board[1][4] == 'X' && board[2][5] == 'X' && board[3][6] == 'X') {
			return 'X';
		}

		if (board[1][0] == 'X' && board[2][1] == 'X' && board[3][2] == 'X' && board[4][3] == 'X') {
			return 'X';
		}
		if (board[1][1] == 'X' && board[2][2] == 'X' && board[3][3] == 'X' && board[4][4] == 'X') {
			return 'X';
		}
		if (board[1][2] == 'X' && board[2][3] == 'X' && board[3][4] == 'X' && board[4][5] == 'X') {
			return 'X';
		}
		if (board[1][3] == 'X' && board[2][4] == 'X' && board[3][5] == 'X' && board[4][6] == 'X') {
			return 'X';
		}

		if (board[2][0] == 'X' && board[3][1] == 'X' && board[4][2] == 'X' && board[5][3] == 'X') {
			return 'X';
		}
		if (board[2][1] == 'X' && board[3][2] == 'X' && board[4][3] == 'X' && board[5][4] == 'X') {
			return 'X';
		}
		if (board[2][2] == 'X' && board[3][3] == 'X' && board[4][4] == 'X' && board[5][5] == 'X') {
			return 'X';
		}
		if (board[2][3] == 'X' && board[3][4] == 'X' && board[4][5] == 'X' && board[5][6] == 'X') {
			return 'X';
		}

		// <-

		if (board[0][6] == 'X' && board[1][5] == 'X' && board[2][4] == 'X' && board[3][3] == 'X') {
			return 'X';
		}
		if (board[0][5] == 'X' && board[1][4] == 'X' && board[2][3] == 'X' && board[3][2] == 'X') {
			return 'X';
		}
		if (board[0][4] == 'X' && board[1][3] == 'X' && board[2][2] == 'X' && board[3][1] == 'X') {
			return 'X';
		}
		if (board[0][3] == 'X' && board[1][2] == 'X' && board[2][1] == 'X' && board[3][0] == 'X') {
			return 'X';
		}

		if (board[1][6] == 'X' && board[2][5] == 'X' && board[3][4] == 'X' && board[4][3] == 'X') {
			return 'X';
		}
		if (board[1][5] == 'X' && board[2][4] == 'X' && board[3][3] == 'X' && board[4][2] == 'X') {
			return 'X';
		}
		if (board[1][4] == 'X' && board[2][3] == 'X' && board[3][2] == 'X' && board[4][1] == 'X') {
			return 'X';
		}
		if (board[1][3] == 'X' && board[2][2] == 'X' && board[3][1] == 'X' && board[4][0] == 'X') {
			return 'X';
		}

		if (board[2][6] == 'X' && board[3][5] == 'X' && board[4][4] == 'X' && board[5][3] == 'X') {
			return 'X';
		}
		if (board[2][5] == 'X' && board[3][4] == 'X' && board[4][3] == 'X' && board[5][2] == 'X') {
			return 'X';
		}
		if (board[2][4] == 'X' && board[3][3] == 'X' && board[4][2] == 'X' && board[5][1] == 'X') {
			return 'X';
		}
		if (board[2][3] == 'X' && board[3][2] == 'X' && board[4][1] == 'X' && board[5][0] == 'X') {
			return 'X';
		}

		// B ->

		if (board[5][0] == 'X' && board[4][1] == 'X' && board[3][2] == 'X' && board[2][3] == 'X') {
			return 'X';
		}
		if (board[5][1] == 'X' && board[4][2] == 'X' && board[3][3] == 'X' && board[2][4] == 'X') {
			return 'X';
		}
		if (board[5][2] == 'X' && board[4][3] == 'X' && board[3][4] == 'X' && board[2][5] == 'X') {
			return 'X';
		}
		if (board[5][3] == 'X' && board[4][4] == 'X' && board[3][5] == 'X' && board[2][6] == 'X') {
			return 'X';
		}

		if (board[4][0] == 'X' && board[3][2] == 'X' && board[2][3] == 'X' && board[1][4] == 'X') {
			return 'X';
		}
		if (board[4][1] == 'X' && board[3][3] == 'X' && board[2][4] == 'X' && board[1][5] == 'X') {
			return 'X';
		}
		if (board[4][2] == 'X' && board[3][4] == 'X' && board[2][5] == 'X' && board[1][6] == 'X') {
			return 'X';
		}
		if (board[4][3] == 'X' && board[3][4] == 'X' && board[2][5] == 'X' && board[1][6] == 'X') {
			return 'X';
		}

		if (board[3][0] == 'X' && board[2][1] == 'X' && board[1][2] == 'X' && board[0][3] == 'X') {
			return 'X';
		}
		if (board[3][1] == 'X' && board[2][2] == 'X' && board[1][3] == 'X' && board[0][4] == 'X') {
			return 'X';
		}
		if (board[3][2] == 'X' && board[2][3] == 'X' && board[1][4] == 'X' && board[0][5] == 'X') {
			return 'X';
		}
		if (board[3][3] == 'X' && board[2][4] == 'X' && board[1][5] == 'X' && board[0][6] == 'X') {
			return 'X';
		}

		// B <-


		if (board[5][6] == 'X' && board[4][5] == 'X' && board[3][4] == 'X' && board[2][3] == 'X') {
			return 'X';
		}
		if (board[5][5] == 'X' && board[4][4] == 'X' && board[3][3] == 'X' && board[2][2] == 'X') {
			return 'X';
		}
		if (board[5][4] == 'X' && board[4][3] == 'X' && board[3][2] == 'X' && board[2][1] == 'X') {
			return 'X';
		}
		if (board[5][3] == 'X' && board[4][2] == 'X' && board[3][1] == 'X' && board[2][0] == 'X') {
			return 'X';
		}

		if (board[4][6] == 'X' && board[3][5] == 'X' && board[2][4] == 'X' && board[1][3] == 'X') {
			return 'X';
		}
		if (board[4][5] == 'X' && board[3][4] == 'X' && board[2][3] == 'X' && board[1][2] == 'X') {
			return 'X';
		}
		if (board[4][4] == 'X' && board[3][3] == 'X' && board[2][2] == 'X' && board[1][1] == 'X') {
			return 'X';
		}
		if (board[4][3] == 'X' && board[3][2] == 'X' && board[2][1] == 'X' && board[1][0] == 'X') {
			return 'X';
		}


		if (board[3][6] == 'X' && board[2][5] == 'X' && board[1][4] == 'X' && board[0][3] == 'X') {
			return 'X';
		}
		if (board[3][5] == 'X' && board[2][4] == 'X' && board[1][3] == 'X' && board[0][2] == 'X') {
			return 'X';
		}
		if (board[3][4] == 'X' && board[2][3] == 'X' && board[1][2] == 'X' && board[0][1] == 'X') {
			return 'X';
		}
		if (board[3][3] == 'X' && board[2][2] == 'X' && board[2][1] == 'X' && board[0][0] == 'X') {
			return 'X';
		}


		//Verdical


		if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X' && board[3][0] == 'X') {
			return 'X';
		}
		if (board[1][0] == 'X' && board[2][0] == 'X' && board[3][0] == 'X' && board[4][0] == 'X') {
			return 'X';
		}
		if (board[2][0] == 'X' && board[3][0] == 'X' && board[4][0] == 'X' && board[5][0] == 'X') {
			return 'X';
		}


		if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X' && board[3][1] == 'X') {
			return 'X';
		}
		if (board[1][1] == 'X' && board[2][1] == 'X' && board[3][1] == 'X' && board[4][1] == 'X') {
			return 'X';
		}
		if (board[2][1] == 'X' && board[3][1] == 'X' && board[4][1] == 'X' && board[5][1] == 'X') {
			return 'X';
		}




		return false;
	}

bool nomovesleft() {
	for (int i = 1; i <= 7; i++) {
		if (board[0][i] == '_') {
				return false;
		}
	}
	return true;
}