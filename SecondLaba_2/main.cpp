#include <iostream>
#define MINIMUM -2147483648
using namespace std;
void my_max(int (&matrix)[4][6])
{
    int row;
    int column;
    int i;
    int j;
    int max;
    int position_x;
    int position_y;

    row = sizeof(matrix)/sizeof(matrix[0]);
    column = (sizeof(matrix)/sizeof(matrix[0][0]))/row;
    i = 0;
    j = 0;
    max = MINIMUM;
    while (i < row)
    {
        while (j < column)
        {
            if (max < matrix[i][j])
            {
                max = matrix[i][j];
                position_x = i;
                position_y = j;
            }
            j++;
        }
        j = 0;
        ++i;
    }
    matrix[position_x][position_y] = matrix[0][0];
    matrix[0][0] = max;
}

void output(int (&matrix)[4][6])
{
    int row;
    int column;
    int i;
    int j;

    row = sizeof(matrix)/sizeof(matrix[0]);
    column = (sizeof(matrix)/sizeof(matrix[0][0]))/row;
    i = 0;
    j = 0;
    while (i < row)
    {
        while (j < column)
        {
            cout<<"mass["<<i<<']'<<'['<<j<<"] = " << matrix[i][j]<<"\n";
            j++;
        }
        j = 0;
        ++i;
    }
}

int main()
{
    int row;
    int column;
    int matrix[4][6] =
    {
        {1, 2, 3, 4, 5, 6},
        {-1, -2, -3, -4, -5, -6},
        {9, 10, 11, 12, 999, 13},
        {1, 1, 1, 1, 1, 1}
     };
    row = sizeof(matrix)/sizeof(matrix[0]);
    column = (sizeof(matrix)/sizeof(matrix[0][0]))/row;
    cout <<"row = "<<row<<"\n";
    cout <<"column = "<<column<<"\n";
    my_max(matrix);
    output(matrix);

    return (0);
}
