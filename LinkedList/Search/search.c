#include<stdio.h>

int main()
{
    int arr[50],search,count,num;

    printf("Enter the number of elements in array: ");
    scanf("%d",&num);

    printf("Enter %d integer(s): \n",num);

    for (count=0;count<num;count++)
    scanf("%d",&arr[count]);

    printf("Enter the number of search: ");
    scanf("%d",&search);

    for (count = 0;count<num;count++)
    {
        if(arr[count]==search)
        {
            printf("%d is the present location %d.\n",search,count+1);
            break;
        }
    }
    if(count == num)
        printf("%d is not present in array.\n",search);

    return 0;
}
