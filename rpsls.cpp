#include <string>
#include <iostream>
#include <list>
#include <map>
#include <utility>

//using namespace std;

///returns first occurance of string in mapped, between start and end inclusively, or end+1 if not found
int firstOf(std::string str, std::map<int, std::string> mapped,int start, int end)
{
	int i;
	for(i = start; i <= end; i++)
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
	std::map<std::pair<int, int>, int> winner;
	//make_pair(player1Choice, player2Choice)
	#define mp std::make_pair
	winner[mp(1,1)] = 0;
	winner[mp(1,2)] = 2;
	winner[mp(1,3)] = 1;
	winner[mp(1,4)] = 1;
	winner[mp(1,5)] = 2;
	winner[mp(2,1)] = 1;
	winner[mp(2,2)] = 0;
	winner[mp(2,3)] = 2;
	winner[mp(2,4)] = 2;
	winner[mp(2,5)] = 1;
	winner[mp(3,1)] = 2;
	winner[mp(3,2)] = 1;
	winner[mp(3,3)] = 0;
	winner[mp(3,4)] = 1;
	winner[mp(3,5)] = 2;
	winner[mp(4,1)] = 2;
	winner[mp(4,2)] = 1;
	winner[mp(4,3)] = 2;
	winner[mp(4,4)] = 0;
	winner[mp(4,5)] = 1;
	winner[mp(5,1)] = 1;
	winner[mp(5,2)] = 2;
	winner[mp(5,3)] = 1;
	winner[mp(5,4)] = 2;
	winner[mp(5,5)] = 0;
	std::string pick = "";
	std::getline(std::cin, pick);
	
	std::cout << firstOf(pick, choices, 0, 5) << std::endl;
	
	
	
	return 0;
}
