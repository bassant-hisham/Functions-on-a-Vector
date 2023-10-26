#include<iostream>
#include<vector>
using namespace std;
int getSumOfVectorElements(vector<int>);
int getMinOfVectorElements(vector<int>);

int main()
{
	vector<int> vectorToBeSummed = {1,2,3,4,5,6,7,8,9,10};

	int accumlatedSum = getSumOfVectorElements(vectorToBeSummed);
	cout<<"The Sum Of the Vector Elements {1,2,3,4,5,6,7,8,9,10} = "<<accumlatedSum<<endl;

	int MinOfVectorElements = getMinOfVectorElements(vectorToBeSummed);
	cout<<"The Min Of the Vector Elements {1,2,3,4,5,6,7,8,9,10} = "<<MinOfVectorElements<<endl;
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

int getMinOfVectorElements(vector<int> vectorElements)
{
	int MinElement = 100000000;
	for (int i = 0 ; i < vectorElements.size() ; i++) 
	{ 
		if ( MinElement >  vectorElements[i] )
		MinElement = vectorElements[i];
	}
	return MinElement;
}
