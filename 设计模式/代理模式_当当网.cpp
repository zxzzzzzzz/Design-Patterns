//#include<iostream>
//using namespace std;
//
//class BookStore//ͳһ�Ľӿ�ʵ��
//{
//public:
//	virtual void salebook()
//	{
//		cout << "BookStore salebook" << endl;
//	}
//};
////ʵ���
//class RealStore:public BookStore
//{
//public:
//	virtual void salebook()
//	{
//		cout << "RealStore salebook" << endl;
//	}
//};
////����������,��ǿ��ʵ���Ĺ���
//class DDProxy :public BookStore
//{
//public:
//	virtual void salebook()
//	{
//		RealStore realstore;
//		double11();
//		realstore.salebook();//����ʵ������飬ͬʱ���������Լ���ҵ���߼�==>double11()
//		cout << "DDProxy salebook" << endl;
//		double11();
//		double11();
//		double11();
//	}
//	void double11()
//	{
//		cout << "���۴��������" << endl;
//	}
//	
//};
//
//int main()
//{
//	DDProxy *dd = new DDProxy;
//	dd->salebook();
//
//	system("pause");
//	return 0;
//}