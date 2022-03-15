#include <iostream>

using namespace std;

structlist

{
	char data; 
 list* next; 
};

list* init(char a) 

{
    list* lst;
    lst = new(list);
    lst->data = a; 
    lst->next = 0;

    return(lst);
}

list* addelem(list* lst, char a)

{
	list* temp, * eAdr;
	temp = new(list);
	eAdr = lst->next; 
	lst->next = temp; 
	temp->data = a; 
	temp->next = eAdr; 

	return(temp); 

}

list* deletelem(list* lst, list* root)
{
	list* temp;
	temp = root;

	while (temp->next != lst)
	{ 
		temp = temp->next;
	}
	temp->next = lst->next; 
	
	return(temp);
}

void listprint(list* lst)
{
	list* eAdr;
	eAdr = lst;

	do 
	{
		cout << " " << eAdr->data; 
		
		eAdr = eAdr->next; 
	}
	while (eAdr != NULL);
}

void listprint_new(list* lst, char a)
{
	list* eAdr;
	eAdr = lst;
	char x;

	do 
	{
		if (eAdr->data == a)
		{
			cout << endl << "Введите новый элемент, который будет стоять после указанного : ";
			cin >> x;
			addelem(eAdr, x);
			eAdr = eAdr->next;
		}

		else 
		{
			eAdr = eAdr->next; 
		}

	} while (eAdr != NULL);
}

int main()

{
	setlocale(LC_ALL, "Russian");

	list* head, * eAdr; 
	head = eAdr = 0;
	int col;
	char x;
	cout << "Введите количество элементов: ";
	cin >> col;

	for (int i = 0; i < col; i++)

	{
		if (i == 0) 
		{
			cout << "Введите " << (i + 1) << " элемент: ";
			cin >> x;
			cout << endl;
			head = eAdr = init(x);
		}

		else 
		{
			cout << "Введите " << (i + 1) << " элемент: ";
			cin >> x;
			cout << endl;
			eAdr = addelem(eAdr, x);
		}
	}
	cout << "Выберите элемент, после которого поставить новый элемент : ";
	cin >> x;

	listprint_new(head, x);
	cout << endl;

	cout << "Список после преобразований:";
	listprint(head);
	cout << endl << endl;
}
