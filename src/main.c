/*
** main.c for  in /home/belfio_u/rendu/MUL_2014_wolf3d
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Fri Dec  5 17:23:50 2014 ugo belfiore
** Last update Wed Jan  6 10:18:37 2016 ugo belfiore
*/

#include "mini.h"

int		main(int ac, char **av)
{
  t_data	d;

  (void)ac;
  (void)av;

  d.e.i = 42;
  exo(&d);
  return (0);
}
