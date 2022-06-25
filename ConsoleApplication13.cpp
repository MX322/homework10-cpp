#include <iostream>
#include <ctime>
using namespace std;

int task1()
{
	const int size = 5;
	int ar[size];

	for (int i = 0; i < size; i++)
	{
		cin >> ar[i];
	}

	for (int j = size - 1; j >= 0; j--)
	{
		cout << ar[j] << ", ";
	}

	return 0;
}


int task2()
{
	srand((unsigned int)time(0));
	const int size = 20;
	int ar[size];

	for (int i = 0; i < size; i++)
	{
		ar[i] = rand() % 10;

		if (i % 2 == 0) cout << ar[i] << ", ";
	}
	
	return 0;
}


int task3()
{
	srand((unsigned int)time(0));
	const int size = 20;
	int ar[size];

	int count = 0;
	int sum = 0;

	int min = -20;
	int max = 20;

	for (int i = 0; i < size; i++)
	{
		ar[i] = min + (rand() % (max - min + 1));
	}

	for (int j : ar)
	{
		if (j > 0)
		{
			count++;
			sum += j;
		}
	}

	cout << "count - " << count << "\n";
	cout << "sum - " << sum << "\n";
	cout << "average - " << double(sum) / count << "\n";

	return 0;
}


int task4()
{
	srand((unsigned int)time(0));
	const int size = 100;
	char ar[size];

	int digit = 0;
	int letter = 0;
	int punctuation = 0;
	int symbol = 0;

	for (int i = 0; i < size; i++)
	{
		ar[i] = rand() % 100;
		cout << ar[i] << ", ";

		if (ar[i] >= 48 && ar[i] <= 57)
		{
			digit++;
		}
		else if (ar[i] >= 44 && ar[i] <= 46)
		{
			punctuation++;
		}
		else if (ar[i] >= 65 && ar[i] <= 90 or ar[i] >= 97 && ar[i] <= 122)
		{
			letter++;
		}
		else
		{
			symbol++;
		}
	}

	cout << "\n";
	cout << "digits : " << digit << "\n";
	cout << "letters : " << letter << "\n";
	cout << "punctuations : " << punctuation << "\n";
	cout << "symbols : " << symbol << "\n";;

	return 0;
}


int task5()
{
	srand((unsigned int)time(0));
	const int size = 100;
	int ar[size];

	int num;
	cout << "Enter num : ";
	cin >> num;

	int count = 0;

	for (int i = 0; i < size; i++)
	{
		ar[i] = rand() % 10;
		if (num == ar[i]) count++;
	}

	cout << count << " - times \n";
	return 0;
}


int task6()
{
	srand((unsigned int)time(0));
	const int size = 20;
	int ar[size];

	int count = 0;
	int sum = 0;

	int min = -10;
	int max = 30;

	for (int i = 0; i < size; i++)
	{
		ar[i] = min + (rand() % (max - min + 1));
	}

	for (int j : ar)
	{
		if (j < 0) count++;
		if (count > 0) sum += j;
	}

	cout << sum;

	return 0;
}


int task7()
{
	srand((unsigned int)time(0));
	const int size = 20;
	int ar[size];

	for (int i = 0; i < size; i++)
	{
		ar[i] = rand() % 10;
	}

	int min = ar[0];
	int max = ar[0];
	int min_index = 0;
	int max_index = 0;

	for (int j = 0; j < size; j++)
	{
		if (ar[j] < min) min = ar[j]; min_index = j;
		if (ar[j] > max) max = ar[j]; max_index = j;
	}

	cout << "min - " << min << "\n";
	cout << "min index - " << min_index << "\n";

	cout << "max - " << max << "\n";
	cout << "max index - " << max_index << "\n";

	return 0;
}


int task8()
{
	srand((unsigned int)time(0));
	const int size = 200;
	int ar[size];

	int min = 0;
	int max = 200;

	int count_1 = 0;
	int count_2 = 0;
	int count_3 = 0;

	for (int i = 0; i < size; i++)
	{
		ar[i] = min + (rand() % (max - min + 1));
	}

	for (int j : ar)
	{
		if (j - 9 <= 0) count_1++;
		else if (j - 99 >= 0 && j - 99 < 100) count_2++;
		else count_3++;
	}

	cout << (double(count_1) / 200) * 100 << " % \n";
	cout << (double(count_2) / 200) * 100 << " % \n";
	cout << (double(count_3) / 200) * 100 << " % \n";

	return 0;
}


int task9()
{
	srand((unsigned int)time(0));
	const int size = 10;
	int ar[size];

	for (int i = 0; i < size; i++)
	{
		ar[i] = rand() % 10;
		cout << ar[i] << ", ";
	}

	cout << "\n\n";

	for (int i = 0; i < size / 2; i++)
	{
		ar[i] += ar[size - i - 1];
		ar[size - i - 1] = ar[i] - ar[size - i - 1];
		ar[i] = ar[i] - ar[size - i - 1];
	}

	for (int i : ar)
	{
		cout << i << ", ";
	}

	return 0;
}


int task10()
{
	srand((unsigned int)time(0));
	const int sizeA = 5;
	int a[sizeA];

	const int sizeB = 5;
	int b[sizeB];

	const int sizeC = 10;
	int c[sizeC];

	for (int i = 0; i < sizeA; i++)
	{
		a[i] = rand() % 10;
		cout << a[i] << ", ";
	}

	cout << "\n";

	for (int i = 0; i < sizeB; i++)
	{
		b[i] = rand() % 10;
		cout << b[i] << ", ";
	}

	cout << "\n";


	int index_a = 0;
	int index_b = 0;

	for (int i = 0; i < sizeC;)
	{
		if (index_a < sizeA)
		{
			c[i] = a[index_a];
			index_a++;
			i++;
		}

		if (index_b < sizeB)
		{
			c[i] = b[index_b];
			index_b++;
			i++;
		}
	}

	cout << "\n";

	for (int i = 0; i < sizeC; i++)
	{
		cout << c[i] << ", ";
	}

	cout << "\n";

	return 0;
}


int main()
{
	task1();
	task2();
	task3();
	task4();
	task5();
	task6();
	task7();
	task8();
	task9();
	task10();
}