int my_max3(int a, int b, int c)
{
	if (a > b)
	{
		if (a > c)
			return a;
		return c;
	}
	else if (b > a)
	{
		if (b > c)
			return b;
		return c;
	}
	else if (c > a)
		if (c > b)
			return c;
	return b;
}
