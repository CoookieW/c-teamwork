#include <stdio.h>
#include <stdlib.h>

void custommenu()
{
    int a,b;   //所需变量

    printf("     ");
    printf("1 2 ");//选择点单/购物袋
    scanf("%d",&a);

    while(a!=1 && b!=2)
    {
        printf("请重新输入");
        scanf("%d",&a);
    }
    if(a==1)
    {
        //进入点单
    }
    else
    {
        //shoppingbag
        printf("是否下单？");
        printf("1,是 2,返回点单");
        scanf("%d",&a);\
        while(a!=1 && b!=2)
        {
            printf("请重新输入");
            scanf("%d",&a);
        }
        if(a==1)
        {
            printf("下单成功！");
            printf("您的取单号是%d",  );//生成订单号累加1
        }
        if(a==2)
        {
            //重新进入点单
        }

    }
}
