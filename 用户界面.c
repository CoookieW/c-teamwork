#include <stdio.h>
#include <stdlib.h>

void custommenu()
{
    int a,b;   //�������

    printf("     ");
    printf("1 2 ");//ѡ��㵥/�����
    scanf("%d",&a);

    while(a!=1 && b!=2)
    {
        printf("����������");
        scanf("%d",&a);
    }
    if(a==1)
    {
        //����㵥
    }
    else
    {
        //shoppingbag
        printf("�Ƿ��µ���");
        printf("1,�� 2,���ص㵥");
        scanf("%d",&a);\
        while(a!=1 && b!=2)
        {
            printf("����������");
            scanf("%d",&a);
        }
        if(a==1)
        {
            printf("�µ��ɹ���");
            printf("����ȡ������%d",  );//���ɶ������ۼ�1
        }
        if(a==2)
        {
            //���½���㵥
        }

    }
}
