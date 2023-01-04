#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
bool valid(string key);
int main(int argc, string argv[])
{

    int length, pos;
    string plaintext;
    if (argc != 2) {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if (!valid(argv[1])) {
        printf("Key must have 26 unique characters.\n");
        return 1;
    }
    plaintext = get_string("plaintext: ");
    length = strlen(plaintext);
    string key = argv[1];
    char ciphertext[length + 1];//we put +1 for the null character to mark end of array
    for (int i = 0; i< length; i++)
    {
        if (islower(plaintext[i]))
        {
            pos = plaintext[i] -'a';
            ciphertext[i] = key[pos];
                if (isupper(ciphertext[i]))
                {
                    ciphertext[i] += 32;//converts capital letter to small.
                }
        }
        else if (isupper(plaintext[i]))
        {
            pos = plaintext[i] - 'A';//we get the position of the A in the corresponding cipher text by subtracting the first capital letter
            ciphertext[i] = key[pos];
                if (islower(ciphertext[i]))
                {
                    ciphertext[i] -=32;//we convert the small letter of cipher text to caps
                }
        }
        else {
            ciphertext[i] = plaintext[i];//numbers and other special characters pass as they are
        }
    }
    ciphertext[length] = '\0';//last position of the array
    printf("ciphertext: %s\n", ciphertext);
}
bool valid(string key)
{
    int length;
    length=strlen(key);
    if(length!=26)
    {
        return false;
    }
    for(int i=0;i<length; i++)
    {
        key[i]=toupper(key[i]);//converts all key letters to caps so we can compare them safely to check for any duplicates..
    }
    for(int i=0;i<length; i++)
    {
        if(!isalpha(key[i])){//function checks whether the characters are letters or not
            return false;
        }
        for (int j=i+1;j<length;j++)
        {
            if(key[j]==key[i])
            {
                return false;
            }
        }
    }
    return true;
}