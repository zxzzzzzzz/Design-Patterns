//#include<iostream>
//
//using namespace std;
//
//class Fruit
//{
//public:
//	virtual void getFruit()
//	{
//		cout << "Fruit:Fruit" << endl;
//	}
//};
//
//class Pear :public Fruit
//{
//public:
//	virtual void getFruit()//采集水果
//	{
//		cout << "Pear:Fruit" << endl;
//	}
//};
//class Banana :public Fruit
//{
//public:
//	virtual void getFruit()//采集水果
//	{
//		cout << "Banana:Fruit" << endl;
//	}
//};
//
////依赖
//class Factory
//{
//public:
//	static Fruit *Creat(char *name)//简单工厂的创建工作，业务逻辑集中在这
//	{
//		if (strcmp(name, "Pear") == 0) 
//		{
//			return new Pear;
//		}
//		else if (strcmp(name, "Banana") == 0)
//		{
//			return new Banana;
//		}
//		else
//		{
//			return NULL;
//		}
//	}
//};
//int main()
//{
//	Factory *ff = NULL;
//	Fruit *fruit = NULL;
//
//	ff = new Factory;
//	//创建梨子
//	fruit=ff->Creat("Pear");
//	fruit->getFruit(); //多态成立的三个条件
//	delete fruit;
//	//创建香蕉
//	fruit=ff->Creat("Banana");
//	fruit->getFruit(); 
//	delete fruit;
//	 
//	system("pause");
//	return 0;
//}