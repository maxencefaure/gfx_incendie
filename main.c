/*
** main.c for  in /home/faure_k/b1/infographie/gfx_incendie
** 
** Made by maxence faure
** Login   <faure_k@epitech.net>
** 
** Started on  Wed Apr  6 09:57:40 2016 maxence faure
** Last update Wed Apr  6 09:57:41 2016 maxence faure
*/

#include <lapin.h>
#include "func.h"

t_bunny_response	my_key(t_bunny_event_state state,
			       t_bunny_keysym keysym,
			       void *your_data)
{
  (void)your_data;
  if (state == GO_DOWN && keysym == BKS_ESCAPE)
    return (EXIT_ON_SUCCESS);
  return (GO_ON);
}

t_bunny_response	my_loop(void *my_data)
{
  t_my_data		*data;

  data = my_data;
  my_fill_last_lines(data->buffer, data->palette);
  my_fill_buffer(data->buffer);
  my_convert(data->pix, data->buffer, data->palette);
  data->pos.x = 0;
  data->pos.y = 0;
  bunny_blit(&data->win->buffer, &data->pix->clipable, &data->pos);
  bunny_display(data->win);
  return (GO_ON);
}

int			main()
{
  t_my_data		*data;

  data = bunny_malloc(sizeof(t_my_data));
  if (data == NULL)
    return (84);
  data->win = bunny_start_style(WIN_WIDTH, WIN_HEIGHT, TITLEBAR | CLOSE_BUTTON,
				"fireball");
  data->pix = bunny_new_pixelarray(WIN_WIDTH, WIN_HEIGHT);
  data->palette = bunny_malloc(sizeof(unsigned int) * 128);
  data->buffer = bunny_malloc(sizeof(unsigned int) * WIN_WIDTH *
			      (WIN_HEIGHT + 2));
  if (data->palette == NULL || data->buffer == NULL)
    return (84);
  data->palette = my_palette(data->palette);
  my_fill_black(data->buffer);
  bunny_set_key_response(my_key);
  bunny_set_loop_main_function(&my_loop);
  bunny_loop(data->win, 60, data);
  bunny_free(data->palette);
  bunny_free(data->buffer);
  bunny_delete_clipable(&data->pix->clipable);
  bunny_stop(data->win);
  bunny_free(data);
  return (0);
}
