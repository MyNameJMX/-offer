#include <cstdlib>
void Swap(int &p, int &q)
{
	int temp = p;
	p = q;
	q = temp;
}

//Partition function
int Partition(int ArrayInput[], int nLow, int nHigh)
{

	int nTemp = ArrayInput[nHigh];
	int i = nLow - 1, j = nLow;
	for (; j < nHigh; j++)
	{
		if (ArrayInput[j] <= nTemp)
		{
			i++;
			if (i != j)
			{
				Swap(ArrayInput[i], ArrayInput[j]);
			}
		}
	}

	Swap(ArrayInput[i + 1], ArrayInput[nHigh]);

	return (i + 1);
}

//Quick sort
void Quick_sort(int ArrayInput[], int nLow, int nHigh)
{
	if (nLow < nHigh)
	{
		int nIndex = Partition(ArrayInput, nLow, nHigh);
		Quick_sort(ArrayInput, nLow, nIndex - 1);
		Quick_sort(ArrayInput, nIndex + 1, nHigh);
	}
}
int main() 
{
	int a[5] = { 2,1,3,4,6 };
	Quick_sort(a, 0, 4);
}

