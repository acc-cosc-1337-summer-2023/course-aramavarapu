//cpp
#include "tic_tac_toe.h"

using std::cout;

bool TicTacToe::game_over()
{
    if (check_row_win() || check_column_win() || check_diagonal_win())
    {
        set_winner(player);
        return true;
    }
    else if (check_board_full())
    {
        set_winner("C");
        return true;
    }
    else
    {
        return false;
    }
}
void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}
	
void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    int size = static_cast<int>(pegs.size());
    int num_rows = size == 9 ? 3 : 4;
    int num_columns = size == 9 ? 3 : 4;

    for (int i = 0; i < num_rows; ++i)
    {
        for (int j = 0; j < num_columns; ++j)
        {
            int index = i * num_columns + j;
            cout << pegs[index] << "|";
        }
        cout << "\n";
    }
}
std::string TicTacToe::get_winner() const
{
    return winner;
}

//private functions
void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg= " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(long unsigned int i=0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }

    return true;
}
bool TicTacToe::check_column_win()
{
    for (int i = 0; i < 3; ++i)
    {
        if (pegs[i] == pegs[i + 3] && pegs[i] == pegs[i + 6] && pegs[i] != " ")
        {
            return true;
        }
    }

    return false;
}
bool TicTacToe::check_row_win()
{
    for (int i = 0; i < 9; i += 3)
    {
        if (pegs[i] == pegs[i + 1] && pegs[i] == pegs[i + 2] && pegs[i] != " ")
        {
            return true;
        }
    }

    return false;
}
bool TicTacToe::check_diagonal_win()
{
    if (pegs[0] == pegs[4] && pegs[0] == pegs[8] && pegs[0] != " ")
    {
        return true;
    }
    if (pegs[2] == pegs[4] && pegs[2] == pegs[6] && pegs[2] != " ")
    {
        return true;
    }

    return false;
}
void TicTacToe::set_winner(const std::string& player)
{
    if (player == "X")
    {
        winner = "X";
    }
    else if (player == "O")
    {
        winner = "O";
    }
    else
    {
        winner = "C";
    }
}