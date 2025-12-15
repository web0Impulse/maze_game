// CrtLib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "windows.h"
#include "CrtLib.h"

namespace crt
{

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);


	void GotoXY(int x, int y)
	{
		COORD cp;
		cp.X = x;
		cp.Y = y;
		SetConsoleCursorPosition(hStdOut, cp);
	}

	void SetTextColor(int color)
	{
		CONSOLE_SCREEN_BUFFER_INFO inf;
		color = color & 0x0F;
		GetConsoleScreenBufferInfo(hStdOut, &inf);
		inf.wAttributes = inf.wAttributes & 0xF0;
		inf.wAttributes = inf.wAttributes | color;
		SetConsoleTextAttribute(hStdOut, inf.wAttributes);
	}

	void SetTextBackground(int color)
	{
		CONSOLE_SCREEN_BUFFER_INFO inf;
		color = color & 0x0F;
		GetConsoleScreenBufferInfo(hStdOut, &inf);
		inf.wAttributes = inf.wAttributes & 0x0F;
		inf.wAttributes = inf.wAttributes | (color << 4);
		SetConsoleTextAttribute(hStdOut, inf.wAttributes);
	}

	void SetCursorVisibility(bool visible)
	{
		CONSOLE_CURSOR_INFO structCursorInfo;
		GetConsoleCursorInfo(hStdOut, &structCursorInfo);
		structCursorInfo.bVisible = visible;
		SetConsoleCursorInfo(hStdOut, &structCursorInfo);
	}

	void ShowCursor()
	{
		SetCursorVisibility(true);
	}

	void HideCursor()
	{
		SetCursorVisibility(false);
	}
}