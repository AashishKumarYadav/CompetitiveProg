#include <iostream>
#include <vector>
using namespace std;

string reverseStringWordWise(string input)
{
    vector<string> words;
    int n = input.size();
    string word;
    // Extract each word
    for (int i = 0; i < n; i++)
    {
        if (input[i] == ' ')
        {
            words.push_back(word);
            word = "";
        }
        else
        {
            word.push_back(input[i]);
        }
    }
    words.push_back(word);
    
    // Reverse the words in the sentence
    int i = 0, j = words.size() - 1;
    while (i < j)
    {
        swap(words[i], words[j]);
        i++;
        j--;
    }

    // Append back the words
    string ans;
    for (int i = 0; i < words.size(); i++)
    {
        ans.append(words[i]);
        ans.push_back(' ');
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}