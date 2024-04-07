// GitProjC++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream file1, file2;
	string str, str2;
	int size = 5;
	file1.open("C:/Users/Anton/Desktop/test file for text1.txt", ios::out | ios::in);
	file2.open("C:/Users/Anton/Desktop/test file for text2.txt", ios::out);
	if (file1.is_open()) {
		cout << "Insert text info: ";
		for (int i = 0; i < size; i++) {
			cin >> str;
			file1 << str << " ";
		};
	}
	else cout << "File cant be open";
	file1.close();
	file1.open("C:/Users/Anton/Desktop/test file for text1.txt", ios::out | ios::in);
	if (file2.is_open()) {
		while (getline(file1, str2)) {
			file2 << str2 << "\n";
			cout << str2;
		};
	}

	else cout << "File cant be open";
	file1.close();
	file2.close();
	return 0;

}
