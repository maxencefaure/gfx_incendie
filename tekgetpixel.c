/*
** tekgetpixel.c for  in /home/faure_k/b1/infographie/gfx_incendie
** 
** Made by maxence faure
** Login   <faure_k@epitech.net>
** 
** Started on  Wed Apr  6 09:58:27 2016 maxence faure
** Last update Wed Apr  6 09:58:28 2016 maxence faure
*/

#include <lapin.h>
#include "func.h"

unsigned int			tekgetpixel(unsigned int *buffer,
					    t_bunny_position *pos)
{
  return (buffer[WIN_WIDTH * pos->y + pos->x]);
}
