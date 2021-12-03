#include<iostream>
#include<Windows.h>


#define Green 9498443

#define Brown 3360101

#define Pink 7219408


class BotBrain {
public:
	void Bot(HWND hwnd);

private:
	POINT Left = { 528,699 };
	POINT right{ 1425,635 };
	POINT area_to_check{ 1117 ,645 };
	
	POINT Right_Tri{ 1131 ,891 };
	POINT Left_Tri{ 1072, 874 };
	POINT Main{ 1098, 842 };
	

	void Rotate(int color_Right, int Color_Left, int area);
	void Check(HWND hwND);

};

