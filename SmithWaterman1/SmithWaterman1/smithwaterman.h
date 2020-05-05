#ifndef SMITHWATERMAN_H
#define SMITHWATERMAN_H

#include <string>
#include <fstream>

class smith_waterman
{
private:
	std::string fileName1;
	std::string fileName2;

	std::string sequence1;
	std::string sequence2;

public:
	smith_waterman(std::string, std::string);
};

#endif