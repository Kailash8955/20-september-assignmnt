1

#include<stdio.h>
void add();
int main()
{
  add();

return 0;
}
void add(){
    int a=8;
    int b=9;
    int c=a+b;
   printf("%d",c);
}


2.a constant
#include<stdio.h>
void add();
int main()
{
    
    add();

return 0;
   
    
}
void add(){
    int a=8;
    int b=9;
    int c=a+b;
    
    
    
    printf("%d",c);
}


a.user input
#include<stdio.h>
void add();
int main()
{
    
    add();

return 0;
   
    
}
void add(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    int c=a+b;
    printf("%d",c);
}

=============================================================================








2b.constant
#include<stdio.h>
void sub();
int main()
{
    
    sub();

return 0;
   
    
}
void sub(){
    int a=8;
    int b=9;
    int c=a-b;
    
    
    
    printf("%d",c);
}
==========================================================================
b..user input
#include<stdio.h>
void sub();
int main()
{
    
    sub();

return 0;
   
    
}
void sub(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    int c=a-b;
    printf("%d",c);
}

========================================================================
c..constant
#include<stdio.h>
void div();
int main()
{
    
    div();

return 0;
   
    
}
void div(){
    int a=4;
    int b=3;
    
    int c=a/b;
    printf("%d",c);
}


==============================================================================
c..user input
#include<stdio.h>
void div();
int main()
{
    
    div();

return 0;
   
    
}
void div(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    int c=a/b;
    printf("%d",c);
}
==============================================================================================

d...constant
#include<stdio.h>
void multi();
int main()
{
    
    multi();

return 0;
   
    
}
void multi(){
    int a=10;
   
    int b=19;
    int c=a*b;
    printf("%d",c);
}
============================================================================================
d...userinput
#include<stdio.h>
void multi();
int main()
{
    
    multi();

return 0;
   
    
}
void multi(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    int c=a*b;
    printf("%d",c);
}
==============================================================================================
e......constant
#include<stdio.h>
void mod();
int main()
{
    
    mod();

return 0;
   
    
}
void mod(){
    int a=6;
    int b=8;
    
    int c=a%b;
    printf("%d",c);
}
=========================================================================================

e..userdefine
#include<stdio.h>
void mod();
int main()
{
    
    mod();

return 0;
   
    
}
void mod(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    int c=a%b;
    printf("%d",c);
}
=============================================================================================
3 voterid
constant
#include<stdio.h>
void voter();
int main()
{
    
    voter();

return 0;
   
    
}
void voter(){
    int a=3;
    if(a>=18){
        
        printf("you are valid");
    }
    else{
        printf("not valid");
    }
    
}
=========================================
userinput voter id
#include<stdio.h>
void voter();
int main()
{
    
    voter();

return 0;
   
    
}
void voter(){
    int a;
    printf("enter your age");
    scanf("%d",&a);
    if(a>=18){
        
        printf("you are valid");
    }
    else{
        printf("not valid");
    }
    
}
=================================================================
3
#include<stdio.h>
void checknumber();
int main()
{
    
    checknumber();

return 0;
   
    
}
void checknumber(){
    int a;
    printf("enter your number");
    scanf("%d",&a);
    if(a%2==0){
        
        printf("even");
    }
    else{
        printf("odd");
    }
    
}
===================================================================
4 allEven() =>1--100 EVEN NUMBER 

#include<stdio.h>
void alleven();
int main()
{
    
    alleven();

return 0;
   
    
}
void alleven(){
    int i;
   for(i=2;i<=100;i++){
       if(i%2==0){
        
        printf("%d\n",i);
        
    }
       
   }
    
    
    
}
================================================================
b..random() =>34 89 mid even number 
#include<stdio.h>
void randomnumber();
int main()
{
    
    randomnumber();

return 0;
   
    
}
void randomnumber(){
    int i;
    
   for(i=34;i<=89;i++){
       if(i%2==0){
        
        printf("%d\n",i);
        
    }
       
   }
    
    
    
}
===============================================================
4 d  allOdd=>1-->odd number 
#include<stdio.h>
void oddnumber();
int main()
{
    
    oddnumber();

return 0;
   
    
}
void oddnumber(){
    int i;
    
   for(i=1;i<=100;i++){
       if(i%2==1){
        
        printf("%d\n",i);
        
    }
       
   }
    
    
    
}
===============================================================
4d  ramdomOdd() =>34 89 mid 
#include<stdio.h>
void randomoddnumber();
int main()
{
    
    randomoddnumber();

return 0;
   
    
}
void randomoddnumber(){
    int i;
    
   for(i=34;i<=89;i++){
       if(i%2==1){
        
        printf("%d\n",i);
        
    }
       
   }
    
    
    
}
============================================================================
5
factorial() =>factorial code

===========================================================================
fibonacci
#include<stdio.h>
void fibonacci();
int main ()
{
    fibonacci();
  return 0;
}
void fibonacci(){
    int n,a=0,b=1,c;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d \n",a);
        c=a+b;
        a=b;
        b=c;
        
    }
}

===========================================================================
upercase lower case
#include<stdio.h>
 void checkalpha();
int main(){
    checkalpha();
    return 0;
}
 void checkalpha(){
    char ch;
    printf("enter your alphabet");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z'){
        printf("lowercase");
}
else if (ch>='A'&& ch<='Z'){
    printf("upercase");
}
}
===========================================================================
vowel and consinent
#include<stdio.h>
 void vowel();
int main(){
    vowel();
    return 0;
}
 void vowel(){
    char ch;
    printf("enter your alphabet");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e' || ch=='i'||ch=='o'||ch=='u'){
        printf("vowel");
}
else{
    printf("conjunction");
}
}
============================================================================
leap year





