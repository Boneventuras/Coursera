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
 * @file <stats.h> 
 * @brief <Colections of functions for char array manipulation>
 *
 * <Colection of functions for soem char array statistics. 
 * Mean, median, maximum, minimum, sort_array, print array>
 *
 * @author <FirsName LastName>
 * @date <2021-10-15>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief <Prints the array in formated manner>
 *
 * <Takes char* pointer to first array element and a int size of array.
 * After printing returns a 0 on all cases>
 *
 * @param <unsigned char array[]> <Pointer to first array element>
 * @param <int arraysize> <The size of the array to be printed>
 *
 * @return <unsigned char status>  <Status of the funkctions, always 0>
 */

unsigned char print_array(unsigned char array[], int arraysize);

/**
 * @brief <Calculates medien of given array>
 *
 * <Takes char* pointer to first array element and a int size of array.
 * Returns median of an array>
 *
 * @param <unsigned char array[]> <Pointer to first array element>
 * @param <int arraysize> <The size of the array to be printed>
 *
 * @return <float med>  <Median of given array>
 */

float find_median(unsigned char *var, int arraysize);

/**
 * @brief <Calculates mean of given array>
 *
 * <Takes char* pointer to first array element and a int size of array.
 * Returns mean of an array>
 *
 * @param <unsigned char array[]> <Pointer to first array element>
 * @param <int arraysize> <The size of the array to be printed>
 *
 * @return <float mean>  <Mean of given array>
 */

float find_mean(unsigned char *var, int arraysize);

/**
 * @brief <Calculates the largest element value of given array>
 *
 * <Takes char* pointer to first array element and a int size of array.
 * Returns largest valuein the array>
 *
 * @param <unsigned char array[]> <Pointer to first array element>
 * @param <int arraysize> <The size of the array to be printed>
 *
 * @return <unsigned char max>  <Largest element value of given array>
 */

unsigned char find_maximum(unsigned char *var, int arraysize);

/**
 * @brief <Calculates the smallest element value of given array>
 *
 * <Takes char* pointer to first array element and a int size of array.
 * Returns smalles value in the array>
 *
 * @param <unsigned char array[]> <Pointer to first array element>
 * @param <int arraysize> <The size of the array to be printed>
 *
 * @return <unsigned char min>  <Smallest element value of given array>
 */

unsigned char find_maximum(unsigned char *var, int arraysize);

/**
 * @brief <Sorts the given array large to small in the same memory location>
 *
 * <Takes char* pointer to first array element and a int size of array.
 * No return value.>
 *
 * @param <unsigned char array[]> <Pointer to first array element>
 * @param <int arraysize> <The size of the array to be printed>
 */

void sort_array(unsigned char *var, int arraysize);

/**
 * @brief <Prints the given array and all statistics availible in this lib>
 *
 * <Takes char* pointer to first array element and a int size of array.
 * Prints given array, median, mean, max, min and sorted array from high 
 * to low. Returns always a 0 as status>
 *
 * @param <unsigned char array[]> <Pointer to first array element>
 * @param <int arraysize> <The size of the array to be printed>
 *
 * @return <int 0>  <Always 0>
 */

int print_statistics(unsigned char *var, int arraysize);

#endif /* __STATS_H__ */

