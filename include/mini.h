/*
** mini.h for  in /home/belfio_u/rendu/all_ready/include
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Wed Jan  6 09:58:55 2016 ugo belfiore
** Last update Wed Jan  6 10:18:21 2016 ugo belfiore
*/

#ifndef MINI_H_
#define MINI_H_

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <math.h>
#include <time.h>
#include "my.h"

/*
** define: couleur en hexadécimale.
*/

#define COLOR_YELLOW 0xFFFF00

/*
** macro utiles
*/

#define MAX(a,b) ((a) > (b)) ? (a) : (b)
#define MIN(a,b) ((a) < (b)) ? (a) : (b)
#define PI 3.14159265

/*
** structure son
*/

typedef struct	s_exo
{
  int		i;
}		t_exo;

/*
** data: structure principale contenant les pointeurs
**	de fenêtreet d'image, contient le tableau **tab,
*/

typedef struct	s_data
{
  t_exo		e;
}               t_data;

void		exo(t_data *d);
void		exo2(t_data *d);

#endif
