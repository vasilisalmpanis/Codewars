int get_sum(int a , int b) 
{
  int c;
  int sum;
  int i;
  
  sum = 0;
  if (a > b)
  {
    c = a; 
    a = b;
    b = c;
  }
  for (i = a; i <= b; i++)
  {
    sum += i;
  }
  return sum;
}
