#include <stdio.h>

int main()
{
    int a,b,c,a1,b1,b2,b3,c1,c3,a_f,b_f,b_f3,b_f4,b_f5,b_f6,c_f1,c_f2,c_f3,p;
    int i=2,j=1;
    char ch1,ch2,ch3,ch4,ch5,ch6;
     

    printf("                                         --- AGE CALCULATOR ---\n");
    printf("Version\t\t: 1.0\nDeveloper\t: UZZAL BHOWMIK\n*********************************\n");
    while (i>j) {
    printf("\n");
    printf("$ Present Date(e.g 20xx/7/10)\n-> yy/mm/dd: ");
    scanf("%d %c %d %c %d",&a1,&ch1,&b1,&ch2,&c1);
    printf("\n\n");
    printf("$ Your Birthdate\n-> yy/mm/dd: ");
    scanf("%d %c %d %c %d",&a,&ch3,&b,&ch4,&c);
  
    /**Giving error while inputting wrong credentials.**/
    if(a>a1) {
        printf("\n");
        printf("$ Oh,Crap!\nYour birth-year cannot be bigger than current year.I'am exiting... Sorry :(\n");
        break;
    }

  /** The equation written below is for calculating Days remaining for Next Birthday. **/
    b2 = b1 + 1;
    c_f3 = (30-c1) + c;
    b_f3 = (12-b2) + b;
    b_f4 = (b_f3 * 30);
    b_f5 = b_f4 + c_f3;
    b_f6 = b_f5 + 5;



    if(c1<c) {
        c3 = c1+30;
        c_f1 = c3 - c;
        b = b+1;
    }
    else if(c1>c) {
        c_f1 = c1 - c;
    }
    else if(c1 == c) {
        c_f1 = 0;
    }
    c_f2 = c_f1+1;

    if (b1<b) {
        b3 = b1+12;
        b_f = b3-b;
        a = a+1;
    }
    else if(b1>b) {
        b_f = b1 - b;
    }
    else if(b1 == b) {
        b_f = 0;
    }
    else {
        break;
    }
    a_f = a1-a;



    printf("\n");
    printf("You're:\n");
    printf("-> %d Year(s) %d Month(s) %d Day(s) Old!!\n\n",a_f,b_f,c_f2);

    /** Declaration of 0 and 1 for using singular materials **/

    if(b_f6==0 && b_f6==1) {
    printf("-> '%d' day is remaining for your 'Next Birthday'\n",b_f6);
    }
    else {
        printf("->'%d' days are remaining for your 'Next Birthday'\n",b_f6);
    }
    printf("\n");
    printf("Do you wanna calculate again?\n1. Yes\n2. No\n(1/2)-->");
    scanf("%d",&p);
    if(p==1) {
        continue;
        printf("\n");
    }
    else if(p==2) {
        break;
    }
    return 0;
    }
}

