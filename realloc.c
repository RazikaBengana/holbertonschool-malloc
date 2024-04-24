#include "malloc.h"


#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define BLK_HEADER(ptr) ((block_t *)((uint8_t *)ptr - HEADER_SZ))
#define PAYLOAD_SZ(size) (size - HEADER_SZ)


/**
 * _realloc - program that reallocates the memory block pointed to by ptr
 * to be size bytes while preserving the block's original content up to
 * the minimum of the new and old sizes
 *
 * if ptr is NULL, the function behaves like _malloc for the specified size;
 * if size is 0 and ptr is not NULL, the function frees the block and returns NULL
 *
 * @ptr: a pointer to the previously allocated memory block or NULL
 * @size: the new size for the memory block in bytes
 *
 * Return: a pointer to the newly allocated memory block,
 *         or NULL if the allocation fails or size is 0
 */

void *_realloc(void *ptr, size_t size)
{
	void *new_ptr;
	block_t *blk;

	if (ptr == NULL)
		return (_malloc(size));

	if (size == 0)
	{
		_free(ptr);
		return (NULL);
	}

	blk = BLK_HEADER(ptr);

	if (PAYLOAD_SZ(blk->size) == size + (ALIGN - (size % ALIGN)))
		return (ptr);

	new_ptr = _malloc(size);

	if (!new_ptr)
		return (NULL);

	memcpy(new_ptr, ptr, MIN(blk->size, size));

	_free(ptr);

	return (new_ptr);
}