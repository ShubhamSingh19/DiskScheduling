#include<graphics.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>
#define mx getmaxx()
#define my getmaxy()

using namespace std;

char str[100];
int tw,th;

long absolute(long a,long b)
{
    long c;
    c=a-b;
    if(c<0)
        return -c;
    else
        return c;
}

int input(int x,int y)
{
    char ch;
    int i=0;
    str[0]='\0';
    while(1)
    {
        ch=getch();
        if(ch==13) break;
        if(ch==8){i--; if(i<0)i=0; str[i]='\0';}
        else if(ch>='0' && ch<='9') {str[i++]=ch; str[i]='\0';}
        setfillstyle(1,BLACK);
        bar(x-50,y,mx-250,y+23);
        setcolor(BLACK);
        setbkcolor(LIGHTCYAN);
        outtextxy(x-50,y,str);
    }
    return atoi(str);
}


void allbar(int ch)
{
    setbkcolor(BLACK);
    int bh=25;
    int tx=textwidth("1. FCFS");
    int tx2=textwidth("2. CLOOK");
    readimagefile("3.jpg",0,0,mx,my);
    settextstyle(10,0,3);
    bar(0,my/13,mx,my/8);
    setcolor(LIGHTCYAN);
    outtextxy(mx/2-textwidth("Please select an option to continue")/2,my/10-textheight("Please select an option to continue")/2,"Please select an option to continue");
    settextstyle(10,0,3);


    if(ch==0)
    {
        setfillstyle(1,LIGHTCYAN);
        bar(0,4*my/12,mx,5*my/12-bh);
        setfillstyle(1,BLACK);
        bar(0,5*my/12,mx,6*my/12-bh);
        bar(0,6*my/12,mx,7*my/12-bh);
        bar(0,7*my/12,mx,8*my/12-bh);
        bar(0,8*my/12,mx,9*my/12-bh);
        bar(0,9*my/12,mx,10*my/12-bh);
        bar(0,10*my/12,mx,11*my/12-bh);

        setbkcolor(LIGHTCYAN);
        setcolor(BLACK);
        outtextxy(mx/2-tx/2,4*my/12,"1. FCFS");
        setbkcolor(BLACK);
        setcolor(LIGHTCYAN);
        outtextxy(mx/2-tx/2,5*my/12,"2. SSTF");
        outtextxy(mx/2-tx/2,6*my/12,"3. SCAN");
        outtextxy(mx/2-tx2/2,7*my/12,"4. CSCAN");
        outtextxy(mx/2-tx/2,8*my/12,"5. LOOK");
        outtextxy(mx/2-tx2/2,9*my/12,"6. CLOOK");
        outtextxy(mx/2-tx/2,10*my/12,"7. EXIT");
    }

    if(ch==1)
    {
        setfillstyle(1,LIGHTCYAN);
        bar(0,5*my/12,mx,6*my/12-bh);
        setfillstyle(1,BLACK);
        bar(0,4*my/12,mx,5*my/12-bh);
        bar(0,6*my/12,mx,7*my/12-bh);
        bar(0,7*my/12,mx,8*my/12-bh);
        bar(0,8*my/12,mx,9*my/12-bh);
        bar(0,9*my/12,mx,10*my/12-bh);
        bar(0,10*my/12,mx,11*my/12-bh);

        setbkcolor(LIGHTCYAN);
        setcolor(BLACK);
        outtextxy(mx/2-tx/2,5*my/12,"2. SSTF");
        setbkcolor(BLACK);
        setcolor(LIGHTCYAN);
        outtextxy(mx/2-tx/2,4*my/12,"1. FCFS");
        outtextxy(mx/2-tx/2,6*my/12,"3. SCAN");
        outtextxy(mx/2-tx2/2,7*my/12,"4. CSCAN");
        outtextxy(mx/2-tx/2,8*my/12,"5. LOOK");
        outtextxy(mx/2-tx2/2,9*my/12,"6. CLOOK");
        outtextxy(mx/2-tx/2,10*my/12,"7. EXIT");
    }

    if(ch==2)
    {
        setfillstyle(1,LIGHTCYAN);
        bar(0,6*my/12,mx,7*my/12-bh);
        setfillstyle(1,BLACK);
        bar(0,4*my/12,mx,5*my/12-bh);
        bar(0,5*my/12,mx,6*my/12-bh);
        bar(0,7*my/12,mx,8*my/12-bh);
        bar(0,8*my/12,mx,9*my/12-bh);
        bar(0,9*my/12,mx,10*my/12-bh);
        bar(0,10*my/12,mx,11*my/12-bh);

        setbkcolor(LIGHTCYAN);
        setcolor(BLACK);
        outtextxy(mx/2-tx/2,6*my/12,"3. SCAN");
        setbkcolor(BLACK);
        setcolor(LIGHTCYAN);
        outtextxy(mx/2-tx/2,4*my/12,"1. FCFS");
        outtextxy(mx/2-tx/2,5*my/12,"2. SSTF");
        outtextxy(mx/2-tx2/2,7*my/12,"4. CSCAN");
        outtextxy(mx/2-tx/2,8*my/12,"5. LOOK");
        outtextxy(mx/2-tx2/2,9*my/12,"6. CLOOK");
        outtextxy(mx/2-tx/2,10*my/12,"7. EXIT");
    }

    if(ch==3)
    {
        setfillstyle(1,LIGHTCYAN);
        bar(0,7*my/12,mx,8*my/12-bh);
        setfillstyle(1,BLACK);
        bar(0,4*my/12,mx,5*my/12-bh);
        bar(0,5*my/12,mx,6*my/12-bh);
        bar(0,6*my/12,mx,7*my/12-bh);
        bar(0,8*my/12,mx,9*my/12-bh);
        bar(0,9*my/12,mx,10*my/12-bh);
        bar(0,10*my/12,mx,11*my/12-bh);

        setbkcolor(LIGHTCYAN);
        setcolor(BLACK);
        outtextxy(mx/2-tx2/2,7*my/12,"4. CSCAN");
        setbkcolor(BLACK);
        setcolor(LIGHTCYAN);
        outtextxy(mx/2-tx/2,4*my/12,"1. FCFS");
        outtextxy(mx/2-tx/2,5*my/12,"2. SSTF");
        outtextxy(mx/2-tx/2,6*my/12,"3. SCAN");
        outtextxy(mx/2-tx/2,8*my/12,"5. LOOK");
        outtextxy(mx/2-tx2/2,9*my/12,"6. CLOOK");
        outtextxy(mx/2-tx/2,10*my/12,"7. EXIT");
    }

    if(ch==4)
    {
        setfillstyle(1,LIGHTCYAN);
        bar(0,8*my/12,mx,9*my/12-bh);
        setfillstyle(1,BLACK);
        bar(0,4*my/12,mx,5*my/12-bh);
        bar(0,5*my/12,mx,6*my/12-bh);
        bar(0,6*my/12,mx,7*my/12-bh);
        bar(0,7*my/12,mx,8*my/12-bh);
        bar(0,9*my/12,mx,10*my/12-bh);
        bar(0,10*my/12,mx,11*my/12-bh);

        setbkcolor(LIGHTCYAN);
        setcolor(BLACK);
        outtextxy(mx/2-tx/2,8*my/12,"5. LOOK");
        setbkcolor(BLACK);
        setcolor(LIGHTCYAN);
        outtextxy(mx/2-tx/2,4*my/12,"1. FCFS");
        outtextxy(mx/2-tx/2,5*my/12,"2. SSTF");
        outtextxy(mx/2-tx/2,6*my/12,"3. SCAN");
        outtextxy(mx/2-tx2/2,7*my/12,"4. CSCAN");
        outtextxy(mx/2-tx2/2,9*my/12,"6. CLOOK");
        outtextxy(mx/2-tx/2,10*my/12,"7. EXIT");
    }

    if(ch==5)
    {
        setfillstyle(1,LIGHTCYAN);
        bar(0,9*my/12,mx,10*my/12-bh);
        setfillstyle(1,BLACK);
        bar(0,4*my/12,mx,5*my/12-bh);
        bar(0,5*my/12,mx,6*my/12-bh);
        bar(0,6*my/12,mx,7*my/12-bh);
        bar(0,7*my/12,mx,8*my/12-bh);
        bar(0,8*my/12,mx,9*my/12-bh);
        bar(0,10*my/12,mx,11*my/12-bh);

        setbkcolor(LIGHTCYAN);
        setcolor(BLACK);
        outtextxy(mx/2-tx2/2,9*my/12,"6. CLOOK");
        setbkcolor(BLACK);
        setcolor(LIGHTCYAN);
        outtextxy(mx/2-tx/2,4*my/12,"1. FCFS");
        outtextxy(mx/2-tx/2,5*my/12,"2. SSTF");
        outtextxy(mx/2-tx/2,6*my/12,"3. SCAN");
        outtextxy(mx/2-tx2/2,7*my/12,"4. CSCAN");
        outtextxy(mx/2-tx/2,8*my/12,"5. LOOK");
        outtextxy(mx/2-tx/2,10*my/12,"7. EXIT");
    }

    if(ch==6)
    {
        setfillstyle(1,LIGHTCYAN);
        bar(0,10*my/12,mx,11*my/12-bh);
        setfillstyle(1,BLACK);
        bar(0,4*my/12,mx,5*my/12-bh);
        bar(0,5*my/12,mx,6*my/12-bh);
        bar(0,6*my/12,mx,7*my/12-bh);
        bar(0,7*my/12,mx,8*my/12-bh);
        bar(0,8*my/12,mx,9*my/12-bh);
        bar(0,9*my/12,mx,10*my/12-bh);

        setbkcolor(LIGHTCYAN);
        setcolor(BLACK);
        outtextxy(mx/2-tx/2,10*my/12,"7. EXIT");
        setbkcolor(BLACK);
        setcolor(LIGHTCYAN);
        outtextxy(mx/2-tx/2,4*my/12,"1. FCFS");
        outtextxy(mx/2-tx/2,5*my/12,"2. SSTF");
        outtextxy(mx/2-tx/2,6*my/12,"3. SCAN");
        outtextxy(mx/2-tx2/2,7*my/12,"4. CSCAN");
        outtextxy(mx/2-tx/2,8*my/12,"5. LOOK");
        outtextxy(mx/2-tx2/2,9*my/12,"6. CLOOK");

    }
}


