#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>

/*
int main()
{
    char name[20];
    int age;
    char gender[20];

    printf("What is your name?\n");
    scanf("%19s",name);
    printf("How old are you?\n");
    scanf("%d",&age);
    printf("What gender are you?\n");
    scanf("%19s",gender);

    printf("My name is %s and I am %d , %s",name,age,gender);
    return 0;
}
*/

/*
int main()
{
    int num1;
    int num2;
    char operand[10];
    int total;
    printf("Please input your first number: ");
    scanf("%d",&num1);
    printf("Please input the second number: ");
    scanf("%d",&num2);

    printf("Please chose a mathematical operand :");
    scanf("%s",operand);
     if(operand[0] == '+')
    {
        total = num1 + num2;
    }

    else if (operand[0] == '-'){
            total = num1 - num2;}
    else if(operand[0] == '*'){
            total = num1*num2;}
    else if(operand[0] == '/' ){
        total = num1 / num2;}
    else{
        printf("The calculator doesn't support this oppernad.");
    }
     printf("Result: %d\n", total);
}

*/

/*
int main()
{
    char simbol[2];

    printf("Please input your simbol: ");
    scanf("%1s",simbol);
    for(int i=0;i<5;i++){
        printf(simbol);
        for(int j=0 ; j<9;j++){
            printf(simbol);
        }
        printf("\n");
    }

}

*/


/*
int main() {
    char simbol[2];

    printf("Please input your symbol: ");
    scanf("%1s", simbol);

    for (int i = 1; i < 6; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (int k = 0; k < 9 - i; k++) {
            printf("%s", simbol);
        }

        printf("\n");
    }

    return 0;
}
*/



/*
int main() {
    char simbol[2];

    printf("Please input your symbol: ");
    scanf("%1s", simbol);

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (i == j || i + j == 6 - 1) {
                printf("%s", simbol);}
                else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

//i == j -> This condition checks if the current position(i,j) is on the main diagonal
// in other words , it checks if the row index(i) is eqal to the column index( j)           } else {
// if its true , we print the simbol

// i + j == size(6) -1 ->

*/

#include <stdbool.h>

/*

int main() {
    bool end = false;
    double num;
    double total = 0.0;
    int number;

    while (!end) {
        printf("How many numbers do you wish to add? ");
        scanf("%d", &number);

        for (int i = 0; i < number; i++) {
            printf("Please input a value: ");
            scanf("%lf", &num); //
            total += num;
        }

        if (number > 0) {
            total = total / number;
            printf("The average is: %lf\n", total);
        } else {
            printf("Please enter a valid number of values.\n");
        }

        printf("Do you want to continue? (1 for Yes, 0 for No): ");
        scanf("%d", &end);
    }

    return 0;
}

*/

/*
int main()
{
    double celsius;
    double fahrenheit;

    printf("Please input the temperature: ");
    scanf("%lf",&celsius);

    fahrenheit = celsius * 1.8 +32;
    printf("%lf celsisus is %lf fahrenheit ",celsius,fahrenheit);


}

*/

/*
// Swap two numbers using a function
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

      printf("\n\nAfter swapping:\n a : %d ||  b : %d ",a,b);
}

int main()
{
    int a;
    int b;

    printf("Input a number for a and b:\n");
    scanf("%d%d",&a,&b);

    printf("\nBefore swapping:\n a : %d ||  b : %d ",a,b);


    swap(a,b);

}

*/

/*
// arithmetic sequence (find n-th term of the sequence)
void info(int d,int a ,int n , int an)
{
    an = a + (n - 1) * d;
    printf("The n-th term of the sequence is : %d",an);

}

int main()
{
    int d,a,n,an;

    printf("Input data :\n");
    scanf("%d%d%d",&d,&a,&n);

    info(d,a,n,an);
}

*/

/*
int main()
{
    double salary,hours,total;

    printf("Calculate monthly salary!\n\n");
    printf("Input amount per hours :\n");
    scanf("%lf",&salary);
    printf("Input total hours worked:\n");
    scanf("%lf",&hours);

    total = salary * hours;

    printf("Your monthly salary is:%lf",total);

}
*/

