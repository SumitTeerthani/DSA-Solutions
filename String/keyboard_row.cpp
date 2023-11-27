class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        vector<string> ans;
        unordered_set<char> s1;
        unordered_set<char> s2;
        unordered_set<char> s3;
        s1.insert('q');
        s1.insert('w');
        s1.insert('e');
        s1.insert('r');
        s1.insert('t');
        s1.insert('y');
        s1.insert('u');
        s1.insert('i');
        s1.insert('o');
        s1.insert('p');
        s1.insert('Q');
        s1.insert('W');
        s1.insert('E');
        s1.insert('R');
        s1.insert('T');
        s1.insert('Y');
        s1.insert('U');
        s1.insert('I');
        s1.insert('O');
        s1.insert('P');
        s2.insert('a');
        s2.insert('s');
        s2.insert('d');
        s2.insert('f');
        s2.insert('g');
        s2.insert('h');
        s2.insert('j');
        s2.insert('k');
        s2.insert('l');
        s2.insert('A');
        s2.insert('S');
        s2.insert('D');
        s2.insert('F');
        s2.insert('G');
        s2.insert('H');
        s2.insert('J');
        s2.insert('K');
        s2.insert('L');
        s3.insert('z');
        s3.insert('x');
        s3.insert('c');
        s3.insert('v');
        s3.insert('b');
        s3.insert('n');
        s3.insert('m');
        s3.insert('Z');
        s3.insert('X');
        s3.insert('C');
        s3.insert('V');
        s3.insert('B');
        s3.insert('N');
        s3.insert('M');

        for (int i = 0; i < words.size(); i++)
        {
            bool isthere = true;
            char c = words[i][0];
            if (s1.find(c) != s1.end())
            {
                for (int j = 0; j < words[i].length(); j++)
                {
                    char ch = words[i][j];
                    if (s1.find(ch) == s1.end())
                        isthere = false;
                }
            }
            else if (s2.find(c) != s2.end())
            {
                for (int j = 0; j < words[i].length(); j++)
                {
                    char ch = words[i][j];
                    if (s2.find(ch) == s2.end())
                        isthere = false;
                }
            }
            // else (s3.find(words[i][0])!=s3.end())
            else
            {
                for (int j = 0; j < words[i].length(); j++)
                {
                    char ch = words[i][j];
                    if (s3.find(ch) == s3.end())
                        isthere = false;
                }
            }
            if (isthere)
            {
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};