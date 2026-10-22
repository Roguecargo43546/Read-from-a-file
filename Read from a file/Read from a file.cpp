// Read from a file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::string textStringLine;

	std::ifstream TheFileToBeRead("Text.txt");

	while (std::getline(TheFileToBeRead, textStringLine))
	{
		std::cout << textStringLine << "\n";
	}

	TheFileToBeRead.close();
	return 0;
}


