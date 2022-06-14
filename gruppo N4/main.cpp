#include <allegro.h>
#define WHITE makecol(255,255,255)
#include<time.h>
#include<iostream>
using namespace std;
int main()
{
    BITMAP *dragon;
    BITMAP *cik;
    BITMAP *fire;
    BITMAP *start;
    BITMAP *us;
    BITMAP *level1;
    BITMAP *egg;
	BITMAP *inst;
	BITMAP *about;
	BITMAP *choose;
	BITMAP *gameover;
    BITMAP *win;
    srand(time(NULL));
    //initialize the program
    allegro_init();
	install_keyboard();
	install_mouse();
    set_color_depth(16);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 1280, 600, 0, 0);
    //load the dragon bitmap
	start= load_bitmap("mmario.bmp", NULL);
	us= load_bitmap("back.bmp", NULL);
	inst= load_bitmap("back3.bmp", NULL);
	about= load_bitmap("back2.bmp", NULL);    
    choose= load_bitmap("choose.bmp", NULL);
    win= load_bitmap("win.bmp", NULL);
 //sound 
 SAMPLE *sample;
    int panning = 128;
    int pitch = 1000;
    int volume = 128;
    sample = load_sample("tal2a.wav");
    if (
    
    
    install_sound(DIGI_AUTODETECT, MIDI_NONE, "") != 0) 
    {
        allegro_message("Error initializing sound system");
        return 1;
    }

       play_sample(sample, volume, panning, pitch, TRUE);

 while(!keypressed()){
   draw_sprite(screen, start, 0, 0);
}
    draw_sprite(screen, us, 0, 0);
    int zx=0;
    while (!key[KEY_ESC])
	{  
     if(key[KEY_E])
     {
      draw_sprite(screen, inst, 0, 0);
     }
      if(key[KEY_Z])
     {
      draw_sprite(screen, about, 0, 0);
     }    
      if(key[KEY_V])
      {
            draw_sprite(screen, us, 0, 0);     
      }
      if(key[KEY_Q]){break;}
      if(key[KEY_C]){
      zx++;
      break;
      }
    }
    int iop=0;
