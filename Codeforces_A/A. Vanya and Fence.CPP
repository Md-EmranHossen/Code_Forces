#include <stdio.h>
int main()
{
    int n,f,height[1000],i,sum=0;
    scanf("%d%d",&n,&f);
 
    for (i = 0; i<n; i++)
    {
        scanf("%d",&height[i]);
    }
 
 
    for (i = 0; i<n; i++)
    {
 
     if (height[i]<=f)
        {
 
            sum = sum + 1;
 
        }
 
 
      else if (height[i]> f)
        {
 
            sum = sum + 2;
 
        }
    }
 
    
       printf("%d\n",sum);
       return 0;
    
}
