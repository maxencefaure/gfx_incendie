/*
** fill_buffer.c for  in /home/faure_k/b1/infographie/gfx_incendie
** 
** Made by maxence faure
** Login   <faure_k@epitech.net>
** 
** Started on  Wed Apr  6 09:58:53 2016 maxence faure
** Last update Wed Apr  6 09:58:54 2016 maxence faure
*/

#include <lapin.h>
#include "func.h"

void			my_fill_buffer(unsigned int *buffer)
{
  t_bunny_position	pos;

  pos.y = 0;
  while (pos.y < WIN_HEIGHT)
    {
      pos.x = 0;
      while (pos.x < WIN_WIDTH)
	{
	  buffer[WIN_WIDTH * pos.y + pos.x] = average(buffer, &pos);
	  pos.x = pos.x + 1;
	}
      pos.y = pos.y + 1;
    }
}
