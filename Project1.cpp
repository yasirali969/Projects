#include<iostream>
using namespace std;
int main(){
	string Question[]={"1.Who is the first prophet ?",
	          "2.Who is the founder of C++ ?",
	          "3.How many bytes int contain?"};
	
	string Options[][3]={{"A. Adam","B.Musa","C.Noah"},
	            {"A.Bill Gates","B. Elon Musk","C.Bjarne"},
	            {"A.2 bytes","B.4 bytes","C.13 bytes"}};
	           
	char Answerkey[]={'A','C','B'};
	
	int size=sizeof(Question)/sizeof(Question[0]);
	
	char guess;
	int score;
	
	for(int i=0;i<size;i++){
		cout<<"****************\n";
		cout<<Question[i]<<'\n';
		cout<<"****************\n";
		
		for(int j=0;j<sizeof(Options[i])/sizeof(Options[i][0]);j++){
			cout<< Options[i][j]<<'\n';
		}
		cin>>guess;
		guess=toupper(guess);
		
		if(guess==Answerkey[i]){
			cout<<"Correct\n";
			score++;
		}
		else{
			cout<<"Wrong"<<'\n';
			cout<<"Answer"<<Answerkey[i]<<'\n';
		}
		
	}
	    cout<<"********************";
		cout<<"       Results      ";
		cout<<"********************";
		cout<<" CORRECT GUESSES: "<<score<<'\n';
		cout<<" # of Questions: "<<size<<'\n';
		cout<<"SCORE ="<<(score/size)*100<<"%";


}