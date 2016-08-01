//
//  main.c
//  VirtualATM
//
//  Created by Yong Hwan Ho on 2016. 7. 17..
//  Copyright © 2016년 Yong Hwan Ho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int testcount = 0;
    
    int bill1=0, bill2=0, request=0;
    int big=0, small=0;
    int bigcount=0, smallcount=0;

    printf("Enter Test Count:");
    scanf("%d", &testcount);
    
    for(; testcount > 0;testcount--)
    {
//        printf("testcount = %d\n",testcount);
       
        printf("Enter 3 Number (Bill1 Bill2 Request): ");
        scanf("%d %d %d", &bill1, &bill2, &request);
        
        if ( bill1 > bill2) {
            big = bill1;
            small = bill2;
        } else {
            big = bill2;
            small = bill1;
        }

        if (request < small)
        {
            printf("Impossibe!\n");
        } else {
            int remainder = 0;
            int success = 0;
            for (int i = request/big; i>0; i--)
            {
                remainder = request - (i*big);
                if (!(remainder%small))
                {
                    bigcount = i;
                    smallcount = remainder/small;
                    
                    printf("Big coin is %d\nSmall Coin is %d\nRequest is %d\nBig coin count is %d\nSmall coin count is %d\nThank you!!", big, small, request, bigcount, smallcount);
                    success = 1;
                    break;
                    
                }
            
            }
            if (!success)
              printf("Impossible!\n");
        }
    }
//    printf("Impossible!\n");
    return 0;

}
