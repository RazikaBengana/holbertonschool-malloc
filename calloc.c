#include "malloc.h"

/**
 * _calloc - program that allocates memory for an array of nmemb elements
 * of size bytes each and initializes all bytes in the allocated storage
 * to zero
 *
 * this function combines the functionality of malloc and memset to provide
 * zero-initialized memory
 *
 * @nmemb: the number of elements to allocate
 * @size: the size of each element
 *
 * Return: a pointer to the allocated memory,
 *         or NULL if the allocation fails or either nmemb or size is zero
 */

void *_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	ptr = _malloc(nmemb * size);

	if (ptr)
		memset(ptr, 0, nmemb * size);

	return (ptr);
}