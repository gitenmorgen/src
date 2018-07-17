// Using SDL and standard IO
#include <SDL.h>
#include <stdio.h>

// Screen dimension constants
const int WIDTH = 640;
const int HEIGHT = 480;
const int DEPTH = 32;

void setpixel(SDL_Surface *screen, int x, int y, Uint8 r, Uint8 g, Uint8 b)
{
    Uint32 *pixmem32;
    Uint32 colour;  
    int bpp = screen->format->BytesPerPixel; 
    colour = SDL_MapRGB( screen->format, r, g, b );  
    pixmem32 = (Uint32*) screen->pixels + y * screen-> pitch / bpp + x;
    *pixmem32 = colour;
}

void drawhline(SDL_Surface * surface, int x, int y, int w)
{
	int i;
	for(i=0;i < w; i++)
		setpixel(surface, x + i, y, 255, 255, 255);
}

void drawbox(SDL_Surface * surface, int x, int y, int w, int h)
{
	int i;
	for(i=0;i < 44; i++)
		drawhline(surface, x, y + i, w);
}


int main(int argc, char *args[])
{
	bool isQuit = false;
	SDL_Event event;
	//SDL_Window *win = NULL;
	int x, y;
	x=y=0;
	SDL_Surface *surface = NULL;

	// Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)	
		printf("SDL could not iniatialize! SDL_Error: %s\n", SDL_GetError());
  if (! (surface = SDL_SetVideoMode(WIDTH, HEIGHT, DEPTH, SDL_FULLSCREEN|SDL_HWSURFACE)))
 {
 	SDL_Quit();
	return 1;
 }
 
 while (!isQuit)
 {
	if(SDL_MUSTLOCK(surface)) 
    {
        if(SDL_LockSurface(surface) < 0) 				continue;
    }
  	drawbox(surface, 50,50,48,48);
 	x++;
 	y++;
  	drawbox(surface, x,y,48,48);
 	drawhline(surface, 00,0, 48);
 	drawhline(surface, 0, 100, 48);
 	
   if(SDL_MUSTLOCK(surface))	
 		SDL_UnlockSurface(surface);
   SDL_Flip(surface);
 	
 	while(SDL_PollEvent(&event))
 	{
 			switch(event.type)
 			{
 				case SDL_QUIT:
 						isQuit = true;
 						break;
 				case SDL_KEYDOWN:
 						isQuit = true;
 						break;
 			}
 	}
  }
 SDL_Quit();
 return 0;
}