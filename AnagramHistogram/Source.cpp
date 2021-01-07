#include <map>
#include <iostream>
#include <string>

using namespace std;

bool isAnagram(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }

    std::map<int, int> hashmap;

    int score = 0;
    int mapscore = 0;

    for (int i = 0; i < a.length(); i++)
    {
        hashmap[(int)a[i]]++;
        hashmap[(int)b[i]]--;
    }

    for (auto a : hashmap)
    {
        if (a.second < 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string aaa = "abcdefg";
    string bbb = "abdfecc";

    bool ccc;

    ccc = isAnagram("dog", "god");              //Returns true
    ccc = isAnagram("anagram", "nagaram");      //Returns true
    ccc = isAnagram("boys", "girl");            //Returns false
    ccc = isAnagram("aa", "a");                 //Returns false

    return 0;
}