void mainmenu(int ch)
{
    int bh=25;
    readimagefile("2.jpg",0,0,mx,my);
    settextstyle(10,0,3);
    bar(0,my/13,mx,my/8);
    setcolor(LIGHTBLUE);
    outtextxy(mx/2-textwidth("Please select an option to continue")/2,my/10-textheight("Please select an option to continue")/2,"Please select an option to continue");
    settextstyle(10,0,3);

    if(ch==0)
    {
        setfillstyle(1,LIGHTBLUE);
        bar(0,4*my/12,mx,5*my/12-bh);
        setfillstyle(1,BLACK);
        bar(0,6*my/12,mx,7*my/12-bh);
        bar(0,8*my/12,mx,9*my/12-bh);

        setbkcolor(LIGHTBLUE);
        setcolor(BLUE);
        outtextxy(mx/6,4*my/12,"1. RANDOM VALUES");
        setbkcolor(BLACK);
        setcolor(WHITE);
        outtextxy(mx/6,6*my/12,"2. INPUT VALUES");
        outtextxy(mx/6,8*my/12,"3. EXIT");
    }

    if(ch==1)
    {
        setfillstyle(1,LIGHTBLUE);
        bar(0,6*my/12,mx,7*my/12-bh);
        setfillstyle(1,BLACK);
        bar(0,4*my/12,mx,5*my/12-bh);
        bar(0,8*my/12,mx,9*my/12-bh);

        setbkcolor(LIGHTBLUE);
        setcolor(BLUE);
        outtextxy(mx/6,6*my/12,"2. INPUT VALUES");
        setbkcolor(BLACK);
        setcolor(WHITE);
        outtextxy(mx/6,4*my/12,"1. RANDOM VALUES");
        outtextxy(mx/6,8*my/12,"3. EXIT");
    }

    if(ch==2)
    {
        setfillstyle(1,LIGHTBLUE);
        bar(0,8*my/12,mx,9*my/12-bh);
        setfillstyle(1,BLACK);
        bar(0,4*my/12,mx,5*my/12-bh);
        bar(0,6*my/12,mx,7*my/12-bh);

        setbkcolor(LIGHTBLUE);
        setcolor(BLUE);
        outtextxy(mx/6,8*my/12,"3. EXIT");
        setbkcolor(BLACK);
        setcolor(WHITE);
        outtextxy(mx/6,4*my/12,"1. RANDOM VALUES");
        outtextxy(mx/6,6*my/12,"2. INPUT VALUES");

    }


}

