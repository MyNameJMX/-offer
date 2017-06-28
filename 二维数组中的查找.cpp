//从右上角或者左下角开始
bool find(int* matrix, int rows, int columns, int numbers) 
{
	bool found = false;
	if (matrix != NULL && columns > 0 && rows > 0) 
	{
		int row = 0;
		int column = columns - 1;
		while (row < rows && column >= 0) 
		{
			if (matrix(row*columns + column == number)
			{
				found = true;
				break;;
			}
			else if (matrix(row*columns + column) > number)
			{
				--column;
			}
			else
				++row;
		}
	}
	return found;
}