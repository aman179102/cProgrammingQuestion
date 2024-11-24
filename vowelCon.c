//There are several ways to check whether it is vowel or consonant

// YOu can check that it is a vowel or consonant by asscci value
//  a=97,65,e=101,69,i=105,73,o=111,79,u=117,85
#include <stdio.h>

int main()
{
    char input;
    printf("Enter a character\n");
    scanf("%c",&input);
    if (input == 97||65||69||73||79||85||101||105||111||117 )
    {
        printf("Your entered character is a vowel\n");
    }
    else {
        printf("Your entered character is a consonant\n");
    }
    return 0;
}


//another way is just simply check character
#include <stdio.h>

int main()
{
    char input;
    printf("Enter a character\n");
    scanf("%c",&input);
    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u')
    {
        printf("Your entered character is a vowel\n");
    }
    else {
        printf("Your entered character is a consonant\n");
    }
    return 0;
}


