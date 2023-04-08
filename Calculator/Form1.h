#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ Calcul_Text;
	private: System::Windows::Forms::Button^ _1;
	private: System::Windows::Forms::Button^ _2;
	private: System::Windows::Forms::Button^ _3;
	private: System::Windows::Forms::Button^ _4;
	private: System::Windows::Forms::Button^ _5;
	private: System::Windows::Forms::Button^ _6;
	private: System::Windows::Forms::Button^ _7;
	private: System::Windows::Forms::Button^ _8;
	private: System::Windows::Forms::Button^ _9;
	private: System::Windows::Forms::Button^ _0;
	private: System::Windows::Forms::Button^ Decimale;
	private: System::Windows::Forms::Button^ egal;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ ori;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ per;

	protected:
















	private: System::Windows::Forms::Button^ Clear;


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
			this->Calcul_Text = (gcnew System::Windows::Forms::TextBox());
			this->_1 = (gcnew System::Windows::Forms::Button());
			this->_2 = (gcnew System::Windows::Forms::Button());
			this->_3 = (gcnew System::Windows::Forms::Button());
			this->_4 = (gcnew System::Windows::Forms::Button());
			this->_5 = (gcnew System::Windows::Forms::Button());
			this->_6 = (gcnew System::Windows::Forms::Button());
			this->_7 = (gcnew System::Windows::Forms::Button());
			this->_8 = (gcnew System::Windows::Forms::Button());
			this->_9 = (gcnew System::Windows::Forms::Button());
			this->_0 = (gcnew System::Windows::Forms::Button());
			this->Decimale = (gcnew System::Windows::Forms::Button());
			this->egal = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->ori = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->per = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Calcul_Text
			// 
			this->Calcul_Text->BackColor = System::Drawing::Color::White;
			this->Calcul_Text->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Calcul_Text->Location = System::Drawing::Point(18, 23);
			this->Calcul_Text->Multiline = true;
			this->Calcul_Text->Name = L"Calcul_Text";
			this->Calcul_Text->ReadOnly = true;
			this->Calcul_Text->Size = System::Drawing::Size(332, 73);
			this->Calcul_Text->TabIndex = 0;
			// 
			// _1
			// 
			this->_1->BackColor = System::Drawing::Color::White;
			this->_1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->_1->Location = System::Drawing::Point(18, 114);
			this->_1->Name = L"_1";
			this->_1->Size = System::Drawing::Size(59, 43);
			this->_1->TabIndex = 1;
			this->_1->Text = L"1";
			this->_1->UseVisualStyleBackColor = false;
			this->_1->Click += gcnew System::EventHandler(this, &Form1::_0_Click);
			// 
			// _2
			// 
			this->_2->BackColor = System::Drawing::Color::White;
			this->_2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->_2->Location = System::Drawing::Point(114, 114);
			this->_2->Name = L"_2";
			this->_2->Size = System::Drawing::Size(59, 43);
			this->_2->TabIndex = 2;
			this->_2->Text = L"2";
			this->_2->UseVisualStyleBackColor = false;
			this->_2->Click += gcnew System::EventHandler(this, &Form1::_0_Click);
			// 
			// _3
			// 
			this->_3->BackColor = System::Drawing::Color::White;
			this->_3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->_3->Location = System::Drawing::Point(210, 114);
			this->_3->Name = L"_3";
			this->_3->Size = System::Drawing::Size(59, 43);
			this->_3->TabIndex = 3;
			this->_3->Text = L"3";
			this->_3->UseVisualStyleBackColor = false;
			this->_3->Click += gcnew System::EventHandler(this, &Form1::_0_Click);
			// 
			// _4
			// 
			this->_4->BackColor = System::Drawing::Color::White;
			this->_4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->_4->Location = System::Drawing::Point(19, 178);
			this->_4->Name = L"_4";
			this->_4->Size = System::Drawing::Size(59, 43);
			this->_4->TabIndex = 4;
			this->_4->Text = L"4";
			this->_4->UseVisualStyleBackColor = false;
			this->_4->Click += gcnew System::EventHandler(this, &Form1::_0_Click);
			// 
			// _5
			// 
			this->_5->BackColor = System::Drawing::Color::White;
			this->_5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->_5->Location = System::Drawing::Point(114, 178);
			this->_5->Name = L"_5";
			this->_5->Size = System::Drawing::Size(59, 43);
			this->_5->TabIndex = 5;
			this->_5->Text = L"5";
			this->_5->UseVisualStyleBackColor = false;
			this->_5->Click += gcnew System::EventHandler(this, &Form1::_0_Click);
			// 
			// _6
			// 
			this->_6->BackColor = System::Drawing::Color::White;
			this->_6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->_6->Location = System::Drawing::Point(210, 178);
			this->_6->Name = L"_6";
			this->_6->Size = System::Drawing::Size(59, 43);
			this->_6->TabIndex = 6;
			this->_6->Text = L"6";
			this->_6->UseVisualStyleBackColor = false;
			this->_6->Click += gcnew System::EventHandler(this, &Form1::_0_Click);
			// 
			// _7
			// 
			this->_7->BackColor = System::Drawing::Color::White;
			this->_7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->_7->Location = System::Drawing::Point(19, 241);
			this->_7->Name = L"_7";
			this->_7->Size = System::Drawing::Size(59, 43);
			this->_7->TabIndex = 7;
			this->_7->Text = L"7";
			this->_7->UseVisualStyleBackColor = false;
			this->_7->Click += gcnew System::EventHandler(this, &Form1::_0_Click);
			// 
			// _8
			// 
			this->_8->BackColor = System::Drawing::Color::White;
			this->_8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->_8->Location = System::Drawing::Point(114, 241);
			this->_8->Name = L"_8";
			this->_8->Size = System::Drawing::Size(59, 43);
			this->_8->TabIndex = 8;
			this->_8->Text = L"8";
			this->_8->UseVisualStyleBackColor = false;
			this->_8->Click += gcnew System::EventHandler(this, &Form1::_0_Click);
			// 
			// _9
			// 
			this->_9->BackColor = System::Drawing::Color::White;
			this->_9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->_9->Location = System::Drawing::Point(210, 241);
			this->_9->Name = L"_9";
			this->_9->Size = System::Drawing::Size(59, 43);
			this->_9->TabIndex = 9;
			this->_9->Text = L"9";
			this->_9->UseVisualStyleBackColor = false;
			this->_9->Click += gcnew System::EventHandler(this, &Form1::_0_Click);
			// 
			// _0
			// 
			this->_0->BackColor = System::Drawing::Color::White;
			this->_0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->_0->Location = System::Drawing::Point(19, 311);
			this->_0->Name = L"_0";
			this->_0->Size = System::Drawing::Size(59, 43);
			this->_0->TabIndex = 10;
			this->_0->Text = L"0";
			this->_0->UseVisualStyleBackColor = false;
			this->_0->Click += gcnew System::EventHandler(this, &Form1::_0_Click);
			// 
			// Decimale
			// 
			this->Decimale->BackColor = System::Drawing::Color::White;
			this->Decimale->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Decimale->Location = System::Drawing::Point(114, 311);
			this->Decimale->Name = L"Decimale";
			this->Decimale->Size = System::Drawing::Size(59, 43);
			this->Decimale->TabIndex = 11;
			this->Decimale->Text = L".";
			this->Decimale->UseVisualStyleBackColor = false;
			this->Decimale->Click += gcnew System::EventHandler(this, &Form1::Decimale_Click);
			// 
			// egal
			// 
			this->egal->BackColor = System::Drawing::Color::White;
			this->egal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->egal->Location = System::Drawing::Point(210, 311);
			this->egal->Name = L"egal";
			this->egal->Size = System::Drawing::Size(59, 43);
			this->egal->TabIndex = 12;
			this->egal->Text = L"=";
			this->egal->UseVisualStyleBackColor = false;
			this->egal->Click += gcnew System::EventHandler(this, &Form1::egal_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->plus->FlatAppearance->BorderSize = 0;
			this->plus->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plus->Location = System::Drawing::Point(292, 114);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(59, 43);
			this->plus->TabIndex = 13;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &Form1::plus_Click);
			// 
			// ori
			// 
			this->ori->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ori->FlatAppearance->BorderSize = 0;
			this->ori->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ori->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ori->Location = System::Drawing::Point(292, 178);
			this->ori->Name = L"ori";
			this->ori->Size = System::Drawing::Size(59, 43);
			this->ori->TabIndex = 14;
			this->ori->Text = L"x";
			this->ori->UseVisualStyleBackColor = false;
			this->ori->Click += gcnew System::EventHandler(this, &Form1::ori_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->minus->FlatAppearance->BorderSize = 0;
			this->minus->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minus->Location = System::Drawing::Point(292, 241);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(59, 43);
			this->minus->TabIndex = 15;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &Form1::minus_Click);
			// 
			// per
			// 
			this->per->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->per->FlatAppearance->BorderSize = 0;
			this->per->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->per->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->per->Location = System::Drawing::Point(292, 311);
			this->per->Name = L"per";
			this->per->Size = System::Drawing::Size(59, 43);
			this->per->TabIndex = 16;
			this->per->Text = L"/";
			this->per->UseVisualStyleBackColor = false;
			this->per->Click += gcnew System::EventHandler(this, &Form1::per_Click);
			// 
			// Clear
			// 
			this->Clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Clear->FlatAppearance->BorderSize = 0;
			this->Clear->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Clear->Location = System::Drawing::Point(19, 373);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(332, 43);
			this->Clear->TabIndex = 17;
			this->Clear->Text = L"CLEAR";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &Form1::clear_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(365, 441);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->per);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->ori);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->egal);
			this->Controls->Add(this->Decimale);
			this->Controls->Add(this->_0);
			this->Controls->Add(this->_9);
			this->Controls->Add(this->_8);
			this->Controls->Add(this->_7);
			this->Controls->Add(this->_6);
			this->Controls->Add(this->_5);
			this->Controls->Add(this->_4);
			this->Controls->Add(this->_3);
			this->Controls->Add(this->_2);
			this->Controls->Add(this->_1);
			this->Controls->Add(this->Calcul_Text);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double numar1;
		String^ numar2;

	private: System::Void _0_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DigitButtonClick(sender, e);
	}

	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Calcul_Text->Clear();
		numar1 = 0;
		numar2 = "";
	}
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if ((Calcul_Text->Text != "") && (!LastCharIsOperator()))
		{
			String^ text = Calcul_Text->Text->Trim();

			if ((text[text->Length - 1] != '+') && (numar2->Length != 0))
			{
				numar1 += Double::Parse(numar2);
				//Calcul_Text->Clear();
				Calcul_Text->Text += "+";
				numar2 = "";
			}
		}
	}
	private: System::Void ori_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((Calcul_Text->Text != "") && (!LastCharIsOperator()))
		{
			String^ text = Calcul_Text->Text->Trim();

			if ((text[text->Length - 1] != '*') && (numar2->Length != 0))
			{
				if (numar1 != 0)
				{
					numar1 *= Double::Parse(numar2);
				}
				else
				{
					numar1 = Double::Parse(numar2);
				}
				//Calcul_Text->Clear();
				Calcul_Text->Text += "*";
				numar2 = "";
			}
		}
	}
	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if ((Calcul_Text->Text != "") && (!LastCharIsOperator()))
		{
			String^ text = Calcul_Text->Text->Trim();

			if ((text[text->Length - 1] != '-') && (numar2->Length != 0))
			{
				numar1 -= Double::Parse(numar2);
				//Calcul_Text->Clear();
				Calcul_Text->Text += "-";
				numar2 = "";
			}
		}
	}
	private: System::Void per_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if ((Calcul_Text->Text != "") && (!LastCharIsOperator()))
		{
			String^ text = Calcul_Text->Text->Trim();

			if ((text[text->Length - 1] != '/') && (numar2->Length != 0))
			{
				if (numar1 != 0)
				{
					numar1 /= Double::Parse(numar2);
				}
				else
				{
					numar1= Double::Parse(numar2);
				}
				//Calcul_Text->Clear();
				Calcul_Text->Text += "/";
				numar2 = "";
			}
		}
	}

	private: System::Void Decimale_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!Calcul_Text->Text->Contains("."))
		{
			Calcul_Text->Text += ".";
			numar2 += ".";
		}
	}
	private: System::Void egal_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ text = Calcul_Text->Text->Trim();

		if ((Calcul_Text->Text != "") && (numar2->Length != 0))
		{
			String^ lastoperator = text->Substring(((text->Length) - (numar2->Length) - 1), 1);
			if ((lastoperator->ToString() == "+") && (text[text->Length - 1] != '+'))
			{
				numar1 += double::Parse(numar2);
			}
			else if ((lastoperator->ToString() == "*") && (text[text->Length - 1] != '*'))
			{
				numar1 *= double::Parse(numar2);

			}
			else if ((lastoperator->ToString() == "-") && (text[text->Length - 1] != '-'))
			{
				numar1 -= double::Parse(numar2);

			}
			else if ((lastoperator->ToString() == "/") && (text[text->Length - 1] != '/'))
			{
				numar1 /= double::Parse(numar2);

			}


			Calcul_Text->Text += "=" + numar1.ToString();
			numar2 += "";
		}
	}

		   void Form1::DigitButtonClick(System::Object^ sender, System::EventArgs^ e)
		   {
			   Button^ button = (Button^)sender;
			   Calcul_Text->Text += button->Text;
			   numar2 += button->Text;
		   }

		   bool Form1::LastCharIsOperator()
		   {
			   String^ text = Calcul_Text->Text->Trim();

			   if (text->Length == 0)
			   {
				   return false;
			   }

			   Char lastChar = text[text->Length - 1];
			   if (text == ("+,-,*,/"))
			   {
				   return true;
			   }
		   }



	};
}
