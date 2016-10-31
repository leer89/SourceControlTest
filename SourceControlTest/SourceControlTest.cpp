// SourceControlTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string returnName(string x1, string x2);

int main()
{
	string x1, x2, newName;

	cout << "Randy Lee, Source Control Test" << endl;
	cout << "Type in two words: " << endl;

	cin >> x1;
	cin >> x2;

	newName = returnName(x1, x2);

	cout << "My new name is: " << newName << endl;

	return 0;
}

string returnName(string x1, string x2)
{
	return x1 + " " + x2;
}