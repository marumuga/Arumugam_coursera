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

  printf("\n=== Unsorted array ===\n");
  // print unsorted array
  print_array(&test[0], SIZE);

  // sort the array and arrange in descending order
  sort_array(&test[0], SIZE);

  print_statistics(&test[0], SIZE);
  return 0;
}

void print_statistics(unsigned char *dataset_ptr, unsigned int size)
{
  // find statistics on sorted array
  unsigned int median   = find_median(dataset_ptr, size);
  unsigned int mean     = find_mean(dataset_ptr, size);
  unsigned int minimum  = find_minimum(dataset_ptr, size);
  unsigned int maximum  = find_maximum(dataset_ptr, size);
  printf("Statistics: size %u median %u mean %u minimum %u maximum %u \n", size, median, mean, minimum, maximum);
}

void print_array(unsigned char *dataset_ptr, unsigned int size)
{
  for (unsigned int index = 0; index < size; index++)
  {
    printf("Array Info: index %u value %u \n", index, (unsigned int)*dataset_ptr++);
  }
}

unsigned int find_median(unsigned char *dataset_ptr, unsigned int size)
{
  unsigned int median = 0;
  if ((size % 2) == 0)
  {
    unsigned int first_middle_idx = (size/2);
    unsigned int second_middle_idx = (size/2)+1;
    printf("first_middle_idx %u second_middle_idx %u \n", first_middle_idx, second_middle_idx);
  
    unsigned int first_middle_value =  *(dataset_ptr+first_middle_idx);
    unsigned int second_middle_value = *(dataset_ptr+second_middle_idx);
    printf("first_middle_value %u second_middle_value %u \n", first_middle_value, second_middle_value);

    median = ((*(dataset_ptr+first_middle_idx) + *(dataset_ptr+second_middle_idx))/2);
  }
  else
  {
    unsigned int middle_idx = (size/2)+1;
    median = (*dataset_ptr+middle_idx);
  }
  return median;
}

unsigned int find_mean(unsigned char *dataset_ptr, unsigned int size)
{
  unsigned int mean = 0;
  for (unsigned int index = 0; index < size; index++)
  {
    mean += *(dataset_ptr++);
  }
  return mean;
}

unsigned int find_maximum(unsigned char *dataset_ptr, unsigned int size)
{
  unsigned char max = 0;

  for (unsigned int index = 0; index < size; index++)
  {
    if (*(dataset_ptr) > max)
    {
      max = *(dataset_ptr++);
    }
    else
    {
      dataset_ptr++;
    }
  }
  return max;
}

unsigned int find_minimum(unsigned char *dataset_ptr, unsigned int size)
{
  unsigned char min = 0xFF;

  for (unsigned int index = 0; index < size; index++)
  {
    if (*(dataset_ptr) < min)
    {
      min = *(dataset_ptr++);
    }
    else
    {
      dataset_ptr++;
    }
  }
  return min;
}

unsigned int sort_array(unsigned char *dataset_ptr, unsigned int size)
{
  for (unsigned int i = 0; i < (size-1); i++)
  {
    unsigned int max_index = i;
    for (unsigned int j = i+1; j < size; j++)
    {
      if (*(dataset_ptr+j) > *(dataset_ptr+max_index))
      {
        max_index = j;
      }
    }

    // Swap
    if (max_index != i)
    {
      unsigned int temp = *(dataset_ptr+max_index);
      *(dataset_ptr+max_index) = *(dataset_ptr+i);
      *(dataset_ptr+i) = temp;
    }
  }

  printf("\n === Sorted array ===\n");
  print_array(dataset_ptr, size);

  return 0;
}
