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
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Reza Yazdani
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

typedef struct stats{
    uint8_t *array;
    uint8_t arrayLength;
    uint8_t median;
    uint8_t mean;
    uint8_t max;
    uint8_t min;
} stat;


void print_statistics(stat ArrayStats);


void print_array(uint8_t *arrayPtr, uint8_t arrayLength);


void sort_array(uint8_t *arrayPtr, uint8_t arrayLength);


uint8_t find_min(uint8_t *arrayPtr, uint8_t arrayLength);


uint8_t find_max(uint8_t *arrayPtr, uint8_t arrayLength);


uint8_t find_mean(uint8_t *arrayPtr, uint8_t arrayLength);


uint8_t find_median(uint8_t *arrayPtr, uint8_t arrayLength);


#endif /* __STATS_H__ */
