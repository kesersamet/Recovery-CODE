#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNum(); //function prototype
int random;

    int main(){

        int userNumber;


        srand(time(NULL));


       // Take a phone number from user

        printf("Lutfen kurtarma sayisi gelecek numarayi tuslayiniz: ");
        
        scanf("%d", &userNumber);


        // give a random number

        int num1 = randomNum();

        printf("Kurtarma sayiniz :  %d\n", num1);


        // in App ask the random number
        int kurtarmaNo;

        printf("Lutfen kurtarma sayinizi giriniz: \n");
        
        scanf("%d", &kurtarmaNo);


        // checking the numbers

        if(kurtarmaNo == num1){

            printf("Kurtarma sayiniz gecerlidir.");

        }


         if(kurtarmaNo != num1){
            

        printf("Kurtarma sayiniz gecersizdir lutfen tekrar deneyiniz\n");
         
        // if user write wrong number , ask one more time when user write correct number

        int newNumber;
        int newKurtarma;
        
            while(1){

                newNumber = randomNum();
                
                printf("Yeni kurtarma numaraniz : %d\n", newNumber);

                printf("Lutfen kurtarma numaranizi giriniz: \n");

                scanf("%d", &newKurtarma);


                if(newNumber == newKurtarma){

                    printf("Kurtarma sayiniz gecerlidir.");

					return 0;
                }

                else if(newNumber != newKurtarma){

                  continue;


                }

            }

        }

    }

        //the random number function
            int randomNum()
            {

                random = rand() %99999+1000;

                return random;
            }
