/*
** average.c for  in /home/faure_k/b1/infographie/gfx_incendie
** 
** Made by maxence faure
** Login   <faure_k@epitech.net>
** 
** Started on  Wed Apr  6 09:56:45 2016 maxence faure
** Last update Wed Apr  6 09:56:48 2016 maxence faure
*/

#include <lapin.h>
#include "func.h"

unsigned int		left_side(unsigned int *buffer, t_bunny_position *pos)
{
  t_bunny_position	pos0[3];

  pos0[0].x = pos->x + 1;
  pos0[0].y = pos->y + 1;
  pos0[1].x = pos->x;
  pos0[1].y = pos->y + 1;
  pos0[2].x = pos->x;
  pos0[2].y = pos->y + 2;
  return ((tekgetpixel(buffer, &pos0[0]) * 2 +
	   tekgetpixel(buffer, &pos0[1]) +
	   tekgetpixel(buffer, &pos0[2])) * 0.249);
}

unsigned int		right_side(unsigned int *buffer, t_bunny_position *pos)
{
  t_bunny_position	pos0[3];

  pos0[0].x = pos->x - 1;
  pos0[0].y = pos->y + 1;
  pos0[1].x = pos->x;
  pos0[1].y = pos->y + 1;
  pos0[2].x = pos->x;
  pos0[2].y = pos->y + 2;
  return ((tekgetpixel(buffer, &pos0[0]) * 2 +
	   tekgetpixel(buffer, &pos0[1]) +
	   tekgetpixel(buffer, &pos0[2])) * 0.249);
}

unsigned int		center(unsigned int *buffer, t_bunny_position *pos)
{
  t_bunny_position	pos0[4];

  pos0[0].x = pos->x - 1;
  pos0[0].y = pos->y + 1;
  pos0[1].x = pos->x;
  pos0[1].y = pos->y + 1;
  pos0[2].x = pos->x + 1;
  pos0[2].y = pos->y + 1;
  pos0[3].x = pos->x;
  pos0[3].y = pos->y + 2;
  return ((tekgetpixel(buffer, &pos0[0]) +
	   tekgetpixel(buffer, &pos0[1]) +
	   tekgetpixel(buffer, &pos0[2]) +
	   tekgetpixel(buffer, &pos0[3])) * 0.249);
}

unsigned int		average(unsigned int *buffer, t_bunny_position *pos)
{
  if (pos->x == 0)
    return (left_side(buffer, pos));
  else if (pos->x == WIN_WIDTH - 1)
    return (right_side(buffer, pos));
  else
    return (center(buffer, pos));
}
