#include "raylib.h"
#include "screens.h"

// Module Variables Definition (local)
static int framesCounter = 0;
static int finishScreen = 0;

// Splash Screen Functions Definition

// Splash Screen Initialization logic
void InitSplashScreen(void)
{
	framesCounter = 0;
	finishScreen = 0;
}

// Splash Screen Update logic
void UpdateSplashScreen(void)
{
	framesCounter ++;

	if (framesCounter >= 180)
	{
		finishScreen = 1;
		PlaySound(fxCoin);
	}
}

// Splash Screen Draw logic
void DrawSplashScreen(void)
{
	DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), ORANGE);
	Vector2 textPos = { 130, 220 };
	DrawTextEx(font, "Lazy Bunny", textPos, font.baseSize*3.0f, 4, BLACK);
}

// Splash Screen Unload logic
void UnloadSplashScreen(void)
{
	// TODO: Unload SPLASH screen variables here!
}

// Splash Screen should finish?
int FinishSplashScreen(void)
{
	return finishScreen;
}