/*
int main()
{
    double distance,speed,time;

    printf("Please input the distance and speed:\n");
    scanf("%lf%lf",&distance,&speed);

    time = distance/speed;

    printf("The time from place A to B : %lf",time);

}
*/


/*
// calculate the hour base on the seconds

void transform(int input, int *hours, int *minutes, int *seconds) {
    *hours = input / 3600;
    *minutes = (input % 3600) / 60;
    *seconds = input % 60;

    if (*hours >= 10) {
        *hours %= 10;  // Keep only the last digit if hours is greater than 9
    }

    if (*minutes >= 60) {
        *minutes %= 60;  // Correct minutes to be within the valid range
    }

    if (*seconds >= 60) {
        *seconds %= 60;  // Correct seconds to be within the valid range
    }
}

int main() {
    int input, hours, minutes, seconds;

    printf("Input seconds:\n");
    scanf("%d", &input);

    transform(input, &hours, &minutes, &seconds);

    printf("Transformed time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}

//Function Parameters as Pointers:
//In the transform function, the parameters hours, minutes, and seconds are declared as pointers (int *).
//This means that these parameters will receive the memory addresses of the corresponding variables in the
//calling function (main in this case).

//Passing Addresses to the Function:
//When calling the transform function in main, the addresses (&hours, &minutes, &seconds) of the variables
//hours, minutes, and seconds are passed to the function. This allows the transform function to directly
//modify the values stored at those addresses.

//Dereferencing Pointers:
//Inside the transform function, the values at the addresses pointed to by hours, minutes, and seconds
//are modified using the dereference operator (*). This allows the function to update the values of hours,
//minutes, and seconds in the main function.

//Updating Variables in Main:
//After calling the transform function, the values of hours, minutes, and seconds in the main function are
//updated based on the calculations performed in the transform function. This updated information is then used
//to print the transformed time in the desired format.


*/


#include <math.h>
/*
int main()
{
    double input;

    printf("Input the number :\n");
    scanf("%lf",&input);

    input = modf(input,&input);
    printf("The decimal part is:%lf",input);


}
*/

/*
void calculate(int input, char *values, int *sum) {
    int number = input % 10;
    int number1 = (input / 10) % 10;
    int number2 = input / 100;

    values[0] = '0' + number;
    values[1] = '0' + number1;
    values[2] = '0' + number2;
    values[3] = '\0'; // Null-terminate the string

    for (int i = 0; i < 3; i++) {
        *sum += values[i] - '0';
    }
}

int main() {
    int input, sum = 0;
    char values[4];

    printf("Input a three-digit number:\n");
    scanf("%d", &input);

    calculate(input, values, &sum);

    printf("The individual digits are: %s\n", values);
    printf("The sum of the three digits is: %d\n", sum);

    return 0;
}

*/

/*
// revers a number
void calculate(int number, char *values) {
    int num1 = number % 10;
    int num2 = (number / 10) % 10;
    int num3 = number / 100;

    values[0] = '0' + num3;
    values[1] = '0' + num2;
    values[2] = '0' + num1;
    values[3] = '\0'; // Null-terminate the string

    // Corrected the loop and printf placement
    for (int i = 0, j = 2; i<j;i++,j--)
        {
            char temp = values[i];
            values[i] = values[j];
            values[j] = temp;

    }

    printf("The reverse number is: %s",values);
}

int main() {
    char values[4];
    int number;

    printf("Input a three-digit number: ");
    scanf("%d", &number);

    calculate(number, values);

    return 0;
}

*/



/*
int main() {
    double x[2];
    double y[2];
    double input1, input2, input3, input4;
    double fin = 0.0;  // Initialize fin to 0

    printf("Input two values (x1 and x2) :\n");
    scanf("%lf%lf", &input1, &input2);
    x[0] = input1;
    x[1] = input2;

    printf("Input two values (y1 and y2) :\n");
    scanf("%lf%lf", &input3, &input4);
    y[0] = input3;
    y[1] = input4;

    // Calculate squared differences and store in fin
    for (int i = 0; i < 2; i++) {
        double diff = pow(x[i] - y[i],2);
        fin += diff ;
    }

    // Calculate the square root of the sum of fin
    double distance = sqrt(fin);

    // Print the distance with two decimal places
    printf("The distance between points: %.2lf\n", distance);

    return 0;
}

*/

