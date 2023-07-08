#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test if the board is full", "verification") {
    TicTacToe game;

    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(3);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(7);
    REQUIRE(game.game_over() == false);
    game.mark_board(6);
    REQUIRE(game.game_over() == false);
    game.mark_board(9);
    REQUIRE(game.game_over() == false);
    game.mark_board(8);
	REQUIRE(game.game_over() == true);
    std::string winner = game.get_winner();
    REQUIRE(winner == "C");
}
TEST_CASE("Test if the first player is set to X", "verification") {
    TicTacToe game;
    game.start_game("X");

    std::string firstPlayer = game.get_player();
    REQUIRE(firstPlayer == "X");
}
TEST_CASE("Test if the first player is set to O", "verification") {
    TicTacToe game;
    game.start_game("O");

    std::string firstPlayer = game.get_player();
    REQUIRE(firstPlayer == "O");
}
TEST_CASE("Test win by first column", "verification") {
    TicTacToe game;
    game.start_game("X");
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(7);
    REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win by second column", "verification") {
    TicTacToe game;
    game.start_game("X");
    game.mark_board(2);
	REQUIRE(game.game_over() == false);
    game.mark_board(1); 
	REQUIRE(game.game_over() == false);
    game.mark_board(5);
	REQUIRE(game.game_over() == false);
    game.mark_board(3);
	REQUIRE(game.game_over() == false);
    game.mark_board(8);
    REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win by third column", "verification") {
    TicTacToe game;
    game.start_game("X");
    game.mark_board(3);
	REQUIRE(game.game_over() == false);
    game.mark_board(1); 
	REQUIRE(game.game_over() == false);
    game.mark_board(6);
	REQUIRE(game.game_over() == false);
    game.mark_board(2);
	REQUIRE(game.game_over() == false);
    game.mark_board(9);
    REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win by first row", "verification") {
    TicTacToe game;
    game.start_game("X");
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(3);
    REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win by second row", "verification") {
    TicTacToe game;
    game.start_game("X");
    game.mark_board(4);
	REQUIRE(game.game_over() == false);
    game.mark_board(1);
	REQUIRE(game.game_over() == false);
    game.mark_board(5);
	REQUIRE(game.game_over() == false);
    game.mark_board(2);
	REQUIRE(game.game_over() == false);
    game.mark_board(6);
    REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win by third row", "verification") {
    TicTacToe game;
    game.start_game("X");
    game.mark_board(7);
	REQUIRE(game.game_over() == false);
    game.mark_board(1);
	REQUIRE(game.game_over() == false);
    game.mark_board(8);
	REQUIRE(game.game_over() == false);
    game.mark_board(2);
	REQUIRE(game.game_over() == false);
    game.mark_board(9);
    REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win diagonally from top left", "verification") {
    TicTacToe game;
    game.start_game("X");
    game.mark_board(1);
	REQUIRE(game.game_over() == false);
    game.mark_board(2);
	REQUIRE(game.game_over() == false);
    game.mark_board(5);
	REQUIRE(game.game_over() == false);
    game.mark_board(3);
	REQUIRE(game.game_over() == false);
    game.mark_board(9);
    REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win diagonally from bottom left", "verification") {
    TicTacToe game;
    game.start_game("X");
    game.mark_board(7);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(3);
    REQUIRE(game.game_over() == true);
}