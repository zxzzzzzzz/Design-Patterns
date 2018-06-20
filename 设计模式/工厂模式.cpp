//#include<iostream>
//using namespace std;
////抽象水果类 Fruit
////抽象的工厂类 FruitFactory
////具体的水果类 Banana，Pear
////具体的工厂类 BananaFactory，PearFactory
//
//class Fruit
//{
//public:
//	virtual void sayName()
//	{
//		cout << "Fruit" << endl;
//	}
//};
//
//class FruitFactory//和Fruit类是依赖关系
//{
//public:
//	virtual Fruit *getFruit()//采集水果
//	{
//		cout << "FruitFactory:getFruit()" << endl;
//		return NULL;
//	}
//};
//
//class Pear :public Fruit
//{
//public:
//	virtual void sayName()//采集水果
//	{
//		cout << "I'm Pear" << endl;
//	}
//};
//class Banana :public Fruit
//{
//public:
//	virtual void sayName()//采集水果
//	{
//		cout << "I'm Banana" << endl;
//	}
//};
//
//class BananaFactory:public FruitFactory
//{
//public:
//	virtual Fruit *getFruit()//采集水果
//	{
//		return new Banana;
//	}
//};
//class PearFactory :public FruitFactory
//{
//public:
//	virtual Fruit *getFruit()//采集水果
//	{
//		return new Pear;
//	}
//};
//
//int main()
//{
//	FruitFactory *ff = NULL;
//	Fruit *fruit = NULL;
//
//	//创建梨子
//	ff = new BananaFactory;
//	fruit=ff->getFruit();
//	fruit->sayName();
//	delete fruit;
//	delete ff;
//	//创建香蕉
//	ff = new PearFactory;
//	fruit = ff->getFruit();
//	fruit->sayName();
//	delete fruit;
//	delete ff;
//	 
//	system("pause");
//	return 0;
//}