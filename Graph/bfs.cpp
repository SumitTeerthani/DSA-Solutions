void bfs(vector<int> adj[], vector<int> &ans, int s, bool visited[])
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        ans.push_back(u);
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

vector<int> bfsOfGraph(int v, vector<int> adj[])
{
    // Code here
    vector<int> ans;
    bool visited[v + 1];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            bfs(adj, ans, i, visited);
        }
    }
    return ans;
}