#include <stdio.h>
#include <stdlib.h>

void shopkeepermenu()
{
    int password,choice;//变量

    printf("请输入密码");
    scanf("%d",&password);
    if(password==55555)
    {
        printf("1.修改菜单");
        printf("2.查看订单");
        printf("请输入选项");
        scanf("%d",choice);
        while(a!=1 && b!=2)
        {
            printf("请重新输入");
            scanf("%d",&a);
        }
    }
    else
    {
        printf("！！密码错误！！");
    }
}
