//#include <iostream>
//#include <Windows.h>
//#include "GameDef.h"
//
//using namespace std;
//
//Game* game;
//int main()
//{
//	INPUT_RECORD record;
//	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
//	DWORD count; // ReadConsoleInput temp buffer
//
//	while (true) {
//		if (WaitForSingleObject(hStdin, 0) == WAIT_OBJECT_0) {
//			ReadConsoleInput(hStdin, &record, 1, &count);
//
//			if (record.EventType == KEY_EVENT && !record.Event.KeyEvent.bKeyDown) {
//				switch (record.Event.KeyEvent.wVirtualKeyCode)
//				{
//				case VK_SPACE:
//					// we'll complete this later
//					std::cout << "Hello" << std::endl;
//					break;
//				case VK_ESCAPE:
//					// end game
//					return 0;
//				}
//			}
//		}
//
//		// mock up simulations
//
//		// setup render loop
//
//	}
//}