/*
// define

#define SPEED 55

int main()
{

    printf("The speed limit is %i.\n",SPEED);
    printf("But I clocked you doin' %i.\n",SPEED + 15);
    printf("Didn't you see that %i MPH sign?\n",SPEED);
}

// #define SHORTCUT value
// is a symbolic constant

// ex:

// #define NUMBER_OF_USERS 3
// #define COLUMN_WIDTH 80
// #define US_STATES 50

*/


/*
// putchar() and getchar()

int main() {
    char storage[20];

    puts("Press Enter:");
    getchar();  // Consume the Enter key press

    // Read characters into the storage array
    for (int i = 0; i < 20; i++) {
        storage[i] = getchar();
        if (storage[i] == '\n') {
            break;  // Stop if Enter key is pressed again
        }
    }

    // Print the characters on separate lines
    for (int i = 0; i < 20; i++) {
        if (storage[i] == '\0' || storage[i] == '\n') {
            break;  // Stop when encountering the null character or Enter key
        }
        putchar(storage[i]);
        putchar('\n');  // Print a new line after each character
    }

    return 0;
}
*/


/*

int main()
{
    int houses,hotels,total;
    char temp[4];

    printf("Enter the number of houses: ");
    gets(temp);
    houses = atoi(temp);

    printf("Enter the number of hotels: ");
    gets(temp);
    hotels =atoi(temp);

    total = houses*40+hotels*115;
    printf("You owe the bank %d",total);


}

*/

/*
// escape sequence

int main()
{
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
}

*/

/*
int main()
{
    int a,b,c;

    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d",&a,&b,&c);

    printf("You entered the date %d0%d%d",c,a,b);


}

*/


/*
int main()
{
    int number,year,month,day;
    double price;

    printf("Enter item number: ");
    scanf("%d",&number);
    printf("Enter unit price: ");
    scanf("%lf",&price);
    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%.2lf\t\t%d/%d/%d",number,price,month,day,year);


}

*/

/*
int main()
{

    char grade;
    printf("Input your grade: ");
    scanf("%c",&grade);

    switch(grade)
    {
    case'A':
        printf("Grade between 90-100 \n");
        break;
     case'B':
        printf("Grade between 80-89 \n");
        break;
     case'C':
        printf("Grade between 70-79 \n");
        break;
     case'D':
        printf("Grade between 60-69 \n");
        break;
     default:
        printf("ERROR....Try Again! \n");
        break;

    }

}


*/



/*
int main() {
    char operator;
    double result, operand;

    printf("Enter an operator (+, -, *, /, %) or 'q' to quit: ");
    scanf(" %c", &operator);  // Note the space before %c to consume any leading whitespace

    while (operator != 'q') {
        printf("Enter a number: ");
        scanf("%lf", &operand);  // Use %lf for double input

        switch (operator) {
            case '+':
                result += operand;
                break;
            case '-':
                result -= operand;
                break;
            case '*':
                result *= operand;
                break;
            case '/':
                if (operand != 0) {
                    result /= operand;
                } else {
                    printf("Error: Division by zero!\n");
                    return 1;  // Exit with an error code
                }
                break;
            case '%':
                if (operand != 0) {
                    // Note: % doesn't work with doubles, so convert to int
                    result = (int)result % (int)operand;
                } else {
                    printf("Error: Modulo by zero!\n");
                    return 1;  // Exit with an error code
                }
                break;
            default:
                printf("Invalid operator. Please enter +, -, *, /, % or 'q' to quit.\n");
                return 1;  // Exit with an error code
        }

        printf("Current result: %lf\n", result);

        printf("Enter an operator (+, -, *, /, %) or 'q' to quit: ");
        scanf(" %c", &operator);
    }

    printf("Final result: %lf\n", result);

    return 0;
}


*/

