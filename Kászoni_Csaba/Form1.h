#pragma once
#include "MatchHeader.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;


	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TxtBx_PlayDays;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TxtBx_NrPlayers;
	private: System::Windows::Forms::Button^ Btn_Run;
	private: System::Windows::Forms::Button^ Btn_Exit;
	private: System::Windows::Forms::ListBox^ ListBox1;
	private: System::Windows::Forms::ListBox^ ListBox2;







	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TxtBx_PlayDays = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TxtBx_NrPlayers = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Run = (gcnew System::Windows::Forms::Button());
			this->Btn_Exit = (gcnew System::Windows::Forms::Button());
			this->ListBox1 = (gcnew System::Windows::Forms::ListBox());
			this->ListBox2 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(13, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(828, 54);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tournament Design";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Location = System::Drawing::Point(13, 97);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nr. of play days:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TxtBx_PlayDays
			// 
			this->TxtBx_PlayDays->Location = System::Drawing::Point(207, 97);
			this->TxtBx_PlayDays->Name = L"TxtBx_PlayDays";
			this->TxtBx_PlayDays->Size = System::Drawing::Size(81, 30);
			this->TxtBx_PlayDays->TabIndex = 2;
			this->TxtBx_PlayDays->TextChanged += gcnew System::EventHandler(this, &Form1::TxtBx_PlayDays_TextChanged);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Location = System::Drawing::Point(13, 140);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 31);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Nr. of players:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TxtBx_NrPlayers
			// 
			this->TxtBx_NrPlayers->Location = System::Drawing::Point(207, 140);
			this->TxtBx_NrPlayers->Name = L"TxtBx_NrPlayers";
			this->TxtBx_NrPlayers->Size = System::Drawing::Size(81, 30);
			this->TxtBx_NrPlayers->TabIndex = 4;
			this->TxtBx_NrPlayers->TextChanged += gcnew System::EventHandler(this, &Form1::TxtBx_NrPlayers_TextChanged);
			// 
			// Btn_Run
			// 
			this->Btn_Run->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_Run->Location = System::Drawing::Point(233, 487);
			this->Btn_Run->Name = L"Btn_Run";
			this->Btn_Run->Size = System::Drawing::Size(114, 43);
			this->Btn_Run->TabIndex = 5;
			this->Btn_Run->Text = L"Run";
			this->Btn_Run->UseVisualStyleBackColor = false;
			this->Btn_Run->Click += gcnew System::EventHandler(this, &Form1::Btn_Run_Click);
			// 
			// Btn_Exit
			// 
			this->Btn_Exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_Exit->Location = System::Drawing::Point(441, 487);
			this->Btn_Exit->Name = L"Btn_Exit";
			this->Btn_Exit->Size = System::Drawing::Size(114, 43);
			this->Btn_Exit->TabIndex = 6;
			this->Btn_Exit->Text = L"Exit";
			this->Btn_Exit->UseVisualStyleBackColor = false;
			this->Btn_Exit->Click += gcnew System::EventHandler(this, &Form1::Btn_Exit_Click);
			// 
			// ListBox1
			// 
			this->ListBox1->FormattingEnabled = true;
			this->ListBox1->ItemHeight = 25;
			this->ListBox1->Location = System::Drawing::Point(322, 82);
			this->ListBox1->Name = L"ListBox1";
			this->ListBox1->Size = System::Drawing::Size(502, 129);
			this->ListBox1->TabIndex = 7;
			// 
			// ListBox2
			// 
			this->ListBox2->FormattingEnabled = true;
			this->ListBox2->ItemHeight = 25;
			this->ListBox2->Location = System::Drawing::Point(13, 217);
			this->ListBox2->Name = L"ListBox2";
			this->ListBox2->Size = System::Drawing::Size(811, 254);
			this->ListBox2->TabIndex = 9;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(854, 557);
			this->Controls->Add(this->ListBox2);
			this->Controls->Add(this->ListBox1);
			this->Controls->Add(this->Btn_Exit);
			this->Controls->Add(this->Btn_Run);
			this->Controls->Add(this->TxtBx_NrPlayers);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TxtBx_PlayDays);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Form1";
			this->Text = L"Tournament Design";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		const int BYE = -1;
		String^ teams_array3 = "";
		List<String^>^ use_courts = gcnew List<String^>();
		List<String^>^ playdates_selected = gcnew List<String^>();
		List<String^>^ Teamsnames_parsed = gcnew List<String^>();
		List<String^>^ Teamsnames_parsed1 = gcnew List<String^>();
		List<Match^>^ MatchSchedule = gcnew List<Match^>();
		List<Byes^>^ ByesList = gcnew List<Byes^>();

		void GenerateMatches(int nr_of_teams)
		{

			// Generate Round Robin matches for the Teams
			String^ teams_array = GenerateRoundRobin(nr_of_teams);


			// Getting selected Rinks list
			use_courts->Clear();

			if (nr_of_teams % 2 == 0)
			{
				for (int i = 0;i < nr_of_teams / 2; i++)
				{
					use_courts->Add(Convert::ToString(i + 1));
				}
			}
			else
				for (int i = 0;i < (nr_of_teams - 1) / 2; i++)
				{
					use_courts->Add(Convert::ToString(i + 1));
				}

			// Generating play dates 
			DateTime datum = DateTime::Now;
			for (int i = 0; i <= Convert::ToInt32(Convert::ToInt32(TxtBx_PlayDays->Text)); i++)
			{
				playdates_selected->Add(Convert::ToString(datum.AddDays(i)));
			}

			String^ NewsLeagueAlgorithm = "";
			List<String^>^ Teamsnames_parsed_1 = gcnew List<String^>();

			for (int i = 0; i < teams_array->Length / nr_of_teams; i++)
			{
				String^ teamstrng = "";
				Teamsnames_parsed_1->Add(teams_array->ToString()->Substring(i * nr_of_teams, nr_of_teams));

				if (Teamsnames_parsed_1[i]->Length % 2 == 0)
				{
					teamstrng = Teamsnames_parsed_1[i]->Substring(2, Teamsnames_parsed_1[i]->Length - 2) + Teamsnames_parsed_1[i]->Substring(0, 2);
				}
				else
				{
					teamstrng = Teamsnames_parsed_1[i]->Substring(0, 1) + Teamsnames_parsed_1[i]->Substring(3, Teamsnames_parsed_1[i]->Length - 3) + Teamsnames_parsed_1[i]->Substring(1, 2);
				}

				Teamsnames_parsed_1[i] = teamstrng;
			}

			// Making teams_array long enough for the number of play dates
			if (playdates_selected->Count > Math::Truncate(teams_array->Length / nr_of_teams))
			{
				NewsLeagueAlgorithm += teams_array;

				for (int i = 0; i < Math::Truncate(playdates_selected->Count / Teamsnames_parsed_1->Count); i++)
				{
					if (i > 0)
					{
						for (int j = 0; j < Teamsnames_parsed_1->Count; j++)
						{
							String^ teamstrng = "";

							if (Teamsnames_parsed_1[j]->Length % 2 == 0)
							{
								teamstrng = Teamsnames_parsed_1[j]->Substring(2, Teamsnames_parsed_1[j]->Length - 2) + Teamsnames_parsed_1[j]->Substring(0, 2);
							}
							else
							{
								teamstrng = Teamsnames_parsed_1[j]->Substring(0, 1) + Teamsnames_parsed_1[j]->Substring(3, Teamsnames_parsed_1[j]->Length - 3) + Teamsnames_parsed_1[j]->Substring(1, 2);
							}

							Teamsnames_parsed_1[j] = teamstrng;
						}
					}

					for (int j = 0; j < Teamsnames_parsed_1->Count; j++)
					{
						NewsLeagueAlgorithm += Teamsnames_parsed_1[j];
					}
				}
			}
			else
			{
				NewsLeagueAlgorithm = teams_array;
			}

			teams_array = "";
			for (int i = 0; i < playdates_selected->Count; i++)
			{
				Teamsnames_parsed->Add(NewsLeagueAlgorithm->ToString()->Substring(i * nr_of_teams, nr_of_teams));
				teams_array += NewsLeagueAlgorithm->ToString()->Substring(i * nr_of_teams, nr_of_teams);
			}
			kiiras(teams_array, nr_of_teams);

		}

		List<String^>^ kiiras(String^ teams_array1, Int64 num_teams)
		{
			Teamsnames_parsed1->Clear();

			for (int i = 0; i < (teams_array1->Length / num_teams); i++)
			{
				Teamsnames_parsed1->Add(teams_array1->Substring(i * num_teams, num_teams));
				ListBox1->Items->Add(teams_array1->Substring(i * num_teams, num_teams));
			}

			return Teamsnames_parsed1;
		}

		String^ GenerateRoundRobin(int num_teams)
		{
			if (num_teams % 2 == 0)
			{
				return Generate_Full_RoundRobin(GenerateRoundRobinEven(num_teams), num_teams);
			}
			else
			{
				return Generate_Full_RoundRobin(GenerateRoundRobinOdd(num_teams), num_teams);
			}
		}

		String^ Generate_Full_RoundRobin(array<int, 2>^ RoundRobin_list, int num_teams)
		{
			String^ teams_array1 = "";
			String^ teams_array2 = "";
			String^ teams_array3 = "";
			String^ Teams = "";
			const int ASC_A = 65;

			// Generate a collection of letters to permute.
			for (int i = 0; i < num_teams; i++)
			{
				Teams += Convert::ToString(static_cast<Char>(ASC_A + i));
			}

			teams_array1 = "";
			for (int round = RoundRobin_list->GetLowerBound(1); round <= RoundRobin_list->GetUpperBound(1); round++)
			{
				for (int team = 0; team < num_teams; team++)
				{
					if (round % 2 == 0)
					{
						if (RoundRobin_list[team, round] == BYE)
						{
							teams_array1 = teams_array1->Substring(0, round * num_teams) + Convert::ToString(Teams[team]) + teams_array1->Substring(round * num_teams, teams_array1->Length - (round * num_teams));
						}
						else if (team < RoundRobin_list[team, round])
						{
							teams_array1 += Convert::ToString(Teams[team]) + Convert::ToString(Teams[RoundRobin_list[team, round]]);
						}
					}
					else if (round % 2 == 1)
					{
						if (RoundRobin_list[team, round] == BYE)
						{
							teams_array1 = teams_array1->Substring(0, round * num_teams) + Convert::ToString(Teams[team]) + teams_array1->Substring(round * num_teams, teams_array1->Length - (round * num_teams));
						}
						else if (team < RoundRobin_list[team, round])
						{
							teams_array1 += Convert::ToString(Teams[RoundRobin_list[team, round]]) + Convert::ToString(Teams[team]);
						}
					}
				}
			}

			String^ teams1 = Teams->Substring(Teams->Length - 2, 2) + Teams->Substring(0, Teams->Length - 2);

			teams_array2 = "";
			for (int round = RoundRobin_list->GetLowerBound(1); round <= RoundRobin_list->GetUpperBound(1); round++)
			{
				for (int team = num_teams - 1; team >= 0; team--)
				{
					if (round % 2 == 0)
					{
						if (RoundRobin_list[team, round] == BYE)
						{
							teams_array2 = teams_array2->Substring(0, round * num_teams) + Convert::ToString(Teams[team]) + teams_array2->Substring(round * num_teams, teams_array2->Length - (round * num_teams));
						}
						else if (team < RoundRobin_list[team, round])
						{
							teams_array2 += Convert::ToString(Teams[RoundRobin_list[team, round]]) + Convert::ToString(Teams[team]);
						}
					}
					else if (round % 2 == 1)
					{
						if (RoundRobin_list[team, round] == BYE)
						{
							teams_array2 = teams_array2->Substring(0, round * num_teams) + Convert::ToString(Teams[team]) + teams_array2->Substring(round * num_teams, teams_array2->Length - (round * num_teams));
						}
						else if (team < RoundRobin_list[team, round])
						{
							teams_array2 += Convert::ToString(Teams[team]) + Convert::ToString(Teams[RoundRobin_list[team, round]]);
						}
					}
				}
			}

			List<String^>^ Teamsnames_parsed = gcnew List<String^>();
			if (num_teams % 2 == 0)
			{
				for (int i = 0; i < teams_array1->Length; i += num_teams)
				{
					Teamsnames_parsed->Add(teams_array1->Substring(i, num_teams));
					Teamsnames_parsed->Add(teams_array2->Substring(i, num_teams));
				}
			}
			else
			{
				teams_array3 = teams_array1 + teams_array2;
			}

			for (int i = 0; i < Teamsnames_parsed->Count; i++)
			{
				teams_array3 += Teamsnames_parsed[i];
			}

			teams_array1 += teams_array2;

			return teams_array1;
		}

		array<int, 2>^ GenerateRoundRobinEven(int num_teams)
		{
			array<int, 2>^ results = gcnew array<int, 2>(num_teams, num_teams - 1);
			array<int, 2>^ results2 = gcnew array<int, 2>(num_teams, num_teams - 1);
			int round;
			int team;

			// Generate the result for one fewer teams.
			results = GenerateRoundRobinOdd(num_teams - 1);

			// Copy the results into a bigger array,
			// replacing the byes with the extra team.
			for (team = 0; team < num_teams - 1; team++)
			{
				for (round = 0; round < num_teams - 2; round++)
				{
					if (results[team, round] == BYE)
					{
						// Change the bye to the new team.
						results2[team, round] = num_teams - 1;
						results2[num_teams - 1, round] = team;
					}
					else
					{
						results2[team, round] = results[team, round];
					}
				}
			}

			return results2;
		}

		array<int, 2>^ GenerateRoundRobinOdd(int num_teams)
		{
			int n2;
			array<int, 2>^ results = gcnew array<int, 2>(num_teams - 1, num_teams - 1);
			array<int>^ teams = gcnew array<int>(num_teams);
			int i;
			int round;
			int team1;
			int team2;

			n2 = num_teams / 2;
			results = gcnew array<int, 2>(num_teams, num_teams);

			// Initialize the list of teams.
			for (i = 0; i < num_teams; i++)
			{
				teams[i] = i;
			}

			// Start the rounds.
			for (round = 0; round < num_teams; round++)
			{
				for (i = 0; i < n2; i++)
				{
					team1 = teams[n2 - i];
					team2 = teams[n2 + i + 1];
					results[team1, round] = team2;
					results[team2, round] = team1;
				}

				// Set the team with the bye.
				team1 = teams[0];
				results[team1, round] = BYE;

				// Rotate the array.
				RotateArray(teams);
			}

			return results;
		}

		void RotateArray(array<int>^ teams)
		{
			int tmp = teams[teams->Length - 1];
			for (int i = teams->Length - 1; i >= 1; i--)
			{
				teams[i] = teams[i - 1];
			}
			teams[0] = tmp;
		}

	private: System::Void TxtBx_PlayDays_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		// Verificarea daca textul introdus nu este un numar
		String^ currentText = TxtBx_PlayDays->Text;
		int result;
		bool isNumber = Int32::TryParse(currentText, result);
		if (!isNumber && !String::IsNullOrEmpty(currentText))
		{
			MessageBox::Show("Textul introdus nu este un numar!");
			String^ clearedText = currentText->Substring(0, currentText->Length - 1);
			TxtBx_PlayDays->Text = clearedText;
			TxtBx_PlayDays->SelectionStart = clearedText->Length;
		}
	}
	private: System::Void TxtBx_NrPlayers_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		// Verificarea daca textul introdus nu este un numar
		String^ currentText = TxtBx_NrPlayers->Text;
		int result;
		bool isNumber = Int32::TryParse(currentText, result);
		if (!isNumber && !String::IsNullOrEmpty(currentText))
		{
			MessageBox::Show("Textul introdus nu este un numar!");
			String^ clearedText = currentText->Substring(0, currentText->Length - 1);
			TxtBx_NrPlayers->Text = clearedText;
			TxtBx_NrPlayers->SelectionStart = clearedText->Length;
		}
	}

	private: System::Void Btn_Run_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Getting number of teams
		int nr_of_teams;
		nr_of_teams = Convert::ToInt32(TxtBx_NrPlayers->Text);

		if (nr_of_teams <= 25)
		{
			playdates_selected->Clear();
			ListBox1->Items->Clear();
			ListBox2->Items->Clear();
			ByesList->Clear();
			MatchSchedule->Clear();

			GenerateMatches(nr_of_teams);

			for (int i = 0; i < Teamsnames_parsed->Count; i++)
			{
				String^ array_string = Teamsnames_parsed[i];

				if (array_string->Length % 2 == 1)
				{
					Byes^ bye = gcnew Byes(i + 1, array_string->Substring(0, 1));
					ByesList->Add(bye);
					array_string = array_string->Remove(0, 1);
					delete bye;
				}

				int court = 0;
				for (int j = 0; j < array_string->Length;j += 2)
				{
					Match^ match1 = gcnew Match(i + 1, Convert::ToInt32(use_courts[court]), array_string->Substring(j, 1)->ToString(), array_string->Substring(j + 1, 1)->ToString());
					MatchSchedule->Add(match1);
					court += 1;
					delete match1;
				}

			}

			for (int i = 0; i < playdates_selected->Count; i++)
			{

				if (nr_of_teams % 2 == 1 && ByesList[i]->Round == i + 1)
				{
					String^ item_ = String::Format("Playdate: {0} - Bye Team : {1}", playdates_selected[i], ByesList[i]->Team);
					ListBox2->Items->Add(item_);

				}
				for each (Match ^ match1 in MatchSchedule)
				{
					if (match1->Round == i + 1)
					{

						String^ item_ = String::Format("Playdate: {0} - Match : Round {1}, Court {2}, {3} vs {4}", playdates_selected[i], match1->Round, match1->Court, match1->TeamHome, match1->TeamAway);
						ListBox2->Items->Add(item_);

					}
				}
			}
		}
		else
		{
			ListBox2->Items->Add("Max number of players is 25!!!");
		}
	};

	private: System::Void Btn_Exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	};


}
