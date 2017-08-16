//饿汉式写法之一
//单例模式的优点：1 减小new的开销 2 使得外部不易修改实例，封装型提高
//饿汉式缺点 很明显根据static成员变量的性质 实例初始化极早 有这个类就有这个实例 而不是用到时才创建该实例

#ifndef _SINGLETON_H_
#define _SINGLETON_H_

class Singleton{
public:
	static Singleton* getInstance();

private:
	Singleton();
	//把复制构造函数和=操作符也设为私有,防止被复制
	Singleton(const Singleton&);
	Singleton& operator=(const Singleton&);

	static Singleton* instance;
};

#endif
 

#include "Singleton.h"


Singleton::Singleton(){

}


Singleton::Singleton(const Singleton&){

}


Singleton& Singleton::operator=(const Singleton&){

}


//在此处初始化
Singleton* Singleton::instance = new Singleton();//初始化instance时候创建一个实例
Singleton* Singleton::getInstance(){
	return instance;
}
 

#include "Singleton.h"
#include <stdio.h>


int main(){
	Singleton* singleton1 = Singleton::getInstance();
	Singleton* singleton2 = Singleton::getInstance();

	if (singleton1 == singleton2)
		fprintf(stderr,"singleton1 = singleton2\n");

	return 0;
}
