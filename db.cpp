#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
string input [3] = {"art", "games", "hope"};
string menu;
string option[]={"y", "n"};
int random = 1 + (rand() % 9);
string games[]={"tic tac toe", "rock paper scissors"};
string rps;

void lowerCase(){
    transform(menu.begin(), menu.end(), menu.begin(),::tolower);
}

int main(){
    cout<<"test";
    cin>>menu;
    lowerCase();
    
   int check=0;
    while(menu!=input[check]){
        check++;
    }
    
    switch(check){
    case 0:
        cout<<"test";
        break; 
    
    case 1:
        cout<<"test";
        cin>>menu;
        lowerCase();
        int check1=0;
        
        while(menu!=games[check1]){
            check1++;
        }
        
        switch(check1){
        case 0:
            cout<<"tic tac toe";
        break;
        
        case 1:
            cout<<"rock paper scissors"<<endl<<endl;
            cout<<"Masukan pilihan lu: ";
            cin>>rps;
            if(random==1 || random==4 || random==7){
                cout<<"rock";
            }else if(random==2 || random==5|| random==8){
                cout<<"paper";
            }else{
                cout<<"Scissors";
            }
        break;
        
        }
        break;
        
    case 2:
        cout<<"Hi, setelah 2 tahun lost contact karena kesalahan gw. Gw gak nyangka bisa dapet ucapin HBD ke 17 lu. Harapan gw sih semoga lu jadi orang yang lebih baik dari yang sekarang atau yang terakhir gw kenal. Jangan banyak banyak stress & self harm yaa kalo masih kaya dulu :D"<<endl;
        cout<<endl<<"kalau ku mau temenan lgi blh gk?"<<endl;
        cout<<"Do u wish to exit? [Y/N]";
        cin>>menu;
        lowerCase();
        break;
    }
    return 0;
}