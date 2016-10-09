/*
** exo.c for  in /home/belfio_u/rendu/all_ready/src
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Wed Jan  6 10:05:58 2016 ugo belfiore
** Last update Wed Jan  6 10:19:20 2016 ugo belfiore
*/

#include "mini.h"

void	exo2(t_data *d)
{
    printf("ahah2: %d\n", d->e.i);
}

void	exo(t_data *d)
{
  printf("ahah: %d\n", d->e.i);
  exo2(d);
}
