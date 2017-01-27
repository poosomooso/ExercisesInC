/*
Serena Chen
SoftSys Exercise 1
Adapted from Head First C
*/
#include <stdio.h>
#include <stdlib.h>

/**
Grabs the desired card face from the user and stores it in card_name. User input
is limited to 2 characters.

card_name: buffer to store input in.
*/
void get_card_name(char card_name[]){
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
}

/**
Determines if a val is valid for a number card.

card_val: the numeric value of a card face, determined by atoi
*/
int is_valid(int card_val){
    return (card_val < 1) || (card_val > 10);
}

/**
Determines if a card val should increment or decrement the card counter.

card_val: the numeric value of a card face, determined by atoi
*/
int card_count_val(int card_val){
    if ((card_val > 2) && (card_val < 7))
        return 1;
    else if (card_val == 10)
        return -1;
    return 0;
}

/**
The main loop for a card dealer.
*/
int main(){
    int count = 0;
    char card_name[3];
    do {
        int val = 0;
        get_card_name(card_name);
        switch(card_name[0]){
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        case 'X':
            continue;
        default:
            val = atoi(card_name);
            if(is_valid(val)){
                puts("I don't understand that value!");
                continue;
            }
        }
        count += card_count_val(val);
        printf("Current count: %i\n", count);
    } while(card_name[0] != 'X');
    return 0;
}
