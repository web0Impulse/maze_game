#pragma once

namespace crt
{
	// Константы цветов
	const int COLOR_BLACK = 0;
	const int COLOR_BLUE = 1;
	const int COLOR_GREEN = 2;
	const int COLOR_CYAN = 3;
	const int COLOR_RED = 4;
	const int COLOR_MAGENTA = 5;
	const int COLOR_BROWN = 6;
	const int COLOR_GRAY = 7;
	const int COLOR_DARK_GRAY = 8;
	const int COLOR_LIGHT_BLUE = 9;
	const int COLOR_LIGHT_GREEN = 10;
	const int COLOR_LIGHT_CYAN = 11;
	const int COLOR_LIGHT_RED = 12;
	const int COLOR_LIGHT_MAGENTA = 13;
	const int COLOR_YELLOW= 14;
	const int COLOR_WHITE = 15;

	void GotoXY(int x, int y); // Устанавливает курсор в позицию с координатами х, у
	void SetTextColor(int color);	// Устанавливает цвет символов
	void SetTextBackground(int color); // Устанавливает цвет фона символа
	void SetCursorVisibility(bool visible); // Управляет видимостью курсора в зависимости от булева параметра
	void HideCursor(); // краткая форма функции гашения курсора
	void ShowCursor(); // краткая форма функции зажигания курсора
}
