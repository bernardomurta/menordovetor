#include <iostream>
using namespace std;

int menorv(int x,int vet[]){
  if(x==1){
    return vet[0];}
    else {
      int y=menorv(x-1,vet+1);
      return (vet[0] < y) ? vet[0] : y;
  }

}

int main(){
  int x;
  cin>>x;
  int vet[x];
  for(int i=0;i<x;i++){
    cin>>vet[i];
  }
  int menor=menorv(x,vet);
  cout<<menor;
return 0;
}