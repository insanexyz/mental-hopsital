#include <stdio.h>

int main(void)
{
    char plain_msg[100] = {0};
    char encrypted_msg[100] = {0};
    char c = '?';
    char terminating_char = 0;
    char i = 0;
    short shift_amt;
    char msg_len;

    printf("Enter message to be encrypted: ");
    while (1)
    {
        c = getchar();

        if (c == '.' || c == '?' || c == '!')
        {
            plain_msg[i] = c;
            i++;
            continue;
        }
            
        if (c == '\n')
        {
            msg_len = i-1;
            break;
        }

        plain_msg[i] = c;
        i++;
    }
    
    printf("Enter shift amount (1-25): ");
    scanf("%hd", &shift_amt);
    
    for (int i=0; i<msg_len+1; i++)
    {
        
        if ('a' <= plain_msg[i] && plain_msg[i] <= 'z')
        {
            if (plain_msg[i] + shift_amt > 'z')
            {
                char tmp = shift_amt - ('z' - plain_msg[i]);
                encrypted_msg[i] = 'a' + tmp;
            }
            else
                encrypted_msg[i] = plain_msg[i] + shift_amt;
        }

        else if ('A' <= plain_msg[i] && plain_msg[i] <= 'Z')
        {
            if (plain_msg[i] + shift_amt > 'Z')
            {
                char tmp = shift_amt - ('Z' - plain_msg[i]);
                printf("%d\n", tmp);
                encrypted_msg[i] = 'A' + tmp;
            }
            else
                encrypted_msg[i] = plain_msg[i] + shift_amt;
        }
        
        else
        {
            encrypted_msg[i] = plain_msg[i];
        }
    }


    for (int i=0; i<msg_len+1; i++)
        printf("%c", encrypted_msg[i]);
    
    printf("\n");
}