/*

int main() {
    int X, Y;
    int quadrant;

    printf("Input a value for x and y:\n");
    scanf("%d %d", &X, &Y);

    // Determine the quadrant based on coordinates
    if (X > 0 && Y > 0) {
        quadrant = 1;
    } else if (X < 0 && Y > 0) {
        quadrant = 2;
    } else if (X < 0 && Y < 0) {
        quadrant = 3;
    } else if (X > 0 && Y < 0) {
        quadrant = 4;
    } else {
        quadrant = 0;  // Default for points on an axis or at the origin
    }

    // Using switch to print the quadrant
    switch (quadrant) {
        case 1:
            printf("Quadrant 1\n");
            break;
        case 2:
            printf("Quadrant 2\n");
            break;
        case 3:
            printf("Quadrant 3\n");
            break;
        case 4:
            printf("Quadrant 4\n");
            break;
        default:
            printf("Point is on an axis or at the origin\n");
    }

    return 0;
}


*/

/*
int main() {
    int data[3];

    printf("Input values for (day/month/year) :\n");
    scanf("%d/%d/%d", &data[0], &data[1], &data[2]);

    for (int i = 0; i < 3; i++) {
        printf("0x%X\n", data[i]);
    }

    printf("\n");

    return 0;
}

*/


/*
int main()
	{
        int number ;
     printf("Input a value :\n");
     scanf("%d",&number);


	    for(int i=1;i<=number;i++)
	    {
	        for(int j=1;j<=i;j++)
	        {
	            printf("%d",j);
	        }
	        printf("\n");
	    }
		}

*/

/*
int main() {

    int num;
     printf("Input a value: ");
     scanf("%d", &num);

    for (int level = 1; level <= num; level++) {
        for (int digit = 1; digit <= level; digit++) {
            printf("%d", level);
        }
        printf("\n");
    }

    return 0;
}


*/

/*

int main() {
    char input;
    unsigned int total = 1;

    printf("Would you like to receive 1 million right now or 1 cent that\n doubles every day ?\n ");
    printf("Type c for cent or m for million ...\n");
    scanf("%c", &input);

    if (input == 'c') {
        for (int i = 1; i <= 30; i++) {
            total += total;
        }
        printf("The total after 30 days will be : %u\n", total);
    } else {
        printf("You just received 1 million....Congratulations!!!\n");
    }

    return 0;
}

*/

/*
int main()
{
    int rows;
    int space;
    int value = 1;

    printf("Input the number of rows in the pyramid: ");
    scanf("%d",&rows);

    space = rows - 1;

    for(int i = 1;i<=rows;i++)
    {
        for(int j=space;j>=1;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d ",value);
            value+= 1;
        }
        printf("\n");
        space--;
    }



}


*/


/*
int main()
{
    int num = 45;
    int total = 0;

    // printf("Input a value: ");
    // scanf("%d",&num);

    for(int i = 1 ; i <= num; i++)
    {
        while(i%3 == 0 && i%5 == 0)
        {
            total += i;
            break;
        }

    }
    printf("The sum is %d",total);
}

*/

/*
int main()
{
    int num;
    int total = 0;

    printf("Input a value : ");
    scanf("%d",&num);

    for(int i = 1;i<= num; i++)
    {

        if(num%3 == 0 || num%5 == 0 )
        {
            total += num;
        }

    }
    printf("The sum is : %d",total);

}

*/



/*
double area(double height, double weight)
{
    return height * weight;


}


int main()
{

    double height, weight, total;

    printf("Input the height and width of the rectangle:\n");
    scanf("%lf%lf",&height,&weight);

    total = area(height,weight);
    printf("The are of the rectangle is %.2fl ",total);

}


*/


/*
void twodigit(int num) {
    if (num >= 10 && num <= 99) {
        printf("%d has two digits\n", num);
    } else {
        printf("The number %d doesn't have two digits\n", num);
    }
}

int main() {
    int num;
    bool end = false;
    int answer;

    while (!end) {
        printf("Input a number of two digits: ");
        scanf("%d", &num);

        twodigit(num);

        printf("Do you wish to continue? (1 for Yes, 0 for No)\n");
        scanf("%d", &answer);

        if (answer == 0) {
            end = true;
        }
    }

    return 0;
}

*/

/*

int factorial(int num) {
    int total = 1;

    for (int i = 1; i <= num; i++) {
        total *= i;
    }

    return total;
}

int main() {
    int num, total;

    printf("Input a number: ");
    scanf("%d", &num);

    total = factorial(num);

    printf("The factorial of %d is: %d\n", num, total);

    return 0;
}

*/

