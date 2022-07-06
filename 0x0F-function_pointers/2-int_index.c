#include <stdio.h>






int int_index(int *array, int size, int (*cmp)(int));
{
  unsigned int i;
  
  if ( size != NULL && cmp != NULL)
  {
    for (i=0; i< size, i++)
    {
      g= cmp(array[i])
      if (g != 0)
      {
        return -1;
      }
    }
  }
  if (size <= 0)
  {
    return -1;
  }
  else 
    return 0;
}
