#include<iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>89
#include <fstream>
#include <string>
#include <iomanip>
#include <graphics.h>

using namespace std;

class Radio{
	
   public:
   	
	Radio() {                        // Default Constructor
		frequency=0.00;
   	    Frequency= 0.00;
   	    
   	
    }
	
	
	 void Onbutton(); 
	 
	 void Help();
	 
	 int scan();
	 
	 void setFrequency(float freq);
	 
	 float getFrequency();
	 
	 void displayFrequency();
	
	 int stop();
	  	
	 void Headphones();
	 
	 void Volume(int x);
	 
	 void Batterylevel();
	
	 void iniGraphics();
	 
	~Radio(){}                       // Default Destructor
	
	private:
		float frequency;
   	 	float Frequency;
   	 		
	
			
};
   //*****************Function to turn on the radio**************
	void Radio:: Onbutton(){
	//	On_button= true;
		cout<<"Radio turned on"<<endl; 
	}
  
	
	

	//******************Help function that reads a file and displays it***********
	void Radio::Help(){
		ifstream in("/Users/Kalidas/Desktop/Help.txt");
		
		if(!in){
			
			cout<<"Cannot open file"<<endl;
		}
		char str[255];
		while(in){
			
			in.getline(str,255);
			if(in)  cout<<str<<endl;
		}
		in.close();
	}
	
	void Radio::setFrequency(float freq){
		
	    
   	PlaySound(TEXT("C:\\news.wav"), NULL, SND_ASYNC);
   	
   	
	}
	
	 float Radio::getFrequency(){
	 	
	 	float Frequency= 100.3;
	 	return Frequency;
	 	
	 }
	 void Radio::displayFrequency(){
	 	
	 	 cout<<Frequency<<endl;
	}	int Radio:: scan(){
	
	srand ( time(NULL) ); //initialize the random seed

	int x;
  const float arrayNum[5] = {88.3, 91.7, 94.1, 99.5, 100.3};
  int RandIndex = rand() % 5; //generates a random number between 0 and 4
   x= RandIndex;
   cout << arrayNum[RandIndex]<<endl;
   if(x==0){
   	PlaySound(TEXT("C:\\song.wav"), NULL, SND_ASYNC);
   	
   }
   
   else if(x==1){
   	PlaySound(TEXT("C:\\news.wav"), NULL, SND_ASYNC);
   	
   }
   
   else if(x==2){
   	PlaySound(TEXT("C:\\songtwo.wav"), NULL, SND_ASYNC);
   	
   }
   
   else if(x==3){
   	PlaySound(TEXT("C:\\songthree.wav"), NULL, SND_ASYNC);
   	
   }
   
    else if(x==4){
   	PlaySound(TEXT("C:\\liveair.wav"), NULL, SND_ASYNC);
   	
   }
   
		
	}
     //***************Function to stop music******************
    int Radio:: stop(){
    	PlaySound(TEXT("MyAppSound"), NULL, SND_APPLICATION);
  	    return EXIT_SUCCESS;
    	
	}	
	//*************custom function headphones******************
	void Radio::Headphones(){
		
			string newstr, connect, disconnect, nop;
		
		cout<< "Select Connect or Disconnect:";
		cin>>newstr;
		if(newstr=="connect"){
			
			cout<<"Headphone Status:"<<newstr<<endl;
			
		}
		else if(newstr=="disconnect"){

			cout<<"Headphone Status:"<<newstr<<endl;
			
		}
		 else{
		 	return ;
		 }
		
	}
	// *****************Custom Function volume******************
	void Radio:: Volume(int x){
		
		int i=x;
		string newstr, increase, decrease, nop;
		cout<< "Select increase or decrease or donothing:";
		cin>>newstr;
		if(newstr=="increase"){
			cout<< "Volume Increased:"<<i+2<<endl;
			
		}
		else if(newstr=="decrease"){
			cout<<"Volume Decreased:"<<i-2<<endl;
			
		}
		 else if(newstr=="nop"){
		 	return ;
		 	
		 }
		 
	}
	
	void Radio::Batterylevel(){
			srand ( time(NULL) ); //initialize the random seed


    const int arrayNum[5] = {80, 65, 50, 40, 25};
    int RandIndex = rand() % 5; //generates a random number between 0 and 4
    cout << arrayNum[RandIndex]<<"%"<<endl;
	}


    void Radio:: iniGraphics(){
    	
    	initwindow(400, 300, "First Sample");
		char pattern[3]= {0x00, 0x70, 0x20};
		
		for(int i=0;i<100; i+=5){
		setcolor(GREEN);
		rectangle(90,10,320,30);
		rectangle(30,30,370,200);
		circle(95,130,60);
		circle(95,130,20);
		circle(305,130,60);
		circle(305,130,20);
		circle(95,50,8);
		setfillstyle(2,3);
		rectangle(150, 45,250, 90);
		
		moveto(152+i,45);
		lineto(152+i,90);
		moveto(160,45);
		lineto(160,60);
		moveto(170,45);
		lineto(170,60);
			moveto(180,45);
		lineto(180,60);
			moveto(190,45);
		lineto(190,60);
			moveto(200,45);
		lineto(200,60);
			moveto(210,45); 
		lineto(210,60);
			moveto(220,45);
		lineto(220,60);
			moveto(230,45);
		lineto(230,60);
			moveto(240,45);
		lineto(240,60);
			moveto(250,45);
		lineto(250,60);
	
		rectangle(170, 100, 185, 110);
	
		rectangle(215, 100, 230, 110);
	
	    rectangle(170, 120, 235, 170);
		
		
		
		moveto(175,170);
		lineto(175,170-(i/2));
		moveto(185,170);
		lineto(185,120+(i/2));
		moveto(195,170);
		lineto(195,170-(i/2));
       moveto(205,170);
		lineto(205,170-(i/2));
		moveto(215,170);
		lineto(215,120+(i/2));
		moveto(225,170);
		lineto(225,170-(i/2));
	  			delay(500);
		cleardevice();
    }
     
    
	}


