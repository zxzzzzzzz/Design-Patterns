//#include<iostream>
//using namespace std;
//
//class BookStore//统一的接口实现
//{
//public:
//	virtual void salebook()
//	{
//		cout << "BookStore salebook" << endl;
//	}
//};
////实体店
//class RealStore:public BookStore
//{
//public:
//	virtual void salebook()
//	{
//		cout << "RealStore salebook" << endl;
//	}
//};
////当当网代理,增强了实体店的功能
//class DDProxy :public BookStore
//{
//public:
//	virtual void salebook()
//	{
//		RealStore realstore;
//		double11();
//		realstore.salebook();//代理实体店销书，同时可以增加自己的业务逻辑==>double11()
//		cout << "DDProxy salebook" << endl;
//		double11();
//		double11();
//		double11();
//	}
//	void double11()
//	{
//		cout << "打折促销，半价" << endl;
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