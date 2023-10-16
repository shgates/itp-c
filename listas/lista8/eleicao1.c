#include <stdio.h>

void compute_votes(int n, int votes[n], int *most_voted, int *second_most_voted) {
    int chapas[10] = {0};
    int mv_idx = 0, smv_idx = 0;
    
    for(int i=0; i<n; i++) 
    {
        switch(votes[i]) {
            case 1:
                chapas[0]++;
                break;
            case 2:
                chapas[1]++;
                break;
            case 3:
                chapas[2]++;
                break;
            case 4:
                chapas[3]++;
                break;
            case 5:
                chapas[4]++;
                break;
            case 6:
                chapas[5]++;
                break;
            case 7:
                chapas[6]++;
                break;
            case 8:
                chapas[7]++;
                break;
            case 9:
                chapas[8]++;
                break;
            case 10:
                chapas[9]++;
                break;
        }
    }
    
    for(int i=0; i<10; i++) 
    {
        if(*most_voted < chapas[i])
        {
            *most_voted = chapas[i];
            mv_idx = i;
        }
    }
    
    for(int i=0; i<10; i++)
    {
        if(chapas[i] < *most_voted && *second_most_voted < chapas[i])
        {
            *second_most_voted = chapas[i];
            smv_idx = i;
        }
    }
    
    *most_voted = mv_idx+1;
    *second_most_voted = smv_idx+1;
    
    
}


int main () {
    
    int n;
    int most_voted = 0, second_most_voted = 0;
    
    scanf(" %d", &n);
    
    int votes[n];
    
    for(int i=0; i<n; i++)
    {
        scanf(" %d", &votes[i]);
    }
    
    compute_votes(n, votes, &most_voted, &second_most_voted);
    
    printf("%d %d", most_voted, second_most_voted);
    
    return 0;
}