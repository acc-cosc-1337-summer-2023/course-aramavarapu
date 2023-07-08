#include<tic_tac_toe.h>
#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;
int main() 
{
    char user_choice;

    do
    {
        TicTacToe game;
        string first_player;

        cout << "Enter the name of the first player: ";
        cin >> first_player;

        game.start_game(first_player);

        int position;

        while (!game.game_over())
        {
            cout << "Enter a position (1-9): ";
            cin >> position;

            
            while (cin.fail() || position < 1 || position > 9)
            {
                cout << "Invalid number enter a number from 1 to 9: ";
                cin.clear();
                cin.ignore(); 
                cin >> position;
            }

            game.mark_board(position);
            game.display_board();
        }

        string winner = game.get_winner();

        if (winner == "C")
        {
            cout << "It's a tie!" << "/n";
        }
        else
        {
            cout << "Player " << winner << " wins!" << "/n";
        }

        cout << "Play again? Enter 'y' or 'Y' to continue, or any other key to exit: ";
        cin >> user_choice;

    } while (user_choice == 'y' || user_choice == 'Y');

    return 0;
}