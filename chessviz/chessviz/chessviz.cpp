// chessviz.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <stdlib.h>
#include <iostream>
char board[8][8];
char abcIdx[8] = {'a','b','c','d','e','f','g','h'};
void printBoard()
{
    for (int i = 7; i >= 0; i--)
    {
        printf("\n%i", i + 1);
        for (int j = 0; j < 8; j++)
        {
            printf("%c", board[i][j]);
        }
    }
    printf("\n ");
    for (int i = 0; i < 8; i++)
    {
        printf("%c", abcIdx[i]);
    }
}
void initBoard()
{
    board[0][0] = 'R';
    board[0][1] = 'N';
    board[0][2] = 'B';
    board[0][3] = 'K';
    board[0][4] = 'Q';
    board[0][5] = 'B';
    board[0][6] = 'N';
    board[0][7] = 'R';
    int i, j;
    for (i = 0; i < 8; i++)
    {
        board[1][i] = 'P';
    }
    for (i = 2; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            board[i][j] = ' ';
        }
    }
    for (i = 0; i < 8; i++)
    {
        board[6][i] = 'p';
    }
    board[7][0] = 'r';
    board[7][1] = 'n';
    board[7][2] = 'b';
    board[7][3] = 'k';
    board[7][4] = 'q';
    board[7][5] = 'b';
    board[7][6] = 'n';
    board[7][7] = 'r';
}
int main()
{
    setlocale(LC_ALL, "rus");
    initBoard();
    std::string input;
    do
    {
        system("CLS");
        printBoard();
        printf("\nВведите ход или 'n' для выхода'\n");
        scanf("%s", input.c_str());
    } while (strcmp (input.c_str(),"n")!=0);
    
}
