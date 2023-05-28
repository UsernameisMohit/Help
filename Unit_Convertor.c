// Latest goto is goto 32;

// NOTE - Now the line numbers of goto statements are not correct so please wait till it will ready. And still this project is in progress!

/*
Creator - Mohit Purohit
Date       - 
Time      - 
*/

#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // Here is declaration of variables
    int back_tab, features, homepage, temperature, currency, mass, length, sec = 1;
    float celsius_temperature, fahrenheit_temperature, kelvin_temperature, usd, inr, kilograms, grams, milligrams, tonnes, quintals, pounds, kilometres, metres, centimetres, miles;

    do
    {
        clrscr();

        // These are the main features of this program
        printf("\t\tWelcome!\nHere you can make some conversions   which are given below.\n\n\t“Enter 1”\n★ Conversion in temperature.\n\n\t“Enter 2”\n★ Conversion in currency.\n\n\t“Enter 3”\n★ Conversion in mass.\n\n\t“Enter 4”\n★ Conversion in length.\n\n\t“Enter 0”\n★ Quit.\n\n");
        scanf("%d", &features);

        // Here I use switch case statement for executing all features
        switch (features)
        {
        case 1:
        // This is the end of goto statement
        eñd:
            //  goto statement at line no.52
            clrscr();

            printf("✪ CONVERSION IN TEMPERATURE\n\n\t“Enter 1”\n★ Celsius convert into Fahrenheit.\n\n\t“Enter 2”\n★ Fahrenheit convert into Celsius.\n\n\t“Enter 3”\n★ Celsius convert into Kelvin.\n\n\t“Enter 4”\n★ Kelvin convert into Celsius.\n\n\t“Enter 5”\n★ Kelvin convert into Fahrenheit.\n\n\t“Enter 6”\n★ Fahrenheit convert into Kelvin.\n\n\t“Enter 0”\n★ Back.\n");
            scanf("%d", &temperature);

            // This is the action against unnecessary values which are entered by the user
            if (temperature != 1 && temperature != 2 && temperature != 3 && temperature != 4 && temperature != 5 && temperature != 6 && temperature != 0)
            {
                clrscr();

                // This is the end of goto statement
            end:
                // goto statement at line no.60 and line no.201. This end works for both.

                printf("\tSorry!\nI think you have mistaken.\n");

                /*  // This is back tab
              printf("\n\t“Enter 1”\n★ BACK\n");
              scanf ("%d", &back_tab);
*/
                //This is home & back tab
                printf("\n\t“Enter 1”\n★ BACK\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();
                    // Here I use goto statement for repeating my code
                    goto end;
                    // End at line no.43
                }

                else if (back_tab == 1)
                {
                    // Here I use goto statement for going one step back
                    goto eñd;
                    // End at line no.31
                }
            }

            // Here I use another switch case statement for executing the conversion of temperature
            switch (temperature)
            {
            case 1:
                clrscr();

                // This is Celsius convert into Fahrenheit
                printf("✪ CELSIUS CONVERT INTO FAHRENHEIT\n\nEnter the Celsius temperature\n");
                scanf("%f", &celsius_temperature);

                // Formula for this conversion
                fahrenheit_temperature = (celsius_temperature * 9 / 5) + 32;
                printf("Fahrenheit temperature is %f", fahrenheit_temperature);

            // This is the eND of goto statement
            eND:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto eND;
                    // End at line no.43
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto eñd;
                    // End at line no.
                }
                break;

            case 2:
                clrscr();

                // This is Fahrenheit convert into Celsius
                printf("✪ FAHRENHEIT CONVERT INTO CELSIUS\n\nEnter the fahrenheit temperature\n");
                scanf("%f", &fahrenheit_temperature);

                // Formula for this conversion
                celsius_temperature = (fahrenheit_temperature - 32) * 5 / 9;
                printf("Celsius temperature is %f", celsius_temperature);

            // This is the ENd of goto statement
            end6:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end6;
                    // End at line no.43
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto eñd;
                    // End at line no.
                }
                break;

            case 3:
                clrscr();

                // This is Celsius convert into Kelvin
                printf("✪ CELSIUS CONVERT INTO KELVIN\n\nEnter the celsius temperature\n");
                scanf("%f", &celsius_temperature);

                // Formula for this conversion
                kelvin_temperature = celsius_temperature + 273.15;
                printf("Kelvin temperature is %f", kelvin_temperature);

            // This is the enD of goto statement
            enD:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto enD;
                    // End at line no.43
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto eñd;
                    // End at line no.
                }
                break;

            case 4:
                clrscr();

                // This is Celsius convert into Kelvin
                printf("✪ KELVIN CONVERT INTO CELSIUS\n\nEnter the kelvin temperature\n");
                scanf("%f", &kelvin_temperature);

                // Formula for this conversion
                celsius_temperature = kelvin_temperature - 273.15;
                printf("Celsius temperature is %f", celsius_temperature);

            // This is the eNd of goto statement
            eNd:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto eNd;
                    // End at line no.43
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto eñd;
                    // End at line no.
                }
                break;

            case 5:
                clrscr();

                // This is Kelvin convert into Fahrenheit
                printf("✪ KELVIN CONVERT INTO FAHRENHEIT\n\nEnter the kelvin temperature\n");
                scanf("%f", &kelvin_temperature);

                // Formula for this conversion
                fahrenheit_temperature = (kelvin_temperature - 273.15) * 9 / 5 + 32;
                printf("Fahrenheit temperature is %f", fahrenheit_temperature);

            // This is the END of goto statement
            END:
                //goto statement at line no.196
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto END;
                    // End at line no.43
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto eñd;
                    // End at line no.
                }
                break;

            case 6:
                clrscr();

                // This is Kelvin convert into Fahrenheit
                printf("✪ FAHRENHEIT CONVERT INTO KELVIN\n\nEnter the fahrenheit temperature\n");
                scanf("%f", &fahrenheit_temperature);

                // Formula for this conversion
                kelvin_temperature = (fahrenheit_temperature - 32) * 5 / 9 + 273.15;
                printf("kelvin temperature is %f", kelvin_temperature);

                // This is the End of goto statement
            End:
                // goto statement at line no.222

                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto End;
                    // End at line no.209
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto eñd;
                    // End at line no.
                }
                break;

            case 0:
                clrscr();

                break;
            }
            break;

        // This case for conversion of currency
        case 2:
        // This is the end of goto statement
        end7:
            //  goto statement at line no.
            clrscr();

            printf("✪ CONVERSION IN CURRENCY\n\n\t“Enter 1”\n★ Indian Rupees convert into United    States Dollars.\n\n\t“Enter 2”\n★ United States Dollars convert into   Indian Rupees.\n\n\t“Enter 0”\n★ Back.\n");
            scanf("%d", &currency);

            // This is the action against unnecessary values which are entered by the user
            if (currency != 1 && currency != 2 && currency != 0)
            {
            // This is the end of goto statement
            end12:
                //    goto statement at line no.
                clrscr();
                printf("\tSorry!\nI think you have mistaken.\n");

                // This is home tab
                printf("\n\t“Enter 1”\n★ BACK\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();
                    // Here I use goto statement for repeating my code
                    goto end12;
                    // End at line no.43
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for going to home page
                    goto end7;
                    // end of goto statement at line no.
                }
            }

            switch (currency)
            {
            case 1:
                clrscr();

                // This is Indian Rupees convert into United States Dollars
                printf("✪ INDIAN RUPEES CONVERT INTO UNITED    STATES DOLLARS\n\nEnter currency in INR\n");
                scanf("%f", &inr);

                usd = inr / 78.95;

                printf("USD = %f", usd);

            // This is the EnD of goto statement
            EnD:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto EnD;
                    // End at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end7;
                    // ënd at line no.
                }
                break;

            case 2:
                clrscr();

                // This is Indian Rupees convert into United States Dollars
                printf("✪ UNITED STATES DOLLARS CONVERT INTO   INDIAN RUPEES\n\nEnter currency in USD\n");
                scanf("%f", &usd);

                inr = usd * 78.95;

                printf("INR = %f", inr);

            // This is the ënd of goto statement
            ënd:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();
                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto ënd;
                    // ënd at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end7;
                    // ënd at line no.
                }
                break;

            case 0:
                clrscr();

                break;
            }
            break;

            // This case for conversion of mass
        case 3:
        // This is the end of goto statement
        end8:
            //  goto statement at line no.
            clrscr();

            printf("✪ CONVERSION IN MASS\n\n\t“Enter 1”\n★ Kilograms convert into Grams.\n\n\t“Enter 2”\n★ Grams convert into Kilograms.\n\n\t“Enter 3”\n★ Quintals convert into Kilograms.\n\n\t“Enter 4”\n★ Kilograms convert into Quintals.\n\n\t“Enter 5”\n★ Quintals convert into Grams.\n\n\t“Enter 6”\n★ Grams convert into Quintals.\n\n\t“Enter 7”\n★ Tonnes convert into Kilograms.\n\n\t“Enter 8”\n★ Kilograms convert into Tonnes.\n\n\t“Enter 9”\n★ Tonnes convert into Quintals.\n\n\t“Enter 10”\n★ Quintals convert into Tonnes.\n\n\t“Enter 11”\n★ Tonnes convert into Grams.\n\n\t“Enter 12”\n★ Grams convert into Tonnes.\n\n\t“Enter 13”\n★ Pounds convert into Kilograms.\n\n\t“Enter 14”\n★ Kilograms convert into Pounds.\n\n\t“Enter 15”\n★ Pounds convert into Tonnes.\n\n\t“Enter 16”\n★ Tonnes convert into Pounds.\n\n\t“Enter 17”\n★ Pounds convert into Quintals.\n\n\t“Enter 18”\n★ Quintals convert into Pounds.\n\n\t“Enter 19”\n★ Pounds convert into Grams.\n\n\t“Enter 20”\n★ Grams convert into Pounds.\n\n\t“Enter 21”\n★ Milligrams convert into Grams.\n\n\t“Enter 22”\n★ Grams convert into Milligrams.\n\n\t“Enter 0”\n★ Back.\n");
            scanf("%d", &mass);

            // This is the action against unnecessary values which are entered by the user
            if (mass != 1 && mass != 2 && mass != 3 && mass != 4 && mass != 5 && mass != 6 && mass != 7 && mass != 8 && mass != 9 && mass != 10 && mass != 11 && mass != 12 && mass != 13 && mass != 14 && mass != 15 && mass != 16 && mass != 17 && mass != 18 && mass != 19 && mass != 20 && mass != 21 && mass != 22 && mass != 0)
            {
            // This is the end of goto statement
            end11:
                //       goto statement at line no.
                clrscr();
                printf("\tSorry!\nI think you have mistaken.\n");

                // This is home tab
                printf("\n\t“Enter 1”\n★ BACK\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();
                    // Here I use goto statement for repeating my code
                    goto end11;
                    // End at line no.43
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for going at home page
                    goto end8;
                    // end at line no.
                }
            }

            switch (mass)
            {
            case 1:
                clrscr();

                // This is Kilograms convert into Grams
                printf("✪ KILOGRAMS CONVERT INTO GRAMS\n\nEnter mass in Kilograms\n");
                scanf("%f", &kilograms);

                grams = kilograms * 1000;

                printf("Grams = %f", grams);

            // This is the ënd of goto statement
            ênd:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto ênd;
                    // ënd at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ënd at line no.
                }
                break;

            case 2:
                clrscr();

                // This is Grams convert into Kilograms
                printf("✪ GRAMS CONVERT INTO KILOGRAMS\n\nEnter mass in Grams\n");
                scanf("%f", &grams);

                kilograms = grams / 1000;

                printf("Kilograms = %f", kilograms);

            // This is the ēnd of goto statement
            ēnd:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto ēnd;
                    // ēnd at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 3:
                clrscr();

                // This is Quintals convert into Kilograms
                printf("✪ QUINTALS CONVERT INTO KILOGRAMS\n\nEnter mass in Quintals\n");
                scanf("%f", &quintals);

                kilograms = quintals * 100;

                printf("Kilograms = %f", kilograms);

            // This is the ënd of goto statement
            énd:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto énd;
                    // ënd at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ënd at line no.
                }
                break;

            case 4:
                clrscr();

                // This is Kilograms convert into Quintals
                printf("✪ KILOGRAMS CONVERT INTO QUINTALS\n\nEnter mass in Kilograms\n");
                scanf("%f", &kilograms);

                quintals = kilograms / 100;

                printf("Quintals = %f", quintals);

            // This is the ēnd of goto statement
            ènd:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto ènd;
                    // ēnd at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 5:
                clrscr();

                // This is Quintals convert into Grams
                printf("✪ QUINTALS CONVERT INTO GRAMS\n\nEnter mass in Quintals\n");
                scanf("%f", &quintals);

                grams = quintals * 100000;

                printf("Grams = %f", grams);

            // This is the ënd of goto statement
            end2:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end2;
                    // ënd at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 6:
                clrscr();

                // This is Grams convert into Quintals
                printf("✪ GRAMS CONVERT INTO QUINTALS\n\nEnter mass in Grams\n");
                scanf("%f", &grams);

                quintals = grams / 100000;

                printf("Quintals = %f", quintals);

            // This is the ēnd of goto statement
            end3:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end3;
                    // ēnd at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 7:
                clrscr();

                // This is Grams convert into Quintals
                printf("✪ TONNES CONVERT INTO KILOGRAMS\n\nEnter mass in Tonnes\n");
                scanf("%f", &tonnes);

                kilograms = tonnes * 1000;

                printf("Kilograms = %f", kilograms);

            // This is the end13 of goto statement
            end13:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end13;
                    // end13 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 8:
                clrscr();

                // This is Grams convert into Quintals
                printf("✪ KILOGRAMS CONVERT INTO TONNES\n\nEnter mass in Kilograms\n");
                scanf("%f", &kilograms);

                tonnes = kilograms / 1000;

                printf("Tonnes = %f", tonnes);

            // This is the end14 of goto statement
            end14:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end14;
                    // end14 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 9:
                clrscr();

                // This is Grams convert into Quintals
                printf("✪ TONNES CONVERT INTO QUINTALS\n\nEnter mass in Tonnes\n");
                scanf("%f", &tonnes);

                quintals = tonnes * 10;

                printf("Quintals = %f", quintals);

            // This is the end15 of goto statement
            end15:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end15;
                    // end15 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 10:
                clrscr();

                // This is Grams convert into Quintals
                printf("✪ QUINTALS CONVERT INTO TONNES\n\nEnter mass in Quintals\n");
                scanf("%f", &quintals);

                tonnes = quintals / 10;

                printf("Tonnes = %f", tonnes);

            // This is the end15 of goto statement
            end16:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end16;
                    // end15 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 11:
                clrscr();

                // This is Grams convert into Quintals
                printf("✪ TONNES CONVERT INTO GRAMS\n\nEnter mass in Tonnes\n");
                scanf("%f", &tonnes);

                grams = tonnes * 1000000;

                printf("Grams = %f", grams);

            // This is the end15 of goto statement
            end17:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end17;
                    // end15 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 12:
                clrscr();

                // This is Grams convert into Quintals
                printf("✪ GRAMS CONVERT INTO TONNES\n\nEnter mass in Grams\n");
                scanf("%f", &grams);

                tonnes = grams / 1000000;

                printf("Tonnes = %f", tonnes);

            // This is the end15 of goto statement
            end18:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end18;
                    // end15 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 13:
                clrscr();

                // This is Grams convert into Quintals
                printf("✪ POUNDS CONVERT INTO KILOGRAMS\n\nEnter mass in Pounds\n");
                scanf("%f", &pounds);

                kilograms = pounds / 2.20462262;

                printf("Kilograms = %f", kilograms);

            // This is the end19 of goto statement
            end19:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end19;
                    // end19 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 14:
                clrscr();

                // This is Grams convert into Quintals
                printf("✪ KILOGRAMS CONVERT INTO POUNDS\n\nEnter mass in Kilograms\n");
                scanf("%f", &kilograms);

                pounds = kilograms * 2.20462262;

                printf("Pounds = %f", pounds);

            // This is the end20 of goto statement
            end20:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end20;
                    // end20 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 15:
                clrscr();

                // This is Pounds convert into Tonnes
                printf("✪ POUNDS CONVERT INTO TONNES\n\nEnter mass in Pounds\n");
                scanf("%f", &pounds);

                tonnes = pounds * 0.00045359237;

                printf("Tonnes = %f", tonnes);

            // This is the end20 of goto statement
            end21:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end21;
                    // end20 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 16:
                clrscr();

                // This is Tonnes convert into Pounds
                printf("✪ TONNES CONVERT INTO POUNDS\n\nEnter mass in Tonnes\n");
                scanf("%f", &tonnes);

                pounds = tonnes / 0.00045359237;

                printf("Pounds = %f", pounds);

            // This is the end22 of goto statement
            end22:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end22;
                    // end22 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 17:
                clrscr();

                // This is Pounds convert into Quintals
                printf("✪ POUNDS CONVERT INTO QUINTALS\n\nEnter mass in Pounds\n");
                scanf("%f", &pounds);

                quintals = pounds * 0.0045359237;

                printf("Quintals = %f", quintals);

            // This is the end23 of goto statement
            end23:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end23;
                    // end23 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 18:
                clrscr();

                // This is Quintals convert into Pounds
                printf("✪ QUINTALS CONVERT INTO POUNDS\n\nEnter mass in Quintals\n");
                scanf("%f", &quintals);

                pounds = quintals * 220.462262;

                printf("Pounds = %f", pounds);

            // This is the end24 of goto statement
            end24:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end24;
                    // end24 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 19:
                clrscr();

                // This is Pounds convert into Grams
                printf("✪ POUNDS CONVERT INTO GRAMS\n\nEnter mass in Pounds\n");
                scanf("%f", &pounds);

                grams = pounds * 453.59237;

                printf("Grams = %f", grams);

            // This is the end25 of goto statement
            end25:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end25;
                    // end25 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 20:
                clrscr();

                // This is Grams convert into Pounds
                printf("✪ GRAMS CONVERT INTO POUNDS\n\nEnter mass in Grams\n");
                scanf("%f", &grams);

                pounds = grams * 0.00220462262;

                printf("Pounds = %f", pounds);

            // This is the end26 of goto statement
            end26:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end26;
                    // end26 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 21:
                clrscr();

                // This is Milligrams convert into Grams
                printf("✪ MILLIGRAMS CONVERT INTO GRAMS\n\nEnter mass in Milligrams\n");
                scanf("%f", &milligrams);

                grams = milligrams * 0.001;

                printf("Grams = %f", grams);

            // This is the end27 of goto statement
            end27:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end27;
                    // end27 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;

            case 22:
                clrscr();

                // This is Grams convert into Milligrams
                printf("✪ GRAMS CONVERT INTO MILLIGRAMS\n\nEnter mass in grams\n");
                scanf("%f", &grams);

                milligrams = grams * 1000;

                printf("Milligrams = %f", milligrams);

            // This is the end28 of goto statement
            end28:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end28;
                    // end28 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end8;
                    // ēnd at line no.
                }
                break;
            }
            break;

        // This case for conversion in length
        case 4:
        // Here is the end of goto statement
        end9:
            // goto statement at line no.
            clrscr();

            printf("✪ CONVERSION IN LENGTH\n\n\t“Enter 1”\n★ Kilometres convert into Metres.\n\n\t“Enter 2”\n★ Metres convert into Kilometres.\n\n\t“Enter 3”\n★ Centimetres convert into Metres.\n\n\t“Enter 4”\n★ Metres convert into Centimetres.\n\n\t“Enter 5”\n★ Centimetres convert into Kilometres.\n\n\t“Enter 6”\n★ Kilometres convert into Centimetres.\n\n\t“Enter 7”\n★ Miles convert into Kilometres.\n\n\t“Enter 8”\n★ Kilometres convert into Miles.\n\n\t“Enter 0”\n★ Back.\n");
            scanf("%d", &length);

            // This is the action against unnecessary values which are entered by the user
            if (length != 1 && length != 2 && length != 3 && length != 4 && length != 5 && length != 6 && length != 7 && length != 8 && length != 0)

            {
                // This is the end of goto statement
            end10:
                // goto statement at line no.

                clrscr();
                printf("\tSorry!\nI think you have mistaken.\n");

                // This is home tab
                printf("\n\t“Enter 1”\n★ BACK\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();
                    // Here I use goto statement for repeating my code
                    goto end10;
                    // End at line no.43
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for going at home page
                    goto end9;
                    // end at line no.
                }
            }

            switch (length)
            {
            case 1:
                clrscr();

                // This is Kilometres convert into Metres
                printf("✪ KILOMETRES CONVERT INTO METRES\n\nEnter length in Kilometres\n");
                scanf("%f", &kilometres);

                metres = kilometres * 1000;

                printf("Metres = %f", metres);

            // This is the ēnd of goto statement
            end4:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end4;
                    // ēnd at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end9;
                    // ēnd at line no.
                }
                break;

            case 2:
                clrscr();

                // This is Metres convert into Kiloetres
                printf("✪ METRES CONVERT INTO KILOMETRES\n\nEnter length in Metres\n");
                scanf("%f", &metres);

                kilometres = metres / 1000;

                printf("Kilometres = %f", kilometres);

            // This is the ēnd of goto statement
            end5:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end5;
                    // ēnd at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end9;
                    // ēnd at line no.
                }
                break;

            case 3:
                clrscr();

                // This is Centimetres convert into Metres
                printf("✪ CENTIMETRES CONVERT INTO METRES\n\nEnter length in Centimetres\n");
                scanf("%f", &centimetres);

                metres = centimetres * 0.01;

                printf("Metres = %f", metres);

            // This is the end29 of goto statement
            end29:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end29;
                    // end29 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end9;
                    // ēnd at line no.
                }
                break;

            case 4:
                clrscr();

                // This is Metres convert into Centimetres
                printf("✪ METRES CONVERT INTO CENTIMETRES\n\nEnter length in Metres\n");
                scanf("%f", &metres);

                centimetres = metres * 100;

                printf("Centimetres = %f", centimetres);

            // This is the end30 of goto statement
            end30:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end30;
                    // end30 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end9;
                    // ēnd at line no.
                }
                break;

            case 5:
                clrscr();

                // This is Centimetres convert into Kilometres
                printf("✪ CENTIMETRES CONVERT INTO KILOMETRES\n\nEnter length in Centimetres\n");
                scanf("%f", &centimetres);

                kilometres = centimetres / 100000;

                printf("Kilometres = %f", kilometres);

            // This is the end31 of goto statement
            end31:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end31;
                    // end31 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end9;
                    // ēnd at line no.
                }
                break;

            case 6:
                clrscr();

                // This is Kilometres convert into Centimetres
                printf("✪ KILOMETRES CONVERT INTO CENTIMETRES\n\nEnter length in Kilometres\n");
                scanf("%f", &kilometres);

                centimetres = kilometres * 100000;

                printf("Centimetres = %f", centimetres);

            // This is the end32 of goto statement
            end32:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end32;
                    // end32 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end9;
                    // ēnd at line no.
                }
                break;

            case 7:
                clrscr();

                // This is Miles convert into Kilometres
                printf("✪ MILES CONVERT INTO KILOMETRES\n\nEnter length in Miles\n");
                scanf("%f", &miles);

                kilometres = miles * 1.609344;

                printf("Kilometres = %f", kilometres);

            // This is the end33 of goto statement
            end33:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end33;
                    // end33 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end9;
                    // ēnd at line no.
                }
                break;

            case 8:
                clrscr();

                // This is Kilometres convert into Miles
                printf("✪ KILOMETRES CONVERT INTO MILES\n\nEnter length in Kilometres\n");
                scanf("%f", &kilometres);

                miles = kilometres * 0.621371192;

                printf("Miles = %f", miles);

            // This is the end34 of goto statement
            end34:
                //goto statement at line no.
                // This is home tab
                printf("\n\n\n\t“Enter 1”\n★ BACK\n\n\t“Enter 0”\n★ HOME\n\n");
                scanf("%d", &back_tab);

                if (back_tab != 0 && back_tab != 1)
                {
                    clrscr();

                    printf("\tSorry!\nI think you have mistaken.");

                    // Here I use goto statement for repeating my code
                    goto end34;
                    // end34 at line no.
                }
                else if (back_tab == 1)
                {
                    // Here I use goto statement for repeating my code
                    goto end9;
                    // ēnd at line no.
                }
                break;
            }
            break;
        }

        // This is the action against unnecessary values which are entered by the user
        if (features != 1 && features != 2 && features != 3 && features != 4 && features != 0)
        {
        // This is the end1 of goto statement
        end1:
            //goto statement at line no.

            clrscr();
            printf("\tSorry!\nI think you have mistaken.\n");

            // This is home tab
            printf("\n\t“Enter 0”\n★ HOME\n\n");
            scanf("%d", &homepage);

            if (homepage != 0)
            {
                clrscr();

                printf("\tSorry!\nI think you have mistaken.");

                // Here I use goto statement for repeating my code
                goto end1;
                // end1 at line no.
            }
        }

        // This is for ‘Quit’ from the program
        else if (features == 0)
        {
            clrscr();
            break;
        }
    } while (homepage == 0);

    clrscr();

    // Now I'm using do while loop and such kind of other functions for coding an attractive outro of the program

    do
    {
        // This is for displaying standard time on the screen

        // Getting current time
        time_t t = time(NULL);
        struct tm *tm = localtime(&t);

        // Printing day name
        char day[10];
        strftime(day, sizeof(day), "%A", tm);
        // Printing month name
        char month[10];
        strftime(month, sizeof(month), "%B", tm);

        // Printing time in 12 hour format
        int hour = tm->tm_hour;
        char suffix[3] = "AM";
        if (hour >= 12)
        {
            suffix[0] = 'P';
            hour -= 12;
        }
        if (hour == 0)
        {
            hour = 12;
        }

        printf("%s, %s %02d, %04d “%02d:%02d:%02d” %2s", day, month, tm->tm_mday, tm->tm_year + 1900, hour, tm->tm_min, tm->tm_sec, suffix);

        // Below code is to display some INSPIRATIONAL QUOTES

        printf("\n\n\n\n\n\t Inspirational Quotes\n\n");

        if (sec <= 10)
        {
            printf("“Everything is Easy when you're Busy but nothing is Easy when you're Lazy”\n\t—Swami Vivekananda\n\n\n");
        }

        else if (sec <= 20)
        {
            printf("“Dream is not that which you see \n while sleeping it is something that \n does not let you sleep”\n\t—Dr. A.P.J. Abdul Kalam\n\n");
        }
        else if (sec <= 30)
        {
            printf("“One Day or Day One... You Decide”\n   —Paulo Coelho (Brazilian Novelist)\n\n\n\n");
        }

        else if (sec <= 40)
        {
            printf("“Learning gives Creativity,\n Creativity leads to Thinking,\n Thinking provides Knowledge and \n Knowledge makes You Great”\n\t—Dr. A.P.J. Abdul Kalam\n");
        }

        // Thanks to the user
        printf("\n\n\n\n👦👦I hope this is helpful for you👦👦\n\t—Mohit Purohit\n");

        if (sec <= 39)
        {
            sleep(1);
        }
        else if (sec == 40)
        {
            usleep(1);
        }
        clrscr();

        // This if-else statement is for increasing and decreasing the values of seconds (sec) and this code won't print anything on the screen

        if (sec <= 40)
        {
            sec++;
        }
              
        else if (sec >= 40)
        {           
            sec *= 0;
        }        
    } while (1);

    getch();

    return 0;
}