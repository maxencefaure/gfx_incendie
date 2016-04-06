/*
** fill_last_lines.c for  in /home/faure_k/b1/infographie/gfx_incendie
** 
** Made by maxence faure
** Login   <faure_k@epitech.net>
** 
** Started on  Wed Apr  6 09:57:16 2016 maxence faure
** Last update Wed Apr  6 09:57:18 2016 maxence faure
*/

#include <time.h>
#include <lapin.h>
#include "func.h"

void			my_fill_black(unsigned int *buffer)
{
  t_bunny_position	pos;

  pos.y = 0;
  while (pos.y < WIN_HEIGHT)
    {
      pos.x = 0;
      while (pos.x < WIN_WIDTH)
	{
	  buffer[WIN_WIDTH * pos.y + pos.x] = 0;
	  pos.x = pos.x + 1;
	}
      pos.y = pos.y + 1;
    }
}

void			my_fill_last_lines(unsigned int *buffer,
					   unsigned int *palette)
{
  t_bunny_position	pos;

  palette[0] = 0;
  srand(time(NULL));
  pos.y = WIN_HEIGHT - 2;
  while (pos.y < WIN_HEIGHT)
    {
      pos.x = 0;
      while (pos.x < WIN_WIDTH)
	{
	  buffer[WIN_WIDTH * pos.y + pos.x] = rand() % 128;
	  pos.x = pos.x + 1;
	}
      pos.y = pos.y + 1;
    }
}