int main() {
	  
	    //************************declare strings****************
	    
	    string str, help,On,stop, scan, frequency, volumeswitch, battery, headphonestatus,graphics, exit;
	     float freq;
	     int x;
	     //const float arrayNum[5]={0.00};
         //int RandIndex;
		
		//*****************create an object of class Radio******************
		
		Radio radio;
			
	
	  	
		while(true){
			//*********infinite loop that takes user input*******
			
			
			
			cout<<"Enter a command:";
			getline(cin, str);
			cout<<endl;
		// **** Respective Function calls on the object radio depending on the entered string********** 	
		if(str=="On"){
			
			radio.Onbutton();
			
		}	
		
		else if(str=="help"){
			
			radio.Help();
		}
		
		else if(str=="scan"){
			radio.scan();
			
			/*if(arrayNum[RandIndex]==0){
	
   PlaySound((LPCSTR) "C:\\song.WAV", NULL, SND_FILENAME | SND_ASYNC);
   system("PAUSE");}*/
			
		}	
		
		else if(str=="stop"){
			radio.stop();
			
		}
		else if(str=="frequency"){
			
			cout<<"Enter the Frequency:";
			cin>>freq;
			//if(freq==100.3){
			
			radio.setFrequency(100.3);
	
		}
		
		else if(str=="volumeswitch"){
		
		cout<<"Enter volume level:"<<endl;
		cin>>x;
		  radio.Volume(x);	
			
		} 
	   
	    else if(str=="battery"){
	    	
	    	radio.Batterylevel();
		}
	    
	    else if(str=="headphonestatus"){
	    	
	    	radio.Headphones();
	}
	   else if(str=="graphics"){
	   	
	   	   radio.iniGraphics();
	   	
	   }
		else if(str=="exit"){
			break;
			
		}
		else{
			cout<<"Invalid Command"<<endl;
		}	
     }        
     cleardevice();
return 0;
}
