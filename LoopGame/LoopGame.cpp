#include <iostream>
#include <Windows.h>
#include "GameDef.h"
#include "Utility.h"

using namespace std;

Game* game;
int main()
{
	// player
	game = new Game();
	game->player = new Player();
	strcpy_s(game->player->name, "INTELLINES");
	game->player->level = 1;
	game->player->health = 64;

	// io setup
	INPUT_RECORD record;
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD count; // ReadConsoleInput temp buffer

	// initialize setup
	Log_Welcome();

	while (true) {
		if (WaitForSingleObject(hStdin, 0) == WAIT_OBJECT_0) {
			ReadConsoleInput(hStdin, &record, 1, &count);

			if (record.EventType == KEY_EVENT && !record.Event.KeyEvent.bKeyDown) {
				switch (record.Event.KeyEvent.wVirtualKeyCode)
				{
				case VK_SPACE:
					// we'll complete this later
					game->player->health--;
					cout << "Player get hurt, and new health value is: " << game->player->health << endl;
					break;
				case VK_ESCAPE:
					cout << "Game exit, see you next time!" << endl;
					return 0;
				}
			}
		}

		// mock up simulations

		// setup render loop

	}
}