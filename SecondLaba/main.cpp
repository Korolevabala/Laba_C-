#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char s[3][3] = {
            {'a','b','c'},
            {'b','g','c'},
            {'c','g','b'}
                    };
    int row;
    int column;
    int i; // row
    int j; //column
    int finder;

    cout << "row = " << sizeof (s)/sizeof (s[0]);
    cout << "\ncolumn = " << (sizeof(s)/sizeof (s[0][0]))/(sizeof (s)/sizeof (s[0]));
    row = sizeof (s)/sizeof (s[0]);
    column = (sizeof(s)/sizeof (s[0][0]))/row;
    i = 0;
    j = 0;
    finder = 0;
    while (i < row)
    {
        while (j < column)
        {
            if (s[i][j] == s[j][i])
                finder++;
            ++j;
        }
        if (finder == row)
            printf("\n%d",i+1);
        finder = 0;
        j = 0;
        ++i;
    }
    return (0);
}
