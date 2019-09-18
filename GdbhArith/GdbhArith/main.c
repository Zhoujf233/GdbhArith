//
//  main.c
//  GdbhArith
//
//  Created by JF Zhou on 2019/9/18.
//  Copyright © 2019 JF Zhou. All rights reserved.
//


#include<stdio.h>
#include<math.h>
int isprime(int i)
{
    int n = 0, prime = 1;
    for(n = 2; n <= sqrt(i); n++)
    {
        if(i%n == 0)
        {
            prime = 0;
        }
    }
    return prime;
}
void Goldbach_conjecture(int num)
{
    int a, b, p1, p2;
    for(a = 2; a <= num; a++)
    {
        p1 = 1;
        p1 = isprime(a);
        if(p1 == 1)
        {
            b = num - a;
            if(b > 0 && b <= a)
            {
                p2 = 1;
                p2 = isprime(b);
                if(p2 == 1)
                {
                    printf("%d = %d + %d\n",num,a,b);
                }
            }
        }
    }
}
int main()
{
    int even_num = 0;
    printf("请输入一个大于2的偶数:\n");
    scanf("%d",&even_num);
    Goldbach_conjecture(even_num);
    return 0;
}
