#pragma once

void Editor_create();
void Editor_destroy();
void Editor_init();
void Editor_update();
void Editor_timedUpdate();
bool Editor_keyDown(int keyCode, int mod);
void Editor_menuEvent(int menuItem);

enum
{
	EDITOR_MENU_NEW,
	EDITOR_MENU_OPEN,
	EDITOR_MENU_SAVE,
	EDITOR_MENU_SAVE_AS,
};

