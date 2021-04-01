#include <iostream>
#include <string>
using namespace std;

class Product
{
	string NameProduct; //������������
	string Manufacturer; //�������������
	double Price; //����
	int ShelfLife; //���� ��������
	int Amount; //����������

public:

	void Set(string NameProduct_, string Manufacturer_, double Price_, int ShelfLife_, int Amount_)
	{
		NameProduct = NameProduct_;
		Manufacturer = Manufacturer_;
		Price = Price_;
		ShelfLife = ShelfLife_;
		Amount = Amount_;
	}

	string Get1()
	{
		return NameProduct;
	}
	double Get2()
	{
		return Price;
	}
	int Get3()
	{
		return Amount;
	}

	void pech1(string);
	void pech2(string, double);
	void pech3(string);
};

void PrintAct()
{
	cout << "�������� ��������: \n\n";
	cout << "1. ������� ������ ������� ��� ��������� ������������\n";
	cout << "2. ������� ������ ������� ��� ��������� ������������, ���� ������� �� ��������� ���������\n";
	cout << "3. ������� ������ �������, ���� �������� ������� ������ ���������\n";
}

void Product::pech1(string name)
{
	if (name == NameProduct)
	{
		cout << "-NameProduct: " << NameProduct << endl;
	}
}

void Product::pech2(string name, double Price)
{
	if ((name == NameProduct) & (Price < Price))
	{
		cout << "-NumberPoezd: " << NameProduct << endl;
		cout << "-Price: " << Price << endl;
	}
}

void Product::pech3(string name)
{
	if ((name == NameProduct) & (Amount > 0))
	{
		setlocale(0, "");

		cout << "������������: " << NameProduct << endl;
		cout << "����: " << Price << endl;
		cout << "����������: " << Amount << endl;
	}
}

int main()
{
	setlocale(0, "");

	//������ ��������
	Product tr[5];
	tr[0].Set("������", "Asus", 12, 51, 15);
	tr[1].Set("���������", "Lenovo", 41, 5.6, 16);
	tr[2].Set("���������", "Nokia", 15.13, 23, 17);
	tr[3].Set("�������", "Samsung", 32, 8.88, 18);
	tr[4].Set("�������", "Asus", 14, 10, 19);

	string name;
	double Price;

	PrintAct();

	int i; cin >> i;
	if (i == 1)
	{
		cout << "������� ��� ��������� ������������: ������, ���������, �������\n�������� � ������� ���������� -> ";
		cin >> name;
		for (int i = 0; i < 5; i++)
		{
			tr[i].pech1(name);
		}
	}
	if (i == 2)
	{
		cout << "������� ��� ��������� ������������: ������, ���������, �������\n�������� � ������� ���������� -> ";
		cin >> name;
		cout << "������� ����, ������� �� ��������� ��������� -> ";
		cin >> Price;
		for (int i = 0; i < 5; i++)
		{
			tr[i].pech2(name, Price);
		}
	}
	if (i == 3) {
		cout << "������� ��� ��������� ������������: ������, ���������, �������\n�������� � ������� ���������� -> ";
		cin >> name;
		for (int i = 0; i < 5; i++)
		{
			tr[i].pech3(name);
		}
	}
	system("pause");
}