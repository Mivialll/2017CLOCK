#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <unistd.h>
#include <fcntl.h>
#include <ctime>
#include <ugpio/ugpio.h>
using namespace std;

void nothing();
void error();
void zero(int position);
void one(int position);
void two(int position);
void three(int position);
void four(int position);
void five(int position);
void six(int position);
void seven(int position);
void eight(int position);
void nine(int position);
void print(int number);
void show(int number, double time);
void countup(int number);
void countdown(int number);
void basicdisplay();
void effort();

void nothing()
{
    
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
    int one1,one2,two1,two2,three1,three2,four1,four2;
    
    a=gpio_request(4,NULL);
    b=gpio_request(11,NULL);
    c=gpio_request(5,NULL);
    d=gpio_request(3,NULL);
    e=gpio_request(2,NULL);
    f=gpio_request(1,NULL);
    g=gpio_request(6,NULL);
    o=gpio_request(0,NULL);
    
    one1=gpio_request(45,NULL);
    two1=gpio_request(46,NULL);
    three1=gpio_request(19,NULL);
    four1=gpio_request(18,NULL);
    
    h=gpio_direction_output(4,1);
    i=gpio_direction_output(11,1);
    j=gpio_direction_output(5,1);
    k=gpio_direction_output(3,1);
    l=gpio_direction_output(2,1);
    m=gpio_direction_output(1,1);
    n=gpio_direction_output(6,1);
    p=gpio_direction_input(0);
    
    
    one2=gpio_direction_output(45,0);
    two2=gpio_direction_output(46,0);
    three2=gpio_direction_output(19,0);
    four2=gpio_direction_output(18,0);
}


void zero(int position)
{
    
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    int one1,one2,two1,two2,three1,three2,four1,four2;
    
    a=gpio_request(4,NULL);
    b=gpio_request(11,NULL);
    c=gpio_request(5,NULL);
    d=gpio_request(3,NULL);
    e=gpio_request(2,NULL);
    f=gpio_request(1,NULL);
    g=gpio_request(6,NULL);
    
    one1=gpio_request(45,NULL);
    two1=gpio_request(46,NULL);
    three1=gpio_request(19,NULL);
    four1=gpio_request(18,NULL);
    
    h=gpio_direction_output(4,0);
    i=gpio_direction_output(11,0);
    j=gpio_direction_output(5,0);
    k=gpio_direction_output(3,1);
    l=gpio_direction_output(2,0);
    m=gpio_direction_output(1,0);
    n=gpio_direction_output(6,0);
    
    switch(position)
    {
        case 1:
            one2=gpio_direction_output(45,1);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 2:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,1);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 3:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,1);
            four2=gpio_direction_output(18,0);
            break;
        case 4:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,1);
            break;
    }
}



void one(int position)
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    int one1,one2,two1,two2,three1,three2,four1,four2;
    
    a=gpio_request(4,NULL);
    b=gpio_request(11,NULL);
    c=gpio_request(5,NULL);
    d=gpio_request(3,NULL);
    e=gpio_request(2,NULL);
    f=gpio_request(1,NULL);
    g=gpio_request(6,NULL);
    
    one1=gpio_request(45,NULL);
    two1=gpio_request(46,NULL);
    three1=gpio_request(19,NULL);
    four1=gpio_request(18,NULL);
    
    h=gpio_direction_output(4,1);
    i=gpio_direction_output(11,1);
    j=gpio_direction_output(5,0);
    k=gpio_direction_output(3,1);
    l=gpio_direction_output(2,1);
    m=gpio_direction_output(1,0);
    n=gpio_direction_output(6,1);
    
    switch(position)
    {
        case 1:
            one2=gpio_direction_output(45,1);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 2:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,1);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 3:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,1);
            four2=gpio_direction_output(18,0);
            break;
        case 4:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,1);
            break;
    }
}

