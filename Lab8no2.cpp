#include <stdio.h>

int checkscore(char std[]);
int hardestQuestion(char ans[][10], int n);

char keys[10] = { 'D','B','D','C','C','D','A','E','A','D' };

int main(void)
{
    char ans[8][10] = {
        {'A','B','A','C','C','D','E','E','A','D'}, //7
        {'D','B','A','B','C','A','E','E','A','D'}, //6
        {'E','D','D','A','C','B','E','E','A','D'}, //5
        {'C','B','A','E','D','C','E','E','A','D'}, //4
        {'A','B','D','C','C','D','E','E','A','D'}, //8
        {'B','B','E','C','C','D','E','E','A','D'}, //7
        {'B','B','A','C','C','D','E','E','A','D'}, //7
        {'E','B','E','C','C','D','E','E','A','D'}  //7
    };

    printf("Hardest question is No.%d\n",
           hardestQuestion(ans, 8));

    return 0;
}

int checkscore(char std[])
{
    int score = 0;

    for (int i = 0; i < 10; ++i)
    {
        if (std[i] == keys[i])
            score++;
    }

    return score;
}

int hardestQuestion(char ans[][10], int n)
{
    int hardest   = 0;
    int minCorrect = n + 1;

    for (int j = 0; j < 10; ++j)
    {
        int count = 0;

        for (int i = 0; i < n; ++i)
        {
            if (ans[i][j] == keys[j])
                count++;
        }

        if (count < minCorrect)
        {
            minCorrect = count;
            hardest    = j;
        }
    }

    return hardest + 1;
}
