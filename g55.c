/*Yazhan is working on a program to display scooter details. He needs a tool that can take the model name and mileage of a scooter as input and then print a message showing the scooter’s model and its mileage.



Help Yazhan by writing the code that captures this information and displays it in the required format.

Input format :
The first line consists of a string representing the model name of the scooter. The model name may contain spaces.

The second line consists of an integer representing the mileage of the scooter in kilometers per hour (km/hr).

Output format :
The output should print a formatted string indicating the model name and mileage of the scooter.

The output format should be: "The scooter <model_name> gives mileage of <mileage> km/hr."*/



#include <stdio.h>

int main() {
    char model_name[250];
    int mileage;
    scanf("%[^\n] %d", model_name, &mileage);
    printf("The scooter %s gives mileage of %d km/hr.", model_name, mileage);
    return 0;
}



