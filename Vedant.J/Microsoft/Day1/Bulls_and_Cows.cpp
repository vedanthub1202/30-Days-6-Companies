class Solution {
public:
    string getHint(string secret, string guess) {
        map<int,int> ch;
        map<int,int> fre;
        int bulls=0, cows=0;

        for(int i=0; i<secret.size(); i++)
        {
            if(secret[i] != guess[i])
            {
                ch[secret[i] - '0']++;
                fre[guess[i] - '0']++;
            }
            else
            {
                bulls++;
            }
        }

        for(int i=0;i<=9;i++)
        {
            cows+=min(ch[i],fre[i]);
        }
        
        string result = to_string(bulls) + "A" + to_string(cows) + "B";
        return result;
    }
};
