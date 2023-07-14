#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include<string>
#include <memory>
using std::cout; using std::cin; using std::string; using std::unique_ptr;
int main()
{
    char user_choice;

    do
    {
        unique_ptr<TicTacToe> game;
        string first_player;
        int game_choice;

        cout << "Choose a Tic Tac Toe game: Enter 3 for Tic Tac Toe 3 or 4 for Tic Tac Toe 4: ";
        cin >> game_choice;

        if (game_choice == 3)
        {
            game = std::make_unique<TicTacToe3>();
        }
        else if (game_choice == 4)
        {
            game = std::make_unique<TicTacToe4>();
        }
        else
        {
            cout << "Invalid choice.";
            break;
        }

        cout << "Enter the name of the first player: ";
        cin >> first_player;

        game->start_game(first_player);

        int position;

        while (!game->game_over())
        {
            cout << "Enter a position (1-";
            if (game_choice == 3)
            {
                cout << "9";
            }
            else if (game_choice == 4)
            {
                cout << "16";
            }
            cout << "): ";
            cin >> position;

            while (cin.fail() || position < 1)
            {
                cout << "Invalid number. Enter a positive number: ";
                cin.clear();
                cin.ignore();
                cin >> position;
            }

            game->mark_board(position);
            game->display_board();
        }

        string winner = game->get_winner();

        if (winner == "C")
        {
            cout << "It's a tie!\n";
        }
        else
        {
            cout << "Player " << winner << " wins!\n";
        }

        cout << "Play again? Enter 'y' or 'Y' to continue, or any other key to exit: ";
        cin >> user_choice;

    } while (user_choice == 'y' || user_choice == 'Y');

    return 0;
}