void two(int position)
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    int one1,one2,two1,two2,three1,three2,four1,four2;
    
    a=gpio_request(4,NULL);
    b=gpio_request(11,NULL);
    c=gpio_request(5,NULL);
    d=gpio_request(3,NULL);
    e=gpio_request(2,NULL);
    f=gpio_request(1,NULL);
    g=gpio_request(6,NULL);
    
    one1=gpio_request(45,NULL);
    two1=gpio_request(46,NULL);
    three1=gpio_request(19,NULL);
    four1=gpio_request(18,NULL);
    
    h=gpio_direction_output(4,1);
    i=gpio_direction_output(11,0);
    j=gpio_direction_output(5,0);
    k=gpio_direction_output(3,0);
    l=gpio_direction_output(2,0);
    m=gpio_direction_output(1,1);
    n=gpio_direction_output(6,0);
    
    switch(position)
    {
        case 1:
            one2=gpio_direction_output(45,1);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 2:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,1);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 3:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,1);
            four2=gpio_direction_output(18,0);
            break;
        case 4:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,1);
            break;
    }
}

void three(int position)
{
    
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    int one1,one2,two1,two2,three1,three2,four1,four2;
    
    a=gpio_request(4,NULL);
    b=gpio_request(11,NULL);
    c=gpio_request(5,NULL);
    d=gpio_request(3,NULL);
    e=gpio_request(2,NULL);
    f=gpio_request(1,NULL);
    g=gpio_request(6,NULL);
    
    one1=gpio_request(45,NULL);
    two1=gpio_request(46,NULL);
    three1=gpio_request(19,NULL);
    four1=gpio_request(18,NULL);
    
    h=gpio_direction_output(4,1);
    i=gpio_direction_output(11,0);
    j=gpio_direction_output(5,0);
    k=gpio_direction_output(3,0);
    l=gpio_direction_output(2,1);
    m=gpio_direction_output(1,0);
    n=gpio_direction_output(6,0);
    
    switch(position)
    {
        case 1:
            one2=gpio_direction_output(45,1);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 2:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,1);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 3:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,1);
            four2=gpio_direction_output(18,0);
            break;
        case 4:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,1);
            break;
    }
}

void four(int position)
{
    
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    int one1,one2,two1,two2,three1,three2,four1,four2;
    
    a=gpio_request(4,NULL);
    b=gpio_request(11,NULL);
    c=gpio_request(5,NULL);
    d=gpio_request(3,NULL);
    e=gpio_request(2,NULL);
    f=gpio_request(1,NULL);
    g=gpio_request(6,NULL);
    
    one1=gpio_request(45,NULL);
    two1=gpio_request(46,NULL);
    three1=gpio_request(19,NULL);
    four1=gpio_request(18,NULL);
    
    h=gpio_direction_output(4,0);
    i=gpio_direction_output(11,1);
    j=gpio_direction_output(5,0);
    k=gpio_direction_output(3,0);
    l=gpio_direction_output(2,1);
    m=gpio_direction_output(1,0);
    n=gpio_direction_output(6,1);
    
    switch(position)
    {
        case 1:
            one2=gpio_direction_output(45,1);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 2:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,1);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 3:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,1);
            four2=gpio_direction_output(18,0);
            break;
        case 4:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,1);
            break;
    }
}

void five(int position)
{
    
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    int one1,one2,two1,two2,three1,three2,four1,four2;
    
    a=gpio_request(4,NULL);
    b=gpio_request(11,NULL);
    c=gpio_request(5,NULL);
    d=gpio_request(3,NULL);
    e=gpio_request(2,NULL);
    f=gpio_request(1,NULL);
    g=gpio_request(6,NULL);
    
    one1=gpio_request(45,NULL);
    two1=gpio_request(46,NULL);
    three1=gpio_request(19,NULL);
    four1=gpio_request(18,NULL);
    
    h=gpio_direction_output(4,0);
    i=gpio_direction_output(11,0);
    j=gpio_direction_output(5,1);
    k=gpio_direction_output(3,0);
    l=gpio_direction_output(2,1);
    m=gpio_direction_output(1,0);
    n=gpio_direction_output(6,0);
    
    switch(position)
    {
        case 1:
            one2=gpio_direction_output(45,1);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 2:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,1);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 3:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,1);
            four2=gpio_direction_output(18,0);
            break;
        case 4:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,1);
            break;
    }
}

