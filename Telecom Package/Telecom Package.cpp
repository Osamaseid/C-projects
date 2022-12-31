//@osama.com 
//package service

#include <iostream>
using namespace std;
int main()
{

    int a;
    cout<<" WELLCOME TO OUR SERVICE CENTER!!\n PLEASE ENTER YOUR CHOICE\n\n 1, To get daily data package \n 2, To get daily voice package \n 3, To get weakly voice package \n 4, To get weakly data package \n 5, To get monthly package\n";
    cin>>a;

    switch (a){
case 1:
    int l;
       cout<<" Enter a number to get daily data package\n 1, To get 30 mb \n 2, To get 70 mb\n";
       cin>>l;
     switch (l){
        case 1:
         cout<<" successful!you get 30 mb"<<endl;
        break;
     case 2:
	     cout<<" successful!you get 70 mb"<<endl;
         break;
         default: (l);}
         break;
case 2:
    int t;
       cout<<"Enter a number to get daily voice package\n 1, To get 4 min voice package\n 2, To get 10 min voice package\n 3, To get 20 min voice package\n";
       cin>>t;
     switch (t){
        case 1:
         cout<<" successful!\n you get 4 min voice"<<endl;
        break;
        case 2:
         cout<<"successful!\n you get 10 min voice"<<endl;
        break;
        case 3:
         cout<<" successful!\n you get 20 min voice"<<endl;
        break;
        default: (t);}
        break;
case 3:
    int u;
        cout<<" Enter a number to get weakly voice package\n 1, To get 70 min\n 2,To get 2 hr voice\n";
        cin>>u;
    switch (u){
        case 1:
          cout<<" successful!\n you get 70 min voice package"<<endl;
        break;
        case 2:
          cout<<" successful!\n you get 90 hr voice package\n";
        break;
        default: (u);}
        break;
case 4:
    int o;
        cout<<"Enter a number to get weakly data package\n 1, To get 1GB\n 2,TO get 2GB data package\n";
        cin>>o;
    switch(o){
	   
        case 1:
          cout<<"successful!\n you get 1GB data package"<<endl;
        break;
        case 2:
		   cout<<"succssesful!\n you get 2GB data package"<<endl;
        break;
        default:(o);
	    }
	    break;
case 5:
    int m;
      cout<<"Enter a number to get monthly voiceckage\n 1, To get 120min voice package\n 2, To get 230min voice package\n"<<endl;
      cin>>m;
	switch(m){
	  
	   case 1:
		 cout<<" Successful!\n You get 120min voice package"<<endl;
	   break;
	   case 2:
		cout<<" Successful!\n You get 230min voice package"<<endl;
       break;
       default:(m);
       }
    break;
    default: (a);      
}
 return 0;
}

