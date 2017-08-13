#include <list>
#include <vector>
#include <cstdlib>
using namespace std;
struct TreeNode
{
	int value;
	vector<TreeNode*> m_vChildren;//any kind tree
};

bool GetNodePath(TreeNode* pRoot,TreeNode* pNode,list<TreeNode*>& path) 
{
	if (pRoot == pNode)
		return true;
	path.push_back(pRoot);
	bool found = false;
	auto i = pRoot->m_vChildren.begin();
	while (!found && i < pRoot->m_vChildren.end()) 
	{
		found = GetNodePath(*i, pNode, path);
		++i;
	}
	if (!found)
		path.pop_back();
	return found;
}

TreeNode* GetLastCommonNode(const list<TreeNode*> path1,const list<TreeNode*> path2)
{
	auto itor1 = path1.begin();
	auto itor2 = path2.begin();

	TreeNode* pLast = NULL;
	while (itor1 != path1.end() && itor2 != path2.end() && *itor1 == *itor2) 
	{
		pLast = *itor1;
		itor1++;
		itor2++;
	}
	return pLast;
}

TreeNode* GetLastCommonParent(TreeNode* pRoot,TreeNode* pNode1,TreeNode* pNode2)
{
	if (pRoot == nullptr || pNode1 == nullptr || pNode2 == nullptr)
		return NULL;
	list<TreeNode*> path1,path2;
	GetNodePath(pRoot, pNode1, path1);
	GetNodePath(pRoot, pNode2, path2);
	return GetLastCommonNode(path1,path2);
}
