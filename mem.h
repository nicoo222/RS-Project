/* Give to the OS the number of Byte to recover with "mmap" function.
   -> Called only once by the process. */
int Mem_Init(int sizeOfRegion);

/* That function is supposed to replace the "Malloc" function. 
   It takes as argument the size (byte) of the memory block.
   It returns a void pointer positioned at the beginning of the block 
   Or it returns NULL if there is not enough space in the memory area. */
void *Mem_Alloc(int size); 

/* That function is supposed to replace the "Free" function.
   It frees the memory block related to the pointer taken as an argument of the function. 
   It returns 0 in case of success or -1 in case of error */
int Mem_Free(void *ptr);

/* Returns 1 if the pointer taken as argument is related to an allocated memory block. 
   Returns -1 otherwise */
int Mem_IsValid(void *ptr);

/* That function returns the size (byte) of the allocated block related to the pointer (taken as an argument). 
   Returns -1 if the pointer is not valid. */

int Mem_GetSize(void *ptr); 

/* BOug*/
