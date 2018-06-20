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
////����Ĺ�����һ��Ĺ�����ȣ���Ʒ��ϸ��
//class FruitFactory//��Fruit����������ϵ//���󹤳�
//{
//public:
//	virtual Fruit *getBanana()//�ɼ�ˮ��
//	{
//		cout << "FruitFactory:getBanana()" << endl;
//		return NULL;
//	}
//	virtual Fruit *getPear()//�ɼ�ˮ��
//	{
//		cout << "FruitFactory:getPear()" << endl;
//		return NULL;
//	}
//	virtual Fruit *getApple()//�ɼ�ˮ��
//	{
//		cout << "FruitFactory:gettApple()" << endl;
//		return NULL;
//	}
//};
//
////�Ϸ���
//class SouthPear :public Fruit
//{
//public:
//	virtual void sayName()//�ɼ�ˮ��
//	{
//		cout << "I'm SouthPear" << endl;
//	}
//};
////������
//class NorthPear :public Fruit
//{
//public:
//	virtual void sayName()//�ɼ�ˮ��
//	{
//		cout << "I'm NorthPear" << endl;
//	}
//};
////�Ϸ��㽶
//class SouthBanana :public Fruit
//{
//public:
//	virtual void sayName()//�ɼ�ˮ��
//	{
//		cout << "I'm SouthBanana" << endl;
//	}
//};
////�����㽶
//class NorthBanana :public Fruit
//{
//public:
//	virtual void sayName()//�ɼ�ˮ��
//	{
//		cout << "I'm NorthBanana" << endl;
//	}
//};
////�Ϸ�ƻ��
//class SouthApple :public Fruit
//{
//public:
//	virtual void sayName()//�ɼ�ˮ��
//	{
//		cout << "I'm SouthApple" << endl;
//	}
//};
////����ƻ��
//class NorthApple :public Fruit
//{
//public:
//	virtual void sayName()//�ɼ�ˮ��
//	{
//		cout << "I'm NorthApple" << endl;
//	}
//};
////�Ϸ�����
//class SouthFactory:public FruitFactory
//{
//public:
//	virtual Fruit *getBanana()//�ɼ�ˮ��
//	{
//		return new SouthBanana;
//	}
//	virtual Fruit *getPear()//�ɼ�ˮ��
//	{
//		return new SouthPear;
//	}
//	virtual Fruit *getApple()//�ɼ�ˮ��
//	{
//		return new SouthApple;
//	}
//};
////��������
//class NorthFactory :public FruitFactory
//{
//public:
//	virtual Fruit *getBanana()//�ɼ�ˮ��
//	{
//		return new NorthBanana;
//	}
//	virtual Fruit *getPear()//�ɼ�ˮ��
//	{
//		return new NorthPear;
//	}
//	virtual Fruit *getApple()//�ɼ�ˮ��
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
//	//�Ϸ��Ĺ���
//	ff = new SouthFactory;
//	fruit1=ff->getApple();
//	fruit1->sayName();
//	fruit2 = ff->getBanana();
//	fruit2->sayName();
//	delete fruit1;
//	delete fruit2;
//	delete ff;
//	//�����Ĺ���
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