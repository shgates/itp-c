#include <stdio.h>

int calculateScore(int p1, int p2, int p3)
{
    if (p1 == p2 || p1 == p3 || (p1 < p2 && p1 > p3) || (p1 < p3 && p1 > p2))
    {
        return p1;
    }

    else if (p2 == p3 || (p2 < p1 && p2 > p3) || (p2 < p3 && p2 > p1))
    {
        return p2;
    }
    else if ((p3 < p1 && p3 > p2) || (p3 < p2 && p3 > p1))
    {
        return p3;
    }
    else
    {
        return p3;
    }
}

int getFinalScore(int participantScores[])
{

    int d1[] = {participantScores[0], participantScores[1], participantScores[2]};
    int d2[] = {participantScores[3], participantScores[4], participantScores[5]};
    int d3[] = {participantScores[6], participantScores[7], participantScores[8]};

    int firstDayScore = calculateScore(d1[0], d1[1], d1[2]);
    int secondDayScore = calculateScore(d2[0], d2[1], d2[2]);
    int thirdDayScore = calculateScore(d3[0], d3[1], d3[2]);

    int finalScore = calculateScore(firstDayScore, secondDayScore, thirdDayScore);
    return finalScore;
}

int main()
{

    int arrayA[9], arrayB[9];
    int finalScoreA, finalScoreB;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arrayA[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arrayB[i]);
    }

    finalScoreA = getFinalScore(arrayA);
    finalScoreB = getFinalScore(arrayB);

    if (finalScoreA > finalScoreB)
    {
        printf("A");
    }
    else if (finalScoreA < finalScoreB)
    {
        printf("B");
    }
    else
    {
        printf("empate");
    }

    return 0;
}