void dfs(vector<int> adj[], int s, bool visited[], vector<int> &ans)
{

    visited[s] = true;
    ans.push_back(s);
    for (int u : adj[s])
    {
        if (visited[u] == false)
            dfs(adj, u, visited, ans);
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    // Code here

    // Code here
    vector<int> ans;

    bool visited[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < V; i++)
    {
        if (visited[i] == false)
            dfs(adj, i, visited, ans);
    }
    return ans;
}