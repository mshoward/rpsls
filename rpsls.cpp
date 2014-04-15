#include <string>
#include <iostream>
#include <list>
#include <map>

//using namespace std;

///returns first occurance of string in mapped, between start and end inclusively, or end+1 if not found
int firstOf(std::string str, std::map<int, std::string> mapped,int start, int end)
{
	for(int i = start; i <= end; i++)
	{
		if (str == mapped[i])
		{
			return i;
		}
	}
	return i;
}


int main()
{
	std::map <int, std::string> choices;
	choices[1] = "rock";
	choices[2] = "paper";
	choices[3] = "scissors";
	choices[4] = "lizard";
	choices[5] = "spock";
	std::string pick = "";
	std::getline(std::cin, pick);
	for(int i = 0; i <= 5; i++)
	{
		std::cout << (pick == choices[i]) << std::endl;
	}
	
	
	
	return 0;
}
