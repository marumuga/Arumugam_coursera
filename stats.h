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
 * @file stats.h
 * @brief header file for stats module
 *
 * File contains function protoypes and other declarations
 *
 * @author Manikandan Arumugam
 * @date 04/29/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Print the statistics for given array
 *
 * This function takes as an input a unsigned char array. 
 * This function will print the statistics of the array including minimum, maximum, mean, and median in a readable format
 * 
 * @param dataset_ptr unsigned char array to be stats printed
 * 
 * @return void
 */
void print_statistics(unsigned char *dataset_ptr);

/**
 * @brief Print the statistics for given array
 *
 * This function takes as an input a unsigned char array and unsigned int size of the array.
 * This functional will print the statistics of the array based on the size including minimum, maximum, mean, and median in a readable format
 * 
 * @param dataset_ptr unsigned char array to be stats printed
 * @param size unsigned int size of the array
 *
 * @return void
 */
void print_array(unsigned char *dataset_ptr, unsigned int size);

/**
 * @brief Find the median for given array
 *
 * This function takes as an input a unsigned char array and unsigned int size of the array.
 * This functional will compute the median of the array.
 * 
 * @param dataset_ptr unsigned char array to be stats printed
 * @param size unsigned int size of the array
 *
 * @return void
 */
unsigned int find_median(unsigned char *dataset_ptr, unsigned int size);

/**
 * @brief Find the mean for given array
 *
 * This function takes as an input a unsigned char array and unsigned int size of the array.
 * This functional will compute the mean of the array.
 * 
 * @param dataset_ptr unsigned char array to be stats printed
 * @param size unsigned int size of the array
 *
 * @return void
 */
unsigned int find_mean(unsigned char *dataset_ptr, unsigned int size);

/**
 * @brief Find the maximum for given array
 *
 * This function takes as an input a unsigned char array and unsigned int size of the array.
 * This functional will compute the maximum of the array.
 * 
 * @param dataset_ptr unsigned char array to be stats printed
 * @param size unsigned int size of the array
 *
 * @return void
 */
unsigned int find_maximum(unsigned char *dataset_ptr, unsigned int size);

/**
 * @brief Find the minimum for given array
 *
 * This function takes as an input a unsigned char array and unsigned int size of the array.
 * This functional will compute the minimum of the array.
 * 
 * @param dataset_ptr unsigned char array to be stats printed
 * @param size unsigned int size of the array
 *
 * @return void
 */
unsigned int find_minimum(unsigned char *dataset_ptr, unsigned int size);

/**
 * @brief Sort given array from largest to smallest value
 *
 *
 * @param dataset_ptr array for which largest to smallest value needs to be found
 * 
 * @return void
 */
unsigned int sort_array(unsigned char *dataset_ptr, unsigned int size);

#endif /* __STATS_H__ */
