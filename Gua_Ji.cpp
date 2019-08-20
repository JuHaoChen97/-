#include<iostream>
using namespace std;

void time(){
	    int time;
	    cout<<"Enter the years inside the game: ";cin>>time;
	    cout<<"The time in real world is :"<<time/96<<" days and "<<(time%96)/4<<" hours";
	    return;
	
}

void Ling_Qi_Ji_Shuang() {
	unsigned long long Smallest_Ling_Qi;
	unsigned long long Biggest_Ling_Qi;
	unsigned long long current_Ling_Qi;
	unsigned long long upgrade_requirement;
	
	int worst_situation;
	int best_situation;
	
	cout<<"Enter 0 for exit."<<endl;
	
	cout<<"Please enter the current lowest Ling_Qi_Value(0 = exit): ";
	cin>>Smallest_Ling_Qi;
	if(Smallest_Ling_Qi == 0) return;
	
	cout<<"Please enter the current highest Ling_Qi_Value(0 = exit): ";
	cin>>Biggest_Ling_Qi;
	if(Biggest_Ling_Qi == 0) return;
	
	cout<<"Please enter the current Ling_Qi_Value(0 = exit): ";
	cin>>current_Ling_Qi;
	if(current_Ling_Qi == 0) return;
	
	cout<<"Enter the amount of Ling_Qi required to upgrade(0 = exit): ";
	cin>>upgrade_requirement;
	if(upgrade_requirement == 0) return;
	cout<<endl<<endl<<endl;
	
	
	worst_situation = (upgrade_requirement-current_Ling_Qi)/(Smallest_Ling_Qi*12);
	cout<<"Worst situation need: "<<worst_situation<<" minutes"<<endl;
	cout<<"Which is "<<worst_situation/60<<" hours and "<<worst_situation%60<<" minutes."<<endl<<endl;
	
	
	best_situation = (upgrade_requirement-current_Ling_Qi)/(Biggest_Ling_Qi*12);
	cout<<"Best situation need: "<<best_situation<<" minutes"<<endl;
	cout<<"Which is "<<best_situation/60<<" hours and "<<best_situation%60<<" minutes."<<endl<<endl;
	
	cout<<"The average situation need "<<(worst_situation+best_situation)/120<<" hours and "<<((worst_situation+best_situation)/2)%60<<" minutes."<<endl<<endl;
	
}

int main(){
	int quit = 1;
	int selection;
	
	cout<<"计算下一次渡劫所需时间（输入1）"<<endl; 
	cout<<"游戏时间与现实时间换算（输入2） "<<endl;
	cin>>selection; 
	
	switch(selection){
		case 1: {
			do{
			Ling_Qi_Ji_Shuang();
			cout<<"___________________________________________________"<<endl;
			cout<<"Enter 0 to quit, any other number to continue: ";
			cin>>quit;
	}while(quit);
			break;
		}
		
		case 2:{
			time();
			break;
		}
	}
	
	return 0;
	
} 
