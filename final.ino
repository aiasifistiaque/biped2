#include <Servo.h>
void forward(int ,int ,int ,int );
Servo a;
Servo b;
Servo c;
Servo x;
Servo y;
Servo z;
int i=0;
double as,bs,cs,xs,ys,zs;
double ta,tb,tc,tx,ty,tz;
void setup() {
  as=115;
  
  Serial.begin(9600);

  a.attach(5);
  
  a.write(as);
  delay(1000);

   x.attach(8);
   xs=90;
   x.write(xs);
  delay(500);

   b.attach(6);
   bs=80;
   b.write(bs);
   delay(1000);

   y.attach(9);
   ys=90;
    y.write(ys);
    delay(1000);
  

  
  c.attach(7);
  cs=75;
  c.write(cs);
  
 
  
  
  z.attach(11);
  zs=80;
  z.write(zs);
   delay(1000);
   ta=as;
   tb=bs;
   tc=cs;
   tx=xs;
   ty=ys;
   tz=zs;  
  

  
  

   
  
  delay(5000);
}
 

void loop() {
  as=ta;
  xs=tx;
  bs=tb;
  ys=ty;
  cs=tc;
  zs=tz;

  
  for(i=0;i<20;i=i+2){

    
        as=as-1-1;
        bs=bs+1+1;
        ys=ys+1+1;
        zs=zs-0.5-.5;
        cs=cs-1-1;
        xs=xs-1-1;
        
        

        c.write(cs);
        delay(100);

       z.write(zs);
   
       delay(100);
        
       a.write(as);
       delay(100);

      
       b.write(bs);
       delay(100);

        
       y.write(ys);
       delay(100);

       
  
   
        

    
       

    
    x.write(xs);
    delay(100);
    
  }
  for(int k=0;k<20;k=k+2){
        //as=as-1-1;
        //bs=bs+1+1;
        //ys=ys+1+1;
        zs=zs+0.5+.5;
        cs=cs+1+1;
        //xs=xs-1-1;
    z.write(zs);
    delay(100);
    c.write(cs);
    delay(100);
  }

    while(1){
  for (int j=0;j<20;j=j+2){
    zs=zs+1+1;
    cs=cs+.5+.5;
    xs=xs+2+2;
    as=as+2+2;
    bs=bs-2-2;
    ys=ys-2-2;
    
    z.write(zs);
    delay(100);

    c.write(cs);
    delay(100);

    x.write(xs);
    delay(100);

    y.write(ys);
    delay(100);

    b.write(bs);
    delay(100);

    a.write(as);
    delay(100);

    
    
    
  }

  for(int k=0;k<20;k=k+2){
        //as=as-1-1;
        //bs=bs+1+1;
        //ys=ys+1+1;
        cs=cs-0.5-.5;
        zs=zs-1-1;
        //xs=xs-1-1;
         c.write(cs);
    delay(100);
    z.write(zs);
    delay(100);
   
  }
  for (int j=0;j<20;j=j+2){
    zs=zs-.5-.5;
    cs=cs-1-1;
    xs=xs-2-2;
    as=as-2-2;
    bs=bs+2+2;
    ys=ys+2+2;
    
    c.write(cs);
    delay(100);

    z.write(zs);
    delay(100);

    a.write(as);
    delay(100);

    b.write(bs);
    delay(100);

    y.write(ys);
    delay(100);

    x.write(xs);
    delay(100);

    
    
    
  }
  for(int k=0;k<20;k=k+2){
        //as=as-1;
        //bs=bs+1;
        //ys=ys+1;
        zs=zs+0.5+.5;
        cs=cs+1+1;
        //xs=xs-1;
    z.write(zs);
    delay(100);
    c.write(cs);
    delay(100);
  }
  }
 

}
