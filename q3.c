float ft_q3(float arr[], int size)
{
	if (size % 4 == 0)
	{
		int q = size / 4;
		q = q * 3;
		return 0.75 * (arr[q-1] + arr[q]);
	}

	else
	{
		int q = size/4;
		q = q * 3;
		return arr[q];
	}
}