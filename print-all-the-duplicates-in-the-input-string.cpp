
// void printD(string str)
// {
//     unordered_map<char, int> count;
//     for (int i = 0; i < str.length(); i++) {
//         count[str[i]]++;
//     }
//     for (auto it : count) {
//         if (it.second > 1)
//             cout << it.first << ", count = " << it.second<< "\n";
//     }
// }
void printD(string str)
{
    int len = str.length();

    
    sort(str.begin(), str.end());


    for (int i = 0; i < len; i++) {
        int count = 1;

        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        if (count > 1) {
            cout << str[i] << ", count = " << count << endl;
        }
    }
}
int main()
{
    string str = "test string";
    printD(str);
    return 0;
}


// Given a string S, the task is to print all the duplicate characters with their occurrences in the given string.

// Example:

// Input: S = “geeksforgeeks”
// Output:

// e, count = 4
// g, count = 2
// k, count = 2
// s, count = 2

// Explanation: e,g,k,and s are characters which are occured in string in more than one times.
