#include "card.h"

/**
 * It takes the card data adress and gets the card holder name.
 *  cardData is a pointer to a structure of type ST_cardData_t.
 */
EN_cardError_t getCardHolderName(ST_cardData_t* cardData)
{
	char temp[25];
	printf("**Please Enter The CardHolder Name ");
	gets(temp);
	if(strlen(temp)<20 && strlen(temp) > 24)
		printf("error %s ", temp);
	
}
