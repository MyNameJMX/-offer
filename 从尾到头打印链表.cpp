//递归实现
void PrintListReversingly_Recursively(ListNode* pHead)
{
	if(pHead != NULL)
	{
		if(pHead->m_pNext != NULL)
		{
			PrintListReversingly_Recursively(pHead->m_pNext);
		}
		printf("%d\t",pHead->m_nValue);
	}
}
//栈 迭代实现
void PrintListReversingly_Iteratively(ListNode* pHead)
{
	std::stack<ListNode*> nodes;
	ListNode* pNode = pHead;
	while(pHead != NULL)
	{
		nodes.push(pNode);
		pNode = pNode->m_pNext;
	}
	while(!nodes.empty())
	{
		pNode = nodes.top();
		printf("%d\t",pNode->m_nValue);
		nodes.pop();
	}
}
