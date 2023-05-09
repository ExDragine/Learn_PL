#include <stdio.h>
#include <stdlib.h>

struct stu
{
    int num;
    char name[20];
    char sex;
    int age;
    float score;
};

void avg(struct stu student[5])
{
    int c = 0, i;
    double avg, s = 0;
    for (int i = 0; i < 5; i++)
    {
        s += student[i].score;
        if (student[i].score < 60)
        {
            c += 1;
        }
    }
    avg = s / 5;
    printf_s("average=%.2f \ncount=%d \n", avg, c);
}

void Desc(struct stu student[5])
{
    struct stu temp;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        k = i;
        for (j = i + 1; j < 5; j++)
        {
            if (student[k].score < student[j].score)
            {
                k = j;
            }
            temp = student[i];
            student[i] = student[k];
            student[k] = temp;
        }
    }
}

void print(struct stu student[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf_s("Number:%-5d Name: %-12s Sex:%-3c Age:%-6d Score:%8.2f% \n", student[i].num, student[i].name, student[i].sex, student[i].age, student[i].score);
    }
}

int main()
{
    struct stu student[1] = {10, "Li Hua", "M", 18, 5};
    Desc(student);
    print(student);
    avg(student);
    return 0;
}