  if (n <= 1)
    return false;
  for (i = 2; i * i <= n; i++)
  {
    if ((n % i == 0))
    {
      cout << "not prime";
      return 0;
    }
  }