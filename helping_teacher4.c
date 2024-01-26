#include <stdio.h>

int main()
{
    int i, j;
    int total_marks[] = {6, 7, 5, 4, 7, 9, 3, 6, 2};
    int marks_count[11];

    for (i = 0; i < 11; i++)
    {
        marks_count[i] = 0;
    }

    for (i = 0; i < 12; i++)
    {
        marks_count[total_marks[i]]++;
        for (j = 0; j <= 10; j++)
        {
            printf("%d\n", marks_count[j]);
        }
    }

    return 0;
}