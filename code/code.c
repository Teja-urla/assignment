#include<stdio.h>
int main(){

// investment declaration
int investment = 4500;
// declating dividend percentage 
float dividend = 7.5;
// declaring share_value
int share_value = 100;
// declaring discount
int discount = 10;
// declaring final_amount
int final_amount = share_value - discount*share_value/100;
// declaring number_of_shares
int number_of_shares = investment/final_amount;
// declaring annual_income 
float annual_income = (number_of_shares) * (dividend) * (share_value)/100;

// printing the required values
printf("number of shares = %d\n",number_of_shares);

printf("annual income is %.1f",annual_income); 

}









