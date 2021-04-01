#include <iostream>
#include <string>
using namespace std;

class Product
{
	string NameProduct; //Наименование
	string Manufacturer; //Производитель
	double Price; //Цена
	int ShelfLife; //Срок хранения
	int Amount; //Количество

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
	cout << "Выберите действие: \n\n";
	cout << "1. Вывести список товаров для заданного наименования\n";
	cout << "2. Вывести список товаров для заданного наименования, цена которых не превышает указанной\n";
	cout << "3. Вывести список товаров, срок хранения которых больше заданного\n";
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

		cout << "Наименование: " << NameProduct << endl;
		cout << "Цена: " << Price << endl;
		cout << "Количество: " << Amount << endl;
	}
}

int main()
{
	setlocale(0, "");

	//Массив объектов
	Product tr[5];
	tr[0].Set("Яблоки", "Asus", 12, 51, 15);
	tr[1].Set("Мандарины", "Lenovo", 41, 5.6, 16);
	tr[2].Set("Апельсины", "Nokia", 15.13, 23, 17);
	tr[3].Set("Нектары", "Samsung", 32, 8.88, 18);
	tr[4].Set("Ананасы", "Asus", 14, 10, 19);

	string name;
	double Price;

	PrintAct();

	int i; cin >> i;
	if (i == 1)
	{
		cout << "Товаров для заданного наименования: Яблоки, Мандарины, Нектары\nВыберите и введите назначения -> ";
		cin >> name;
		for (int i = 0; i < 5; i++)
		{
			tr[i].pech1(name);
		}
	}
	if (i == 2)
	{
		cout << "Товаров для заданного наименования: Яблоки, Мандарины, Нектары\nВыберите и введите назначения -> ";
		cin >> name;
		cout << "Введите цену, которых не превышает указанной -> ";
		cin >> Price;
		for (int i = 0; i < 5; i++)
		{
			tr[i].pech2(name, Price);
		}
	}
	if (i == 3) {
		cout << "Товаров для заданного наименования: Яблоки, Мандарины, Нектары\nВыберите и введите назначения -> ";
		cin >> name;
		for (int i = 0; i < 5; i++)
		{
			tr[i].pech3(name);
		}
	}
	system("pause");
}