int persistence(int n)
{
  int c = 1;
  int count;
    
  count = 0;
  while (n > 9)
  {
    c = 1;

    while (!(n / 10 == 0))
    {
      c = c * (n % 10);
      n = n / 10;
      printf("%d\n", n);
    }
    c *= n % 10;
    n = c;
    count++;
  }
  return (count);
}
