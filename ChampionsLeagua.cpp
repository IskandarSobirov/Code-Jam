#include <bits/stdc++.h> 
using namespace std;

//initialize two map containers as global varto hold team name as a key 
//and goal difference and points as values
map<string, int>points,goals;  

//function to compare goal differences and points
bool compareFunction(string &s1,string &s2) 
{
		if(points[s1] > points[s2]) return true;
		if(points[s1] < points[s2]) return false;
		if(goals[s1] > goals[s2]) return true;
	return false; 
}


int main() {
	
	int cases; 
	

	string firstTeam,secondTeam,vs;
	int firstTeamGoals,secondTeamGoals; 

	
	set<string>teams;

 
	cin>>cases; 
	while(cases--)
	{	
			points.clear();//empty the container for each test case
			goals.clear();//empty the container for each test case

			for(int i = 0; i < 12; i++)
			{
					cin>>firstTeam>>firstTeamGoals>>vs>>secondTeamGoals>>secondTeam;
					
					//calculate points and save
					if(firstTeamGoals > secondTeamGoals) 
									          	points[firstTeam]+=3; 
					else if(firstTeamGoals < secondTeamGoals) 
										                points[secondTeam]+=3;
					else 
					{
						points[firstTeam]++;
						points[secondTeam]++;
					}

					//calculate goal difference and save
					goals[firstTeam]+=firstTeamGoals - secondTeamGoals;
					goals[secondTeam]+=secondTeamGoals - firstTeamGoals;
					
					//use set container to avoid duplicates
					teams.insert(firstTeam);
					teams.insert(secondTeam);
						
			}

			//initialize vector using copy constructor
			vector<string>team(teams.begin(),teams.end());

			//sort vector in descending order
			sort(team.begin(),team.end(),compareFunction); 

			//print first two team with highest goal difference or points
			cout<<team[0]<<" "<<team[1]<<endl;
			
			  
	}			
				
	    
	
	return 0;
}



