/*
** palette.c for  in /home/faure_k/b1/infographie/gfx_incendie
** 
** Made by maxence faure
** Login   <faure_k@epitech.net>
** 
** Started on  Wed Apr  6 09:59:45 2016 maxence faure
** Last update Wed Apr  6 09:59:47 2016 maxence faure
*/

#include <lapin.h>

unsigned int		my_set_color(int a, int b, int g, int r)
{
  return (((a & 0xFF) << 24) + ((r & 0xFF) << 16) +
	  ((g & 0xFF) << 8) + (b & 0xFF));
}

void			my_tmp1(unsigned int *palette, int *i, int *color)
{
  while (*i <= 31)
    {
      palette[*i] = my_set_color(255, color[0], color[1], color[2]);
      *i = *i + 1;
      color[0] = color[0] + 8;
    }
  color[0] = color[0] + 7;
  palette[*i] = my_set_color(255, color[0], color[1], color[2]);
  *i = *i + 1;
  while (*i <= 63)
    {
      palette[*i] = my_set_color(255, color[0], color[1], color[2]);
      *i = *i + 1;
      color[1] = color[1] + 8;
    }
  color[1] = color[1] + 7;
  palette[*i] = my_set_color(255, color[0], color[1], color[2]);
  *i = *i + 1;
}

void			my_tmp2(unsigned int *palette, int *i, int *color)
{
  while (*i <= 95)
    {
      palette[*i] = my_set_color(255, color[0], color[1], color[2]);
      *i = *i + 1;
      color[2] = color[2] + 8;
    }
  color[2] = color[2] + 7;
  palette[*i] = my_set_color(255, color[0], color[1], color[2]);
  *i = *i + 1;
  while (*i < 128)
    {
      palette[*i] = my_set_color(255, 255, 255, 255);
      *i = *i + 1;
    }
}

void			my_tmp_palette(unsigned int *palette, int *color)
{
  int			i;

  i = 1;
  my_tmp1(palette, &i, color);
  my_tmp2(palette, &i, color);
}

unsigned int		*my_palette(unsigned int *palette)
{
  int			color[3];

  color[0] = 0;
  color[1] = 0;
  color[2] = 0;
  palette[0] = my_set_color(255, 0, 0, 0);
  my_tmp_palette(palette, color);
  return (palette);
}
