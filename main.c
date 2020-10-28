

int main()
{

  return 0;
}


int main_ft_bzero()
{
  unsigned char s[] = {'a', 'b', 'c', '\0'};
  unsigned char *c = s;
  size_t n = 10;

  ft_bzero(&s, n);
  printf("%s\n", c);

  return 0;
}
