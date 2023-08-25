#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void generate_strings(int N, char last_char, string current_string, vector<string> &all_strings)
{
    if (N == 0)
    {
        all_strings.push_back(current_string);
        return;
    }

    for (char c :
            {'a', 'b', 'c'
            })
    {
        if (c != last_char)
        {
            generate_strings(N - 1, c, current_string + c, all_strings);
        }
    }
}

int main()
{
    int N;
    cin >> N;

    vector<string> all_strings;
    generate_strings(N, '\0', "", all_strings);

    sort(all_strings.begin(), all_strings.end());

    for (const string &s : all_strings)
    {
        cout << s << "\n";
    }

    return 0;
}
