#ifndef __UI_IMAGE__
#define __UI_IMAGE__

#include "j1Module.h"
#include "p2Point.h"
#include "SDL\include\SDL_rect.h"

struct _TTF_Font;
struct SDL_Texture;

class UI_Image
{
public:
	UI_Image()
	{}
	UI_Image(SDL_Texture* texture, int x, int y, SDL_Rect* section) : texture(texture), position({ x, y }), section(section)
	{}
	~UI_Image();

public:
	iPoint position;
	SDL_Texture* texture = nullptr;
	SDL_Rect* section = nullptr;
};


#endif // !__UI_IMAGE__

