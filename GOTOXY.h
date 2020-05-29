#ifndef _GOTOXY_H
#define _GOTOXY_H
#include <windows.h>

void gotoxy(int x, int y)
{
COORD coord;
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

#endif
