/*
** vm_live.c for live in /home/mongep/rendu/CPE/CW/VM/source/instructions
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Mon Mar 16 14:13:39 2015 Monge Pierre
** Last update Mon Mar 16 16:46:29 2015 Monge Pierre
*/

#include			"corewar_vm.h"

int				vm_instruction_live()
{
  t_vm				*vm;

  vm = vm_data_getter();
  vm->live_done += 1;
  return (0);
}