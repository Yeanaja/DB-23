#include <bits/stdc++.h>
using namespace std;
string input [3] = {"art", "games", "hope"};
string menu;
string option[]={"yes", "no", "y", "n"};
int x= 1 + (rand() % 9);
string games[]={"tic tac toe", "rock paper scissors"};
string rps, rps1;

void lowerCase(){
    transform(menu.begin(), menu.end(), menu.begin(),::tolower);
}

void end(){

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
        check=0;
        
        while(menu!=games[check]){
            check++;
        }
        
        switch(check){
        case 0:
            cout<<"tic tac toe";
        break;
        
        case 1:
            cout<<"rock paper scissors"<<endl<<endl;
            cout<<"Masukan pilihan lu: ";
            cin>>rps;
            if(x==1 || x==4 || x==7){
                rps1="rock";
            }else if(x==2 || x==5|| x==8){
                rps1="paper";
            }else{
                rps1="scissors";
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