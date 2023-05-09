#include "stdio.h"
#include <stdlib.h>

typedef struct date
{
    int year, month, day;
} DATE;

struct grade
{
    int num;
    double score;
    struct grade *next;
};

struct grade *create(int num)
{
    struct grade *head, *pf, *pb;
    int i;
    for (int i = 0; i < num; i++)
    {
        pb = (struct grade *)malloc(sizeof(struct grade));
        printf_s("input number and score");
        scanf_s("%d%lf", &pf->num, &pb->score);
        if (i == 0)
        {
            pf = head = pb;
        }
        else
        {
            pf->next = pb;
            pb->next = NULL;
            pf = pb;
        }
    }
    return head;
}

void print(struct grade *head)
{
    struct grade *p;
    p = head;
    while (p != NULL)
    {
        printf_s("%d%lf->", p->num, p->score);
        p = p->next;
    }
    printf_s("\n");
}

int main()
{
    int n;
    printf_s("Please input number");
    scanf_s("%d", &n);
    struct grade *head;
    head = create(n);
    print(head);

    enum weekday
    {
        sun,
        mon,
        tue,
        wed,
        ted,
        thu,
        fri,
        sat
    } a;

    DATE date_one;
    date_one.year = 2022;
    date_one.month = 11;
    date_one.day = 27;
    printf_s("%d-%d-%d \n", date_one.year, date_one.month, date_one.day);
    return 0;
}