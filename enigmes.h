#ifndef ENIGMES_H_INCLUDED
#define ENIGMES_H_INCLUDED
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
struct enigmes

{  SDL_Surface *image;

   SDL_Rect p;
};
typedef struct enigmes enigme;



void initialiser_enigmes1(enigme t1[],enigme t2[],int t3[]);



















int afficher(enigme t1[],enigme t2[],SDL_Surface *screen);
int resolution(enigme t1[],enigme t2[]);


#endif // ENIGMES_H_INCLUDED