//#include<iostream>
//
//using namespace std;
//
//class Singleton
//{
//private://1.���캯��˽�л�
//	//c++�Ĺ��캯�����ܱ�֤���̰߳�ȫ��
//	Singleton()
//	{
//		printf("Singleton begin\n");
//		//Sleep(1000);
//		printf("Singleton end\n");
//	}
//public://2.�ṩȫ�ַ��ʵ�
//	static Singleton *GetSingleton()
//	{
//		//ÿһ��GetSingleton()ʱ�򣬶���Ҫ�ж�singleʵ���Ƿ����
//		if (single == NULL)
//		{
//			single = new Singleton;//�߳�1.2.3��ȥ������new Singleton
//		}
//		return single;
//	}
//
//private://���һ��ָ��������ָ��
//	static Singleton *single;
//
//};
//
//Singleton *Singleton::single = NULL;
//
//int main()
//{
//	//�ŵ㣺ֻ�е����ǵ���GetSingleton()ʱ����Ż�new����(��new����ʵ����ʱ�����ж�)==>�Ƚ��� ����ʽ
//	//ȱ�㣺���϶��߳����ⲻ����
//	Singleton *s1 = Singleton::GetSingleton();
//	Singleton *s2 = Singleton::GetSingleton();
//	if (s1 == s2)
//	{
//		cout << "s1 == s2" << endl;
//	}
//	else
//	{
//		cout << "s1 ��= s2" << endl;
//	}
//	system("pause");
//	return 0;
//}