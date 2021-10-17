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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  
  
  
  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);
  
}

/* Add other Implementation File Code Here */

// ----------- Functions ------------

// COMPLETE
unsigned char print_array(unsigned char array[], int arraysize){ // vietoje array[] galima normalų pointer parašyti
  int i;

  printf ("\nArray:");
  for (i = 0; i < arraysize; i++) {
    if (!(i % 5))
      printf("\n");
    printf("%2d) %3u\t\t", i, array[i]);
  }
  if (!(i % 5))
    printf ("\n\n");
  else
    printf ("\n");
  return 0;
}

// COMPLETE
float find_median(unsigned char *var, int arraysize){
  float med;

  if (arraysize % 2)
    med = var[arraysize / 2];
  else
    med = (var[arraysize / 2 - 1] + var[arraysize / 2]) / 2.0;
  
  return med;
}

// COMPLETE
float find_mean(unsigned char *var, int arraysize){
  float mean = 0;

  for (int i = 0; i < arraysize; i++)
    mean += *(var + i);

  return mean / arraysize;
}

// COMPLETE
unsigned char find_maximum(unsigned char *var, int arraysize){
  unsigned char max = 0;

  for (int i = 0; i < arraysize; i++)
    if (max < *(var + i))
      max = *(var + i);

  return max;
}

// COMPLETE
unsigned char find_minimum(unsigned char *var, int arraysize){
  unsigned char min = *var;

  for (int i = 1; i < arraysize; i++)
    if (min > *(var + i))
      min = *(var + i);

  return min;
}

// Complete
void sort_array(unsigned char *var, int arraysize){
  unsigned char max, index, temp;
  int runs = 0;

  for (int j, i = 0; i < arraysize; i++){
    max = var[i];
    for (j = i + 1; j < arraysize; j++, runs++){
      if (max < *(var + j)){
        max = *(var + j);
        index = j;
      }
    }
    temp = var[i];
    var[i] = max;
    var[index] = temp;
  }
  printf("\nruns      =  %5d\n", runs);
}

// Complete
int print_statistics(unsigned char *var, int arraysize){
  
  printf("Print input array, statistics for input array and sorted array.");
  print_array(var, arraysize);
  printf("\nmed func  =  %3.2f", find_median(var, arraysize));
  printf("\nmean func =  %3.2f", find_mean(var, arraysize));
  printf("\nmax func  =  %5u", find_maximum(var, arraysize));
  printf("\nmin func  =  %5u", find_minimum(var, arraysize));
  sort_array(var, arraysize);
  print_array(var, arraysize);

  return 0;
}
