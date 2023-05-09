#include <stdio.h>

struct stu
{
    int number;
    char name[20];
    char sex[3];
    struct date
    {
        int year, month, day;
    } birthday;
    float score;
};

int main()
{
    struct stu student1 = {007, "Board", "M", 1999, 02, 14, 89.11};
    printf_s("%d", student1.birthday.year);
    return 0;
}