/*
** my.h for  in /home/faure_k/b1/infographie/gfx_incendie/include
** 
** Made by maxence faure
** Login   <faure_k@epitech.net>
** 
** Started on  Wed Apr  6 10:00:33 2016 maxence faure
** Last update Wed Apr  6 10:00:34 2016 maxence faure
*/

#ifndef MY_H_
# define MY_H_

typedef int	(*t_ptr)(va_list, int*);

void		my_putchar(char);
void		my_putstr(char*);
void		my_putstr_S(char*, int*);
void		my_put_nbr(int);
void		my_put_nbr_base(unsigned int, char*);
void		my_put_nbr_base_long(unsigned long int, char*);
int		my_strlen(char*);
int		my_getnbr(char*);
void		my_show_wordtab(char**);

int		mys_putchar(va_list, int*);
int		mys_putstr(va_list, int*);
int		mys_put_nbr(va_list, int*);
int		mys_put_nbr_oct(va_list, int*);
int		mys_put_nbr_uns(va_list, int*);
int		mys_put_nbr_bin(va_list, int*);
int		mys_putchar_per(va_list, int*);
int		mys_putstr_S(va_list, int*);
int		mys_put_nbr_hex(va_list, int*);
int		mys_put_nbr_HEX(va_list, int*);
int		mys_put_ptr(va_list, int*);
int		mys_putcharC(va_list, int*);

int		my_printf(const char*, ...);

#endif /* !MY_H_ */
