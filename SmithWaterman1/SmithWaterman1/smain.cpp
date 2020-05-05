#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

int main(int argc, char** argv)
{
	std::string sequence1{};
	std::string sequence2{};

#pragma region Read Files
	/*******************************************************************************
	 **
	 ** Begin Input DNA Sequences
	 **
	 *******************************************************************************/

	std::ifstream input1{ argv[1], std::ifstream::binary | std::ifstream::in };
	if (input1)
	{
		input1.seekg(0, input1.end);
		size_t length{ static_cast<size_t>(input1.tellg()) };
		input1.seekg(0, input1.beg);

		sequence1.resize(length);
		input1.read(const_cast<char*>(sequence1.data()), length);

		input1.close();
	}

	std::ifstream input2{ argv[2], std::ifstream::binary | std::ifstream::in };
	if (input2)
	{
		input2.seekg(0, input2.end);
		size_t length{ static_cast<size_t>(input2.tellg()) };
		input2.seekg(0, input2.beg);

		sequence2.resize(length);
		input2.read(const_cast<char*>(sequence2.data()), length);

		input2.close();
	}

	/*******************************************************************************
	 **
	 ** End Input DNA Sequences
	 **
	 *******************************************************************************/
#pragma endregion

#pragma region Deleting Header Lines
	 /*******************************************************************************
	  **
	  ** Begin Deleting Header Lines
	  **
	  *******************************************************************************/

	size_t commentPos1{ sequence1.find('>') };
	if (commentPos1 != std::string::npos)
		sequence1.erase(commentPos1, sequence1.find('\n'));

	size_t commandPos2{ sequence2.find('>') };
	if (commandPos2 != std::string::npos)
		sequence2.erase(commentPos1, sequence2.find('\n'));

	/*******************************************************************************
	 **
	 ** End Deleting Header Lines
	 **
	 *******************************************************************************/
#pragma endregion

#pragma region Deleting Newlines
	 /*******************************************************************************
	  **
	  ** Begin Deleting Newlines
	  **
	  *******************************************************************************/

	  // todo

	  /*******************************************************************************
	   **
	   ** End Deleting Newlines
	   **
	   *******************************************************************************/
#pragma endregion
	return 0;
}