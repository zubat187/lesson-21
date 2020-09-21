#include <iostream>
using namespace std;

void task4(){
  int m = 0;
  int n = 0;
  int counter = 0;
  cout <<"VVedite 2 chisla" <<endl;
cin >> m;
cin >> n;
for (int i = 0; i<m; i++){
for (int k = 0; k<n; k++){
  if((i+k)%100==35){
    counter++;
  }
}
}
cout << "Всего пар: " << counter <<endl;
}

void task3(){
  int n;
  int i;
  int sum1=0;
  cin >> n;
  sum1=sum1+i;
  int sum2=0;
  sum2=sum2+i;
  for ( int i = 1;  i <= n; i+=4)
  sum1+=i;
  for (int i = 2; i<=n; i+=6)
  sum2+=i;
  cout <<sum1 <<endl << sum2 <<endl;
}

void task2(){
int n;
cin >> n;
for (int i = 1; i <= n; i+=2 )
{
  if (i%100==35)
  cout << i <<endl;
}
}




int main() {
  //  int n;
  //  cin >> n;
  //  for (int i = 1; i<=n; i+=2)
  //  {
  //    cout << i << endl;
  //  }
  // task2();
  //task3();
  task4();
  return 0;
}

// void task6(){
//   char=@;
//   char=#;
//   char=%;
//   char=&;
  
// }