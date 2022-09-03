#include <bits/stdc++.h>
using namespace std;

//take input
int get_no_of_nodes()
{
    cout<<"enter no. of nodes";
    int a;
    cin>>a;
    return a;
}

//graph generator
vector<vector<int> > make_graph(int nodes)
{
    vector<vector<int> > graph(nodes);
    return (graph);
}

//adding edges
void add_edge(vector<vector<int> > &graph)
{
    cout<<"Enter no. of edges";
    int a;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        int source,destination;
        cin>>source>>destination;
        
    }
    
}

int main()
{
    int nodes = get_no_of_nodes();
    vector<vector<int> > graph = make_graph(nodes);
    add_edge(graph);
    return 0;
}