// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "windows.h"
#include "stdlib.h"
#include <iostream>

using namespace std;




#define N 10

void ar_init(float anyarray[N])//array initialization (from keyboard)
{
	cout << "Please enter array values:" << endl;

	for (int i = 0; i < N; i++)

		cin >> anyarray[i];

}

void print_array(float anyarray[N])//print array
{
	for (int i = 0; i < N; i++)

		cout << "[" << i << "]" << " " << anyarray[i] << endl;

}




int main()
{
	float A[N];
	float C[N];


	ar_init(A);




	for (int i = 0; i < N; i++)//reverse order of elements
	{
		C[i] = A[N - (i + 1)]; //N-1 is the index of the last element
	}


	cout << "Array C:" << endl;
	//print array C

	print_array(C); ///extra comment !!!


	system("pause");
	return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
