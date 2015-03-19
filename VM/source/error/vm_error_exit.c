/*
** vm_error_exit.c for vm error exit in /home/mongep/rendu/CPE/CW/VM/source
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Mon Mar 16 16:21:43 2015 Monge Pierre
** Last update Tue Mar 17 14:18:17 2015 Monge Pierre
*/

#include			"corewar_vm.h"

/*
** Output error '2' to return (-1);
*/

int				vm_error(char *error)
{
  if (error == NULL)
    return(-1);
  write(2, error, my_strlen(error));
  return (-1);
}