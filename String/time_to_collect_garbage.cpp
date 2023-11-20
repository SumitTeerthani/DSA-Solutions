int garbageCollection(vector<string> &garbage, vector<int> &travel)
{

    int ans = 0, k;
    int glength = garbage.size(), tlength = travel.size();
    bool temp = false;
    // for G
    for (int i = glength - 1; i >= 0; i--)
    {
        if (garbage[i].find("G") != string::npos)
        {
            k = i;
            temp = true;
            break;
        }
    }

    if (temp == true)
    {
        for (int i = 0; i < k; i++)
        {
            ans += travel[i];
        }
        for (int i = 0; i <= k; i++)
        {
            string s = garbage[i];
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == 'G')
                    ans++;
            }
        }
    }

    temp = false;
    // For M
    for (int i = glength - 1; i >= 0; i--)
    {
        if (garbage[i].find("M") != string::npos)
        {
            k = i;
            temp = true;
            break;
        }
    }

    if (temp == true)
    {
        for (int i = 0; i < k; i++)
        {
            ans += travel[i];
        }
        for (int i = 0; i <= k; i++)
        {
            string s = garbage[i];
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == 'M')
                    ans++;
            }
        }
    }
    temp = false;

    // For p
    for (int i = glength - 1; i >= 0; i--)
    {
        if (garbage[i].find("P") != string::npos)
        {
            k = i;
            temp = true;
            break;
        }
    }

    if (temp == true)
    {
        for (int i = 0; i < k; i++)
        {
            ans += travel[i];
        }
        for (int i = 0; i <= k; i++)
        {
            string s = garbage[i];
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == 'P')
                    ans++;
            }
        }
    }

    return ans;
}