#include <stdio.h>
const int n;
int i, fail_count = 0, Aplus = 0, A = 0, B = 0, C = 0;
int marks_count[101]; // the marks can range from 0 to 100, so this ara has a total of 101 items.

int main()
{
    printf("Please enter the number of students: ");
    scanf("%d", &n);
    int total_marks[n];
    printf("-----------------\n");

    for (i = 0; i < n; i++) // getting the input.
    {
        printf("Marks of roll no. %d = ", i + 1);
        scanf("%d", &total_marks[i]);
        if (total_marks[i] > 100 || total_marks[i] < 0)
        {
            printf("Invalid marks. Please enter the marks again and carefully. \n");
            i--;
        }
    }
    for (i = 0; i < 101; i++) // initialization.
    {
        marks_count[i] = 0; // at the beginning we know nothing. So, we put 0 in all the cells of marks_count.
    }
    for (i = 0; i < n; i++) // counting the marks.
    {
        marks_count[total_marks[i]]++; // when i = 0, then total_marks[i] is total_marks[0], or '98'. we need to increase the value of that cell of marks_count (marks_count[98]) by one.
    }
    for (i = 0; i <= 100; i++) // formatting the output.
    {
        if (marks_count[i] > 0)
        {
            printf("Marks: %d\tCount: %d\n", i, marks_count[i]); // printed and formatted the output to exclude those marks who aren non existence.
        }
    }

    printf("-----------------\nRolls of failed students:");
    for (i = 0; i < n; i++) // failed students.
    {
        if (total_marks[i] < 40)
        {
            printf("%d,", i + 1);
            fail_count++;
        }
    }

    printf("\nRolls of students with grade A+:");
    for (i = 0; i < n; i++) // A+ students.
    {
        if (total_marks[i] >= 80)
        {
            printf("%d,", i + 1);
            Aplus++;
        }
    }

    printf("\nRolls of students with grade A:");
    for (i = 0; i < n; i++) // A students.
    {
        if (total_marks[i] < 80 && total_marks[i] >= 70)
        {
            printf("%d,", i + 1);
            A++;
        }
    }

    printf("\nRolls of students with grade B:");
    for (i = 0; i < n; i++) // B students.
    {
        if (total_marks[i] < 70 && total_marks[i] >= 60)
        {
            printf("%d,", i + 1);
            B++;
        }
    }

    printf("\nRolls of students with grade C:");
    for (i = 0; i < n; i++) // C students.
    {
        if (total_marks[i] < 60 && total_marks[i] >= 40)
        {
            printf("%d,", i + 1);
            C++;
        }
    }

    printf("\n-----------------\n%d students have skill issues.\n", fail_count);
    printf("%d students have gotten an A+.\n", Aplus);
    printf("%d students have gotten an A.\n", A);
    printf("%d students have gotten an B.\n", B);
    printf("%d students have gotten an C.\n", C);

    int max_num = total_marks[0], min_num = total_marks[0];
    int max_count = 0, min_count = 0;

    for (i = 0; i < n; i++) // finding out the highest marks
    {
        if (total_marks[i] > max_num)
        {
            max_num = total_marks[i];
        }
    }
    for (i = 0; i < n; i++) // finding out the lowest marks
    {
        if (total_marks[i] < min_num)
        {
            min_num = total_marks[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (total_marks[i] == max_num)
        {
            max_count++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (total_marks[i] == min_num)
        {
            min_count++;
        }
    }

    printf("-----------------\nThe highest marks is: %d\t %d students got the highest marks.\n", max_num, max_count);
    printf("The lowest marks is: %d\t %d students got the lowest marks.\n-----------------\n", min_num, min_count);

    printf("Rolls of Students who have gotten the highest marks: ");
    for (i = 0; i < n; i++) // Students who got the highest
    {
        if (total_marks[i] == max_num)
        {
            printf("%d,", i + 1);
        }
    }
    printf("\nRolls of Students who have gotten the lowest marks: ");
    for (i = 0; i < n; i++) // students who got the lowest.
    {
        if (total_marks[i] == min_num)
        {
            printf("%d,", i + 1);
        }
    }
    printf("\n-----------------\n");

    return 0;
}
