struct ListNode
{
	int data;
	ListNode* next;
};
ListNode* FindFirstCommonNode(ListNode* pHead1,ListNode* pHead2) 
{
	unsigned int nLength1 = GetListLength(pHead1);
	unsigned int nLength2 = GetListLength(pHead2);

	unsigned int nLengthDif = 0;
	ListNode* LongHead = nullptr;
	ListNode* ShortHead = nullptr;
	if (nLength2 > nLength1)
	{
		LongHead = pHead2;
		ShortHead = pHead1;
		nLengthDif = nLength2- nLength1;
	}
	else 
	{
		LongHead = pHead1;
		ShortHead = pHead2;
		nLengthDif = nLength1 - nLength2;
	}
	for (int i = 0; i < nLengthDif; i++) 
	{
		LongHead = LongHead->next;
	}
	while ((LongHead != nullptr) && (ShortHead != nullptr) && (LongHead != ShortHead)) 
	{
		LongHead = LongHead->next;
		ShortHead = ShortHead->next;
	}
	ListNode* pFirstCommonNode = LongHead;
	return  pFirstCommonNode;
}
unsigned int GetListLength(ListNode* pHead) 
{
	unsigned int length = 0;
	ListNode* pNode = pHead;
	while (pNode != nullptr) 
	{
		length++;
		pNode = pNode->next;
	}
	return length;
}