/*
#include <ctype.h>

int main()
{
    char upper;
    char lower;

    printf("Original character: %c\n",upper);
    scanf("%c",&upper);

    lower = tolower(upper);

    printf("Lowercase character: %c\n",lower);
}


*/


/*
int main() {
    char num[10];
    int number;
    char curr_number = 0;

    printf("How many numbers do you want to input: ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
        {
        printf("Input a number: ");
        scanf("%s", num);


            if (num[j] >= curr_number) {
                curr_number = num[j];
            }
        }


    printf("Maximum digit is: %c\n", curr_number);

    return 0;
}


*/



/*
int main()
{
    char list[10];
    int loop;
    int number = 0;
    int index = 0;

    printf("How many digits to you want to input: ");
    scanf("%d",&loop);

    for(int i =0; i <= loop;i++)
    {
        printf("Input a value: ");
        scanf("%s",&list[i]);

        if(list[i] >= number )
        {
            number = list[i];
            index = i;
        }
    }

    printf("The index of the maximum number is:%d ",index);

}
*/




/*
// a program that will print which day of the week was the hotest/coldest based on the user input

    // char days[10.7,12.1,7.3,5.4,11.6,9.4,6.2]
    // sum = 10.7 + 12.1 + 7.3 +.....+ 6.2 -> average
    // hottest = 12.1
    // coldest = 5.4

    // #define funct for the number of days
    // main func -> receive the temperature from user (loop)
    //create a funct that loops throw the days and calculates the average
    // create a funct that will loop to find the hottest and coldest day of the week


#define DAYS 7

void avarage(flaot days[],float *sum , float *number)
{
    for(int j=0;j<days;j++)
    {
        *number = days[j];
        *sum +=number;
    }
    printf("The average temperature is: %fl",*sum / DAYS);
}

void hottestDay(float days[],float *hot,float *number,int *index)
{

    for(int z=0;z< DAYS;z++)
    {
        *number += days[z];

        if(days[z] >= *hot)
        {
            *hot += days[z];
            *index = z +1;

        }
        switch(*index){
            case 1:
            printf("The hottest day of the week is Monday");
                break;
            case 2:
            printf("The hottest day of the week is Tuesday ");
                break;
            case 3:
            printf("The hottest day of the week is Wednesday ");
                break;
            case 4:
            printf("The hottest day of the week is Thirstday ");
                break;
            case 5;
             printf("The hottest day of the week is Friday ");
                break;
            case 6:
             printf("The hottest day of the week is Saturday ");
                break;
            case 7:
             printf("The hottest day of the week is Sunday ");
                break;
            default:
                printf("Invalid choice.")
        }
    }

}


int main()
{
    char days[DAYS];
    float sum =0 , number = 0,hot = 0,cold = 0;
    int index;

    for(int i =0;i<= DAYS; i++)
    {
        printf("Input a temperature for day %d: ", i + 1);
        scanf("%f",&days[i]);
    }
       avarage(days,&sum,&number);
       hottestDay(days,&hot,&number,&index);


}
*/



/*

// Work with neighbors!;

//write a program that creates an array of Integers.
//the program should check and print if the array has at least one element with "good neighbors".
//  -an element with good neighbors has a value that equals to the multiplication of both its neighbors(right/left)

// ex1 : [1,3,2,6,3] --> Array has "Good neighbors"
// ex2 : [4,4,7,4,9] --> Array doesn't have "Good neighbors"


#define SIZE 5

int main()
{

    int myArr[SIZE];
    int i;
    int hasGoodNeighbors = 0;

    for(i=0;i<SIZE;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&myArr[i]);
     }

    for(i=1;i<SIZE-1;i++)
    {
    if(myArr[i] == myArr[i-1] * myArr[i+1])
        {
            printf("This Array has good neighbors!!!\n");
            hasGoodNeuighbors = 1;
            return 0;
        }
    }

    printf("This Array dosen't have any good Neighbors\n");
    return 0;

}
*/



