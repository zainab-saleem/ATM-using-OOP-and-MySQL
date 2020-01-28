#pragma once

#include"stdafx.h"
#include"BlanceInquiry.h"
#include"AtmPinChange.h"
#include"CashWithdrawal.h"
#include"DepositMoney.h"
namespace ATMPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for user
	/// </summary>
	public ref class user : public System::Windows::Forms::Form
	{
	public:
		user(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~user()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(24, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(304, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Please Select From The Options Below";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(24, 103);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Blance Inquiry";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &user::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(199, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 45);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cash Withdrawal";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &user::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button3->Location = System::Drawing::Point(24, 213);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 45);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Diposit Money";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &user::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button4->Location = System::Drawing::Point(199, 213);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 45);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Atm Pin Change";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &user::button4_Click);
			// 
			// user
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(340, 309);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"user";
			this->Text = L"user";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 BlanceInquiry^ bl2=gcnew BlanceInquiry();
				 bl2->ShowDialog();
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 AtmPinChange^ at=gcnew AtmPinChange();
			 at->ShowDialog();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 CashWithdrawal^ cw=gcnew CashWithdrawal();
			 cw->ShowDialog();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 DepositMoney^ db=gcnew DepositMoney();
			 db->ShowDialog();
		 }
};
}
