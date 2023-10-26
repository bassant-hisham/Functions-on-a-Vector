#include<iostream>
#include<vector>
using namespace std;
int getSumOfVectorElements(vector<int>);
int getAverageOfVectorElements(vector<int>);

int main()
{
	vector<int> vectorToBeSummed = {1,2,3,4,5,6,7,8,9,10};

	int accumlatedSum = getSumOfVectorElements(vectorToBeSummed);
	cout<<"The Sum Of the Vector Elements {1,2,3,4,5,6,7,8,9,10} = "<<accumlatedSum<<endl;

	int AverageOfVectorElements = getAverageOfVectorElements(vectorToBeSummed);
	cout<<"The Average Of the Vector Elements {1,2,3,4,5,6,7,8,9,10} = "<<AverageOfVectorElements<<endl;
	return 0;
}

int getSumOfVectorElements(vector<int> vectorToBeSummed)
{
	int accumlatedSum = 0;

	for (int i = 0 ; i < vectorToBeSummed.size() ; i++)
	{
		accumlatedSum += vectorToBeSummed[i];
	}

	return accumlatedSum;
}

int getAverageOfVectorElements(vector<int> vectorToBeSummed)
{
	int accumlatedSum = 0;
	for (int i = 0 ; i < vectorToBeSummed.size() ; i++) 
	{ 
		accumlatedSum += vectorToBeSummed[i];
	}
	int averageOfVector=accumlatedSum/vectorToBeSummed.size();
	return averageOfVector;
}
