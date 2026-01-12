#include <stdio.h>
#include "alfabet.h"

int main(int argc, char* argv[]) {

    int git_map[7][52];


    // Выводим общее количество аргументов
    printf("Количество аргументов: %d\n", argc);

    // Выводим каждый аргумент
    printf("Аргументы:\n");
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    printf("git_map: %d\n", sizeof(git_map));
    printf("git_map[0]: %d\n", sizeof(git_map[0]));
    printf("git_map[0][0]: %d\n", sizeof(git_map[0][0]));

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < sizeof(git_map[i])/4; j++) {
            if ((i != 0 && i != 6) && (j != 0 && j != sizeof(git_map[i])/4-1)) {
                printf("0");
            } else {
                printf(".");
            }
            
        }
        printf("\n");
    }

    char lettera;
    scanf("%c\n", lettera);

    int (*letter)[3] = get_letter('a');

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 3; j++) {
            printf(letter[i][j] ? "*" : " ");
        }
        printf("\n");
    }

    return 0;
}