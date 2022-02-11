//Выведите «M», если победил Матроскин, и «S», если Шарик.Если определить победителя невозможно, выведите « ? ».
#include <iostream>
using namespace std;

const string R = "rock";
const string P = "paper";
const string S = "scissors";

int main()
{
	setlocale(0, "");
	cout << "Введите 1 - камень, 2 - бумага, 3 - ножницы";

	string v1, v2, v3;
	int i1, i2, i3;

	cin >> i1;
	cin >> i2;
	cin >> i3;

	// Проверка первой переменной v1
	switch (i1) {
	case 1://камень
		switch (i2) {
		case 1://камень
			switch (i3) {
			case 1:
				cout << "F";
				break;
			case 2://бумага 
				cout << "win v3";
				break;
			case 3://ножницы
				cout << "F";
				break;
			}
			break;
		case 2://paper
			switch (i3) {
			case 1://камень
				cout << "win v2";
				break;
			case 2://бумага 
				cout << "F";
				break;
			case 3://ножницы
				cout << "F";
				break;
			}
			break;
		case 3://ножницы
			switch (i3) {
			case 1://камень
				cout << "win v2";
				break;
			case 2://бумага 
				cout << "F";
				break;
			case 3://ножницы
				cout << "F";
				break;
			}
			break;
		}
		break;
	case 2://бумага
		switch (i2) {
		case 1://камень
			switch (i3) {
			case 1://камень
				cout << "win v1";
				break;
			case 2://бумага 
				cout << "F";
				break;
			case 3://ножницы
				cout << "F";
				break;
			}
			break;
		case 2://paper
			switch (i3) {
			case 1://камень
				cout << "F";
				break;
			case 2://бумага 
				cout << "F";
				break;
			case 3://ножницы
				cout << "win v3";
				break;
			}
			break;
		case 3://ножницы
			switch (i3) {
			case 1://камень
				cout << "F";
				break;
			case 2://бумага 
				cout << "win v3";
				break;
			case 3://ножницы
				cout << "F";
				break;
			}
			break;
		}
		break;
	case 3://ножницы
		switch (i2) {
		case 1://камень
			switch (i3) {
			case 1://камень
				cout << "F";
				break;
			case 2://бумага 
				cout << "F";
				break;
			case 3://ножницы
				cout << "win v2";
				break;
			}
			break;
		case 2://бумага
			switch (i3) {
			case 1://камень
				cout << "F";
				break;
			case 2://бумага 
				cout << "win v1";
				break;
			case 3://ножницы
				cout << "F";
				break;
			}
			break;
		case 3://ножницы
			switch (i3) {
			case 1://камень
				cout << "win v3";
				break;
			case 2://бумага 
				cout << "F";
				break;
			case 3://ножницы
				cout << "F";
				break;
			}
			break;
		}
		break;
		break;
	}

}