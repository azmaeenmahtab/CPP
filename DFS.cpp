#include<bits/stdc++.h>
using namespace std;

vector<int> V[11];

bool marked[11] = {false};

void DFS(int v)
{
    stack<int> S;

    S.push(v);

    while(!S.empty()){

    	v = S.top();

    	S.pop();

    	if(!marked[v]){

    		cout << v << " ";

    		marked[v] = true;
    	}

    	for(int i = 0; i < V[v].size(); i++){

    		int w = V[v][i];

    		S.push(w);
    	}
    }

}

int main(){
	
	int n, e;

	cin >> n >> e;

	for(int i = 1; i <= e; i++){

		int nodeA, nodeB;

		cin >> nodeA >> nodeB;

		V[nodeA].push_back(nodeB);
	}


	for(int i = 1; i <= n; i++){

		cout << i << " -> " ;

		for(int j = 0 ; j < V[i].size(); j++){

			cout << V[i][j] << " ";
		}

		cout << endl;
	}


	DFS(1);

	return 0;

}

/*input 

10 13
1 2
1 3
1 4
2 6
6 10
10 5
9 10 
8 5 
3 8 
7 8
7 9
3 7
4 7

*/
