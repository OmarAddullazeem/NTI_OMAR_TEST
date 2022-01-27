#include<stdio.h>

void main()
{

        int id ;
        int pass ;

        //get id from the user
        printf("Enter Your id:\n ");
        scanf("%d",&id);

        switch(id) {
            //If id matches with one of the two cases then accept password... "signature Omar.A"
            case 1234:
                printf("Enter your password:\n ");
                scanf("%d",&pass);

                switch(pass){
                    //If password matches with case then print welcome message
                    case 20:
                        printf("Welcome Ahmed \n");
                        break;

                    default:
                        printf("Password is incorrect, try agian");
                        break;
                }
                break;
                   case 4567:
                printf("Enter your password:\n ");
                scanf("%d",&pass);

                switch(pass){
                    //If password matches with case then print message
                    case 30:
                        printf("Welcome Sara \n");
                        break;
                    //print default message for password
                    default:
                        printf("Password is incorrect, try agian");
                        break;
                }
                break;

            default:
                printf(" wrong Id");
                break;
        }
}

