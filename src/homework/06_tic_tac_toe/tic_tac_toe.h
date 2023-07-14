//h
#include<iostream>
#include<string>
#include<vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
class TicTacToe
{
public:
    TicTacToe(int size) : pegs((size == 3) ? 9 : 16, " ")
    {
    }
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const { return player; }
    void display_board() const;
    std::string get_winner() const;

protected:
    virtual bool check_column_win() = 0;
    virtual bool check_row_win() = 0;
    virtual bool check_diagonal_win() = 0;
    std::vector<std::string> pegs;

private:
    std::string player;
    std::string winner;
    void clear_board();
    void set_next_player();
    bool check_board_full();
    void set_winner(const std::string& player);
};

#endif