//

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int count();
struct node
{
    int data;
    struct node *address;
};
struct node *start = NULL, *temp, *new1, *next, *prev, *coun, *arr[500];
void create()
{
    char choice;
    int n;
    printf("ENTER A ELEMENT: ");
    scanf("%d", &n);
    start = (struct node *)malloc(sizeof(struct node));
    start->data = n;
    start->address = NULL;
    temp = start;
    printf("DO YOU WANT TO CONTINUE(Y|N): ");
    choice = getche();
    printf("\n");
    while (choice == 'Y' || choice == 'y')
    {
        printf("ENTER AN ELEMENT: ");
        scanf("%d", &n);
        new1 = (struct node *)malloc(sizeof(struct node));
        new1->data = n;
        new1->address = NULL;
        temp->address = new1;
        temp = temp->address;
        printf("DO YOU WANT TO CONTINUE: (Y|N): ");
        choice = getche();
        printf("\n");
    }
}
void display()
{
    if (start == NULL)
    {
        printf("LINKED LIST IS NOT FORMED!!!!!");
    }
    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->address;
        }
    }
}
void insert_first()
{
    int n;
    if (start == NULL)
    {
        printf("LIST IS NOT FOUND!!");
    }
    else
    {
        printf("ENTER A ELEMENT: ");
        scanf("%d", &n);
        new1 = (struct node *)malloc(sizeof(struct node));
        new1->data = n;
        new1->address = NULL;
        new1->address = start;
        start = new1;
    }
}
void insert_last()
{
    int n;
    if (start == NULL)
    {
        printf("THE LIST IS NOT FOUND!!!");
    }
    else
    {
        printf("\nENTER A ELEMENT: ");
        scanf("%d", &n);
        new1 = (struct node *)malloc(sizeof(struct node));
        new1->data = n;
        new1->address = NULL;
        temp = start;
        while (temp->address != NULL)
        {
            temp = temp->address;
        }
        temp->address = new1;
    }
}
void insert_middle()
{
    int n, i, pos;
    i = 1;
    if (start == NULL)
    {
        printf("\nLIST IS NOT FOUND!!");
    }
    else
    {
        printf("ENTER ELEMENTS FOR LIST: ");
        scanf("%d", &n);
        new1 = (struct node *)malloc(sizeof(struct node));
        new1->data = n;
        new1->address = NULL;
        printf("ENTER A POSITION: ");
        scanf("%d", &pos);
        next = start;
        int no_elements = count();
        if (pos <= no_elements)
        {
            while (i < pos)
            {
                prev = next;
                next = next->address;
                i++;
            }
            prev->address = new1;
            new1->address = next;
        }
        else
        {
            printf("\nNOT VALID POSITION!!!!");
        }
    }
}
int count()
{
    int i = 1;
    coun = start;
    while (coun != NULL)
    {
        i++;
        coun = coun->address;
    }
    return i;
}
void delete_first()
{
    if (start == NULL)
    {
        printf("\nLIST IS NOT FOUND");
    }
    else
    {
        temp = start;
        start = start->address;
        printf("THE DELETED ELEMENT IS: %d", temp->data);
        free(temp);
    }
}
void delete_last()
{
    if (start == NULL)
    {
        printf("\nTHE LIST IS NOT FOUND");
    }
    else
    {
        temp = start;
        while (temp->address != NULL)
        {
            prev = temp;
            temp = temp->address;
        }
        prev->address = NULL;
        printf("\nTHE DELETED ELEMENT IS: %d", temp->data);
        free(temp);
    }
}
void delete_middle()
{
    if (start == NULL)
    {
        printf("\nLIST IS NOT FOUND");
    }
    else
    {
        int co = count();
        int pos;
        printf("\nENTER THE POSITION YOU WANT TO DELTE: ");
        scanf("%d", &pos);
        if (co >= pos)
        {
            int i = 1;
            temp = start;
            while (pos > i)
            {
                prev = temp;
                temp = temp->address;
                i++;
            }
            next = temp->address;
            prev->address = next;
            printf("\nTHE DELETED ELEMENT IS: %d", temp->data);
            free(temp);
        }
        else
        {
            printf("\nTHE ENTERED POSITION IS INVALID!");
        }
    }
}
void sear()
{
    int s, n = 0;
    if (start == NULL)
    {
        printf("LIST NOT EXSIST");
    }
    else
    {
        printf("ENTER THE VALUE OF N: ");
        scanf("%d", &s);
        int index = 1;
        temp = start;
        while (temp != NULL)
        {
            if (temp->data == s)
            {
                n++;
                break;
            }
            else
            {
                index++;
            }
            temp = temp->address;
        }
        if (n == 1)
        {
            printf("ELEMENT IS PRESENT AT POSITION %d\n ", index);
        }
        else
        {
            printf("ELEMENT IS NOT PRESENT\n");
        }
    }
}
void count_node()
{
    temp = start;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->address;
    }
    printf("\nTHE VALUE OF NUMBER OF NODES IS: %d\n", count);
}
void reverse()
{
    int i = 0;
    temp = start;
    while (temp != NULL)
    {
        arr[i] = temp;
        i++;
        temp = temp->address;
    }
    i--;
    printf("\nTHE REVERSE LIST IS: ");
    while (i >= 0)
    {
        printf("%d\t", arr[i]->data);
        i--;
    }
}
void sort()
{
    if (start == NULL)
        printf("\nLIST NOT FOUND!!\n");
    else
    {
        prev = start;
        temp = start;
        while (prev != NULL)
        {
            next = prev->address;
            while (next != NULL)
            {
                if (next->data < prev->data)
                {
                    int temp = next->data;
                    next->data = prev->data;
                    prev->data = temp;
                }
                next = next->address;
            }
            prev = prev->address;
        }
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->address;
        }
    }
}
int main()
{
    while (1)
    {
        int a;
        printf("\n\n1.CREATE\n2.DISPLAY\n3.INSERT AT FIRST\n4.INSERT AT MIDDLE\n5.INSERT AT END\n6.DELETE FROM FIRST\n");
        printf("7.DELETE FROM MIDDLE\n8.DELETE FROM LAST\n9.SEARCH\n10.COUNT\n11.EXIT\n12.REVERSE\n13.SORT");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &a);
        if (a == 11)
        {
            break;
        }
        else if (a == 9)
        {
            sear();
        }
        else if (a == 12)
        {
            reverse();
        }
        else if (a == 1)
        {
            create();
        }
        else if (a == 2)
        {
            display();
        }
        else if (a == 3)
        {
            insert_first();
        }
        else if (a == 4)
        {
            insert_middle();
        }
        else if (a == 13)
        {
            sort();
        }
        else if (a == 5)
        {
            insert_last();
        }
        else if (a == 6)
        {
            delete_first();
        }
        else if (a == 7)
        {
            delete_middle();
        }
        else if (a == 8)
        {
            delete_last();
        }
        else if (a == 10)
        {
            count_node();
        }
    }
    return 0;
}