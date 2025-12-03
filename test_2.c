#include<stdio.h>
int main()
{
    int countA=0;//计数质数
    for(int i=2;i<=100;i++)//获取2-100
    {
        int count=0;//这个数可以被几个数整除
        for(int j=2;j<i;j++)//从2-100中从小到大找除数
        {
            
            if(i%j==0)//找到一个数除1外能被整除的，代表已经不是一个质数了
            {
            count++;
            break;//找到了就不往后面找了
            }
        }
        if(count==0)//没找到除数
        countA++;//计数质数
    }
    printf("有%d个质数",countA);
    
}