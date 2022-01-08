/* AREA AND PERIMETER OF RECTANGLE*/

/* AREA AND PERIMETER OF RECTANGLE*/

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     // declaring variables
//     double width = 32.3;
//     double height = 15.3;
//     double perimeter = 0.0;
//     double area = 0.0;
    
//     //performing perimeter and area calculation
//     perimeter = 2.0 * (height + width);
//     area = width * height;
//    // desplaying output
//     printf("Width is: %.2f, Height is: %.2f, Perimeter is: %f\n", width, height, perimeter);//%.2 does print only two decimals points

//     printf("Area is %f\n", area);

//     return 0;
// }


//------------------ENUMS---------------------------//
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// { 
//     //DEFINING VARIABLES
//     enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };

//     enum Company xerox = XEROX;
//     enum Company google = GOOGLE;
//     enum Company ebay = EBAY;

//     printf("The value of xerox is: %d\n", xerox);
//     printf("The value of google is: %d\n", google);
//     printf("The value of ebay is: %d\n", ebay);

//     return 0;

// }

//------------COVERTING MINUTES TO YEARS AND DAYS-------------------/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutesEntered = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear = 0;

    printf("Please enter the number of minutes: ");

    // GET INPUT FROM USER
    scanf("%d", &minutesEntered);
     
     minutesInYear = (60 * 24 * 365);
     years = (minutesEntered / minutesInYear);
     days = (minutesEntered / 60.0) / 24.0;

     printf("%d minutes is approximately %f years and %f days\n", minutesEntered, years, days);
    return 0;
}














