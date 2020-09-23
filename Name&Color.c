#include <stdio.h>
void input()
{
//this variable chr and chr1 stores
//they input name and color
    char chr[20],chr1[20];
//these variable are list acceptable color choices
    char chr2[]="red";
    char chr3[]="blue";
    char chr4[]="yellow";
    char chr5[]="green";

    int i;
    i = 0;

    printf("\nEnter a name and ");
    printf("your favorite color: ");
    scanf("%s %s",&chr,&chr1);


//this while loop is allow the user input keep the program running
    while (chr1[i] == chr2[i] && chr1[i] != '\0')
        i++;
        // this check the user input is"red";
    if(chr1[i]==chr2[i])
    {
        printf("You entered %s %s.", chr,chr1);

    }
     // this check the user input is"blue";
    else if( chr1[i]==chr3[i])
    {
        printf("You entered %s %s.", chr,chr1);

    }
     // this check the user input is"yellow";
    else if( chr1[i]==chr4[i])
    {
        printf("You entered %s %s.", chr,chr1);

    }
     // this check the user input is"green";
    else if( chr1[i]==chr5[i])
    {
        printf("You entered %s %s.", chr,chr1);

    }
    else
    {
//this else condition allow the function input() run recursive
        printf("try again");
        input();
    }

}
int main()
{
input();
    return 0;


}
