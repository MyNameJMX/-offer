//����ʽд��
class Singleton {
private:
	Singleton() {}
public:
	static Singleton& GetInstance() 
	{
		if (instance == NULL) 
		{
			lock(syncObj);//��֤�̰߳�ȫ
			if (instance == NULL)
			{
				instance_ = new Singleton();
			}
			return instance_;
		}
	}
	
private:
	static Singleton* instance_;
};
Singleton* Singleton::instance_ = 0;

//����ʽд��  ��ʵ���ļ��г�ʼ�� �̰߳�ȫ
class Singleton {
private:
	Singleton() {}
public:
	static constant Singleton& GetInstance()
	{
		return instance_;
	}

private:
	static Singleton* instance_;
};
const Singleton* Singleton::instance_ = new Singleton();
