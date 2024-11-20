#include <iostream>
#include <string>
#include <cctype> // For isalpha and tolower
using namespace std;

int main()
{
    bool isPalindrome = true;
    string s1 = "madam";
    int st = 0, end = s1.size() - 1;

    while (st < end)
    {
        if (!isalpha(s1[st]))
        {
            st++;
            continue;
        }
        if (!isalpha(s1[end]))
        {
            end--;
            continue;
        }
        if (tolower(s1[st]) != tolower(s1[end]))
        {
            isPalindrome = false;
            break; // Exit the loop as it's not a palindrome
        }
        st++;
        end--;
    }

    if (isPalindrome)
    {
        cout << "palindrom" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;

}
