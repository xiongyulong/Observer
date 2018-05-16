#include "classes.h"
Account::Account(int _rmb)
{
	rmb = _rmb;
}
void Account::addObserver(Observer *op)
{
	vp.push_back(op);

}
void Account::save(int _sr)
{
	rmb += _sr;
	for (vector<Observer *>::iterator it = vp.begin(); it != vp.end(); it++)
	{
		(*it)->msgs(_sr, rmb);
	}
}
void Account::withdraw(int _wr)
{
	if (_wr>rmb)
	{
		_wr = rmb;
		rmb = 0;
	}
	else
		rmb -= _wr;
	for (vector<Observer *>::iterator it = vp.begin(); it != vp.end(); it++)
	{
		(*it)->msgw(_wr, rmb);
	}
}

void Mobile::msgs(int _ms, int _mr)
{
	cout << "�յ�����Ϣ������" << _ms << "Ԫ��" << "���" << _mr << "Ԫ��" << endl;
}
void Mobile::msgw(int _mw, int _mr)
{
	cout << "�յ�����Ϣ��ȡ��" << _mw << "Ԫ��" << "���" << _mr << "Ԫ��" << endl;
}

void QQ::msgs(int _qs, int _qr)
{
	cout << "�յ�QQ��Ϣ������" << _qs << "Ԫ��" << "���" << _qr << "Ԫ��" << endl;
}
void QQ::msgw(int _qw, int _qr)
{
	cout << "�յ�QQ��Ϣ��ȡ��" << _qw << "Ԫ��" << "���" << _qr << "Ԫ��" << endl;
}
