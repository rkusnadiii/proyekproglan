#include <stdio.h>
#include <windows.h> 	

int login(){
  char nama[16];
  int loop=0;
  char user[10];
  char pase[10]="admin";
  while(1){
    system("cls");
    boxLine(49,0,22,1);
    cursor(50,0);
    printf("PROGRAM KASIR TOSERBA");
    cursor(54,3);
    printf("Username:");
    scanf("%s",&user);
    cursor(54,4);
    printf("Password:");
    while(1){
      int x=getch();
      if(x==13) break;
      else if(x==8&&loop>0){
        printf("\b \b");
        nama[loop]=0;
        loop--;
      }
      else{
        printf("*");
        nama[loop]=x;
        loop++;
      }
    }
    nama[loop]=0;
    int l;
    for(l=0;l<=strlen(nama);l++){
      if(l==strlen(nama)) return 0;
      else if(nama[l]!=pase[l]){
        loop=0;
        cursor(44,5);
        printf("Maaf Password yang anda masukan salah!!");
        _getch();
        system("cls");
        break;
      }
    }
  }
}
