#include <stdio.h>

int main()
// Case-1
//  {
//      for(int i = 1; i <= 5; i++)
//  {
//      if(i == 2)
//          continue;

//     if(i == 4)
//         break;

//     printf("%d ", i);
// }
//     return 0;
// }

// //case -II
// {
//     for(int i = 1; i <= 5; i++)
// {
//     if(i == 2)
//         break;

//     if(i == 4)
//         continue;

//     printf("%d ", i);
// }
//     return 0;
// }

// //CASE -3
// {
//     for(int i = 1; i <= 5; i++)
// {
//     if(i == 2)
//         break;

//         if(i == 4)
//             continue;

//     printf("%d ", i);
// }
//     return 0;
// }

// //CASE-4 bracket vs space or Tab 

{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 2)
        {
            break;

            if (i == 4)
            {
                continue;
            }
        }
        printf("%d ", i);
    }
    return 0;
}