while(!key[KEY_ESC]){
   if(zx==1){break;}
   draw_sprite(screen, choose, 0, 0);
   if(key[KEY_B]){iop=1;break;}
   if(key[KEY_L]){iop=2;break;}
   if(key[KEY_A]){iop=3;break;}
}
//esay
    if(iop==1)
    {
     //----------------------------------------------  
     int x,xx,yy, y,c,m,d[6],d1[6],f[2],g[6],g1[6],j[2],pp[6],pp1[6],count;
	count=0;
    dragon = load_bitmap("mesay.bmp", NULL);
	cik = load_bitmap("markrbe.bmp", NULL);
	fire= load_bitmap("33.bmp", NULL);
	egg= load_bitmap("boome.bmp", NULL);
	level1= load_bitmap("images1.bmp", NULL);
    gameover= load_bitmap("geasy.bmp", NULL);
    x = SCREEN_W/2 - dragon->w;
    y = SCREEN_H - dragon->h;
       d[1]=100;
       d1[1]=100;
       f[0]=50;
       j[0]=f[0]+cik->h;
       f[1]=40+j[0];
       j[1]=f[1]+cik->h;      
 for(int q=1;q<6;q++){
       g[q]=d[q]+cik->w;
       d[q+1]=d[q]+104+100;   
       pp[q]=(d[q]+g[q])/2;
       pp[q]=pp[q]-25;
    }
    for(int q=1;q<6;q++){
       g1[q]=d1[q]+cik->w;
       d1[q+1]=d1[q]+104+100;   
       pp1[q]=(d1[q]+g1[q])/2;
       pp1[q]=pp1[q]-25;
    }
    
         draw_sprite(screen, level1, 0, 0);
         draw_sprite(screen, dragon, x, y);
    int p=rand()%6;
        while(p==0)
        p=rand()%6;     
                int ll=j[0]-2;
                int l2=j[1]-2;
int pl=rand()%2;
    //main loop
    while (!key[KEY_ESC])
	{
        if(zx==1){break;}
         for(int q=1;q<6;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        
        if(key[KEY_K]){
        //erase the sprite
        rectfill(screen, x, y, x+dragon->w, y+dragon->h, 0);
        draw_sprite(screen, level1, 0, 0);
        for(int q=1;q<6;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        //move the sprite
        y=y-6;
        if (y+dragon->h<0)
            y = SCREEN_H - dragon->h;

        //draw the sprite
	    draw_sprite(screen, dragon, x, y);
   }
        if(key[KEY_M]){
        //erase the sprite
        rectfill(screen, x, y, x+dragon->w, y+dragon->h, 0);
        draw_sprite(screen, level1, 0, 0);
        for(int q=1;q<6;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        //move the sprite
        y=y+6;
        if (y==SCREEN_H)
            y = 0;
        //draw the sprite
	    draw_sprite(screen, dragon, x, y);
   }
        if(key[KEY_A]){
        //erase the sprite
        rectfill(screen, x, y, x+dragon->w, y+dragon->h, 0);
        draw_sprite(screen, level1, 0, 0);
        for(int q=1;q<6;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        //move the sprite
        x=x-6;
        if (x+dragon->w<0)
            x = SCREEN_W - dragon->w;

        //draw the sprite
	    draw_sprite(screen, dragon, x, y);
   }
    if(key[KEY_D]){
         draw_sprite(screen, dragon, x, y);
        //erase the sprite
        rectfill(screen, x, y, x+dragon->w, y+dragon->h, 0);
        draw_sprite(screen, level1, 0, 0);
        for(int q=1;q<6;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        x=x+6; 
        //mo2ve the sprite
        if (x > SCREEN_W)
            x =0;
        //draw the sprite
	    draw_sprite(screen, dragon, x, y);	    
   }
  c=x+40;
  m=y-26;
  int l=0;
    if(key[KEY_SPACE]){        
       while(m>0)
       {
            
                 int r=0;
                 int r1=0;
                 draw_sprite(screen, fire, c, m);
	             m=m-2;
                 l=l+2;
                 for(int q=0;q<6;q++)
                 {    
                   if(m==j[1]&&(c>=d1[q]&&c<=g1[q]))
                   {
                     rectfill(screen, d1[q], f[1], d1[q]+cik->w, f[1]+cik->h, 0);
                     draw_sprite(screen, level1, 0, 0);
                     for(int q=1;q<6;q++)
                     {
                      draw_sprite(screen, cik, d[q], f[0]);
                      draw_sprite(screen, cik, d1[q], f[1]);
                     }
                     count=count+1;
                     r=r+1;
                     d1[q]=1900;
                     break;
                   } 
                  }
                 for(int q=0;q<6;q++)
                 {    
                   if(m==j[0]&&(c>=d[q]&&c<=g[q]))
                   {
                     rectfill(screen, d[q], f[0], d[q]+cik->w, f[0]+cik->h, 0);
                      draw_sprite(screen, level1, 0, 0);
                     for(int q=1;q<6;q++)
                     {
                      draw_sprite(screen, cik, d[q], f[0]);
                      draw_sprite(screen, cik, d1[q], f[1]);
                     }
                     r1=r1+1;
                     count=count+1;
                     d[q]=1900;
                     break;
                   } 
                  }
                  //
                if(r==1||r1==1)
                  break;            
       }
         rectfill(screen, c, m, c+fire->w, (m+l)+fire->h, 0);
             draw_sprite(screen, level1, 0, 0);
                     draw_sprite(screen, dragon, x, y);
                     for(int q=1;q<6;q++)
                     {
                      draw_sprite(screen, cik, d[q], f[0]);
                      draw_sprite(screen, cik, d1[q], f[1]);
                     } 
      
         
 		
   }
  if(count==10)
   {  
    draw_sprite(screen,win, 0, 0);  
    while(!key[KEY_ESC]){}   
     count=0;
    break;
   }
   //egg
    xx=x+dragon->w;
       if(pl==0&&d[p]!=1900){
        draw_sprite(screen, egg, pp[p], ll);
        rectfill(screen, pp[p], ll, pp[p]+egg->w, ll+egg->h, 0);
        draw_sprite(screen, level1, 0, 0);
        draw_sprite(screen, dragon, x, y);
          for(int q=1;q<6;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        ll=ll+1;
        int k1=pp[p]+egg->h;
        int k2=k1+egg->w/2;
        int k3=k1+egg->w;
        int nn=ll+egg->h;
        if(nn==y&&((k1>=x&&k1<=xx)||(k2>=x&&k2<=xx)||(k3>=x&&k3<=xx)))
        {
             draw_sprite(screen, gameover, 0,0);
              while(!key[KEY_ESC]){}  
              break;
        }
     if(ll>SCREEN_H)
     {
        p=rand()%6;
        while(p==0)
        p=rand()%6;     
        ll=j[0]-2;
        pl=rand()%2;
     }
   }
    //else
     if(d[p]==1900)
     {
        p=rand()%6;
        while(p==0)
        p=rand()%6;     
        ll=j[0]-2;
        pl=rand()%2;
      }  
      if(pl==1&&d1[p]!=1900)
      {   
        draw_sprite(screen, egg, pp1[p], l2);
        rectfill(screen, pp1[p], l2, pp1[p]+egg->w, l2+egg->h, 0);
        draw_sprite(screen, level1, 0, 0);
        draw_sprite(screen, dragon, x, y);
          for(int q=1;q<6;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        
        l2=l2+1;
        int m1=pp1[p]+egg->h;
        int m2=m1+egg->w/2;
        int m3=m1+egg->w;
        int nm=l2+l2+egg->h;
        if(nm==y&&((m1>=x&&m1<=xx)||(m2>=x&&m2<=xx)||(m3>=x&&m3<=xx)))
        {
              draw_sprite(screen, gameover, 0,0);
              while(!key[KEY_ESC]){}  
              break;
        }
      if(l2>SCREEN_H)
      {
        p=rand()%6;
        while(p==0)
        p=rand()%6;     
        l2=j[1]-2;
        pl=rand()%2;
      }
    }
      if(d1[p]==1900)
      {
        p=rand()%6;
        while(p==0)
        p=rand()%6;     
        ll=j[0]-2;
        pl=rand()%2;
      }
      ///
      int qw=f[0]+cik->h;
      int wq=f[1]+cik->h;
      for(int q=1;q<6;q++)
        {
            if(pp[q]>=x&&pp[q]<=xx)
            {
                if(y==qw||y==108){
                if(d[q]!=1900){
                 draw_sprite(screen, gameover, 0,0);
              while(!key[KEY_ESC]){}  
              break;
            }
        }
        }
            if(y==wq&&(pp1[q]>=x&&pp1[q]<=xx))
            {
                if(d1[q]!=1900){
                 draw_sprite(screen, gameover, 0,0);
              while(!key[KEY_ESC]){}  
              break;
              }
            }
        }
   }  
//-------------------------------------------------------------------------------
   
    }
    //medium
    else if(iop==2)
    {
        //----------------------------------------------  
     int x,xx,yy, y,c,m,d[7],d1[7],f[2],g[7],g1[7],j[2],pp[7],pp1[7],count;
	count=0;
    dragon = load_bitmap("mmedium.bmp", NULL);
	cik = load_bitmap("markebm.bmp", NULL);
	fire= load_bitmap("33.bmp", NULL);
	egg= load_bitmap("boomm.bmp", NULL);
	level1= load_bitmap("images2.bmp", NULL);
	gameover= load_bitmap("gmedium.bmp", NULL);
    x = SCREEN_W/2 - dragon->w;
    y = SCREEN_H - dragon->h;
       d[1]=50;
       d1[1]=50;
       f[0]=50;
       j[0]=f[0]+cik->h;
       f[1]=48+j[0];
       j[1]=f[1]+cik->h;      
 for(int q=1;q<7;q++){
       g[q]=d[q]+cik->w;
       d[q+1]=d[q]+104+100;   
       pp[q]=(d[q]+g[q])/2;
       pp[q]=pp[q]-25;
    }
    for(int q=1;q<7;q++){
       g1[q]=d1[q]+cik->w;
       d1[q+1]=d1[q]+104+100;   
       pp1[q]=(d1[q]+g1[q])/2;
       pp1[q]=pp1[q]-25;
    }
    
         draw_sprite(screen, level1, 0, 0);
         draw_sprite(screen, dragon, x, y);
    int p=rand()%7;
        while(p==0)
        p=rand()%7;     
                int ll=j[0]-2;
                int l2=j[1]-2;
int pl=rand()%2;
    //main loop
    while (!key[KEY_ESC])
	{
        if(zx==1){break;}
         for(int q=1;q<7;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        if(key[KEY_K]){
        //erase the sprite
        rectfill(screen, x, y, x+dragon->w, y+dragon->h, 0);
        draw_sprite(screen, level1, 0, 0);
        for(int q=1;q<7;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        //move the sprite
        y=y-6;
        if (y+dragon->h<0)
            y = SCREEN_H - dragon->h;

        //draw the sprite
	    draw_sprite(screen, dragon, x, y);
   }
        if(key[KEY_M]){
        //erase the sprite
        rectfill(screen, x, y, x+dragon->w, y+dragon->h, 0);
        draw_sprite(screen, level1, 0, 0);
        for(int q=1;q<7;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        //move the sprite
        y=y+6;
        if (y==SCREEN_H)
            y = 0;
        //draw the sprite
	    draw_sprite(screen, dragon, x, y);
   }
        if(key[KEY_A]){
        //erase the sprite
        rectfill(screen, x, y, x+dragon->w, y+dragon->h, 0);
        draw_sprite(screen, level1, 0, 0);
        for(int q=1;q<7;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        //move the sprite
        x=x-6;
        if (x+dragon->w<0)
            x = SCREEN_W - dragon->w;

        //draw the sprite
	    draw_sprite(screen, dragon, x, y);
   }
    if(key[KEY_D]){
         draw_sprite(screen, dragon, x, y);
        //erase the sprite
        rectfill(screen, x, y, x+dragon->w, y+dragon->h, 0);
        draw_sprite(screen, level1, 0, 0);
        for(int q=1;q<7;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        x=x+6; 
        //mo2ve the sprite
        if (x > SCREEN_W)
            x =0;
        //draw the sprite
	    draw_sprite(screen, dragon, x, y);	    
   }
  c=x+40;
  m=y-26;
  int l=0;
    if(key[KEY_SPACE]){
       while(m>0)
       {
                 int r=0;
                 int r1=0;
                 draw_sprite(screen, fire, c, m);
	             m=m-2;
                 l=l+2;
                 for(int q=0;q<7;q++)
                 {    
                   if(m==j[1]&&(c>=d1[q]&&c<=g1[q]))
                   {
                     rectfill(screen, d1[q], f[1], d1[q]+cik->w, f[1]+cik->h, 0);
                     draw_sprite(screen, level1, 0, 0);
                     for(int q=1;q<7;q++)
                     {
                      draw_sprite(screen, cik, d[q], f[0]);
                      draw_sprite(screen, cik, d1[q], f[1]);
                     }
                     count=count+1;
                     r=r+1;
                     d1[q]=1900;
                     break;
                   } 
                  }
                 for(int q=0;q<7;q++)
                 {    
                   if(m==j[0]&&(c>=d[q]&&c<=g[q]))
                   {
                     rectfill(screen, d[q], f[0], d[q]+cik->w, f[0]+cik->h, 0);
                      draw_sprite(screen, level1, 0, 0);
                     for(int q=1;q<7;q++)
                     {
                      draw_sprite(screen, cik, d[q], f[0]);
                      draw_sprite(screen, cik, d1[q], f[1]);
                     }
                     r1=r1+1;
                     count=count+1;
                     d[q]=1900;
                     break;
                   } 
                  }
                  //
                if(r==1||r1==1)
                  break;            
       }
            rectfill(screen, c, m, c+fire->w, (m+l)+fire->h, 0);
             draw_sprite(screen, level1, 0, 0);
                     for(int q=1;q<7;q++)
                     {
                      draw_sprite(screen, cik, d[q], f[0]);
                      draw_sprite(screen, cik, d1[q], f[1]);
                     }
 		
   }
  if(count==12)
   {  
    draw_sprite(screen,win, 0, 0);  
    while(!key[KEY_ESC]){}   
     count=0;
    break;
   }
   //egg
    xx=x+dragon->w;
       if(pl==0&&d[p]!=1900){
        draw_sprite(screen, egg, pp[p], ll);
        rectfill(screen, pp[p], ll, pp[p]+egg->w, ll+egg->h, 0);
        draw_sprite(screen, level1, 0, 0);
        draw_sprite(screen, dragon, x, y);
          for(int q=1;q<7;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        ll=ll+1;
        int k1=pp[p]+egg->h;
        int k2=k1+egg->w/2;
        int k3=k1+egg->w;
        int nn=ll+egg->h;
        if(nn==y&&((k1>=x&&k1<=xx)||(k2>=x&&k2<=xx)||(k3>=x&&k3<=xx)))
        {
             draw_sprite(screen, gameover, 0,0);
              while(!key[KEY_ESC]){}  
              break;
        }
     if(ll>SCREEN_H)
     {
        p=rand()%7;
        while(p==0)
        p=rand()%7;     
        ll=j[0]-2;
        pl=rand()%2;
     }
   }
    //else
     if(d[p]==1900)
     {
        p=rand()%7;
        while(p==0)
        p=rand()%7;     
        ll=j[0]-2;
        pl=rand()%2;
      }  
      if(pl==1&&d1[p]!=1900)
      {   
        draw_sprite(screen, egg, pp1[p], l2);
        rectfill(screen, pp1[p], l2, pp1[p]+egg->w, l2+egg->h, 0);
        draw_sprite(screen, level1, 0, 0);
        draw_sprite(screen, dragon, x, y);
          for(int q=1;q<7;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        
        l2=l2+1;
        int m1=pp1[p]+egg->h;
        int m2=m1+egg->w/2;
        int m3=m1+egg->w;
        int nm=l2+l2+egg->h;
        if(nm==y&&((m1>=x&&m1<=xx)||(m2>=x&&m2<=xx)||(m3>=x&&m3<=xx)))
        {
              draw_sprite(screen, gameover, 0,0);
              while(!key[KEY_ESC]){}  
              break;
        }
      if(l2>SCREEN_H)
      {
        p=rand()%7;
        while(p==0)
        p=rand()%7;     
        l2=j[1]-2;
        pl=rand()%2;
      }
    }
      if(d1[p]==1900)
      {
        p=rand()%7;
        while(p==0)
        p=rand()%7;     
        ll=j[0]-2;
        pl=rand()%2;
      }
      ///
      int qw=f[0]+cik->h;
      int wq=f[1]+cik->h;
      for(int q=1;q<7;q++)
        {
            
            if(pp[q]>=x&&pp[q]<=xx)
            {
                if(y==qw||y==104){
                    if(d[q]!=1900){
                 draw_sprite(screen, gameover, 0,0);
              while(!key[KEY_ESC]){}  
              break;
            }
        }
        }
            if(y==wq&&(pp1[q]>=x&&pp1[q]<=xx))
            {
                if(d1[q]!=1900){
                 draw_sprite(screen, gameover, 0,0);
              while(!key[KEY_ESC]){}  
              break;
            }
             
            }
        }
   } 
//-------------------------------------------------------------------------------

    }
    //hard
    else if(iop==3)
    {
        //----------------------------------------------  
     int x,xx,yy, y,c,m,d[7],d1[7],f[2],g[7],g1[7],j[2],pp[7],pp1[7],count;
	count=0;
    dragon = load_bitmap("mhard.bmp", NULL);
	cik = load_bitmap("markrbh.bmp", NULL);
	fire= load_bitmap("33.bmp", NULL);
	egg= load_bitmap("boomh.bmp", NULL);
	level1= load_bitmap("images3.bmp", NULL);
	gameover= load_bitmap("ghard.bmp", NULL);
    x = SCREEN_W/2 - dragon->w;
    y = SCREEN_H - dragon->h;
       d[1]=50;
       d1[1]=100;
       f[0]=50;
       j[0]=f[0]+cik->h;
       f[1]=40+j[0];
       j[1]=f[1]+cik->h;      
 for(int q=1;q<7;q++){
       g[q]=d[q]+cik->w;
       d[q+1]=d[q]+104+100;   
       pp[q]=(d[q]+g[q])/2;
       pp[q]=pp[q]-25;
    }
    for(int q=1;q<7;q++){
       g1[q]=d1[q]+cik->w;
       d1[q+1]=d1[q]+104+100;   
       pp1[q]=(d1[q]+g1[q])/2;
       pp1[q]=pp1[q]-25;
    }
    
         draw_sprite(screen, level1, 0, 0);
         draw_sprite(screen, dragon, x, y);
  //egg1
         int p=rand()%7;
         while(p==0)
         p=rand()%7;     
         int ll=j[0]-2;
         int l2=j[1]-2;
         int pl=rand()%2;
  //egg2
         int o=rand()%7;
         while(o==0)
         o=rand()%7;     
         int ool=j[0]-2;
         int oo2=j[1]-2;
         int ol=rand()%2;
    //main loop
    while (!key[KEY_ESC])
	{
        if(zx==1){break;}
         for(int q=1;q<7;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        if(key[KEY_K]){
        //erase the sprite
        rectfill(screen, x, y, x+dragon->w, y+dragon->h, 0);
        draw_sprite(screen, level1, 0, 0);
        for(int q=1;q<7;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        //move the sprite
        y=y-6;
        if (y+dragon->h<0)
            y = SCREEN_H - dragon->h;

        //draw the sprite
	    draw_sprite(screen, dragon, x, y);
   }
        if(key[KEY_M]){
        //erase the sprite
        rectfill(screen, x, y, x+dragon->w, y+dragon->h, 0);
        draw_sprite(screen, level1, 0, 0);
        for(int q=1;q<7;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        //move the sprite
        y=y+6;
        if (y==SCREEN_H)
            y = 0;
        //draw the sprite
	    draw_sprite(screen, dragon, x, y);
   }
        if(key[KEY_A]){
        //erase the sprite
        rectfill(screen, x, y, x+dragon->w, y+dragon->h, 0);
        draw_sprite(screen, level1, 0, 0);
        for(int q=1;q<7;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        //move the sprite
        x=x-6;
        if (x+dragon->w<0)
            x = SCREEN_W - dragon->w;

        //draw the sprite
	    draw_sprite(screen, dragon, x, y);
   }
    if(key[KEY_D]){
         draw_sprite(screen, dragon, x, y);
        //erase the sprite
        rectfill(screen, x, y, x+dragon->w, y+dragon->h, 0);
        draw_sprite(screen, level1, 0, 0);
        for(int q=1;q<7;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        x=x+6; 
        //mo2ve the sprite
        if (x > SCREEN_W)
            x =0;
        //draw the sprite
	    draw_sprite(screen, dragon, x, y);	    
   }
  c=x+40;
  m=y-26;
  int l=0;
    if(key[KEY_SPACE]){
       while(m>0)
       {
                 int r=0;
                 int r1=0;
                 draw_sprite(screen, fire, c, m);
	             m=m-2;
                 l=l+2;
                 for(int q=0;q<7;q++)
                 {    
                   if(m==j[1]&&(c>=d1[q]&&c<=g1[q]))
                   {
                     rectfill(screen, d1[q], f[1], d1[q]+cik->w, f[1]+cik->h, 0);
                     draw_sprite(screen, level1, 0, 0);
                     for(int q=1;q<7;q++)
                     {
                      draw_sprite(screen, cik, d[q], f[0]);
                      draw_sprite(screen, cik, d1[q], f[1]);
                     }
                     count=count+1;
                     r=r+1;
                     d1[q]=1900;
                     break;
                   } 
                  }
                 for(int q=0;q<7;q++)
                 {    
                   if(m==j[0]&&(c>=d[q]&&c<=g[q]))
                   {
                     rectfill(screen, d[q], f[0], d[q]+cik->w, f[0]+cik->h, 0);
                      draw_sprite(screen, level1, 0, 0);
                     for(int q=1;q<7;q++)
                     {
                      draw_sprite(screen, cik, d[q], f[0]);
                      draw_sprite(screen, cik, d1[q], f[1]);
                     }
                     r1=r1+1;
                     count=count+1;
                     d[q]=1900;
                     break;
                   } 
                  }
                  //
                if(r==1||r1==1)
                  break;            
       }
            rectfill(screen, c, m, c+fire->w, (m+l)+fire->h, 0);
             draw_sprite(screen, level1, 0, 0);
                     for(int q=1;q<7;q++)
                     {
                      draw_sprite(screen, cik, d[q], f[0]);
                      draw_sprite(screen, cik, d1[q], f[1]);
                     }
 		
   }
   if(count==12)
   {
       draw_sprite(screen,win, 0, 0);  
      while(!keypressed())
     {  
     } count=0;
    break;
   }
   //egg1
   xx=x+dragon->w;
       if(pl==0&&d[p]!=1900){
        draw_sprite(screen, egg, pp[p], ll);
        rectfill(screen, pp[p], ll, pp[p]+egg->w, ll+egg->h, 0);
        draw_sprite(screen, level1, 0, 0);
        draw_sprite(screen, dragon, x, y);
          for(int q=1;q<7;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        ll=ll+1;
        int k1=pp[p]+egg->h;
        int k2=k1+egg->w/2;
        int k3=k1+egg->w;
        int nn=ll+egg->h;
        if(nn==y&&((k1>=x&&k1<=xx)||(k2>=x&&k2<=xx)||(k3>=x&&k3<=xx)))
        {
               draw_sprite(screen, gameover, 0,0);
               while(!key[KEY_ESC]){}  
              break;
        }
     if(ll>SCREEN_H)
     {
        p=rand()%7;
        while(p==0)
        p=rand()%7;     
        ll=j[0]-2;
        pl=rand()%2;
     }
   }
    //else
     if(d[p]==1900)
     {
        p=rand()%7;
        while(p==0)
        p=rand()%7;     
        ll=j[0]-2;
        pl=rand()%2;
      }  
      if(pl==1&&d1[p]!=1900)
      {   
        draw_sprite(screen, egg, pp1[p], l2);
        rectfill(screen, pp1[p], l2, pp1[p]+egg->w, l2+egg->h, 0);
        draw_sprite(screen, level1, 0, 0);
        draw_sprite(screen, dragon, x, y);
          for(int q=1;q<6;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        
        l2=l2+1;
        int m1=pp1[p]+egg->h;
        int m2=m1+egg->w/2;
        int m3=m1+egg->w;
        int nm=l2+egg->h;
        if(nm==y&&((m1>=x&&m1<=xx)||(m2>=x&&m2<=xx)||(m3>=x&&m3<=xx)))
        {
              draw_sprite(screen, gameover, 0,0);
              while(!key[KEY_ESC]){}  
              break;
        }
      if(l2>SCREEN_H)
      {
        p=rand()%7;
        while(p==0)
        p=rand()%7;     
        l2=j[1]-2;
        pl=rand()%2;
      }
    }
      if(d1[p]==1900)
      {
        p=rand()%7;
        while(p==0)
        p=rand()%7;     
        ll=j[0]-2;
        pl=rand()%2;
      }
   //egg2
   
   xx=x+dragon->w;
       if(ol==0&&d[o]!=1900){
        draw_sprite(screen, egg, pp[o], ool);
        rectfill(screen, pp[o], ool, pp[o]+egg->w, ool+egg->h, 0);
        draw_sprite(screen, level1, 0, 0);
        draw_sprite(screen, dragon, x, y);
          for(int q=1;q<7;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        ool=ool+1;
        int k1=pp[o]+egg->h;
        int k2=k1+egg->w/2;
        int k3=k1+egg->w;
        int nn=ool+egg->h;
        if(nn==y&&((k1>=x&&k1<=xx)||(k2>=x&&k2<=xx)||(k3>=x&&k3<=xx)))
        {
               draw_sprite(screen, gameover, 0,0);
               while(!key[KEY_ESC]){}  
              break;
        }
     if(ool>SCREEN_H)
     {
        o=rand()%7;
        while(o==0)
        o=rand()%7;     
        ool=j[0]-2;
        ol=rand()%2;
     }
   }
    //else
     if(d[o]==1900)
     {
        o=rand()%7;
        while(o==0)
        o=rand()%7;     
        ool=j[0]-2;
        ol=rand()%2;
     } 
      if(ol==1&&d1[o]!=1900)
      {   
        draw_sprite(screen, egg, pp1[o], oo2);
        rectfill(screen, pp1[o], oo2, pp1[o]+egg->w, oo2+egg->h, 0);
        draw_sprite(screen, level1, 0, 0);
        draw_sprite(screen, dragon, x, y);
          for(int q=1;q<6;q++)
        {
            draw_sprite(screen, cik, d[q], f[0]);
            draw_sprite(screen, cik, d1[q], f[1]);
        }
        
        oo2=oo2+1;
        int m1=pp1[p]+egg->h;
        int m2=m1+egg->w/2;
        int m3=m1+egg->w;
        int nm=oo2+egg->h;
        if(nm==y&&((m1>=x&&m1<=xx)||(m2>=x&&m2<=xx)||(m3>=x&&m3<=xx)))
        {
              draw_sprite(screen, gameover, 0,0);
              while(!key[KEY_ESC]){}  
              break;
        }
      if(l2>SCREEN_H)
      {
        o=rand()%7;
        while(o==0)
        o=rand()%7;     
        oo2=j[0]-2;
        ol=rand()%2;
     }
    }
      if(d1[p]==1900)
      {
        o=rand()%7;
        while(o==0)
        o=rand()%7;     
        oo2=j[0]-2;
        ol=rand()%2;
     }  
     ///
      int qw=f[0]+cik->h;
      int wq=f[1]+cik->h;
      for(int q=1;q<7;q++)
        {
            
            if(pp[q]>=x&&pp[q]<=xx)
            {
                if(y==qw||y==108){
                    if(d[q]!=1900){
                 draw_sprite(screen, gameover, 0,0);
              while(!key[KEY_ESC]){}  
              break;
            }
        }
        }
            if(y==wq&&(pp1[q]>=x&&pp1[q]<=xx))
            {
                if(d1[q]!=1900){
                 draw_sprite(screen, gameover, 0,0);
              while(!key[KEY_ESC]){}  
              break;
            }
             
            }
        }
   } 
//-------------------------------------------------------------------------------

    }
    destroy_bitmap(cik);
    destroy_bitmap(fire);
    destroy_bitmap(start);
    destroy_bitmap(us);
    destroy_bitmap(level1);
    destroy_bitmap(egg);
	destroy_bitmap(inst);
	destroy_bitmap(about);
	destroy_bitmap(choose);
    destroy_bitmap(dragon);
    allegro_exit();
    return 0;
}
END_OF_MAIN()
