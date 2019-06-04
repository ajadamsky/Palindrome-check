#include <iostream>

using namespace std;

int main()
{
    int i;
    int count = 0;
    int j;
    int len;
    int flag = 1;
    char a[20];
    char temp;

    std::cout << "Please type a word" << std::endl;
    std::cin >> a;

    for(len = 0; a[len] != '\0'; ++len);

    for(i = 0, j = len-1; i < len/2; ++i, --j)
    {
        if(a[j]!= a[i])
            flag = 0;
    }

    if(flag == 1)
        std::cout << "The word is a palindrome";
    else
        std::cout << "The word is not a palindrome";

cout << endl;

    for(i = 0, j = len-1; i < len/2; ++i, --j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    std::cout << a;

    cout << endl;

    for(i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    std::cout << "The word has " << count << " letters";

    return 0;
}