/*

//input
// int mat[2][3] = {{4,5,7},{3,2,9}}


//acces
//mat[0][0] --> 4
//mat[0][1] --> 5


int main()
{

    int myArr[2][3] = {{1,5,9},{2,6,10}};
    int i, j;

    for(i = 0; i<2;i++)  // go over all the loops
    {
        for(j=0;j<3;j++) // go over all the columns
        {
            printf("%d ", myArr[i][j]);
        }
        printf("\n");

    }return 0;

}
*/




/*
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// a program that prints the multiplication table using matrix

#define SIZE 11

int main()
{

    int i,j;
    int mat[SIZE][SIZE];

    //Fill values in the table
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            mat[i][j] = i*j;
        }
    }

    // print the multiplication table

    for(i=1;i<SIZE;i++)
    {
        for(j=1;j<SIZE;j++)
            printf("%5d ",mat[i][j]);
        printf("\n");
    }
}
*/




/*
//prints a 2d matrix (2 rows with 3 columns)

int main()
{
    int mat[2][3];

    printf("Input a value:")
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
    {
        scanf("%d",&mat[i][j]);
    }

}
*/


/*
// difference * and &

int main()
{

    int a = 5;
    int *b ;
    b = &a;

    // both print the address of a
    printf("%p\n",a);
    printf("%p\n",b);

    //both print the value of a
    printf("%d\n",a);
    printf("%d\n",*b);

}



*/

/*
// a program that prints the address of a variable

int main()
{

    int num;
    int *p;

    p = &num;

    printf("Input a value: ");
    scanf("%d",&num);

    printf("The value is : %d\n",num);
    printf("The address is : %p",p);

}
*/



/*
// a program that will print which value is bigger between two values.


//create a function that receives the input from the user and stores into num1 and num2;
// and two pointers that will store the values from the addresses

void minMax(int num1, int num2 ,int *pMax , int *pMin)
{
    // if num1 is bigger then num2 then
    // store the value of num1 in pointer *pMax and num2 in pointer *pMin
    if(num1 > num2)
    {
        *pMin = num2;
        *pMax = num1;
     }
     //else( if num1 is smaller then num2) then
     // store the value of num1 in pointer *pMin and value of num2 in pointer *pMax
     else
     {

         *pMin = num1;
         *pMax = num2;
     }

}


void main()

{
    //declare two variables a and b that will store the input from the user
    // those values will get passed to num1 and num2  in funct minMax
    // declare two variables max and min that will store the input of the pointers from function minMax
    int a,b;
    int max,min;

    printf("Input two values:\n");
    scanf("%d%d",&a,&b);

    //call function minMax(input the variables in which you wish to store the values from the function)
    // num1 = a
    // num2 = b
    // *pMax = max
    // *pMin = min
    minMax(a,b,&max,&min);

    printf("The max between %d and %d = %d\n",a,b,max);
    printf("The min between %d and %d = %d",a,b,min);

}
*/



/*
// a program that reds the date from an array and switches the format


void switch(int *numbers, int *pDate)
{
    int len = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = len-1;i>=0;i--)
    {
        scanf("%d",&pDate[i]);
    }
}

int main()
{
    int date[3];
    int dateFormated[3];

    printf("Input the day , moth and year:\n");
    for(int i = 0; i<3;i++)
    {
        scanf("%d%d%d",&date[i]);
    }
     switch(date,dateFormated);

    printf("The date is %d/%0d/%0d",dateFormated[0],dateFormated[1],dateFormated[2]);
}
*/





/*
// a program that checks if an array of numbers is a palindrome



void reverse(int *values,int *reverse, int len)
{
   for(int j =len-1;j>=0;j--)
    {
        reverse[j] = values[len-1-j];
    }
}

void palindrome(int *array1,int *array2, int len)
{
    int isPalindrome = 1;

    for(int z = 0; z < len; z++ )
    {
        if(array1[z] != array2[z])
        {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
    {
        printf("The array is a palindrome.");
    }
    else
    {
     printf("The array is not a palindrome.");
    }
}

int main()
{
    int numbers[5];
    int numberReversed[5];

    int len = sizeof(numbers) / sizeof(numbers[0]);

    printf("Input values:\n");
    for(int i = 0;i< 5;i++)
    {
        scanf("%d",&numbers[i]);
    }

    reverse(numbers,numberReversed,5);
    palindrome(numbers,numberReversed,5);
}


*/



