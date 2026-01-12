#include <stdio.h>
#include "alfabet.h"

#define ROWS 7
#define COLUMNS 3

int a_let[ROWS][COLUMNS] = {
    {0, 1, 0},
    {0, 1, 0},
    {1, 0, 1},
    {1, 0, 1},
    {1, 1, 1},
    {1, 0, 1},
    {1, 0, 1}
};

int b_let[ROWS][COLUMNS] = {
    {1, 1, 0},
    {1, 0, 1},
    {1, 0, 1},
    {1, 1, 0},
    {1, 0, 1},
    {1, 0, 1},
    {1, 1, 1}
};

int (*get_letter(char lettera))[COLUMNS] {
    printf("%c\n", lettera);
    return b_let;
}