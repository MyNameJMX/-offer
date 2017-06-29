//
struct BinaryTreeNode
{
	int m_nValue;
	BinaryTreeNode* m_pLeft;
	BinaryTreeNode* m_pRight;
};
//递归版前序遍历
void PreOrder(BinaryTreeNode* root) 
{
	if (root == NULL)
		return;
	PreOrder(root->m_pLeft);
	printf("%d", root->m_nValue);
	PreOrder((root->m_pRight);
}
//迭代版前序遍历
void PreOrderIterative(BinaryTreeNode* root) 
{
	std::stack<BinaryTreeNode*> records;
	BinaryTreeNode* current = root;
	while (current || records.empty()) 
	{
		while (current) 
		{
			printf("%d", current->m_nValue);
			records.push(current);
			current = current->m_pLeft;
		}
		if (!s.empty())
		{
			current = records.top();
			records.pop();
			current = current->m_pRight;
		}
	}
}
