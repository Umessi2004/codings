#include <stdio.h>
struct student
{
    char name[60], branch[5];
    int roll;
    float cgpa;
};
struct student s[3], h;
//void input(struct student a);
struct student best_stud(struct student s[]);
int main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("enter name:");
        scanf("%s", s[i].name);
        printf("enter branch:");
        scanf("%s", s[i].branch);
        printf("enter roll:");
        scanf("%d", &s[i].roll);
        printf("enter cgpa:");
        scanf("%f", &s[i].cgpa);
        printf("\n");
    }
    h = best_stud(s);
    printf("name: %s\n", h.name);
    printf("branch: %s\n", h.branch);
    printf("roll no: %d\n", h.roll);
    printf("cgpa: %.2f\n", h.cgpa);
    return 0;
}
/*void input(struct student a)
{
    printf("enter name:");
    scanf("%s", a.name);
    printf("enter branch:");
    scanf("%s", a.branch);
    printf("enter roll:");
    scanf("%d", &a.roll);
    printf("enter cgpa:");
    scanf("%f", &a.cgpa);
}*/
struct student best_stud(struct student s[])
{
    float max = s[0].cgpa;
    int x;
    for (int i = 0; i < 3; i++)
    {
        if (s[i].cgpa > max)
        {
            max = s[i].cgpa;
            x = i;
        }
    }
    return s[x];
}