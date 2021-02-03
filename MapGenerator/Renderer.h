#pragma once

#include<SDL.h>
#include"Rectangle.h"
#include"Window.h"

class Renderer
{
public:
	Renderer();
	bool initialize(Window& window);
	void beginDraw();
	void drawRect(Rectangle rect, int R, int G, int B, int A);
	void drawRectOutline(Rectangle rect, int R, int G, int B, int A);
	void endDraw();
	void close();

	//void drawText(Text* text);
	inline SDL_Renderer* toSDLRenderer() const { return SDLRenderer; }
private:
	SDL_Renderer* SDLRenderer = nullptr;
};