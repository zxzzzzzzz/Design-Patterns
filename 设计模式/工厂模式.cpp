//#include<iostream>
//using namespace std;
////����ˮ���� Fruit
////����Ĺ����� FruitFactory
////�����ˮ���� Banana��Pear
////����Ĺ����� BananaFactory��PearFactory
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
//class FruitFactory//��Fruit����������ϵ
//{
//public:
//	virtual Fruit *getFruit()//�ɼ�ˮ��
//	{
//		cout << "FruitFactory:getFruit()" << endl;
//		return NULL;
//	}
//};
//
//class Pear :public Fruit
//{
//public:
//	virtual void sayName()//�ɼ�ˮ��
//	{
//		cout << "I'm Pear" << endl;
//	}
//};
//class Banana :public Fruit
//{
//public:
//	virtual void sayName()//�ɼ�ˮ��
//	{
//		cout << "I'm Banana" << endl;
//	}
//};
//
//class BananaFactory:public FruitFactory
//{
//public:
//	virtual Fruit *getFruit()//�ɼ�ˮ��
//	{
//		return new Banana;
//	}
//};
//class PearFactory :public FruitFactory
//{
//public:
//	virtual Fruit *getFruit()//�ɼ�ˮ��
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
//	//��������
//	ff = new BananaFactory;
//	fruit=ff->getFruit();
//	fruit->sayName();
//	delete fruit;
//	delete ff;
//	//�����㽶
//	ff = new PearFactory;
//	fruit = ff->getFruit();
//	fruit->sayName();
//	delete fruit;
//	delete ff;
//	 
//	system("pause");
//	return 0;
//}