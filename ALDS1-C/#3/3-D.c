#include<stdio.h>

#define SIZE 20005

int get_area(char* str, int len, int s, int t){
  int depth = 0, i;
  double res = 0;
  for(i = s; i < t; i++){
    if(str[i] == '/'){
      res += (double)depth-0.5;
      depth--;
    }
    if(str[i] == '\\'){
      res += (double)depth+0.5;
      depth++;
    }
    if(str[i] == '_') res += depth;
  }
  return res;
}

int main(){

  char str[SIZE];
  int height[SIZE] = {0}, vec[SIZE] = {0};
  scanf("%s",str);
  int len, h = 0;
  for(len = 0; ; len++){
    height[len] = h;
    if(str[len] == '/') h++;
    if(str[len] == '\\') h--;
    if(str[len] == '\0') break;
  }

  int pos = 0, cur = 0;
  while(pos < len){
    while(str[pos] != '\\' && pos < len) pos++;
    int nex = pos+1;

    while(nex <= len && height[nex] != height[pos]) nex++;
    if(nex <= len){
      vec[cur++] = get_area(str, len, pos, nex);
      pos = nex;
    }else{
      pos++;
    }
  }
  
  int i,sum = 0;
  for(i = 0; i < cur; i++) sum += vec[i];
  printf("%d\n%d", sum, cur);
  for(i = 0; i < cur; i++) printf(" %d", vec[i]);
  printf("\n");
  return 0;
}