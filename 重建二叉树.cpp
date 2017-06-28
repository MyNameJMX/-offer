//Ç°Ðò±éÀú
struct BinaryTreeNode
{
	int m_nValue;
	BinaryTreeNode* m_pLeft;
	BinaryTreeNode* m_pRight;
};
//µÝ¹é
void PreOrder(BinaryTreeNode* root) 
{
	if (root == NULL)
		return;
	PreOrder(root->m_pLeft);
	printf("%d", root->m_nValue);
	PreOrder((root->m_pRight);
}
//µü´ú std::stackÕ»
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