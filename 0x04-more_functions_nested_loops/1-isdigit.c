/**
 * _isdigit - checks for a digit
 *
 * @c: integer to be checked
 *
 * Return: returns either 1 or 0
 */
int _isdigit(int c)
{
	int i, j = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			j = 1;
		}
	}
	if (j == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
