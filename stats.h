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
 * @brief Header file for statistical analysis functions
 *

 *
 * @author <Baha eddine Somrani>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
/**
 * @brief Prints the elements of an array
 *
 * Given an array of data and its length, this function prints
 * the elements of the array to the screen.
 *
 * @param arr Pointer to the array of data
 * @param size Length of the array
 */
void print_array(unsigned char test[], unsigned int size);

/**
 * @brief Sorts the array in descending order
 *
 * Given an array of data and its length, this function sorts
 * the array from largest to smallest.
 *
 * @param arr Pointer to the array of data
 * @param size Length of the array
 * @return Pointer to the sorted array
 */
unsigned char* sort_array(unsigned char test[], unsigned int size);

/**
 * @brief Finds the median value of the data set
 *
 * Given an array of data and its length, this function calculates
 * and returns the median value of the data set.
 *
 * @param arr Pointer to the array of data
 * @param size Length of the array
 * @return The median value of the data set
 */
float find_median(unsigned char test[], unsigned int size);

/**
 * @brief Finds the mean value of the data set
 *
 * Given an array of data and its length, this function calculates
 * and returns the mean value of the data set.
 *
 * @param arr Pointer to the array of data
 * @param size Length of the array
 * @return The mean value of the data set
 */
unsigned char find_mean(unsigned char test[], unsigned int size);

/**
 * @brief Finds the maximum value of the data set
 *
 * Given an array of data and its length, this function finds
 * and returns the maximum value in the data set.
 *
 * @param arr Pointer to the array of data
 * @param size Length of the array
 * @return The maximum value in the data set
 */
unsigned char find_maximum(unsigned char test[], unsigned int size);

/**
 * @brief Finds the minimum value of the data set
 *
 * Given an array of data and its length, this function finds
 * and returns the minimum value in the data set.
 *
 * @param arr Pointer to the array of data
 * @param size Length of the array
 * @return The minimum value in the data set
 */
unsigned char find_minimum(unsigned char test[], unsigned int size);

/**
 * @brief Prints statistics of the data set
 *
 * Given an array of data and its length, this function prints
 * the statistics of the data set, including minimum, maximum,
 * mean, and median.
 *
 * @param arr Pointer to the array of data
 * @param size Length of the array
 */
 
 void print_statistics(unsigned char test[], unsigned int size);

#endif /* __STATS_H__ */
