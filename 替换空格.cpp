//length ���ַ�����string��������
void ReplaceBlank(char string[], int length) 
{
	if (string == NULL || length < 0)
		return;
	/*originlLength Ϊ�ַ���string��ʵ�ʳ���*/
	int originalLength = 0;
	int numberOfBlank = 0;
	int i = 0;
	while (string[i] != '\0')
	{
		++originalLength;
		if (string[i] == ' ')
			numberOfBlank++;
		++i;
	}
	//newlength �ǰѿո��滻Ϊ'%20'֮���ʵ�ʳ���
	int newLength = originalLength + numberOfBlank * 2;
	if (newLength > length)
		return;
	int indexOfOriginal = originalLength;
	int indexOfNew = newLength;
	while (indexOfOriginal >= 0 && indexOfNew > indexOfOriginal) 
	{
		if (string[indexOfOriginal] == ' ') 
		{
			string[indexOfNew--] = '0';
			string[indexOfNew--] = '2';
			string[indexOfNew--] = '%';
		}
		else 
		{
			string[indexOfNew--] = string[indexOfOriginal];
		}
		--indexOfOriginal;
	}
}