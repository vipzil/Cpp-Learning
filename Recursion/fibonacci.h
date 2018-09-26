#ifndef h_fibonacci
#define h_fibonacci
int fibonacci(int n)
{
  if (n <= 0)
  {
    return 0;
  }
  else if (n < 3)
  {
    return 1;
  }
  else
  {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}
#endif //!h_fibonacci