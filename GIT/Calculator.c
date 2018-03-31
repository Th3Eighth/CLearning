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

const int USERANS = 10;


#include <stdio.h>
#include <stdlib.h>

/********************************
 * 
 * 
 * 
 * Simple Greeter. Displays commands
 * 
 * 
 * ******************************/
void greater(void){
    
    char user[2];
    char ch;
    printf("Four Funtion calculator\n\n");
    printf("COMMANDS: q = quit\n");
    
    printf("Would you like to continue? (y/n)\n");
    
    fgets(user, sizeof(user), stdin);
    sscanf(user, "%c", &ch);
    
    if(ch == 'N' || ch == 'n' || ch == 'q' || ch == 'Q'){
        
        printf("GoodBye!\n");
        exit(1);
    }
        return;
    
    
}

//Simple leaver Displays Answer

void leaver(int Answer){
    
    printf("Your answer is %d\n", Answer);
    printf("GoodBye!\n");
    exit(1);
}

//Math is done here




int Math(void){
    
    int answer = 0, number;
    char opp;
    char usermath[256];
    
    while(1)
    {
        
        
        printf("Enter your opperand and number or Q for quit:");
        //printf("DEBUG:TEST\n");
    
        fgets(usermath, sizeof(usermath), stdin);
        sscanf(usermath, "%c %d", &opp, &number);
        
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
    
    greater();
    printf("DEBUG: FUNCTION COMPLETED\n");
    Math();
    printf("DEBUG: FUNCTION COMPLETED\n");


return(0);    
}

