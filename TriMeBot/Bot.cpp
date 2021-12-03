#include "Bot.h"

void BotBrain::Bot(HWND hwnd)
{
	while (true)
	{
		Check(hwnd);
		Sleep(110);
		
		
	}
}

void BotBrain::Rotate(int color_Right, int Color_Left,int area)
{
	
		if (area == Color_Left)
		{
			SetCursorPos(right.x, right.y);
			mouse_event(MOUSEEVENTF_LEFTDOWN, right.x, right.y, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, right.x, right.y, 0, 0);
			std::cout << "Rotating Right" << std::endl;

		}
		else if (area == color_Right)
		{
			SetCursorPos(Left.x, Left.y);
			mouse_event(MOUSEEVENTF_LEFTDOWN, Left.x, Left.y, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, Left.x, Left.y, 0, 0);
			std::cout << "Roatating Left" << std::endl;

		
	}


}

void BotBrain::Check(HWND hwND)
{
	HDC hdc = GetDC(hwND);
	//std::cout << "Checking" << std::endl;
	if (hdc != NULL) 
	{
		// variable where hdc is stored
		COLORREF color_TriTri = GetPixel(hdc, Main.x, Main.y);
		COLORREF color_areatocheck = GetPixel(hdc, area_to_check.x, area_to_check.y);
		COLORREF left_block = GetPixel(hdc, Left_Tri.x, Left_Tri.y);
		COLORREF right_block = GetPixel(hdc, Right_Tri.x, Right_Tri.y);
		if (color_areatocheck==Green||color_areatocheck == Brown|| color_areatocheck == Pink)
		{
			if (color_TriTri != color_areatocheck)
			{
				std::cout << "Color_Tri: " << color_TriTri<<" "<<" checked: "<<color_areatocheck << std::endl;
				if (color_TriTri == Green || color_TriTri == Brown || color_TriTri == Pink)
				{
					Rotate(right_block, left_block, color_areatocheck);
				}
			}
			else
			{


			}
			ReleaseDC(NULL, hdc);
		}
	}
}
