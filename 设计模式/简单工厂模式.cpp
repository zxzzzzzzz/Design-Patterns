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
//	virtual void getFruit()//�ɼ�ˮ��
//	{
//		cout << "Pear:Fruit" << endl;
//	}
//};
//class Banana :public Fruit
//{
//public:
//	virtual void getFruit()//�ɼ�ˮ��
//	{
//		cout << "Banana:Fruit" << endl;
//	}
//};
//
////����
//class Factory
//{
//public:
//	static Fruit *Creat(char *name)//�򵥹����Ĵ���������ҵ���߼���������
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
//	//��������
//	fruit=ff->Creat("Pear");
//	fruit->getFruit(); //��̬��������������
//	delete fruit;
//	//�����㽶
//	fruit=ff->Creat("Banana");
//	fruit->getFruit(); 
//	delete fruit;
//	 
//	system("pause");
//	return 0;
//}