// MainMenu_Project_1_Code.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <istream>
using namespace std;

//game NAME index
const int N_SIZE = 3;
string Game[N_SIZE];
//game GRAPHICscore index
const int GS_SIZE = 3;
int Graphic_scores[GS_SIZE];
//game Replayscore index
const int RP_SIZE = 3;
int Replay_scores[RP_SIZE];
//Combined Score index
const int CS_SIZE = 3;
int CombinedScore[CS_SIZE];
//Highest GraphicScore 
int Highest_GS = 0;
int Highest_GS_index = 0;
//Highest ReplayScore
int Highest_RP = 0;
int Highest_RP_index = 0;
//Highest Combined Score
int Highest_CS = 0;
int Highest_CS_index = 0;




int main()
{
	// Enter game titles
	cout << "You will Enter   " << N_SIZE << "  Games." << endl;
	for (int index = 0; index != N_SIZE; index++)
	{
		// Enter game titles
		cout << "Enter game Name"
			<< index + 1 << ":-";
		cin >> Game[index];
	}

	// Display game titles
	cout << "\"the games you Entered\"" << endl;
	for (int index = 0; index != N_SIZE; index++)
	{
		cout << index + 1 << ":-" << Game[index] << endl;
	}

	//Ask for games graphics score
	cout << "\n Tell us the Graphic score\n you would give these games\n out of a Low score of ""1""\n and a highscore of ""5" << endl << endl;;
	for (int index = 0; index != GS_SIZE; index++)
	{
		cout << "game " << index + 1 << ":-" << Game[index] << endl;
		cin >> Graphic_scores[index];
	}
	// Display Graphic scores after 
	for (int index = 0; index != GS_SIZE; index++)
	{
		cout << "Scores \t\t" << endl;
		cout << Game[index] << ":" << Graphic_scores[index] << "\n" << endl;
	}


	//Replay scores
	cout << " Now share with us your replay score\n for these games\n out of a Low score of 1 and\n a highscore of 5 \n)";
	for (int index = 0; index != RP_SIZE; index++)
	{
		cout << "game" << index + 1 << ":-" << Game[index] << endl;
		cin >> Replay_scores[index];
	}
	//Display replay scores after
	for (int index = 0; index != RP_SIZE; index++)
	{
		cout << "Score \t\t" << endl;
		cout << Game[index] << ":" << Replay_scores[index] << "\n" << endl;
	}

	//Combined scores 
	for (int index = 0; index < CS_SIZE; index++)
	{
		CombinedScore[index] = Graphic_scores[index] + Replay_scores[index] ;

	}
	



	//Highest Rated graphic score
	for (int index = 2; index < GS_SIZE; index++)
	{
		if (Graphic_scores[index] >= Highest_GS)
		{
			Highest_GS = Graphic_scores[index];
		}
		if (Graphic_scores[index] >= Graphic_scores[Highest_GS_index])
			Highest_GS_index = index;
		{
			cout << "The Highest rated graphic score is\nGAME::" << endl;
			cout << Game[Highest_GS_index] << " with the score :" << Graphic_scores[Highest_GS] << endl << endl;
		}
		
	//Highest Rated Replay score
		for (int index = 0; index < RP_SIZE; index++)
		{
			if (Replay_scores[index] > Highest_RP)
			{
				Highest_RP = Replay_scores[index];
			}
			
	//DISPLAY HRRP// 
			for (int index = 0; index < RP_SIZE; index++)
			{
				if (Replay_scores[index] >= Replay_scores[Highest_RP_index])
					Highest_RP_index = index;
				{
					cout << "The Highest rated replay score is\nGAME::" << endl;
					cout << Game[Highest_RP_index] << "with the score:" << index << endl << endl;
				}
			}

	//Highest Combined Score // 
			for (int index = 0; index < CS_SIZE; index++)

			{
				if (CombinedScore[index] > Highest_CS)
				{
					Highest_CS = CombinedScore[index];
				}

				//DISPLAY HRCS
				for (int index = 0; index < CS_SIZE; index++)
				{
					if (CombinedScore[index] >= CombinedScore[Highest_CS_index])
						Highest_CS_index = index;
					{
						cout << "The Highest rated Combined score is\nGAME::" << endl;
						cout << Game[Highest_CS_index] << "with the score :" << index << endl << endl;
					}
				}
			}
		}




		return 0;
	}