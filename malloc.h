#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>


#define ALIGN sizeof(void *)



/**
 * struct block_s - Header for memory blocks in a heap
 *
 * this structure acts as a header for heap-allocated blocks,
 * incorporating metadata essential for managing the memory
 * block's lifecycle;
 * it includes links for maintaining a list of free blocks
 *
 * Note: 'next' and 'prev' are used only when the block is free;
 *        actual usable memory starts immediately after the 'size'
 *        field in allocated blocks
 *
 * @prev_size: the size in bytes of the previous block, used only if
 *             the block is free
 * @size: the total size in bytes of this block, including metadata;
 *        the size field may encode block status (free or allocated)
 *        information in its lower bits
 * @next: a pointer to the next free block
 * @prev: a pointer to the previous free block, supporting quick block
 *        management
 */

typedef struct block_s
{
    size_t prev_size;       /* Size of the previous block if free */
    size_t size;            /* Size of this block, including this header */
    struct block_s *next;   /* Next free block */
    struct block_s *prev;   /* Previous free block */
} block_t;



/* task 0 */
size_t get_page_size(void);
size_t align_size(size_t size);
void *naive_malloc(size_t size);

/* task 1 */
size_t get_page_size2(void);
size_t align_size2(size_t size);
void *_malloc(size_t size);

/* task 2 */
void _free(void *ptr);

/* task 3 */
void *_calloc(size_t nmemb, size_t size);

/* task 4 */
void *_realloc(void *ptr, size_t size);



#endif /* MAIN_H */
