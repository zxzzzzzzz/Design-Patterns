//#include<iostream>
//
//using namespace std;
//
//class Singleton
//{
//private://1.构造函数私有化
//	//c++的构造函数不能保证是线程安全的
//	Singleton()
//	{
//		printf("Singleton begin\n");
//		//Sleep(1000);
//		printf("Singleton end\n");
//	}
//public://2.提供全局访问点
//	static Singleton *GetSingleton()
//	{
//		//每一次GetSingleton()时候，都需要判断single实例是否存在
//		if (single == NULL)
//		{
//			single = new Singleton;//线程1.2.3都去调用了new Singleton
//		}
//		return single;
//	}
//
//private://添加一个指向这个类的指针
//	static Singleton *single;
//
//};
//
//Singleton *Singleton::single = NULL;
//
//int main()
//{
//	//优点：只有当我们调用GetSingleton()时，类才会new对象，(在new对象实例的时候做判断)==>比较懒 懒汉式
//	//缺点：遇上多线程问题不适用
//	Singleton *s1 = Singleton::GetSingleton();
//	Singleton *s2 = Singleton::GetSingleton();
//	if (s1 == s2)
//	{
//		cout << "s1 == s2" << endl;
//	}
//	else
//	{
//		cout << "s1 ！= s2" << endl;
//	}
//	system("pause");
//	return 0;
//}