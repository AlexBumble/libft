#include "libft.h"

void ft_bzero(void *s, size_t n)
{
  int i;
  unsigned char *s_ucp;

  i = -1;
  s_ucp = (unsigned char *)s;
  while(++i < n)
  {
    s_ucp[i] = '\0';
  }
}

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
   int i;
   unsigned char *dst_ucp;
   unsigned char *src_ucp;

   i = -1;
   dst_ucp = (unsigned char *)dst;
   src_ucp = (unsigned char *)src;
   while(++i < n)
   {
     dst_ucp[i] = src_ucp[i];
   }
   return dst;
}

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
   int i;
   unsigned char c_uc;
   unsigned char *dst_ucp;
   unsigned char *src_ucp;

   i = -1;
   dst_ucp = (unsigned char *)dst;
   src_ucp = (unsigned char *)src;
   while(++i < n)
   {
     dst_ucp[i] = src_ucp[i];
     if (dst_ucp[i] == c_uc)
     {
       return dst;
     }
   }
   return NULL;
}


int main()
{

  return 0;
}
