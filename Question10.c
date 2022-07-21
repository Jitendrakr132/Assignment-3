#include<stdio.h>
int main()
{
    float costprice,sellingprice;
    float profit,loss;
    printf("Enter the cost price");
    scanf("%f",&costprice);
    printf("Enter the selling price");
    scanf("%f",&sellingprice);
    if(costprice<sellingprice)
    {
        profit=((sellingprice-costprice)*100)/costprice;
        printf("profit percentage %f",profit);
    }
    else
    {
        loss=((costprice-sellingprice)*100)/costprice;
    printf("Loss percentage %f",loss);
    }
}