void six(int position)
{
    
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    int one1,one2,two1,two2,three1,three2,four1,four2;
    
    a=gpio_request(4,NULL);
    b=gpio_request(11,NULL);
    c=gpio_request(5,NULL);
    d=gpio_request(3,NULL);
    e=gpio_request(2,NULL);
    f=gpio_request(1,NULL);
    g=gpio_request(6,NULL);
    
    one1=gpio_request(45,NULL);
    two1=gpio_request(46,NULL);
    three1=gpio_request(19,NULL);
    four1=gpio_request(18,NULL);
    
    h=gpio_direction_output(4,0);
    i=gpio_direction_output(11,0);
    j=gpio_direction_output(5,1);
    k=gpio_direction_output(3,0);
    l=gpio_direction_output(2,0);
    m=gpio_direction_output(1,0);
    n=gpio_direction_output(6,0);
    
    switch(position)
    {
        case 1:
            one2=gpio_direction_output(45,1);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 2:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,1);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 3:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,1);
            four2=gpio_direction_output(18,0);
            break;
        case 4:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,1);
            break;
    }
}

void seven(int position)
{
    
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    int one1,one2,two1,two2,three1,three2,four1,four2;
    
    a=gpio_request(4,NULL);
    b=gpio_request(11,NULL);
    c=gpio_request(5,NULL);
    d=gpio_request(3,NULL);
    e=gpio_request(2,NULL);
    f=gpio_request(1,NULL);
    g=gpio_request(6,NULL);
    
    one1=gpio_request(45,NULL);
    two1=gpio_request(46,NULL);
    three1=gpio_request(19,NULL);
    four1=gpio_request(18,NULL);
    
    h=gpio_direction_output(4,1);
    i=gpio_direction_output(11,0);
    j=gpio_direction_output(5,0);
    k=gpio_direction_output(3,1);
    l=gpio_direction_output(2,1);
    m=gpio_direction_output(1,0);
    n=gpio_direction_output(6,1);
    
    switch(position)
    {
        case 1:
            one2=gpio_direction_output(45,1);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 2:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,1);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 3:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,1);
            four2=gpio_direction_output(18,0);
            break;
        case 4:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,1);
            break;
    }
}

void eight(int position)
{
    
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    int one1,one2,two1,two2,three1,three2,four1,four2;
    
    a=gpio_request(4,NULL);
    b=gpio_request(11,NULL);
    c=gpio_request(5,NULL);
    d=gpio_request(3,NULL);
    e=gpio_request(2,NULL);
    f=gpio_request(1,NULL);
    g=gpio_request(6,NULL);
    
    one1=gpio_request(45,NULL);
    two1=gpio_request(46,NULL);
    three1=gpio_request(19,NULL);
    four1=gpio_request(18,NULL);
    
    h=gpio_direction_output(4,0);
    i=gpio_direction_output(11,0);
    j=gpio_direction_output(5,0);
    k=gpio_direction_output(3,0);
    l=gpio_direction_output(2,0);
    m=gpio_direction_output(1,0);
    n=gpio_direction_output(6,0);
    
    switch(position)
    {
        case 1:
            one2=gpio_direction_output(45,1);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 2:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,1);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 3:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,1);
            four2=gpio_direction_output(18,0);
            break;
        case 4:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,1);
            break;
    }
}

