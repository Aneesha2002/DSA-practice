/*Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".*/

#include<bits/stdc++.h>
using namespace std;

int findMinLength(string arr[], int n)
{
	int min = arr[0].length();

	for (int i=1; i<n; i++)
		if (arr[i].length() < min)
			min = arr[i].length();

	return(min);
}

string commonPrefix(string arr[], int n)
{
	int minlen = findMinLength(arr, n);

	string result; 
	char current;

	for (int i=0; i<minlen; i++)
	{
		current = arr[0][i];

		for (int j=1 ; j<n; j++)
			if (arr[j][i] != current)
				return result;

		// Append to result
		result.push_back(current);
	}

	return (result);
}

// Driver program to test above function
int main()
{
	string arr[] = {"appple", "april",
					"apps", "ape"};
	int n = sizeof (arr) / sizeof (arr[0]);

	string ans = commonPrefix (arr, n);

	if (ans.length())
		cout << "The longest common prefix is "
			<< ans;
	else
		cout << "There is no common prefix";
	return (0);
}
