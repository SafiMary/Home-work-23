#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

void three_max(int &a, int &b, int &c) {
	cout << "Максимум\n";
int max = a > (b > c ? b : c) ?
a : (b > c ? b : c);	
a = b = c = max;
}
template <typename T>
void fill_arr(T arr[], const int length, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}
template <typename T>
void show_arr(T arr[], const int length) {
	cout << '[';
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}

template <typename T>
T& func(T arr[], const int length) {
	for (int i = 0; i < length; i++){
		if (arr[i] < 0)
			return arr[i];
}
	return arr[0];
}

void two_arr(int arr1[],int arr2[], const int length1, const int length2) {
	for(int *parr1 = arr1;parr1 != arr1 + length1;parr1++)
		for( int *parr2 = arr2;parr2 != arr2 + length2;parr2++)
	if (*parr1 == *parr2)
		*parr2 = 0;
}

int main() {
	setlocale(LC_ALL, "Russian");
	//Задача 1
	cout << "Задача 1\n";
	int num1, num2, num3;
	cout << "Введите три числа: \n";
	cin >> num1 >> num2 >> num3;
	three_max(num1, num2, num3);
	cout << num1 << ' ' << num2 << ' ' << num3;
	//Задача 2
	cout << "Задача 2\n";
	const int size = 5;
	int mass[size];
	fill_arr(mass, size, -10, 100);
	show_arr(mass, size);
	cout << func(mass,size);

	//Задача 3
	cout << "Задача 3\n";
	const int size1 = 5;
	int mass1[size1];
	const int size2 = 5;
	int mass2[size2];
	fill_arr(mass1, size1, 10, 100);
	fill_arr(mass2, size2, 10, 55);
	cout << "Первый массив: \n";
	show_arr(mass1, size1);
	cout << "Второй массив: \n";
	show_arr(mass2, size2);
	two_arr(mass1, mass2, size1, size2);
	cout << "Второй массив после применения функции: \n";
	show_arr(mass2, size2);
	return 0;
}