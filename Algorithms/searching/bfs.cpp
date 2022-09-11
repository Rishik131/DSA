#include <bits/stdc++.h>
using namespace std;

//take input
int get_no_of_nodes()
{
    cout<<"enter no. of nodes:\n";
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
void input_edge(vector<vector<int> > &graph)
{
    cout<<"Enter no. of edges:\n";
    int a;
    cin>>a;
    int source,destination;
    for (int i = 0; i < a; i++)
    {
        cin>>source>>destination;
        graph[source].push_back(destination);
        graph[destination].push_back(source);
    }
    
}

//display graph
void display(vector<vector<int> > &graph)
{
    cout<<"Displaying graph\n";
    for(int i=0;i<graph.size();i++)
    {
        for(auto j:graph[i])
            cout<<j<<" ";
        cout<<endl;
    }
}

void bfs(vector<vector<int> > &graph, int source)
{
    
}

int main()
{
    int nodes = get_no_of_nodes();
    vector<vector<int> > graph = make_graph(nodes);
    input_edge(graph);
    display(graph);
    bfs(graph, 0);
    return 0;
}