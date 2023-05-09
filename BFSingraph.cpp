    #include<iostream>
    #include<vector>
    #include<stack>
    #include<queue>
    using namespace std;

    class graph
    {
    int visited[7]={0};
    int V=7;
    vector<int>adj[7];
    public:
    addedge(int u,int v)
    {
      //for undirected graph
    adj[u].push_back(v);
    adj[v].push_back(u);

    }
    printgraph()
    {
    for(int i=0;i<V;i++)
    {
        for(auto j:adj[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    }
    void BFS(int v)
    {
    //   visited[v]=1;
      queue<int>q;
      q.push(v);
      visited[q.front()]=1;
        cout<<q.front()<<" ";
      while(!q.empty())
      {
        
        
        for(auto i:adj[q.front()])
        {
          if(!visited[i])
          {
            q.push(i);
            visited[i]=1;
            cout<<i<<" ";
          }
        }
        q.pop();
      }
    }
    };
    int main()
    {

    graph s;
    s.addedge(0,1);
    s.addedge(0,3);
    s.addedge(0,2);
    s.addedge(1,4);
    s.addedge(2,3);
    s.addedge(2,5);
    s.addedge(2,6);
    s.printgraph();
    cout<<endl;
    s.BFS(0);
    // DFS(arr,0,adj);
        return 0;
    }