#include<bits/stdc++.h>
using namespace std;

vector<int> V[11];

bool marked[11] = {false};

void BFS(int v)
{
    queue<int> q;

    q.push(v);

    while(!q.empty()){

        v = q.front();
        q.pop();

        if(!marked[v]){

            cout << v << " ";
        }

        marked[v] = true;
        

        for(int i = 0; i < V[v].size(); i++)
        {
            int node = V[v][i];

            if(!marked[node])
            {
                if(!marked[node])
                {
                    cout << node << " ";
                }
                marked[node] = true;
                q.push(node);
            }
        } 
    }
}

int main(){

    int n, e;

    cin >> n >> e;

    for(int i = 0; i < e; i++){
        int nodeA, nodeB;
        cin >> nodeA >> nodeB;

        V[nodeA].push_back(nodeB);
        //V[nodeB].push_back(nodeA); // if it is a non directed graph

    }

    for(int i =1; i<= n; i++){
        cout << i << "->";
        for(int j = 0; j < V[i].size(); j++){
            cout << V[i][j] << " ";
        }

        cout << endl;
    }

    BFS(1);

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
