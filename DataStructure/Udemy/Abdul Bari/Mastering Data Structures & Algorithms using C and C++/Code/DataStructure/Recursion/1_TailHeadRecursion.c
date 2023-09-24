//
//  1_TailHeadRecursion.c
//  DataStructure
//
//  Created by SUBHASISH BISWAS on 24/09/23.
//

#include <stdio.h>

//Head Recursion
void HeadRecursion(int n)
{
    if(n>0)
    {
        HeadRecursion(n-1);
        printf("%d ",n);
    }
}

//Tail Recursion
void TailRecursion(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        TailRecursion(n-1);
    }
}

int main()
{
    int x=3;
    //HeadRecursion(x);
    TailRecursion(x);
}