void nine(int position)
{
    
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    int one1,one2,two1,two2,three1,three2,four1,four2;
    
    a=gpio_request(4,NULL);
    b=gpio_request(11,NULL);
    c=gpio_request(5,NULL);
    d=gpio_request(3,NULL);
    e=gpio_request(2,NULL);
    f=gpio_request(1,NULL);
    g=gpio_request(6,NULL);
    
    one1=gpio_request(45,NULL);
    two1=gpio_request(46,NULL);
    three1=gpio_request(19,NULL);
    four1=gpio_request(18,NULL);
    
    h=gpio_direction_output(4,0);
    i=gpio_direction_output(11,0);
    j=gpio_direction_output(5,0);
    k=gpio_direction_output(3,0);
    l=gpio_direction_output(2,1);
    m=gpio_direction_output(1,0);
    n=gpio_direction_output(6,0);
    
    switch(position)
    {
        case 1:
            one2=gpio_direction_output(45,1);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 2:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,1);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,0);
            break;
        case 3:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,1);
            four2=gpio_direction_output(18,0);
            break;
        case 4:
            one2=gpio_direction_output(45,0);
            two2=gpio_direction_output(46,0);
            three2=gpio_direction_output(19,0);
            four2=gpio_direction_output(18,1);
            break;
    }
}

void effort()
{
    
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    int one1,one2,two1,two2,three1,three2,four1,four2;
    
    a=gpio_request(4,NULL);
    b=gpio_request(11,NULL);
    c=gpio_request(5,NULL);
    e=gpio_request(2,NULL);
    f=gpio_request(1,NULL);
    g=gpio_request(6,NULL);
    
    one1=gpio_request(45,NULL);
    two1=gpio_request(46,NULL);
    three1=gpio_request(19,NULL);
    four1=gpio_request(18,NULL);
    
    zero(1);
    usleep(50000);
    zero(2);
    usleep(50000);
    zero(3);
    usleep(50000);
    zero(4);
    usleep(50000);
    
    int x=0;
    while (x<10){
        i=gpio_direction_output(11,0);
        one2=gpio_direction_output(45,1);
        two2=gpio_direction_output(46,0);
        three2=gpio_direction_output(19,0);
        four2=gpio_direction_output(18,0);
        usleep(50000);
        one2=gpio_direction_output(45,0);
        two2=gpio_direction_output(46,1);
        three2=gpio_direction_output(19,0);
        four2=gpio_direction_output(18,0);
        usleep(50000);
        one2=gpio_direction_output(45,0);
        two2=gpio_direction_output(46,0);
        three2=gpio_direction_output(19,1);
        four2=gpio_direction_output(18,0);
        usleep(50000);
        one2=gpio_direction_output(45,0);
        two2=gpio_direction_output(46,0);
        three2=gpio_direction_output(19,0);
        four2=gpio_direction_output(18,1);
        usleep(50000);
        i=gpio_direction_output(11,1);
        j=gpio_direction_output(5,0);
        usleep(50000);
        j=gpio_direction_output(5,1);
        m=gpio_direction_output(1,0);
        usleep(50000);
        m=gpio_direction_output(1,1);
        n=gpio_direction_output(6,0);
        usleep(50000);
        one2=gpio_direction_output(45,0);
        two2=gpio_direction_output(46,0);
        three2=gpio_direction_output(19,1);
        four2=gpio_direction_output(18,0);
        usleep(50000);
        one2=gpio_direction_output(45,0);
        two2=gpio_direction_output(46,1);
        three2=gpio_direction_output(19,0);
        four2=gpio_direction_output(18,0);
        usleep(50000);
        one2=gpio_direction_output(45,1);
        two2=gpio_direction_output(46,0);
        three2=gpio_direction_output(19,0);
        four2=gpio_direction_output(18,0);
        usleep(50000);
        n=gpio_direction_output(6,1);
        l=gpio_direction_output(2,0);
        usleep(50000);
        l=gpio_direction_output(2,1);
        h=gpio_direction_output(4,0);
        usleep(50000);
        h=gpio_direction_output(4,1);
        x++;
    }
}


