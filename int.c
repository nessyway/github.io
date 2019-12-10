#include <stdio.h>
#include <string.h>


int main()
{
    int x = 214;
    
    if (x <= 2147483647 && x >= -2147483648)
    {
        char st[10];
        sprintf(st, "%d", x);
        printf("%s \n\n", st);
        int l = strlen(st);
        char arr[l];
        
        for (int i = 0; i < l; i++ )
        {
            arr[i] = st[l - i - 1];
          
        }
        
        
        
    }
    else
    {
        return 0;
    }
   
    
}
