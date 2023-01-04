#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    printf("%i\n", score1);
    printf("%i\n", score2);
    if( score1 > score2)//condition for player 1 winning
    {
        printf("player 1 wins!\n");
    }
    else if(score1 < score2)
    {
        printf("player 2 wins!\n");// condition for player 2 winning
    }
    else
    {
        printf("It is a tie!\n");// condition for a tie both scores are same
    }
    // TODO: Print the winner
}

int compute_score(string word)
{
    int score=0;
    int n=strlen(word);
    for(int i=0;i<n;i++)
    {
        if(isupper(word[i]))
        {
            score+= POINTS[word[i] - 'A'];//ASCII value of A is 10 so if we subtract A from each capital letter we get its equivalent term in POINTS.
        }
        else
        {
            score+= POINTS[word[i] - 'a'];// likewise small a-'a' would start from 0 and b-'a' would be 1
        }//this helps us index in the points  array.
    }
    return score;
    // TODO: Compute and return score for string
}
