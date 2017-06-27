//懒汉式写法
class Singleton {
private:
	Singleton() {}
public:
	static Singleton& GetInstance() 
	{
		if (instance == NULL) 
		{
			lock(syncObj);//保证线程安全
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

//饿汉式写法  在实现文件中初始化 线程安全
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
