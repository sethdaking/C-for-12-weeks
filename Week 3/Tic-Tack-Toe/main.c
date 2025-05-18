/* main.c  -------------------------------------------------------------*/
#include "ttt.h"
#include <stdio.h>

int main(void)
{
    char player = 'X';
    char status;

    ttt_reset();

    while ((status = ttt_status()) == 'N') {
        ttt_draw();
        printf("\nPlayer %c – enter row col (e.g. 2 3): ", player);

        int row, col;
        if (scanf("%d %d", &row, &col) != 2) {
            puts("Bad input – exiting."); return 1;
        }

        if (!ttt_move(row, col, player)) {
            puts("Invalid move, try again.\n");
            int junk; while ((junk = getchar()) != '\n' && junk != EOF);
            continue;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    ttt_draw();
    if (status == 'D')
        puts("\nIt’s a draw!");
    else
        printf("\nPlayer %c wins!\n", status);

    return 0;
}
