#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,j;
    /*
       Output : 
        *********
       *********
      *********
     *********
    *********
   *********
  *********
 *********
*********
    */
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
          cout<<" ";
        for(j=1;j<=n;j++)
          cout<<"*";
        cout<<endl;
    }
    /*
                    OUTPUT:
        *********
       *       *
      *       *
     *       *
    *       *
   *       *
  *       *
 *       *
*********
    */
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
          cout<<" ";
        if(i==1 || i==n)
        {
            for(j=1;j<=n;j++)
              cout<<"*";

        }
        else{
            for(j=1;j<=n;j++)
        {
            if(j==1 || j==n)
             cout<<"*";
            else 
              cout<<" ";
        }
        
        }
        cout<<endl;
    }
    /*
        Output: 
        1 
       1 2 
      1 2 3 
     1 2 3 4 
    1 2 3 4 5 
   1 2 3 4 5 6 
  1 2 3 4 5 6 7 
 1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 9
    */
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
          cout<<" ";
        for(j=1;j<=i;j++)
          cout<<j<<" ";
        cout<<endl;
    }
    
    /*
        Palindrome Pattern
                    1
                   212
                  32123
                 4321234
                543212345
        
    */
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n-i;j++)
         cout<<" ";
        int k=i;
        for(;j<=n;j++)
         cout<<k--;
        k=2;
        for(;j<=n+i-1;j++)
          cout<<k++;
        cout<<endl;
   }
                /*
                    Output:
                    
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
   */
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n-i;j++)
         cout<<" ";
        for(j=1;j<=(2*i)-1;j++)
         cout<<"*";
         cout<<endl;
   }

   
   for(i=n;i>=1;i--)
   {
       for(j=1;j<=n-i;j++)
         cout<<" ";
        for(j=1;j<=(2*i)-1;j++)
         cout<<"*";
         cout<<endl;
   }
      /*
                    OUTPUT:
                    *   *  
                   * * * * 
                  *   *   *

      */

   for(i=1;i<=3;i++)
   {
       for(j=1;j<=n;j++)
       {
           if(((i+j)%4==0) || (i==2 && j%4==0))
             cout<<"*";
            else 
             cout<<" ";
       }
       cout<<endl;
   }

   /*
        output:
                                    
        *
       * *
      *   *
     *     *
    *       *
   *         *
  *           *
 *             *
*               *
*               *
 *             *
  *           *
   *         *
    *       *
     *     *
      *   *
       * *
        *
   */
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n-i;j++)
         cout<<" ";
        for(j=1;j<=(2*i)-1;j++)
        {
            if(j==1 || j==(2*i-1))
                cout<<"*";
            else
             cout<<" ";
        }
         
         cout<<endl;
   }

   
   for(i=n;i>=1;i--)
   {
       for(j=1;j<=n-i;j++)
         cout<<" ";
        for(j=1;j<=(2*i)-1;j++)
        {
            if(j==1 || j==2*i-1)
                cout<<"*";
            else 
              cout<<" ";    
        }
         
         cout<<endl;
   }
   /*
                    OUTPUT:
*****************
******** ********
*******   *******
******     ******
*****       *****
****         ****
***           ***
**             **
*               *
*               *
**             **
***           ***
****         ****
*****       *****
******     ******
*******   *******
******** ********
*****************
   */
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n-i;j++)
         cout<<"*";
        for(j=1;j<=(2*i)-1;j++)
        {
            if(j==1 || j==(2*i-1))
                cout<<"*";
            else
             cout<<" ";
        }
        for(j=1;j<=n-i;j++)
         cout<<"*";
        
         cout<<endl;
   }

   
   for(i=n;i>=1;i--)
   {
       for(j=1;j<=n-i;j++)
         cout<<"*";
        for(j=1;j<=(2*i)-1;j++)
        {
            if(j==1 || j==2*i-1)
                cout<<"*";
            else 
              cout<<" ";    
        }
        for(j=1;j<=n-i;j++)
         cout<<"*";
       
         cout<<endl;
   }
   /*
                OUTPUT:
*                *
**              **
***            ***
****          ****
*****        *****
******      ******
*******    *******
********  ********
******************
******************
********  ********
*******    *******
******      ******
*****        *****
****          ****
***            ***
**              **
*                *
   */
for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        cout<<"*";
          
        for(j=1;j<=2*n-2*i;j++)
          cout<<" ";
        for(j=1;j<=i;j++)
        cout<<"*";
         cout<<endl;
    }
    
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        cout<<"*";
        
        for(j=1;j<=2*n-2*i;j++)
          cout<<" ";
        for(j=1;j<=i;j++)
        cout<<"*";
        
        cout<<endl;
    }
  /*
                            output:BUTTERFLY PATTERN
*                *
**              **
* *            * *
*  *          *  *
*   *        *   *
*    *      *    *
*     *    *     *
*      *  *      *
*       **       *
*       **       *
*      *  *      *
*     *    *     *
*    *      *    *
*   *        *   *
*  *          *  *
* *            * *
**              **
*                *
  */
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i)
                cout<<"*";
            else
              cout<<" ";
        }
          
        for(j=1;j<=2*n-2*i;j++)
          cout<<" ";
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i)
             cout<<"*";
            else
             cout<<" ";
        }
        cout<<endl;
    }
    
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i)
                cout<<"*";
            else
              cout<<" ";
        }
        
        for(j=1;j<=2*n-2*i;j++)
          cout<<" ";
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i)
                cout<<"*";
            else
              cout<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}