#include <stdio.h>

int findMax(int num[], int size);
void printAr(int myAr[], int size);
void addone(int number[], int add[], int size);
void addtwo(int number[], int pos[], int x, int sizeNum, int sizePos);
void addthree(int number[], int pos[][2], int sizeNum, int sizePos);

int main()
{
    int number[5] = {202, 50, 100, 99, 9};
    int pos[] = {1, 3};
    int x = 5;
    int n1[5] = {1, 2, 3, 4, 5};

    printAr(number, 5);

    addtwo(number, pos, x, 5, 3);
    addone(number, n1, 5);

    printAr(number, 5);

    int pos2[][2] = {
        {0, 10},
        {2, 20},
        {4, 30}
    };

    addthree(number, pos2, 5, 3);
    printAr(number, 5);

    return 0;
}

void addone(int number[], int add[], int sizeNum)
{
    for (int i = 0; i < sizeNum; i++)
    {
        number[i] += add[i];
    }
}

void addtwo(int number[], int pos[], int x, int sizeNum, int sizePos)
{
    for (int i = 0; i < sizePos; i++)
    {
        int index = pos[i];

        if (index >= 0 && index < sizeNum)
        {
            number[index] += x;
        }
    }
}

void addthree(int number[], int pos[][2], int sizeNum, int sizePos)
{
    for (int i = 0; i < sizePos; i++)
    {
        int index = pos[i][0];
        int value = pos[i][1];

        if (index >= 0 && index < sizeNum)
        {
            number[index] += value;
        }
    }
}

void printAr(int myAr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", myAr[i]);
    }
    printf("\n");
}

int findMax(int num[], int size)
{
    int maximum = num[0];

    for (int i = 0; i < size; i++)
    {
        if (num[i] > maximum)
        {
            maximum = num[i];
        }
    }

    num[3] = 1000;
    return maximum;
}
