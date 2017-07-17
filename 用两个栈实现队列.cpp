class SQueue {
public:
	void appendTail(const T& node);
	int deleteHead();
private:
	stack<int> s1;//insert
	stack<int> s2;//delete
};

void SQueue::appendTail(const int& node) 
{
	s1.push(node);
}

int SQueue::deleteHead() 
{
	if (!s2.empty()) 
	{
		s2.pop();
	}
	else 
	{
		while (!s1.empty())
		{
			int& temp = s1.top();
			s1.pop();
			s2.push(temp);
		}
		s2.pop();
	}
}