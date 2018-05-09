#include <stdio.h>

void board_print (char a[][9])
{
    int i, j;
    for (i=0; i<9; i++)
    {
        for (j=0; j<9; j++)
        {
            printf ("%c ", a[i][j]);
        }
        printf ("\n");
    }
    printf ("\n");
}