void start()
{
    readimagefile("1.jpg",0,0,mx,my);
    setcolor(LIGHTBLUE);
    setbkcolor(BLACK);
    settextstyle(10, HORIZ_DIR, 3);
    tw=textwidth("Welcome to disk scheduling analysis software");
    th=textheight("Welcome to disk scheduling analysis software");
    outtextxy(mx/2-tw/2,10,"Welcome to disk scheduling analysis software");
    settextstyle(10, HORIZ_DIR, 3);
    setbkcolor(WHITE);
    setcolor(BLUE);
    outtextxy(mx/2-textwidth("Created By")/2,19*my/24+40,"Created By");
    setfillstyle(SOLID_FILL,BLACK);
    bar(0,my-2*th,mx,my-23);
    setbkcolor(BLACK);
    setcolor(LIGHTBLUE);
    outtextxy(10,my-2*th,"Shubham Dwivedi");
    outtextxy(mx/2-textwidth("Ritik Jain")-50,my-2*th,"Ritik Jain");
    outtextxy(mx/2+50,my-2*th,"Ishan Agarwal");
    outtextxy(mx-textwidth("Shubham Singh")-10,my-2*th,"Shubham Singh");
}
struct arccoordstype a, b;
struct arccoordstype a2, b2;
float angle=270;
void c1(int a1)
{
    setbkcolor(CYAN);
    setcolor(CYAN);
    arc(getmaxx()/2,getmaxy()/2,angle-a1,angle-a1,35);
    getarccoords(&a);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    fillellipse(a.xstart,a.ystart,4,4);
}
int main()
{
    int gd=VGA,gm=VGAHI,page=0;
    float angle1 = 90;
    char str[100],ch,s[100],val,mval=1;
    long m=600,n=10,star=100,i=0;
    int a[100]={},b[100],c[100],j,count,x,pos,mi;

    initgraph(&gd,&gm,"");
    DWORD shr=GetSystemMetrics(SM_CYSCREEN);
    DWORD swr=GetSystemMetrics(SM_CXSCREEN);
    int sh=(2*shr/3);
    int sw=(2*swr/3);
    initwindow(sw,sh,"Disk Scheduling",-3,-3,false,true);

   delay(800);
   while(angle1<=450)
   {
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle1,angle1+1,50);
      setcolor(RED);
      getarccoords(&a2);
      circle(a2.xstart,a2.ystart,25);
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle1,angle1+1,100);
      setcolor(BLUE);
      getarccoords(&a2);
      circle(a2.xstart,a2.ystart,25);
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle1,angle1+1,150);
      getarccoords(&a2);
      setcolor(CYAN);
      circle(a2.xstart,a2.ystart,25);
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle1,angle1+1,200);
      setcolor(LIGHTCYAN);
      getarccoords(&a2);
      circle(a2.xstart,a2.ystart,25);
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle1,angle1+1,250);
      angle1 = angle1+2;
      delay(1);
   }
   delay(500);
   setcolor(LIGHTCYAN);
   outtextxy(30,20,"Shubham Dwivedi");
   outtextxy(30,40,"16103020");
   delay(500);

   outtextxy(sw-120,20,"Ishan Agarwal");
   outtextxy(sw-120,40,"16103242");
   delay(500);

   outtextxy(30,sh-60,"Ritik Jain");
   outtextxy(30,sh-40,"16103240");
   delay(500);

   outtextxy(sw-150,sh-60,"Shubham Kr Singh");
   outtextxy(sw-150,sh-40,"16103030");
   delay(500);

   settextstyle(BOLD_FONT,HORIZ_DIR,3);
   outtextxy(181,sh/2-12,"PRESS");
   delay(400);
   outtextxy(sw/2-7,sh/2-12,"A");
   delay(400);
   outtextxy(sw-250,sh/2-12,"KEY!!");

   delay(500);
   getch();

    start();
    getch();

    setbkcolor(CYAN);
    setcolor(CYAN);
    settextstyle(10,HORIZ_DIR,1);
    delay(300);

     while(angle!=1230)
     {
         setactivepage(page);
         setvisualpage(1-page);
         cleardevice();

         setcolor(BLACK);
         outtextxy((getmaxx()/2)-45,(getmaxy()/2)+70,"Loading...");

         if(angle>=0 && angle<=990)
         c1(0);

         if(angle>=300 && angle<=990)
            c1(30);

         if(angle>=330 && angle<=990)
            c1(60);

         if(angle>=360 && angle<=990)
            c1(90);

         if(angle>=390 && angle<=990)
            c1(120);

         if(angle>=420 && angle<=990)
            c1(150);

         if(angle>=450 && angle<=990)
            c1(180);

         if(angle>=480 && angle<=990)
            c1(210);

        if(angle>990 && angle<=1020)
        {
            c1(30);
            c1(60);
            c1(90);
            c1(120);
            c1(150);
            c1(180);
            c1(210);
        }
        if(angle>1020 && angle<=1050)
        {
            c1(60);
            c1(90);
            c1(120);
            c1(150);
            c1(180);
            c1(210);
        }
        if(angle>1050 && angle<=1080)
        {
            c1(90);
            c1(120);
            c1(150);
            c1(180);
            c1(210);
        }
        if(angle>1080 && angle<=1110)
        {
            c1(120);
            c1(150);
            c1(180);
            c1(210);
        }
        if(angle>1110 && angle<=1140)
        {
            c1(150);
            c1(180);
            c1(210);
        }
        if(angle>1140 && angle<=1170)
        {
            c1(180);
            c1(210);
        }
        if(angle>1170 && angle<=1200)
        {
            c1(210);
        }
        if(angle>1200)
        {

        }
         angle=angle+2;
         delay(1);
         page=1-page;
     }
     setactivepage(page);
     cleardevice();
     outtextxy((getmaxx()/2)-45,(getmaxy()/2)+70,"Lets Go!!");
     getch();
     setbkcolor(BLACK);

    while(true){

        cleardevice();
        i=0;
        do
        {
            mainmenu(i);
            ch=getch();
            if(ch==13) break;//ascii(13) = "enter" ,ascii(27) = "esc"
            if(ch==27) exit(0);
            if(ch==KEY_UP) i--;
            if(ch==KEY_DOWN) i++;
            if(i<0) i=0;
            if(i>2) i=2;
        }while(1);

        switch(i)
        {
            case 0:   //RANDOM VALUES
                m=600;
                n=10;
                star=100;
                for(i=0;i<10;i++)
                {
                    a[i]=rand()%600;
                }
            break;
            case 1:    //INPUT VALUE
                cleardevice();
                readimagefile("5.jpg",0,0,mx,my);
                setcolor(LIGHTCYAN);
                line(0,120,mx,120);
                setcolor(BLACK);
                setbkcolor(LIGHTCYAN);
                settextstyle(10,0,3);
                outtextxy(mx/2-textwidth("HARD DISK INFORMATION")/2,100,"HARD DISK INFORMATION");

                settextstyle(10,0,3);

                outtextxy(mx/8-28,200,"Enter the number of cylinders : ");
                m=input(3*mx/4,200);

                outtextxy(mx/8-28,300,"Enter the number of requests :");
                n=input(3*mx/4,300);

                outtextxy(mx/8-28,400,"Enter current position :");
                star=input(3*mx/4,400);

                cleardevice();
                setcolor(LIGHTCYAN);
                line(0,120,mx,120);
                readimagefile("5.jpg",0,0,mx,my);
                setcolor(BLACK);
                settextstyle(10,0,3);
                outtextxy(mx/2-textwidth("POSITION INFORMATION")/2,100,"POSITION INFORMATION");

                settextstyle(10,0,3);
                for(j=0;j<n;j++)
                {
                    sprintf(str,"Enter Position %ld : ",j+1);
                    outtextxy(mx/3-60,250,str);
                    a[j]=input(3*mx/4,250);
                }
            break;
            case 2:
                exit(0);
            break;
        }

        do{
            cleardevice();
            i=0;
            do
            {
                allbar(i);
                ch=getch();
                if(ch==13) break;
                if(ch==27) break;
                if(ch==KEY_UP) i--;
                if(ch==KEY_DOWN) i++;
                if(i<0) i=0;
                if(i>6) i=6;
            }while(1);
            val=1;
            count=0;
            x=star;
            int d=0;
            switch(i){
                case 0://FCFS
                    cleardevice();
                    readimagefile("4.jpg",0,0,mx,my);
                    settextstyle(10,HORIZ_DIR,3);
                    outtextxy(mx/2-textwidth("FCFS"),my/48,"FCFS");

                    settextstyle(10,0,1);
                    for(i=0;i<n;i++)
                    {
                        x-=a[i];
                        if(x<0)
                        x=-x;
                        count+=x;
                        x=a[i];
                        setlinestyle(3,0,1);
                        line(40+a[i],100,40+a[i],450);
                        setlinestyle(0,0,1);
                        setcolor(YELLOW);
                        if(i==0){ line(40+star,i*20+100,40+a[i],i*20+120); sprintf(str,"%ld",a[0]); outtextxy(0,120,str); }
                        else{ line(40+a[i-1],i*20+100,40+a[i],i*20+120); sprintf(str,"%ld",a[i]); outtextxy(0,i*20+120,str); }
                        setcolor(LIGHTCYAN);
                        getch();
                    }
                    settextstyle(10,0,3);
                    sprintf(str,"Total Head Movement :%ld Cylinders",count);
                    outtextxy(mx/2-textwidth("Total Head Movement :%ld Cylinders")/2,9*my/10,str);
                    getch();
                break;

                case 1: //SSTF
                    cleardevice();
                    readimagefile("4.jpg",0,0,mx,my);
                    settextstyle(10,HORIZ_DIR,3);
                    outtextxy(mx/2-textwidth("SSTF"),10,"SSTF");
                    settextstyle(10,0,1);
                    for(i=0;i<n;i++) b[i]=a[i];

                    for(i=0;i<n;i++)
                    {
                        mi=absolute(b[i],x);
                        pos=i;
                        for(j=i;j<n;j++)
                            if(mi>absolute(x,b[j]))
                            {
                                pos=j;
                                mi=absolute(x,b[j]);
                            }
                        count+=absolute(x,b[pos]);
                        x=b[pos];
                        b[pos]=b[i];
                        b[i]=x;
                    }

                    settextstyle(10,0,1);
                    setlinestyle(3,0,1);
                    line(40+b[0],100,40+b[0],450);
                    setlinestyle(1,0,1);
                    setcolor(YELLOW);
                    line(40+star,100,40+b[0],120);
                    sprintf(str,"%ld",b[0]);
                    outtextxy(0,120,str);
                    getch();
                    for(i=1;i<n;i++)
                    {
                        setlinestyle(3,0,1);
                        setcolor(LIGHTCYAN);
                        line(40+b[i],100,40+b[i],450);
                        setlinestyle(1,0,1);
                        setcolor(YELLOW);
                        line(40+b[i-1],i*20+100,40+b[i],i*20+120);
                        sprintf(str,"%ld",b[i]);
                        outtextxy(0,i*20+120,str);
                        getch();
                    }

                    settextstyle(10,0,3);
                    setcolor(LIGHTCYAN);
                    sprintf(str,"Total Head Movement :%ld Cylinders",count);
                    outtextxy(mx/2-textwidth("Total Head Movement :%ld Cylinders")/2,9*my/10,str);
                    getch();
                break;

                case 2: //SCAN
                    cleardevice();
                    readimagefile("4.jpg",0,0,mx,my);
                    settextstyle(10,HORIZ_DIR,3);
                    outtextxy(mx/2-textwidth("SCAN"),10,"SCAN");
                    settextstyle(10,0,1);
                    for(i=0;i<n;i++) b[i]=a[i];
                    count=0;
                    pos=0;
                    d=0;
                    for(i=0;i<n;i++)
                        for(j=0;j<n-i-1;j++)
                            if(b[j]>b[j+1])
                            {
                                x=b[j];
                                b[j]=b[j+1];
                                b[j+1]=x;
                            }
                    for(i=0;i<n;i++)
                        if(b[i]<star)
                            pos++;
                    for(i=0;i<pos;i++)
                        for(j=0;j<pos-i-1;j++)
                            if(b[j]<b[j+1])
                            {
                                x=b[j];
                                b[j]=b[j+1];
                                b[j+1]=x;
                            }
                    x=star;
                    c[d++]=x;
                    for(i=0;i<pos;i++)
                    {
                        count+=absolute(b[i],x);
                        x=b[i];
                        c[d++]=x;
                    }
                    count+=absolute(x,0);
                    x=0;
                    c[d++]=x;
                    for(i=pos;i<n;i++)
                    {
                        count+=absolute(b[i],x);
                        x=b[i];
                        c[d++]=x;
                    }

                    settextstyle(10,0,1);
                    setlinestyle(3,0,1);
                    setcolor(LIGHTCYAN);
                    line(40+c[0],100,40+c[0],450);
                    setlinestyle(1,0,1);
                    setcolor(YELLOW);
                    line(40+star,100,40+c[0],120);
                    sprintf(str,"%ld",c[0]);
                    outtextxy(0,120,str);
                    getch();
                    for(i=1;i<d;i++)
                    {
                        setlinestyle(3,0,1);
                        setcolor(LIGHTCYAN);
                        line(40+c[i],100,40+c[i],450);
                        setlinestyle(0,0,1);
                        setcolor(YELLOW);
                        line(40+c[i-1],i*20+100,40+c[i],i*20+120);
                        sprintf(str,"%ld",c[i]);
                        outtextxy(0,i*20+120,str);
                        getch();
                    }

                    settextstyle(10,0,3);
                    setcolor(LIGHTCYAN);
                    sprintf(str,"Total Head Movement :%ld Cylinders",count);
                    outtextxy(mx/2-textwidth("Total Head Movement :%ld Cylinders")/2,9*my/10,str);
                    getch();
                break;

                case 3: //CSCAN
                    cleardevice();
                    readimagefile("4.jpg",0,0,mx,my);
                    settextstyle(10,HORIZ_DIR,3);
                    outtextxy(mx/2-textwidth("CSCAN"),10,"CSCAN");
                    settextstyle(10,0,1);
                    for(i=0;i<n;i++) b[i]=a[i];
                    count=0;
                    pos=0;
                    d=0;
                    for(i=0;i<n;i++)
                        for(j=0;j<n-i-1;j++)
                            if(b[j]>b[j+1])
                            {
                                x=b[j];
                                b[j]=b[j+1];
                                b[j+1]=x;
                            }
                    for(i=0;i<n;i++)
                        if(b[i]<star)
                            pos++;
                    x=star;
                    c[d++]=x;
                    for(i=pos;i<n;i++)
                    {
                        count+=absolute(x,b[i]);
                        x=b[i];
                        c[d++]=x;
                    }
                    count+=absolute(m-1,x);
                    x=0;
                    if(pos>0)
                    {
                        if(c[d-1]<=c[d-2]){
                        c[d++]=x;
                        c[d++]=m;}
                        else{
                        c[d++]=m;
                        c[d++]=x;
                        }
                    }
                    for(i=0;i<pos;i++)
                    {
                        count+=absolute(x,b[i]);
                        x=b[i];
                        c[d++]=x;
                    }

                    settextstyle(10,0,1);
                    setlinestyle(3,0,1);
                    setcolor(LIGHTCYAN);
                    line(40+c[0],100,40+c[0],450);
                    setlinestyle(0,0,1);
                    setcolor(YELLOW);
                    line(40+star,100,40+c[0],120);
                    sprintf(str,"%ld",c[0]);
                    outtextxy(0,120,str);
                    getch();
                    for(i=1;i<d;i++)
                    {
                        setlinestyle(3,0,1);
                        setcolor(LIGHTCYAN);
                        line(40+c[i],100,40+c[i],450);
                        setlinestyle(0,0,1);
                        setcolor(YELLOW);
                        line(40+c[i-1],i*20+100,40+c[i],i*20+120);
                        sprintf(str,"%ld",c[i]);
                        outtextxy(0,i*20+120,str);
                        getch();
                    }

                    settextstyle(10,0,3);
                    setcolor(LIGHTCYAN);
                    sprintf(str,"Total Head Movement :%ld Cylinders",count);
                    outtextxy(mx/2-textwidth("Total Head Movement :%ld Cylinders")/2,9*my/10,str);
                    delay(3000);
                    getch();
                    getch();
                break;

                case 4: //LOOK
                    cleardevice();
                    readimagefile("4.jpg",0,0,mx,my);
                    settextstyle(10,HORIZ_DIR,3);
                    outtextxy(mx/2-textwidth("LOOK"),10,"LOOK");
                    settextstyle(10,0,1);
                    for(i=0;i<n;i++) b[i]=a[i];
                    count=0;
                    pos=0;
                    for(i=0;i<n;i++)
                        for(j=0;j<n-i-1;j++)
                            if(b[j]>b[j+1])
                            {
                                x=b[j];
                                b[j]=b[j+1];
                                b[j+1]=x;
                            }
                    for(i=0;i<n;i++)
                        if(b[i]<star)
                            pos++;
                    for(i=0;i<pos;i++)
                        for(j=0;j<pos-i-1;j++)
                            if(b[j]<b[j+1])
                            {
                                x=b[j];
                                b[j]=b[j+1];
                                b[j+1]=x;
                            }
                    x=star;
                    for(i=0;i<pos;i++)
                    {
                        count+=absolute(b[i],x);
                        x=b[i];
                    }
                    for(i=pos;i<n;i++)
                    {
                        count+=absolute(b[i],x);
                        x=b[i];
                    }

                    settextstyle(10,0,1);
                    setlinestyle(3,0,1);
                    setcolor(LIGHTCYAN);
                    line(40+b[0],100,40+b[0],450);
                    setlinestyle(0,0,1);
                    setcolor(YELLOW);
                    line(40+star,100,40+b[0],120);
                    sprintf(str,"%ld",b[0]);
                    outtextxy(0,120,str);
                    getch();
                    for(i=1;i<n;i++)
                    {
                        setlinestyle(3,0,1);
                        setcolor(LIGHTCYAN);
                        line(40+b[i],100,40+b[i],450);
                        setlinestyle(0,0,1);
                        setcolor(YELLOW);
                        line(40+b[i-1],i*20+100,40+b[i],i*20+120);
                        sprintf(str,"%ld",b[i]);
                        outtextxy(0,i*20+120,str);
                        getch();
                    }

                    settextstyle(10,0,3);
                    setcolor(LIGHTCYAN);
                    sprintf(str,"Total Head Movement :%ld Cylinders",count);
                    outtextxy(mx/2-textwidth("Total Head Movement :%ld Cylinders")/2,9*my/10,str);
                    getch();
                break;

                case 5: //CLOOK
                    cleardevice();
                    readimagefile("4.jpg",0,0,mx,my);
                    settextstyle(10,HORIZ_DIR,3);
                    outtextxy(mx/2-textwidth("CLOOK"),10,"CLOOK");
                    settextstyle(10,0,1);
                    for(i=0;i<n;i++) b[i]=a[i];
                    count=0;
                    pos=0;
                    for(i=0;i<n;i++)
                        for(j=0;j<n-i-1;j++)
                            if(b[j]>b[j+1])
                            {
                                x=b[j];
                                b[j]=b[j+1];
                                b[j+1]=x;
                            }
                    for(i=0;i<n;i++)
                        if(b[i]<star)
                            pos++;
                    x=star;
                    for(i=pos;i<n;i++)
                    {
                        count+=absolute(x,b[i]);
                        x=b[i];
                    }
                    for(i=0;i<pos;i++)
                    {
                        count+=absolute(x,b[i]);
                        x=b[i];
                    }


                    settextstyle(10,0,1);
                    setlinestyle(3,0,1);
                    setcolor(LIGHTCYAN);
                    line(40+b[0],100,40+b[0],450);
                    setlinestyle(0,0,1);
                    setcolor(YELLOW);
                    line(40+star,100,40+b[0],120);
                    sprintf(str,"%ld",b[0]);
                    outtextxy(0,120,str);
                    getch();
                    for(i=1;i<n;i++)
                    {
                        setlinestyle(3,0,1);
                        setcolor(LIGHTCYAN);
                        line(40+b[i],100,40+b[i],450);
                        setlinestyle(0,0,1);
                        setcolor(YELLOW);
                        line(40+b[i-1],i*20+100,40+b[i],i*20+120);
                        sprintf(str,"%ld",b[i]);
                        outtextxy(0,i*20+120,str);
                        getch();
                    }

                    settextstyle(10,0,3);
                    setcolor(LIGHTCYAN);
                    sprintf(str,"Total Head Movement :%ld Cylinders",count);
                    outtextxy(mx/2-textwidth("Total Head Movement :%ld Cylinders")/2,9*my/10,str);
                    getch();
                break;

                case 6:
                    val=0;
                break;
            }//end of switch
        }while(val==1);
    }//while(mval==1);
} //END OF MAIN
