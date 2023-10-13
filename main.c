#include <stdio.h>
#include <stdlib.h>
void diziYazdir(int arr[],int a)
{
    for(int i=0; i<a; i++)
    {
        printf("%d ,",arr[i]);
    }
}

void pointerYazdir(int x,int* ptr)
{
    printf("x sayisinin adresi :          %p\n",ptr);
    printf("pointerin icindeki veri:      %d\n",*ptr);
}

struct ListNode
{
    int data;
    struct ListNode *next;
}*mevcut,*ilk,*son;

void structYazdir(struct ListNode listnode )
{
    printf("ilk verisinin adresi %p\n",ilk);
    printf("mevcut verisinin adresi %p\n",mevcut);
    printf("son verisinin adresi %p\n",son);
    printf("ilk:    %d\nmevcut: %d\nson:    %d\n",ilk->data,mevcut->data,son->data);
}
int main()
{
    int secim;
    printf("1-dizi\n2-pointer\n3-struct\n");
    scanf("%d",&secim);
    switch(secim)
    {
    case 1:
    {
        printf("Dizi kac boyutlu olsun?");
        int a;
        scanf("%d",&a);
        int *arr=malloc(a*sizeof(int));
        for(int i=0; i<a; i++)
        {
            printf("%d. elemani gir: ",i+1);
            scanf("%d",&arr[i]);
        }
        diziYazdir(arr,a);
    }
    break;

    case 2:
    {
        int x;
        int* ptr=&x;
        printf("x sayisi girin:");
        scanf("%d",&x);
        pointerYazdir(x,ptr);

    }
    break;

    case 3:
    {

        struct ListNode listnode;
        ilk=(struct ListNode*) malloc(sizeof(struct ListNode));
        printf("ilk girin: ");
        scanf("%d",&ilk->data);
        ilk->next=NULL;

        mevcut=(struct ListNode*) malloc(sizeof(struct ListNode));
        printf("mevcut girin: ");
        scanf("%d",&mevcut->data);
        mevcut->next=NULL;
        ilk->next=mevcut;

        son=(struct ListNode*) malloc(sizeof(struct ListNode));
        printf("son girin: ");
        scanf("%d",&son->data);
        son->next=NULL;
        mevcut->next=son;

        structYazdir(listnode);
    }

    }
    return 0;
}
