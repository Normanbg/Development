#ifndef __UI_BUTTON__
#define __UI_BUTTON__

#include "SDL\include\SDL_pixels.h"
#include "UI_Element.h"

struct _TTF_Font;
struct SDL_Texture;
class UI_Button : public UI_Element
{
public:
	UI_Button()
	{}
	UI_Button(char* text, _TTF_Font* font, SDL_Color color, int x, int y, SDL_Texture* texture, SDL_Rect standby, SDL_Rect OnMouse, SDL_Rect OnClick, button_type type) :
		position({ x, y }),
		texture(texture),
		standby(standby),
		OnMouse(OnMouse),
		Tick(OnMouse),
		OnClick(OnClick),
		type(type)
	{
		this->text = new Text(text, position.x, position.y, font, color);
	}
	~UI_Button();
public:
	Text* text = nullptr;
	iPoint position;
	SDL_Texture* texture = nullptr;
	SDL_Rect standby;
	SDL_Rect OnMouse;
	SDL_Rect Tick;
	SDL_Rect OnClick;
	button_state state = STANDBY;
	button_type type = LINK;
	bool tick = false;
	bool clicked = false;
};


#endif // !__UI_BUTTON__
