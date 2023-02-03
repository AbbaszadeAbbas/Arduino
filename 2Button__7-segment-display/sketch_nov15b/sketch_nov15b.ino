long long s, s1, s2;
long long helper = 0;
int x = 0 ,y = 0,z;
bool zero[7] = {0,1,1,1,1,1,1};
bool one[7]  = {0,0,0,0,1,1,0};
bool two[7]  = {1,0,1,1,0,1,1};
bool three[7]= {1,0,0,1,1,1,1};
bool four[7] = {1,1,0,0,1,1,0};
bool five[7] = {1,1,0,1,1,0,1};
bool six[7]  = {1,1,1,1,1,0,1};
bool seven[7]= {0,0,0,0,1,1,1};
bool eight[7]= {1,1,1,1,1,1,1};
bool nine[7] = {1,1,0,1,1,1,1};

void setup() {
  for(long long kartof = 6;kartof<=12;kartof++){
    pinMode(kartof, OUTPUT);
  }
  pinMode(4, INPUT);
  pinMode(5, INPUT);
}

void loop() {
  if(digitalRead(5) == 1 && helper == 0){
    if(x>=0 && x<=9){
      x++;
    }
    if(x>9){
      x = 0;
    }
    helper = 1;
  }
  if(digitalRead(5) == 0 && helper == 1){
    
  }
  if(digitalRead(4) == 1 && helper == 0){
    if(x>=0 && x<=9){
      x--;
    }
    if(x<0){
      x = 9;
    }
    helper = 1;
  }

  if(x==0){
    for(long long kartof = 6;kartof<13;kartof++){
      digitalWrite(kartof, zero[kartof-6]);
    }    
  }
  if(x==1){
    for(long long kartof = 6;kartof<13;kartof++){
      digitalWrite(kartof, one[kartof-6]);
    }
  }
  if(x==2){
    for(long long kartof = 6;kartof<13;kartof++){
      digitalWrite(kartof, two[kartof-6]);
    }   
  }
  if(x==3){
    for(long long kartof = 6;kartof<13;kartof++){
      digitalWrite(kartof, three[kartof-6]);
    } 
  }
  if(x==4){
    for(long long kartof = 6;kartof<13;kartof++){
      digitalWrite(kartof, four[kartof-6]);
    }
  }
  if(x==5){
    for(long long kartof = 6;kartof<13;kartof++){
      digitalWrite(kartof, five[kartof-6]);
    }
  }
  if(x==6){
    for(long long kartof = 6;kartof<13;kartof++){
      digitalWrite(kartof, six[kartof-6]);
    }
  }
  if(x==7){
    for(long long kartof = 6;kartof<13;kartof++){
      digitalWrite(kartof, seven[kartof-6]);
    }
  }
  if(x==8){
    for(long long kartof = 6;kartof<13;kartof++){
      digitalWrite(kartof, eight[kartof-6]);
    }
  }
  if(x==9){
    for(long long kartof = 6;kartof<13;kartof++){
      digitalWrite(kartof, nine[kartof-6]);
    }
  }
}