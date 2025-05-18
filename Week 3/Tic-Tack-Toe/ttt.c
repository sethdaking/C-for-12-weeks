/* ttt.c  --------------------------------------------------------------*/
#include "ttt.h"
#include <stdio.h>

/* ============== data ============== */
char ttt_board[3][3];

/* ============== helpers =========== */
static bool three_equal(char a, char b, char c)
{
    return a == b && b == c && a != ' ';
}

/* ============== engine ============ */
void ttt_reset(void)
{
    for (int r = 0; r < 3; ++r)
        for (int c = 0; c < 3; ++c)
            ttt_board[r][c] = ' ';
}

bool ttt_move(int row, int col, char player)
/* row & col: 1-based 1..3 */
{
    if (row < 1 || row > 3 || col < 1 || col > 3)
        return false;
    if (ttt_board[row-1][col-1] != ' ')
        return false;

    ttt_board[row-1][col-1] = player;
    return true;
}

char ttt_status(void)
{
    /* rows & cols */
    for (int i = 0; i < 3; ++i) {
        if (three_equal(ttt_board[i][0], ttt_board[i][1], ttt_board[i][2]))
            return ttt_board[i][0];
        if (three_equal(ttt_board[0][i], ttt_board[1][i], ttt_board[2][i]))
            return ttt_board[0][i];
    }
    /* diagonals */
    if (three_equal(ttt_board[0][0], ttt_board[1][1], ttt_board[2][2]))
        return ttt_board[0][0];
    if (three_equal(ttt_board[0][2], ttt_board[1][1], ttt_board[2][0]))
        return ttt_board[0][2];

    /* draw? */
    int filled = 0;
    for (int r = 0; r < 3; ++r)
        for (int c = 0; c < 3; ++c)
            if (ttt_board[r][c] != ' ') ++filled;

    return (filled == 9) ? 'D' : 'N';
}

void ttt_draw(void)
{
    puts("  1   2   3 ");
    for (int r = 0; r < 3; ++r) {
        printf("%d", r + 1);
        for (int c = 0; c < 3; ++c) {
            printf(" %c ", ttt_board[r][c]);
            if (c < 2) putchar('|');
        }
        putchar('\n');
        if (r < 2) puts(" ---+---+---");
    }
}
