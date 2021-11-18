
#include <iostream>
#include<vector>
#include<queue>
using namespace std;
int minComputation(vector<int>file)
{

	priority_queue<int, vector<int>, greater<int> > pq;

	for (int i = 0; i < file.size(); i++) {
		pq.push(file[i]);
	}
	int count = 0;

	while (pq.size() > 1) {

		int first_smallest = pq.top();
		pq.pop();
		int second_smallest = pq.top();
		pq.pop();

		int temp = first_smallest + second_smallest;
		count += temp;
		pq.push(temp);
	}
	return count;
}

int main()
{
	int n = 6;
	vector <int>file;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        file.push_back(temp);
    }
	cout << "Minimum Computations = "<< minComputation(file);

	return 0;
}

