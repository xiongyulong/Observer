// observer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "classes.h"

int main()
{
	Account account(1000);		// ���п�����������1000Ԫ
	Mobile mobile;				// �ֻ�����
	account.addObserver(&mobile);	// �������˺���ע���ֻ�
	QQ qq;						// QQ����
	account.addObserver(&qq);	// �������˺���ע��QQ
	cout << "����200Ԫ->" << endl;
	Sleep(2000);
	account.save(200);			// ��200Ԫ
	cout << "ȡ��800Ԫ<-" << endl;
	Sleep(2000);
	account.withdraw(800);		// ȡ800Ԫ
	cout << "����ȡ��1000Ԫ<-" << endl;
	Sleep(2000);
	account.withdraw(1000);		// ����ȡ��1000Ԫ����Ϊ�����ֻ��400Ԫ��1000>400������Ϣ��ʾ��ȡ��400Ԫ��
	Sleep(1000);
	return 0;
}
