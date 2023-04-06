#include<iostream>
#include<graphics.h>
using namespace std;

void name();
int main()
{
    int number;
    int  gd=DETECT,gm;
    cout<< "MD:Asif Iqball Shohan\n";
    cout<< "ID:CSE2001019027\n";
    cout<< "-------------------------\n";
    cout<< "1.Star.\n";
    cout<< "2.Gentle Man.\n";
    cout<< "3.National Memories.\n";
    cout<< "4.Rainy Day.\n";
    cout<< "5.Car.\n";
    cout<< "6.9 Planets.\n";
    cout<< "7.Village.\n";

    cout<< "\nEnter your Choice:";
    cin>>number;

    switch(number)
    {
    case 1:
        initgraph(&gd,&gm,"");
        name();
        //---------------Star---------------------
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,YELLOW);
        line(300,150,200,300);
        line(300,150,400,300);
        line(200,300,400,300);

        line(200,200,400,200);
        line(200,200,300,350);
        line(400,200,300,350);
        floodfill(300,250,YELLOW);
        floodfill(300,175,YELLOW);
        floodfill(300,325,YELLOW);
        floodfill(375,225,YELLOW);
        floodfill(225,225,YELLOW);
        floodfill(375,275,YELLOW);
        floodfill(225,275,YELLOW);

        getch();
        closegraph();
        break;
    case 2:

        initgraph(&gd,&gm,"");
        name();
        //...............Gentle man...............
        //Head
        ellipse(320,150,360,0,30,25);
        line(293,138,346,138);
        circle(310,145,3);
        circle(330,145,3);
        ellipse(320,160,180,360,10,5);

        //for neck
        line(313,175,313,185);
        line(328,175,328,185);

        //For center part
        setcolor(GREEN);
        setfillstyle(SOLID_FILL,GREEN);
        ellipse(320,190,0,180,30,5);
        line(290,190,290,260);
        line(350,190,350,260);
        line(290,253,350,253);
        line(290,260,350,260);
        floodfill(291,191,GREEN);
        setcolor(LIGHTBLUE);
        outtextxy(319,200,"*");
        outtextxy(319,210,"*");
        outtextxy(319,220,"*");


        //for right hand
        line(290,190,255,225);
        line(255,225,290,260);
        line(290,210,275,225);
        line(275,225,290,242);

        //for left hand
        line(350,190,385,225);
        line(385,225,350,260);
        line(350,210,365,225);
        line(365,225,350,242);


        //for legs
        setcolor(RED);
        line(290,260,285,320);
        line(320,285,305,327);
        line(320,285,335,327);
        line(350,260,355,320);


        //for shoes
        line(285,320,275,327);
        line(275,327,305,327);

        line(355,320,365,327);
        line(335,327,365,327);

        setcolor(LIGHTBLUE);
        outtextxy(287,380,"Gentle Man");
        getch();
        closegraph();
        break;

    case 3:

        initgraph(&gd,&gm,"");
        name();
        //National Memories
        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL,DARKGRAY);
        line(160,300,440,300);
        line(300,100,300,300);

        line(300,100,280,300);
        line(300,100,320,300);

        line(300,120,340,300);
        line(300,120,260,300);

        line(300,140,240,300);
        line(300,140,360,300);

        line(300,160,380,300);
        line(300,160,220,300);

        line(300,180,200,300);
        line(300,180,400,300);

        line(300,200,420,300);
        line(300,200,180,300);

        line(300,220,160,300);
        line(300,220,440,300);
        floodfill(318,290,DARKGRAY);
        floodfill(328,290,DARKGRAY);
        floodfill(348,290,DARKGRAY);
        floodfill(368,290,DARKGRAY);
        floodfill(388,290,DARKGRAY);
        floodfill(408,295,DARKGRAY);
        floodfill(418,295,DARKGRAY);


        floodfill(282,290,DARKGRAY);
        floodfill(262,298,DARKGRAY);
        floodfill(242,298,DARKGRAY);
        floodfill(222,299,DARKGRAY);
        floodfill(202,299,DARKGRAY);
        floodfill(182,299,DARKGRAY);
        floodfill(179,299,DARKGRAY);

        floodfill(305,215,DARKGRAY);
        floodfill(315,215,DARKGRAY);
        floodfill(340,240,DARKGRAY);
        floodfill(335,235,DARKGRAY);
        floodfill(350,245,DARKGRAY);
        floodfill(365,255,DARKGRAY);

        floodfill(295,215,DARKGRAY);
        floodfill(285,215,DARKGRAY);
        floodfill(260,240,DARKGRAY);
        floodfill(270,235,DARKGRAY);
        floodfill(245,250,DARKGRAY);
        floodfill(235,255,DARKGRAY);

        floodfill(265,225,DARKGRAY);
        floodfill(275,215,DARKGRAY);
        floodfill(285,205,DARKGRAY);
        floodfill(295,200,DARKGRAY);
        floodfill(255,235,DARKGRAY);

        floodfill(305,200,DARKGRAY);
        floodfill(315,205,DARKGRAY);
        floodfill(325,215,DARKGRAY);
        floodfill(335,225,DARKGRAY);
        floodfill(345,235,DARKGRAY);

        floodfill(305,170,DARKGRAY);
        floodfill(315,195,DARKGRAY);
        floodfill(320,200,DARKGRAY);

        floodfill(295,170,DARKGRAY);
        floodfill(285,195,DARKGRAY);
        floodfill(280,200,DARKGRAY);

        floodfill(302,155,DARKGRAY);
        floodfill(298,155,DARKGRAY);

        floodfill(308,170,DARKGRAY);
        floodfill(292,170,DARKGRAY);

        floodfill(301,137,DARKGRAY);
        floodfill(299,137,DARKGRAY);
        //......................................

        setcolor(WHITE);
        line(160,300,440,300);
        line(300,100,300,300);

        line(300,100,280,300);
        line(300,100,320,300);

        line(300,120,340,300);
        line(300,120,260,300);

        line(300,140,240,300);
        line(300,140,360,300);

        line(300,160,380,300);
        line(300,160,220,300);

        line(300,180,200,300);
        line(300,180,400,300);

        line(300,200,420,300);
        line(300,200,180,300);

        line(300,220,160,300);
        line(300,220,440,300);

        //.........National Flag ..................
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(80,300,140,295);
        rectangle(90,295,130,290);
        rectangle(109,290,110,110);

        floodfill(95,296,WHITE);
        floodfill(105,293,WHITE);

        setcolor(GREEN);
        setfillstyle(SOLID_FILL,GREEN);
        rectangle(111,120,211,180);
        floodfill(161,170,GREEN);

        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        circle(161,150,20);
        floodfill(162,151,RED);

        //.......................................
        setcolor(GREEN);
        rectangle(1,300,637,320);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(5,305,GREEN);

        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL,DARKGRAY);
        line(240,320,360,320);
        line(235,430,365,430);
        line(240,320,235,430);
        line(360,320,365,430);
        floodfill(300,375,DARKGRAY);
        line(0,430,638,430);
        line(0,320,638,320);

        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(260,340,345,410);
        floodfill(265,341,LIGHTBLUE);

        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        line(190,320,185,430);
        line(240,320,235,430);

        line(360,320,365,430);
        line(410,320,415,430);

        line(0,430,638,430);
        line(0,320,638,320);
        floodfill(191,321,WHITE);
        floodfill(361,321,WHITE);

        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL,DARKGRAY);
        line(411,320,416,430);
        line(638,320,638,430);
        line(191,320,186,430);
        line(0,320,0,430);

        line(0,430,638,430);
        line(0,320,638,320);
        floodfill(412,321,DARKGRAY);
        floodfill(1,321,DARKGRAY);

        setcolor(GREEN);
        setfillstyle(SOLID_FILL,GREEN);
        line(1,340,161,340);
        line(161,340,155,410);
        line(1,410,155,410);
        line(1,340,1,410);

        line(431,340,436,410);
        line(431,340,638,340);
        line(436,410,638,410);
        line(638,340,638,410);
        floodfill(2,341,GREEN);
        floodfill(432,341,GREEN);

        setcolor(LIGHTBLUE);
        outtextxy(250,445, "National Memorial");

        getch();
        closegraph();
        break;

    case 4:
        initgraph(&gd,&gm,"");
        name();
        //.....................Rainy day...................
        setcolor(CYAN);
        line(1,430,637,430);
        outtextxy(265,440,"Rainy Day");
        setcolor(YELLOW);
        circle(300,330,20);
        line(300,350,300,380);
        line(300,380,285,430);
        line(300,380,315,430);
        line(300,360,275,380);
        line(300,360,315,380);
        line(315,380,330,350);

        setcolor(MAGENTA);
        setfillstyle(BKSLASH_FILL,MAGENTA);
        line(330,350,330,290);
        line(300,290,360,290);

        arc(330,290,0,180,30);
        floodfill(330,285,MAGENTA);

        //.........Cloud.......................

        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL,DARKGRAY);
        ellipse(300,160,0,360,100,20);
        ellipse(300,160,0,360,50,50);
        circle(250,160,30);
        circle(350,160,30);
        floodfill(301,161,DARKGRAY);
        floodfill(251,161,DARKGRAY);
        floodfill(351,161,DARKGRAY);
        floodfill(381,161,DARKGRAY);
        floodfill(361,140,DARKGRAY);
        floodfill(361,180,DARKGRAY);
        floodfill(335,135,DARKGRAY);
        floodfill(335,180,DARKGRAY);
        floodfill(315,185,DARKGRAY);
        floodfill(250,185,DARKGRAY);
        floodfill(260,185,DARKGRAY);
        floodfill(260,140,DARKGRAY);
        floodfill(240,140,DARKGRAY);
        floodfill(315,135,DARKGRAY);
        floodfill(331,161,DARKGRAY);
        floodfill(241,161,DARKGRAY);
        floodfill(215,161,DARKGRAY);

        setcolor(CYAN);
        line(300,220,300,224);
        line(240,220,240,224);
        line(300,240,300,244);
        line(250,240,250,244);
        line(300,270,300,274);
        line(220,270,220,274);
        line(310,260,310,264);
        line(260,260,260,264);
        line(310,230,310,234);
        line(235,230,235,234);
        line(325,238,325,242);
        line(290,238,290,242);
        line(325,218,325,222);
        line(270,218,270,222);
        line(325,250,325,254);
        line(270,250,270,254);
        line(225,210,225,214);
        line(340,210,340,214);
        line(340,230,340,234);
        line(355,240,355,244);
        line(355,215,355,219);
        line(370,205,370,209);
        line(370,225,370,229);
        line(390,250,390,254);
        line(260,250,260,254);
        line(370,280,370,284);
        line(250,280,250,284);
        line(370,305,370,309);
        line(240,305,240,309);
        line(400,305,400,309);
        line(370,345,370,349);
        line(225,345,225,349);
        line(370,385,370,389);
        line(230,385,230,389);
        line(385,365,385,369);
        line(245,365,245,369);
        line(385,210,385,214);
        line(285,210,285,214);
        line(215,210,215,214);
        getch();
        closegraph();
        break;
    case 5:
        initgraph(&gd,&gm,"");
        name();
        //......................Car...........................

        line(1,350,637,350);

        //Wheel
        circle(250,335,15);
        circle(350,335,15);

        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL,DARKGRAY);
        circle(250,335,5);
        circle(350,335,5);
        floodfill(246,335,DARKGRAY);
        floodfill(346,335,DARKGRAY);

        setcolor(CYAN);
        setfillstyle(SOLID_FILL,CYAN);
        arc(250,335,10,180,20);
        arc(350,335,10,180,20);
        line(270,332,330,335);
        line(370,332,410,334);
        line(410,334,410,310);
        line(410,310,350,290);
        line(350,290,330,270);
        line(230,335,190,335);
        line(190,335,190,305);
        line(190,305,230,290);
        line(230,290,250,270);
        line(250,270,330,270);
        floodfill(200,310,CYAN);


        setcolor(BLACK);
        line(260,280,320,280);
        line(260,280,240,300);
        line(320,280,340,300);
        line(240,300,340,300);
        line(290,280,290,300);

        setcolor(LIGHTRED);
        setfillstyle(SOLID_FILL,LIGHTRED);
        rectangle(190,310,195,320);
        floodfill(191,311,LIGHTRED);

        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,YELLOW);
        rectangle(407,315,412,325);
        floodfill(411,316,YELLOW);

        setcolor(LIGHTBLUE);
        outtextxy(290,400,"CAR");

        getch();
        closegraph();
        break;
    case 6:

        initgraph(&gd,&gm,"");
        name();

        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(300,250,15);
        floodfill(302,252,YELLOW);
        setcolor(CYAN);
        ellipse(300,250,0,360,40,25);
        ellipse(300,250,0,360,65,35);

        ellipse(300,250,0,360,90,45);
        ellipse(300,250,0,360,115,55);

        ellipse(300,250,0,360,140,65);
        ellipse(300,250,0,360,165,75);

        ellipse(300,250,0,360,190,85);
        ellipse(300,250,0,360,215,95);
        setcolor(LIGHTGRAY);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(335,240,10);
        floodfill(335,240,LIGHTGRAY);

        setcolor(GREEN);
        setfillstyle(SOLID_FILL,GREEN);
        circle(385,260,13);
        floodfill(385,260,GREEN);

        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        circle(435,240,18);
        floodfill(435,240,RED);

        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        circle(485,260,15);
        floodfill(485,260,LIGHTBLUE);

        setcolor(LIGHTRED);
        setfillstyle(SOLID_FILL,LIGHTRED);
        circle(240,260,15);
        floodfill(240,260,LIGHTRED);

        setcolor(MAGENTA);
        setfillstyle(SOLID_FILL,MAGENTA);
        circle(190,240,13);
        floodfill(190,240,MAGENTA);

        setcolor(LIGHTGRAY);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(135,210,20);
        floodfill(135,210,LIGHTGRAY);

        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        circle(95,270,15);
        floodfill(90,270,BLUE);

        setcolor(LIGHTBLUE);
        outtextxy(285,270,"SUN");
        outtextxy(305,200,"Mercury");
        outtextxy(360,280,"Earth");
        outtextxy(405,200,"Jupiter");
        outtextxy(455,285,"Uranus");
        outtextxy(215,280,"Venus");
        outtextxy(175,210,"Mars");
        outtextxy(120,170,"Saturn");
        outtextxy(75,290,"Neptune");

        outtextxy(270,400,"Planets");
        getch();
        closegraph();
        break;

    case 7:
        initgraph(&gd,&gm,"");
        name();
        //......................village.....................
        setcolor(GREEN);
        setfillstyle(SOLID_FILL,GREEN);
        line(1,350,638,350);
        line(1,350,1,476);
        line(638,350,638,476);
        line(638,476,1,476);
        floodfill(10,360,GREEN);

        //House
        setcolor(BROWN);
        setfillstyle(SOLID_FILL,BROWN);
        line(170,390,170,310);
        line(220,270,170,310);
        line(220,270,285,320);
        line(170,390,270,420);
        line(270,310,270,420);

        line(440,390,270,420);
        line(440,390,440,330);
        line(285,320,450,330);
        floodfill(175,320,BROWN);
        floodfill(275,395,BROWN);

        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        rectangle(180,330,210,365);
        rectangle(350,350,390,375);
        line(370,350,370,375);
        line(195,330,195,365);
        line(230,330,260,330);
        line(230,330,230,408);
        line(260,330,260,417);
        line(230,408,260,417);
        circle(238,370,4);
        floodfill(238,370,BLACK);
        floodfill(185,335,BLACK);
        floodfill(205,335,BLACK);
        floodfill(250,370,BLACK);
        floodfill(375,370,BLACK);
        floodfill(365,370,BLACK);


        setcolor(WHITE);
        line(170,390,170,310);
        line(220,270,170,310);
        line(220,270,285,320);
        line(170,390,270,420);
        line(270,310,270,420);
        line(440,390,270,420);
        line(440,390,440,330);
        line(285,320,450,330);
        line(285,320,450,330);
        line(410,285,450,330);
        line(410,285,215,265);
        line(155,310,215,265);
        line(155,310,170,310);

        rectangle(180,330,210,365);
        rectangle(350,350,390,375);
        line(370,350,370,375);
        line(195,330,195,365);
        line(230,330,260,330);
        line(230,330,230,408);
        line(260,330,260,417);
        circle(238,370,4);

        //Tree
        setcolor(BROWN);
        setfillstyle(SOLID_FILL,BROWN);
        rectangle(70,270,80,380);
        floodfill(71,271,BROWN);
        line(60,380,90,380);
        setcolor(GREEN);
        setfillstyle(SOLID_FILL,GREEN);
        arc(30,270,100,310,30);
        arc(30,220,40,300,30);
        arc(110,270,240,100,30);
        arc(110,220,300,110,30);
        arc(75,200,0,180,30);
        arc(75,280,180,0,30);
        floodfill(100,200,GREEN);

        setcolor(WHITE);
        arc(30,270,100,310,30);
        arc(30,220,40,300,30);
        arc(110,270,240,100,30);
        arc(110,220,300,110,30);
        arc(75,200,0,180,30);
        arc(75,280,180,0,30);

        //Moon
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(570,120,25);
        floodfill(570,120,WHITE);

        //Cloud
        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL,DARKGRAY);
        ellipse(330,150,0,360,80,20);
        circle(330,150,40);
        circle(300,150,30);
        circle(360,150,30);
        floodfill(335,150,DARKGRAY);
        floodfill(325,150,DARKGRAY);
        floodfill(375,150,DARKGRAY);
        floodfill(395,150,DARKGRAY);
        floodfill(275,150,DARKGRAY);
        floodfill(255,150,DARKGRAY);
        floodfill(300,130,DARKGRAY);
        floodfill(290,130,DARKGRAY);
        floodfill(300,170,DARKGRAY);
        floodfill(280,170,DARKGRAY);
        floodfill(370,130,DARKGRAY);
        floodfill(360,130,DARKGRAY);
        floodfill(370,170,DARKGRAY);
        floodfill(360,170,DARKGRAY);
        floodfill(320,120,DARKGRAY);
        floodfill(320,180,DARKGRAY);
        floodfill(330,165,DARKGRAY);
        floodfill(330,135,DARKGRAY);

        setcolor(WHITE);
        outtextxy(100,120,"*");
        outtextxy(450,120,"*");
        outtextxy(570,160,"*");
        outtextxy(490,200,"*");
        outtextxy(290,200,"*");
        outtextxy(200,180,"*");
        outtextxy(220,140,"*");

        getch();
        closegraph();
        break;
    }

    return 0;
}

