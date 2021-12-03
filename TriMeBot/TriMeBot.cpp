#include"Bot.h";
#include<iostream>
#include<Windows.h>


int main()
{
	BotBrain bb;
    
	while (true) 
	{
		LPCWSTR Window = L"Tri-Me | Addicting Games - Brave";
		HWND hwND = (FindWindow(NULL, Window));
		while (hwND == NULL)
		{

				HWND hwND = (FindWindow(NULL, Window));

				std::cout << "Start Game" << std::endl;
				break;
		


		}
		bb.Bot(hwND);

        }
	}



