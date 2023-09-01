float ft_q1(float arr[], int size)
{
	if (size % 4 == 0)
	{
		int q = size / 4;
		return 0.25 * (arr[q-1] + arr[q]);
	}

	else
	{
		int q = size/4;
		return arr[q];
	}
}