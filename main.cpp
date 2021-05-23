#include <iostream>
using namespace std;

void maxmin(int *p,int n, int &ma, int &mi){
  int maior=0,menor=999999,*pontaux;

    for(int i=0;i<n;i++){
      if(p[i]>maior){
        maior=p[i];
      }
      if(p[i]<menor){
        menor=p[i];
      }
    }
  pontaux=&ma;
  *pontaux=maior;
  pontaux=&mi;
  *pontaux=menor;
}


int main() {
 int N,max,min,*pont;
 cin>>N;
 int vet[N];
 for(int i=0;i<N;i++){
   cin>>vet[i];
 }
pont=vet;
maxmin(pont,N,max,min);




}