/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief The file has the definition for stats.h
 *
 * This file has definitions to compute the various stats on a given data
 *
 * @author Manikandan Arumugam
 * @date 04/29/2023
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  return 0;
}

void print_statistics(unsigned char *dataset_ptr)
{

}

void print_array(unsigned char *dataset_ptr, unsigned size)
{

}

unsigned int find_median(unsigned char *dataset_ptr, unsigned int size)
{
  return 0;
}

unsigned int find_mean(unsigned char *dataset_ptr, unsigned int size)
{
  return 0;
}

unsigned int find_maximum(unsigned char *dataset_ptr, unsigned int size)
{
  return 0;
}

unsigned int find_minimum(unsigned char *dataset_ptr, unsigned int size)
{
  return 0;
}

unsigned int sort_array(unsigned char *dataset_ptr, unsigned int size)
{
  return 0;
}