/*

// a program that calculates the sum of two adjacent elements in array


// Function to calculate sums of consecutive elements and find the highest sum
void sumArray(int *list, int size) {
    // Array to store sums of consecutive elements
    int fArray[size - 1];
    // Variable to store the highest sum
    int total = 0;

    // Loop through the input array to calculate sums and find the highest sum
    for (int j = 0; j < size - 1; j++) {
        // Calculate the sum of consecutive elements
        int sum = list[j] + list[j + 1];
        // Store the sum in the fArray at the current position
        fArray[j] = sum;

        // Update total if the current sum is greater
        if (sum >= total) {
            total = sum;
        }
    }

    // Print the sums of consecutive elements
    printf("Sums of consecutive elements: ");
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", fArray[i]);
    }

    // Print the highest sum
    printf("\nThe highest sum is %d\n", total);
}

int main() {
    // Variable to store the size of the array
    int size;

    // User input: How many numbers do you want to input
    printf("How many numbers do you want to input: ");
    scanf("%d", &size);

    // Array to store input values
    int array[size];

    // User input: Input values
    printf("Input values:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Call the function to calculate and print the highest sum
    sumArray(array, size);

    return 0;
}

*/


/*

// a program that will print if an array is sorted/not sorted


// Function to check if an array is sorted
void checkArray(int *farray, int size) {
    bool isSorted = 1; // Initialize isSorted to true

    // Loop through the array to check if it is sorted
    for (int j = 0; j < size - 1; j++) {
        // Check if the current element is greater than or equal to the next element
        if (farray[j] > farray[j + 1]) {
            isSorted = 0; // If not, set isSorted to false
            break; // Break out of the loop since we already know it's not sorted
        }
    }

    // Print the result based on the isSorted flag
    if (!isSorted) {
        printf("The array is not sorted.\n");
    } else {
        printf("The array is sorted.\n");
    }
}

int main() {
    int size;

    // User input: How many values do you want to input
    printf("How many values do you want to input: ");
    scanf("%d", &size);

    // Array to store input values
    int array[size];

    // User input: Input values
    printf("Input values:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Call the function to check if the array is sorted
    checkArray(array, size);

    return 0;
}



*/


/*
// a program that prints all the unique elements in an array and count them

void uniqueElement(int *pArray, int size)
{
    int uniqueArray[size];
     int count = 0;

    for(int j = 0; j< size;j++)
    {
        int currentElement = pArray[j];
        int isUnique = 1;

        for(int k = 0; k< count;k++)
        {
            if(currentElement == uniqueArray[k])
            {
                isUnique = 0;
                break;
            }
        }
        if(isUnique)
        {
            uniqueArray[count] = currentElement;
            count++;
        }
    }

    printf("The unique elements in the array are: ");
    for(int k =0 ;k<count;k++)
    {
        printf("%d ",uniqueArray[k]);
   }
    printf("\nThe count of unique elements are: %d",count);

}


int main()
{
    int size;

    printf("How many values do you wish to input: ");
    scanf("%d",&size);

    int array[size];
    printf("Input value: ");
    for(int i = 0; i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    uniqueElement(array,size);

}


*/




/*
// a program that prints the duplicate elements


// Function to identify and count duplicate elements in an array
void uniqueElement(int *array, int size) {
    int count = 0; // Counter for the number of duplicate elements

    // Display message indicating that we are going to print duplicate elements
    printf("Duplicate elements in the array are:\n");

    // Loop through the array to check for duplicates
    for (int i = 0; i < size; i++) {
        // Nested loop to compare the current element with the rest of the elements
        for (int j = i + 1; j < size; j++) {
            // Check if the current element is equal to any subsequent element
            if (array[i] == array[j]) {
                // Print the duplicate element
                printf("%d ", array[i]);

                // Increment the count of duplicate elements
                count += 1;

                // Set the duplicate value to a placeholder (-1) to avoid counting it again
                array[j] = -1;
            }
        }
    }

    // Print the count of duplicate elements
    printf("\nThe count of duplicate elements is: %d\n", count);
}

int main() {
    int size;

    // Prompt user to input the number of values
    printf("How many values do you wish to input: ");
    scanf("%d", &size);

    // Declare an array to store input values
    int array[size];

    // Prompt user to input values for the array
    printf("Input values: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Call the function to identify and count duplicate elements
    uniqueElement(array, size);

    return 0;
}
*/

