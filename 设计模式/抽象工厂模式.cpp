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
////抽象的工厂和一般的工厂相比：产品的细化
//class FruitFactory//和Fruit类是依赖关系//抽象工厂
//{
//public:
//	virtual Fruit *getBanana()//采集水果
//	{
//		cout << "FruitFactory:getBanana()" << endl;
//		return NULL;
//	}
//	virtual Fruit *getPear()//采集水果
//	{
//		cout << "FruitFactory:getPear()" << endl;
//		return NULL;
//	}
//	virtual Fruit *getApple()//采集水果
//	{
//		cout << "FruitFactory:gettApple()" << endl;
//		return NULL;
//	}
//};
//
////南方梨
//class SouthPear :public Fruit
//{
//public:
//	virtual void sayName()//采集水果
//	{
//		cout << "I'm SouthPear" << endl;
//	}
//};
////北方梨
//class NorthPear :public Fruit
//{
//public:
//	virtual void sayName()//采集水果
//	{
//		cout << "I'm NorthPear" << endl;
//	}
//};
////南方香蕉
//class SouthBanana :public Fruit
//{
//public:
//	virtual void sayName()//采集水果
//	{
//		cout << "I'm SouthBanana" << endl;
//	}
//};
////北方香蕉
//class NorthBanana :public Fruit
//{
//public:
//	virtual void sayName()//采集水果
//	{
//		cout << "I'm NorthBanana" << endl;
//	}
//};
////南方苹果
//class SouthApple :public Fruit
//{
//public:
//	virtual void sayName()//采集水果
//	{
//		cout << "I'm SouthApple" << endl;
//	}
//};
////北方苹果
//class NorthApple :public Fruit
//{
//public:
//	virtual void sayName()//采集水果
//	{
//		cout << "I'm NorthApple" << endl;
//	}
//};
////南方工厂
//class SouthFactory:public FruitFactory
//{
//public:
//	virtual Fruit *getBanana()//采集水果
//	{
//		return new SouthBanana;
//	}
//	virtual Fruit *getPear()//采集水果
//	{
//		return new SouthPear;
//	}
//	virtual Fruit *getApple()//采集水果
//	{
//		return new SouthApple;
//	}
//};
////北方工厂
//class NorthFactory :public FruitFactory
//{
//public:
//	virtual Fruit *getBanana()//采集水果
//	{
//		return new NorthBanana;
//	}
//	virtual Fruit *getPear()//采集水果
//	{
//		return new NorthPear;
//	}
//	virtual Fruit *getApple()//采集水果
//	{
//		return new NorthApple;
//	}
//};
//
//int main()
//{
//	FruitFactory *ff = NULL;
//	Fruit *fruit1 = NULL;
//	Fruit *fruit2 = NULL;
//	//南方的工厂
//	ff = new SouthFactory;
//	fruit1=ff->getApple();
//	fruit1->sayName();
//	fruit2 = ff->getBanana();
//	fruit2->sayName();
//	delete fruit1;
//	delete fruit2;
//	delete ff;
//	//北方的工厂
//	ff = new NorthFactory;
//	fruit1 = ff->getApple();
//	fruit1->sayName();
//	fruit2 = ff->getBanana();
//	fruit2->sayName();
//	delete fruit1;
//	delete fruit2;
//	delete ff;
//	 
//	system("pause");
//	return 0;
//}