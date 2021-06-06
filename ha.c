#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fact(int );
/*{
    if(n==0)
        return(0);
    else
        return(n*fact(n-1));
}*/

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,p[100],f[100],i,res,nf,n2f;
    
        scanf("%d",&n);
    
      for(i=1;i<=n;i++)
      {
          scanf("%d%d",&p[i],&f[i]);
      }
    nf=fact(n);
    n2f=fact(n-2);
    res=(nf/(n2f*2));
    printf("%d",n);
    
    return 0;
}
int fact(int n)
{
    if(n==0)
        return(0);
    else
        return(n*fact(n-1));
}
