#pragma once
#include <string>

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
	private: System::Windows::Forms::TextBox^ InputCNP;
	protected:
	private: System::Windows::Forms::TextBox^ AfisajCNP;
	private: System::Windows::Forms::Button^ CalculeazaCNP;
	private: System::Windows::Forms::Button^ Stergere;

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
			this->InputCNP = (gcnew System::Windows::Forms::TextBox());
			this->AfisajCNP = (gcnew System::Windows::Forms::TextBox());
			this->CalculeazaCNP = (gcnew System::Windows::Forms::Button());
			this->Stergere = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// InputCNP
			// 
			this->InputCNP->Location = System::Drawing::Point(32, 21);
			this->InputCNP->Multiline = true;
			this->InputCNP->Name = L"InputCNP";
			this->InputCNP->Size = System::Drawing::Size(390, 116);
			this->InputCNP->TabIndex = 0;
			// 
			// AfisajCNP
			// 
			this->AfisajCNP->Location = System::Drawing::Point(32, 212);
			this->AfisajCNP->Multiline = true;
			this->AfisajCNP->Name = L"AfisajCNP";
			this->AfisajCNP->Size = System::Drawing::Size(390, 134);
			this->AfisajCNP->TabIndex = 1;
			// 
			// CalculeazaCNP
			// 
			this->CalculeazaCNP->Location = System::Drawing::Point(65, 156);
			this->CalculeazaCNP->Name = L"CalculeazaCNP";
			this->CalculeazaCNP->Size = System::Drawing::Size(119, 38);
			this->CalculeazaCNP->TabIndex = 2;
			this->CalculeazaCNP->Text = L"Calculeaza";
			this->CalculeazaCNP->UseVisualStyleBackColor = true;
			this->CalculeazaCNP->Click += gcnew System::EventHandler(this, &Form1::CalculeazaCNP_Click);
			// 
			// Stergere
			// 
			this->Stergere->Location = System::Drawing::Point(265, 156);
			this->Stergere->Name = L"Stergere";
			this->Stergere->Size = System::Drawing::Size(119, 38);
			this->Stergere->TabIndex = 3;
			this->Stergere->Text = L"Sterge";
			this->Stergere->UseVisualStyleBackColor = true;
			this->Stergere->Click += gcnew System::EventHandler(this, &Form1::Stergere_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(668, 464);
			this->Controls->Add(this->Stergere);
			this->Controls->Add(this->CalculeazaCNP);
			this->Controls->Add(this->AfisajCNP);
			this->Controls->Add(this->InputCNP);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CalculeazaCNP_Click(System::Object^ sender, System::EventArgs^ e)
	{

		if (InputCNP->Text->Length == 0 || InputCNP->Text->Length < 13)
		{
			MessageBox::Show("cnp invalid");
			return;
		}
		else if (Int32::Parse(InputCNP->Text->Substring(0, 1)) != (1, 2, 3, 4, 5, 6, 7, 8))
		{
			MessageBox::Show("cnp invalid");
			return;
		}

		else
		{
			String^ cnp = InputCNP->Text;
			int an = Int32::Parse(cnp->Substring(1, 2));
			int luna = Int32::Parse(cnp->Substring(3, 2));
			int ziua = Int32::Parse(cnp->Substring(5, 2));
			if (!(luna > 0 && luna < 13))
			{
				MessageBox::Show("cnp cu luna invalida");
				return;
			}
			if (!(ziua > 0 && ziua < 31))
			{
				MessageBox::Show("cnp cu ziua invalida");
				return;
			}

			DateTime azi = DateTime::Now;
			int century = 0;
			if (Int32::Parse(cnp->Substring(0, 1)) <= 2)
			{
				century = 1900;
			}
			else if (Int32::Parse(cnp->Substring(0, 1)) <= 4)
			{
				century = 1800;
			}
			else if (Int32::Parse(cnp->Substring(0, 1)) <= 6)
			{
				century = 2000;
			}
			else if (Int32::Parse(cnp->Substring(0, 1)) <= 8)
			{
				century = 1900;
			}
			int varsta = azi.Year - (century + an);
			
			AfisajCNP->Text = "Data nastere: " + ziua.ToString() + "/"  + luna.ToString() + "/" + (century + an).ToString() + "\r\nVarsta: " + varsta.ToString();
		}
	}
	private: System::Void Stergere_Click(System::Object^ sender, System::EventArgs^ e)
	{
		InputCNP->Clear();
		AfisajCNP->Clear();

	}
	};
}