/*
// another version that will print the duplicates/not unique values


// Function to print and count non-unique elements in the array
void nonUniqueElements(int *pArray, int size)
{
    int count = 0; // Counter for the number of non-unique elements

    // Display message indicating that we are going to print non-unique elements
    printf("Non-unique elements in the array are: ");

    // Loop through the array to check for non-unique elements
    for (int j = 0; j < size; j++)
    {
        int currentElement = pArray[j];
        int isUnique = 1; // Flag to check if the current element is unique

        // Check if the current element is equal to any previous element
        for (int k = 0; k < j; k++)
        {
            if (currentElement == pArray[k])
            {
                isUnique = 0; // If not unique, set the flag to false
                break;
            }
        }

        // If the element is not unique, print it
        if (!isUnique)
        {
            printf("%d ", currentElement);
            count++; // Increment the count of non-unique elements
        }
    }

    // Print the count of non-unique elements
    printf("\nThe count of non-unique elements is: %d\n", count);
}

int main()
{
    int size;

    // Prompt user to input the number of values
    printf("How many values do you wish to input: ");
    scanf("%d", &size);

    // Declare an array to store input values
    int array[size];

    // Prompt user to input values for the array
    printf("Input values: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    // Call the function to print and count non-unique elements
    nonUniqueElements(array, size);

    return 0;
}
*/

// a program that rotates left a given array by 1 position
/*
// one example
int main() {

    int array[] = {5, 4, 7, 3};
   for (int i = 0; i < 4; i++) {
        printf("%d ", array[i]);
   }
printf("\n");
    int temp = array[0];

    for (int i = 1; i < 4; i++) {
        array[i - 1] = array[i];
    }

    // Add 5 at the end
    array[3] = temp;

    // Print the updated array
    for (int i = 0; i < 4; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

*/


/*

// write a program that should rotate left a given array by N positions.

#define SIZE 9

int main()
{

    int array[SIZE];
    int position;
    int temp[SIZE];


    printf("Input nine values.\n");
    printf("Input values:\n");
    for(int i = 0;i<SIZE;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("How many positions do you wish to shift the array to the left: ");
    scanf("%d",&position);

    for(int k=0;k<position;k++)
        {
            temp[k] = array[k];
        }

    for(int j = position;j<SIZE;j++)
    {
        array[j - position] = array[j];
    }


    for(int m = SIZE - position;m<SIZE;m++)
    {
        array[m] = temp[m - (SIZE - position)];
    }

    printf("Shifted array:\n");
    for (int n = 0; n < SIZE; n++) {
        printf("%d ", array[n]);
    }


}

*/



/*

// write a program that should rotate right a given array by N positions.


#define SIZE 4



int main()

{

    int array[SIZE];
    int position;
    int newArray[SIZE];

    printf("Input the number of value you wish to shift the array.");
    scanf("%d",&position);

    printf("Input values:\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    for(int k = 0;k<position;k++)
    {
      newArray[k] = array[SIZE - position + k];
    }

    for(int i =SIZE-1;i>=position;i--)
    {
        array[i] = array[i - position];
    }
    for(int z = 0;z<position;z++)
    {
        array[z] = newArray[z];
    }

    printf("Shifted array:\n");
    for (int n = 0; n < SIZE; n++) {
        printf("%d ", array[n]);
    }

}



*/



/*
// a program that prints the sum of two elements that is the most close to 0

#define SIZE 5

int main()

{
    int array[SIZE];
    int a,b;
    int minSum = array[0] + array[1];
    int currentSum;

    printf("Input values:\n");
    for(int i = 0;i<SIZE;i++)
    {
      scanf("%d",&array);
    }

    for(int a = 0;a<SIZE;a++)
    {
        for(b = a+1;b<SIZE;b++)
        {
            currentSum = array[a] + array[b];
            if(abs(currentSum)<abs(minSum))
                minSum = currentSum;

        }
    }
}
*/


















































































