void error()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    int one1,one2,two1,two2,three1,three2,four1,four2;
    a=gpio_request(4,NULL);
    b=gpio_request(11,NULL);
    c=gpio_request(5,NULL);
    d=gpio_request(3,NULL);
    e=gpio_request(2,NULL);
    f=gpio_request(1,NULL);
    g=gpio_request(6,NULL);
    
    one1=gpio_request(45,NULL);
    two1=gpio_request(46,NULL);
    three1=gpio_request(19,NULL);
    four1=gpio_request(18,NULL);
    
    int index=0;
    while (index<1000)
    {
        h=gpio_direction_output(4,0);
        i=gpio_direction_output(11,0);
        j=gpio_direction_output(5,1);
        k=gpio_direction_output(3,0);
        l=gpio_direction_output(2,0);
        m=gpio_direction_output(1,1);
        n=gpio_direction_output(6,0);
        
        one2=gpio_direction_output(45,1);
        two2=gpio_direction_output(46,0);
        three2=gpio_direction_output(19,0);
        four2=gpio_direction_output(18,0);
        
        nothing();
        
        h=gpio_direction_output(4,0);
        i=gpio_direction_output(11,0);
        j=gpio_direction_output(5,0);
        k=gpio_direction_output(3,0);
        l=gpio_direction_output(2,0);
        m=gpio_direction_output(1,0);
        n=gpio_direction_output(6,1);
        
        one2=gpio_direction_output(45,0);
        two2=gpio_direction_output(46,1);
        three2=gpio_direction_output(19,0);
        four2=gpio_direction_output(18,0);
        
        nothing();
        
        h=gpio_direction_output(4,0);
        i=gpio_direction_output(11,0);
        j=gpio_direction_output(5,0);
        k=gpio_direction_output(3,0);
        l=gpio_direction_output(2,0);
        m=gpio_direction_output(1,0);
        n=gpio_direction_output(6,1);
        
        one2=gpio_direction_output(45,0);
        two2=gpio_direction_output(46,0);
        three2=gpio_direction_output(19,1);
        four2=gpio_direction_output(18,0);
        
        nothing();
        
        h=gpio_direction_output(4,0);
        i=gpio_direction_output(11,0);
        j=gpio_direction_output(5,0);
        k=gpio_direction_output(3,1);
        l=gpio_direction_output(2,0);
        m=gpio_direction_output(1,0);
        n=gpio_direction_output(6,0);
        
        one2=gpio_direction_output(45,0);
        two2=gpio_direction_output(46,0);
        three2=gpio_direction_output(19,0);
        four2=gpio_direction_output(18,1);
        
        nothing();
    }
    
    
}


void print(int number)
{
    
    int a1=number/1000;
    number=number-a1*1000;
    int a2=number/100;
    number=number-a2*100;
    int a3=number/10;
    int a4=number-a3*10;
    
    
    switch(a1)
    {
        case 1:
            one(1);
            break;
        case 2:
            two(1);
            break;
        case 3:
            three(1);
            break;
        case 4:
            four(1);
            break;
        case 5:
            five(1);
            break;
        case 6:
            six(1);
            break;
        case 7:
            seven(1);
            break;
        case 8:
            eight(1);
            break;
        case 9:
            nine(1);
            break;
        case 0:
            zero(1);
            break;
            
    }
    
    nothing();
    
    switch(a2)
    {
        case 1:
            one(2);
            break;
        case 2:
            two(2);
            break;
        case 3:
            three(2);
            break;
        case 4:
            four(2);
            break;
        case 5:
            five(2);
            break;
        case 6:
            six(2);
            break;
        case 7:
            seven(2);
            break;
        case 8:
            eight(2);
            break;
        case 9:
            nine(2);
            break;
        case 0:
            zero(2);
            break;
    }
    
    nothing();
    switch(a3)
    {
        case 1:
            one(3);
            break;
        case 2:
            two(3);
            break;
        case 3:
            three(3);
            break;
        case 4:
            four(3);
            break;
        case 5:
            five(3);
            break;
        case 6:
            six(3);
            break;
        case 7:
            seven(3);
            break;
        case 8:
            eight(3);
            break;
        case 9:
            nine(3);
            break;
        case 0:
            zero(3);
            break;
    }
    
    nothing();
    
    switch(a4)
    {
        case 1:
            one(4);
            break;
        case 2:
            two(4);
            break;
        case 3:
            three(4);
            break;
        case 4:
            four(4);
            break;
        case 5:
            five(4);
            break;
        case 6:
            six(4);
            break;
        case 7:
            seven(4);
            break;
        case 8:
            eight(4);
            break;
        case 9:
            nine(4);
            break;
        case 0:
            zero(4);
            break;
    }
    
    nothing();
    
}

