#include <Mouse.h>
#include <MouseTo.h>


int i=0;
int x=0;
int y=0;
int j=0;
int k=0;
int a[3]= {200, 550, 850};
int b[4]= {900, 1100, 1300, 1500};
int pad[4][3]={1,2,3,
               4,5,6,
               7,8,9,
               -1,0,-1};


int mat[4][4]={1,1,1,1,
               2,2,2,2,
               3,3,3,3,
               1,2,3,4};

void setup() {

Mouse.begin();
//Has to be calculated for different screens
MouseTo.setCorrectionFactor(0.35);
}

void loop() {

if(i==0){
   MouseTo.setTarget(0 , 0);
  while (MouseTo.move() == false) {}
  delay(500);

}
else if(i==1){
    MouseTo.setTarget(0 , 0);
  while (MouseTo.move() == false) {}
  delay(1000);
for(k=0;k<4;k++){

for(j=0; j< 4 ; j++){
  
for(y=0;y<4;y++){

 for(x=0; x<3;x++){

  if(mat[k][j]== pad[y][x]){
  MouseTo.setTarget(a[x], b[y],false);
  while (MouseTo.move() == false) {}
  delay(1000);
  Mouse.click();
  delay(1000);
  break;
  }
 
 }
}
}
 MouseTo.setTarget(850, 1500,false);
  while (MouseTo.move() == false) {}
  delay(1000);
  Mouse.click();
  delay(1000);
   MouseTo.setTarget(0 , 0);
  while (MouseTo.move() == false) {}
  delay(1000);
}

 
  
}else{

i=10;
  
}

i++;
}
