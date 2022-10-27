#include<iostream>

using namespace std;


struct cricket_player
{
	  char player_name[20];
	  char team_name[20];
	 float average;
	  int odi_rank;
	  int highest_score;
};

struct cricket_player p[10];

void display(struct cricket_player p1)
{
	  cout<<p1.player_name<<p1.team_name<<p1.average<<p1.odi_rank<<p1.highest_score;
}

int main()
{

for(int i=0;i<10;i++)
{
    cout <<"Enter"<<(i+1)<<" Player Data"<<endl;
    cout << "Enter Player Name ";
    cin >> p[i].player_name;
    cout << "Enter Team Name ";
    cin >>p[i].team_name;
    cout << "Enter Average ";
    cin >>p[i].average;
    cout << "Enter ODI Rank ";
    cin >>p[i].odi_rank;
    cout << "Enter High Score ";
    cin >>p[i].highest_score;
}

int temp=0;
for(int i=0;i<10;i++)
{
    if(temp < p[i].highest_score)
    {
            temp =p[i].highest_score;
    }
}

cout << "Highest Score Among 10 Player Is "<< temp;

}


