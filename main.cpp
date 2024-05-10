#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	ifstream inputfile;
	inputfile.open("scores.txt");
	int minScore;
	int maxScore;
	vector<int> averageScore;
	int scoresIn;
	if (!inputfile)
	{
		cout << "Error!!,the file had a problem opening" << endl;
	}
	while (!inputfile.eof())
	{
		inputfile >> scoresIn;
		averageScore.push_back(scoresIn);
		if (scoresIn < 0 || scoresIn > 100)
		{
			cout << "invalid input entered" << endl;
			continue;
		}
		else
		{
			minScore = scoresIn;
			maxScore = minScore;
			minScore++;
			if (maxScore < minScore)
			{
				cout << "this is maxScore" << endl;
				minScore = maxScore;
				cout << "this is minScore" << endl;

			}
			else
			{
				maxScore = maxScore;
			}
		}

	}
	inputfile.close();
	cout << "Done" << endl;

	return 0;
}