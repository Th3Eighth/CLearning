/***************************
 * 
 * 
 *     Basic calculator
 * 
 * -Simple calculator that does the basic 4 funtions
 * -Add, Subbtract, Division, Multiply
 * 
 * 
 * *************************/



#include <stdio.h>
#include <stdlib.h>




//Simple leaver Displays Answer

void leaver(float Answer){
    
    printf("Your answer is %f\n", Answer);
    printf("GoodBye!\n");
    exit(1);
}

//Math is done here




int Math(void){
    
    float answer = 0, number;
    char opp, ans;
    char usermath[256];
    char user[256];
    
    while(1)
    {
        
        printf("Current Result: %f\n", answer);
        
        printf("Would you like to clear your answer? (y/n)\n");
    
        fgets(user, sizeof(user), stdin);
        sscanf(user, " %c", &ans);
        
        if(ans == 'Y' || ans == 'y')
            answer = 0;
        
        printf("DEBUG: %f\n", answer);
        
        printf("Enter your opperand and number or Q for quit:");
        //printf("DEBUG:TEST\n");
    
        fgets(usermath, sizeof(usermath), stdin);
        sscanf(usermath, " %c %f", &opp, &number);
        
            if(opp == 'q'|| opp == 'Q')
                leaver(answer);
            //printf("DEBUG\n");
    //case statement to handle the opperands
        switch(opp)
        {
        
            case '+' :
                    answer += number;
                    break;
        
            case '-' :
                answer -=number;
                break;
            
            case '*' :
                answer *=number;
                break;
            
            case '/' :
                if(number == 0)
                {
                    printf("ERROR CANNOT DIVIDE BY ZERO\n");
                    break;
                }
                answer /=number;
                break;
            
            default:
                printf("ERROR UNKNOWN OPPERAND\n");
        }
    
    
    
    
    }
    
    
    
    
}






int main(void)

{
    
    //printf("DEBUG: FUNCTION COMPLETED\n");
    Math();
    


return(0);    
}

