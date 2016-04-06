/*
** func.h for  in /home/faure_k/b1/infographie/gfx_incendie/include
** 
** Made by maxence faure
** Login   <faure_k@epitech.net>
** 
** Started on  Wed Apr  6 10:00:11 2016 maxence faure
** Last update Wed Apr  6 10:00:12 2016 maxence faure
*/

#ifndef FUNC_H_
# define FUNC_H_

# define WIN_WIDTH 800
# define WIN_HEIGHT 600

typedef struct		s_my_data
{
  t_bunny_window	*win;
  t_bunny_pixelarray	*pix;
  t_bunny_position	pos;
  unsigned int		*palette;
  unsigned int		*buffer;
}			t_my_data;

unsigned int		my_set_color(int, int, int, int);
unsigned int		tekgetpixel(unsigned int*, t_bunny_position*);
unsigned int		*my_palette(unsigned int*);
void			my_fill_last_lines(unsigned int*, unsigned int*);
void			my_fill_black(unsigned int*);
unsigned int		average(unsigned int*, t_bunny_position*);
void			my_fill_buffer(unsigned int*);
void			my_convert(t_bunny_pixelarray*, unsigned int*, unsigned int*);

#endif /* !FUNC_H_ */
