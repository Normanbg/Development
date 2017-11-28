#ifndef __UI_TEXT__
#define __UI_TEXT__

#include "j1Module.h"
#include "p2Point.h"
#include "SDL\include\SDL_pixels.h"
#include "UI_Element.h"

struct _TTF_Font;
struct SDL_Texture;

class UI_Text : public UI_Element
{
public:
	UI_Text(){}
	UI_Text(char* text, int x, int y, _TTF_Font* font, SDL_Color color) : text(text), position({ x, y }), font(font), color(color)
	{}
	~UI_Text();

	void createTexture();

public:
	p2SString text = nullptr;
	_TTF_Font* font = nullptr;
	iPoint position;
	SDL_Color color;
	SDL_Texture* texture;
	SDL_Texture* outline;
	uint tex_width;
	uint tex_height;
	iPoint outline_offset;
};

#endif // !__UI_TEXT__

