#ifndef MAIN_H
#define MAIN_H
#define limit 100
#include <stdio.h>
#include <stdlib.h>
extern int top;
extern int stack[limit];
int push(int elem);
int pop();
#endif
