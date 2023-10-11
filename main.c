#include <stdio.h>
#include <stdlib.h>
//void yazdir(int arr[],int a)
//{
//    for(int i=0; i<a; i++)
//    {
//        printf("%d ,",arr[i]);
//    }
//}
//
//int main()
//{
//
//    printf("kac boyutlu olsun?");
//    int a;
//    scanf("%d",&a);
//    int *arr=malloc(a*sizeof(int));
//    for(int i=0; i<a; i++)
//    {
//        printf("%d. elemani gir: ",i+1);
//        scanf("%d",&arr[i]);
//    }
//    yazdir(arr,a);
//    return 0;
//}
//int main()
//{
//    char harf='a';
//    char* ptr=&harf;
//    printf("orijinal harf:                  %c\n",harf);
//    printf("harfin adresi:                  %p\n",ptr);
//    printf("pointerin icindeki veri:        %c\n",*ptr);
//    printf("pointerin adresi:               %p\n",&ptr);
//    printf("pointerin adresinin 1 fazlasi:  %p\n",&ptr+1);
//    return 0;
//}
int main()
{
    struct ListNode
    {
    int data;
    struct ListNode *next;
    }*dugum,*ilk,*son;

    ilk=(struct ListNode*) malloc(sizeof(struct ListNode));
    printf("Dugum boyutu: %d\n",sizeof(struct ListNode));
    ilk->data=1;
    ilk->next=NULL;
    printf("mevcut adres %p\n",dugum);


    dugum=(struct ListNode*) malloc(sizeof(struct ListNode));
    printf("Dugum boyutu: %d\n",sizeof(struct ListNode));
    dugum->data=6;
    dugum->next=NULL;
    ilk->next=dugum;

    printf("asdfasdfjvhdf %d\n",ilk->next->data);
    return 0;
}