void onesec(int number, double time)
{
    double time1 =(double)clock();
    time1=time1/CLOCKS_PER_SEC;
    int index=1;
    
    while (index==1)
    {
        print(number);
        if (((double)(clock()/CLOCKS_PER_SEC)-time1)>(0.45*time))
        {
            break;
        }
    }
}

void countup(int number)
{
    int r=0;
    for (int i=0; i<=number; i++)
    {
        r=gpio_get_value(0);
        if (r==0){
            onesec(i,1);
        }
        if (r==1){
            for (int j=0;j<6;j++){
                print(i);
            }
        }
    }
    nothing();
    usleep(1000000);
    effort();
    nothing();
}

void countdown(int number)
{
    int r=0;
    for (int i=number; i>=0; i--)
    {
        r=gpio_get_value(0);
        if (r==0){
            onesec(i,1);
        }
        if (r==1){
            for (int j=0;j<6;j++){
                print(i);
            }
        }
    }
    nothing();
    usleep(1000000);
    effort();
    nothing();
}

void basicdisplay()
{
    for(int i=1;i<5;i++)
    {
        zero(i);
        usleep(500000);
        one(i);
        usleep(500000);
        two(i);
        usleep(500000);
        three(i);
        usleep(500000);
        four(i);
        usleep(500000);
        five(i);
        usleep(500000);
        six(i);
        usleep(500000);
        seven(i);
        usleep(500000);
        eight(i);
        usleep(500000);
        nine(i);
        usleep(500000);
    }
    nothing();
}

void time()
{
    time_t now;
    struct tm *timenow;
    time(&now);
    timenow=localtime(&now);
    int nowmonth=timenow->tm_mon+2;
    int nowday=timenow->tm_mday;
    int nowyear=timenow->tm_year;
    int x=0;
}



int main(const int argc, const char* const argv[])
{
    int selection;
    int number;
    int x;
    nothing();
    cout<<"Hello my deer TAs and Instructor!"<<endl;
    cout<<"Welcome to use Onion Omega 2 smart clock!"<< endl;
    
    cout<<"Function Menu:"<<endl;
    cout<<"1: Basic Display of Digits"<<endl;
    cout<<"2: Display the number"<<endl;
    cout<<"3: Clock"<<endl;
    cout<<"4. Counter"<< endl;
    cin >> selection;
    switch (selection){
        case 1:
            basicdisplay();
            break;
        case 2:
            x=0;
            cout<<"Which number do you want to print?"<<endl;
            cin >> number;
            while (x<200){
                print(number);
                x++;
            }
            break;
        case 3:
            time_t now;
            struct tm *timenow;
            time(&now);
            timenow=localtime(&now);
            int nowmonth=timenow->tm_mon+2;
            int nowday=timenow->tm_mday;
            int nowyear=timenow->tm_year;
            int nowhour=timenow->tm_hour;
            int nowmin=timenow->tm_min;
            x=0;
            while (x<200){
                time(&now);
                timenow=localtime(&now);
                nowhour=timenow->tm_hour;
                nowmin=timenow->tm_min;
                print((nowhour-5)*100+nowmin);
                x++;
            }
            break;
            
        case 4:
            int counternumber;
            cout<<endl;
            cout<<"1. Count Up"<<endl;
            cout<<"2. Count Down"<<endl;
            int choiceCounter;
            cin >> choiceCounter;
            switch (choiceCounter) {
                case 1:
                    cout << "Which number?" << endl;
                    cin >> counternumber;
                    countup(counternumber);
                    break;
                case 2:
                    cout << "Which number?" << endl;
                    cin >> counternumber;
                    countdown(counternumber);
                    break;
            }
            break;
    }
    return 0;
}