void name()
{
    //---------------------Name--------------------------
    //M
    line(100,20,100,40);
    line(100,20,110,30);
    line(110,30,120,20);
    line(120,20,120,40);
    //D
    line(130,20,130,40);
    ellipse(130,30,290,90,10,10);
    //:
    line(150,25,150,30);
    line(150,35,150,40);
    //A
    line(170,20,160,40);
    line(170,20,180,40);
    line(165,30,175,30);
    //S
    ellipse(190,25,90,270,10,5);
    ellipse(190,35,250,90,10,5);
    //I
    line(205,20,205,40);
    //F
    line(210,20,210,40);
    line(210,20,220,20);
    line(210,30,215,30);
    //I
    line(240,20,240,40);
    //Q
    circle(255,30,10);
    line(255,35,265,40);
    //B
    line(270,20,270,40);
    ellipse(270,25,270,90,10,5);
    ellipse(270,35,270,90,10,5);
    //A
    line(295,20,285,40);
    line(295,20,305,40);
    line(290,30,300,30);
    //L
    line(310,20,310,40);
    line(310,40,320,40);
    //L
    line(325,20,325,40);
    line(325,40,335,40);
    //S
    ellipse(360,25,90,270,10,5);
    ellipse(360,35,250,90,10,5);
    //H
    line(375,20,375,40);
    line(385,20,385,40);
    line(375,30,385,30);
    //O
    ellipse(395,30,0,360,5,10);
    //H
    line(405,20,405,40);
    line(415,20,415,40);
    line(405,30,415,30);
    //A
    line(430,20,420,40);
    line(430,20,440,40);
    line(425,30,435,30);
    //N
    line(445,20,445,40);
    line(455,20,455,40);
    line(445,20,455,40);

    //--------------ID--------------------
    //I
    line(100,60,100,80);
    //D
    line(110,60,110,80);
    ellipse(110,70,290,90,10,10);
    //:
    line(130,65,130,70);
    line(130,75,130,80);
    //C
    ellipse(150,70,90,270,10,10);
    //S
    ellipse(165,65,90,270,10,5);
    ellipse(165,75,250,90,10,5);
    //E
    line(185,60,185,80);
    line(185,60,195,60);
    line(185,70,190,70);
    line(185,80,195,80);
    //2
    ellipse(200,70,270,90,10,8);
    line(200,77,210,80);
    //0
    ellipse(220,70,0,360,5,10);
    //0
    ellipse(235,70,0,360,5,10);
    //1
    line(250,60,250,80);
    line(250,60,245,65);
    //0
    ellipse(260,70,0,360,5,10);
    //0
    ellipse(275,70,0,360,5,10);
    //9
    ellipse(290,65,0,360,5,5);
    line(295,65,295,80);
    //0
    ellipse(305,70,0,360,5,10);
    //2
    ellipse(315,70,270,90,10,8);
    line(315,77,325,80);
    //7
    line(330,60,345,60);
    line(345,60,335,80);
}
