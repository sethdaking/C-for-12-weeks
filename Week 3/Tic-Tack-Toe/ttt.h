/* ttt.h  ---------------------------------------------------------------
   Tiny Tic-Tac-Toe engine – header
   ---------------------------------------------------------------------*/
#ifndef TTT_H
#define TTT_H

#include <stdbool.h>

/* ---------- data ---------- */
extern char ttt_board[3][3];     /* 'X', 'O', or ' ' */

/* ---------- engine ---------- */
void  ttt_reset(void);           /* clear board                      */
bool  ttt_move(int row, int col, char player);
/* ^ return true on success; false if out of range / occupied          */

char  ttt_status(void);
/* ^ 'X' or 'O' = winner
     'D'        = draw
     'N'        = not finished yet                                    */

void  ttt_draw(void);            /* ASCII render                      */

#endif /* TTT_H */
