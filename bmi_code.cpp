#include<stdio.h>
#include<stdlib.h>
int calcount(int gender,int age);
int main()
{
   char name[50];
   int gender, age,n,m;
   float height, weight, bmi;
   while(1)
   {
   printf("Enter your name:");
   scanf("%s",name);
   printf("Select your gender:");
   printf("1)Male\t2)Female\n");
   scanf("%d",&gender);
   if(gender>2 || gender<1)
   {
      printf("Not Valid.Try again with valid inputs\n");
      continue;
      
   }
   printf("Select  your age category:");
   printf("1)9-13 years\t2)14-18years\t3)19-30 years\t4)31-50 years\t5)Above fifty years\n");
   scanf("%d",&age);
   if(age<1 || age>5)
   {
       printf("Invalid age category.Try again with valid inputs\n");
       continue;
   }
   printf("Enter your height(in ft):");
   scanf("%f",&height);
   if(height<1)
   {
       printf("Invalid height.Try again with valid input");
       continue;
   }
   height=0.3048*height;
   printf("Enter your weight(in kg):");
   scanf("%f",&weight);
   if(weight<1)
   {
       printf("Invalid weight.Try again with valid input.");
       continue;
   }
   bmi=weight/(height*height);


      if(bmi>16 && bmi<18.5)
      {
                  printf("\n\nYour BMI is %.2f kg/m2\nYour BMI category is Underweight\n\n",bmi);
                  printf("Eat small meals every few hours.\nAvoid meal skipping.\nEat your protein first and vegetables last.\nHydrate yourself before dinners.\nDrink whole fat milk daily.\n\n");
      }
      else if(bmi>=18.5 && bmi<=24.9)

     {
                  printf("\n\nYour BMI is %.2f kg/m2\nYour BMI category is Healthy weight\n\n",bmi);
                  printf("You are maintaining a Healthy BMI.\nContinue with your lifestyle.\nStay hydrated.\n\n");
     }
      else if(bmi>=25 && bmi<=29.9)
     {
                  printf("\n\nYour BMI is %.2f kg/m2\nYour BMI category is Over weight\n\n",bmi);
                  printf("Consume less bad fat and more good fat.\nEat plenty of dietary fibre.\nEncourage eating only when hungry.\nConsume less processed and less sugary foods.\nEngage in regular aerobic activity\n\n");
     }
      else if(bmi>=30 && bmi<=40)
     {
                  printf("\n\nYour BMI is %.2f kg/m2\nYour BMI category is Obese\n\n",bmi);
                  printf("Stay hydrated\nConsume more fruits and veggies.\nDecrease salt and sugar intake.\nEat fat free food and low fat diary.\nChoose lean meats, poultry, fish and beans for proteins.\n\n");
     }
      else if(bmi>40)
     {
                  printf("\n\nYour BMI is %.2f kg/m2\nYour BMI category is Hyper-obese\n\n",bmi);
                  printf("Exercise regularly.\nCut calories in diet.\nMake healthier choices.\nAvoid junk.\nEngage in physical activities regularly.\n\n");
     }
     else if(bmi<16)
     {
                  printf("\n\nEntered height and weight values are inappropriate\n");
                  continue;
     }
     printf("Do you need any suggestions about your standard calorie consumption per day?");
     printf("1)Yes\t2)No\n");
     scanf("%d",&n);
     if(n==1)
     {
         calcount(gender,age);
         printf("Want to check BMI again?\n");
         printf("1)Yes\t2)No\n");
         scanf("%d",&m);
         if(m==1)
         {
             continue;
         }
         else
         {
             break;
         }
     }
     else
     {
        printf("Want to check BMI again?\n");
         printf("1)Yes\t2)No\n");
         scanf("%d",&m);
         if(m==1)
         {
             continue;
         }
         else
         {
             break;
         } 
     }
    
   
}

    return 0;
}
int calcount(int gender,int age)
{



     if(gender==1)
     {
       if(age==1)
       {
         printf("According to your age, your calorie consumption should be 2100 cal/day\n");
         printf("To fulfill this calorie requirement, you can include high calorie foods like avocados, chickpea, whole wheat bread, walnuts, cheese, dark chocolate, red meat and chicken.\n\n\n");
       }
       else if(age==2)
       {
         printf("According to your age, your calorie consumption should be 2600 cal/day\n");
         printf("To fulfill this calorie requirement, you can include high calorie foods like fish, nuts, green vegetables, flaxseeds, lentils, olives, ghee, eggs and pears.\n\n\n");
       }
       else if(age==3)
       {
         printf("According to your age, your calorie consumption should be 2700 cal/day\n");
         printf("To fulfill this calorie requirement, you can include high calorie foods like soya beans, chickpeas, lambs, yogurt, peanut butter, chicken, mushrooms and mutton.\n\n\n");
       }
       else if(age==4)
       {
         printf("According to your age, your calorie consumption should be 2600 cal/day\n");
         printf("To fulfill this calorie requirement, you can include high calorie foods like steamed veggies, paneer, salmon, granola, chia seeds, butter and sprouts.\n\n\n");
       }
       else
       {
         printf("According to your age, your calorie consumption should be 2300 cal/day\n");
         printf("To fulfill this calorie requirement, you can include high calorie foods like Fruit smoothies, potatoes, legumes, oatmeal, sweet potatoes, kiwis and crab meat.\n\n\n");
       }
     }
     else
     {
         if(age==1)
       {
         printf("According to your age, your calorie consumption should be 1800 cal/day\n");
         printf("To fulfill this calorie requirement, you can include high calorie foods like avocados, chickpea, whole wheat bread, walnuts, cheese, dark chocolate, red meat and chicken.\n\n\n");
       }
       else if(age==2)
       {
         printf("According to your age, your calorie consumption should be 2100 cal/day\n");
         printf("To fulfill this calorie requirement, you can include high calorie foods like fish, nuts, green vegetables, flaxseeds, lentils, olives, ghee, eggs and pears.\n\n\n");
       }
       else if(age==3)
       {
         printf("According to your age, your calorie consumption should be 2200 cal/day\n");
         printf("To fulfill this calorie requirement, you can include high calorie foods like soya beans, chickpeas, lambs, yogurt, peanut butter, chicken, mushrooms and mutton.\n\n\n");
       }
       else if(age==4)
       {
         printf("According to your age, your calorie consumption should be 2000 cal/day\n");
         printf("To fulfill this calorie requirement, you can include high calorie foods like steamed veggies, paneer, salmon, granola, chia seeds, butter and sprouts.\n\n\n");
       }
       else
       {
         printf("According to your age, your calorie consumption should be 1800 cal/day\n");
         printf("To fulfill this calorie requirement, you can include high calorie foods like avocados, chickpea and chicken.\n\n\n");
       }

       
     }
     


return 0;

}
