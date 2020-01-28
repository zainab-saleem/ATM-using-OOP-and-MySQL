#pragma once

namespace ATMPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for CashWithdrawal
	/// </summary>
	public ref class CashWithdrawal : public System::Windows::Forms::Form
	{
	public:
		CashWithdrawal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
           PinCode_txt->PasswordChar='*';
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CashWithdrawal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  PinCode_txt;
	private: System::Windows::Forms::TextBox^  AccountNum_txt;
	private: System::Windows::Forms::Label^  PinCode_lbl;
	private: System::Windows::Forms::Label^  AccountNum_lbl;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  EnterMoneyToWithdraw_lbl;
	private: System::Windows::Forms::Label^  RemainingBlance_lbl;
	private: System::Windows::Forms::TextBox^  EnterMoneyToWithdraw_txt;
	private: System::Windows::Forms::TextBox^  RemainingBlance_txt;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

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
			this->PinCode_txt = (gcnew System::Windows::Forms::TextBox());
			this->AccountNum_txt = (gcnew System::Windows::Forms::TextBox());
			this->PinCode_lbl = (gcnew System::Windows::Forms::Label());
			this->AccountNum_lbl = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->EnterMoneyToWithdraw_lbl = (gcnew System::Windows::Forms::Label());
			this->RemainingBlance_lbl = (gcnew System::Windows::Forms::Label());
			this->EnterMoneyToWithdraw_txt = (gcnew System::Windows::Forms::TextBox());
			this->RemainingBlance_txt = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(51, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 20);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Enter Your Data";
			// 
			// PinCode_txt
			// 
			this->PinCode_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->PinCode_txt->ForeColor = System::Drawing::SystemColors::WindowText;
			this->PinCode_txt->Location = System::Drawing::Point(154, 98);
			this->PinCode_txt->Name = L"PinCode_txt";
			this->PinCode_txt->Size = System::Drawing::Size(163, 20);
			this->PinCode_txt->TabIndex = 14;
			// 
			// AccountNum_txt
			// 
			this->AccountNum_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->AccountNum_txt->Location = System::Drawing::Point(154, 48);
			this->AccountNum_txt->Name = L"AccountNum_txt";
			this->AccountNum_txt->Size = System::Drawing::Size(163, 20);
			this->AccountNum_txt->TabIndex = 13;
			// 
			// PinCode_lbl
			// 
			this->PinCode_lbl->AutoSize = true;
			this->PinCode_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->PinCode_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->PinCode_lbl->Location = System::Drawing::Point(52, 98);
			this->PinCode_lbl->Name = L"PinCode_lbl";
			this->PinCode_lbl->Size = System::Drawing::Size(61, 15);
			this->PinCode_lbl->TabIndex = 12;
			this->PinCode_lbl->Text = L"PinCode";
			// 
			// AccountNum_lbl
			// 
			this->AccountNum_lbl->AutoSize = true;
			this->AccountNum_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AccountNum_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->AccountNum_lbl->Location = System::Drawing::Point(52, 48);
			this->AccountNum_lbl->Name = L"AccountNum_lbl";
			this->AccountNum_lbl->Size = System::Drawing::Size(87, 15);
			this->AccountNum_lbl->TabIndex = 11;
			this->AccountNum_lbl->Text = L"AccountNum";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(382, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 36);
			this->button1->TabIndex = 16;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CashWithdrawal::button1_Click);
			// 
			// EnterMoneyToWithdraw_lbl
			// 
			this->EnterMoneyToWithdraw_lbl->AutoSize = true;
			this->EnterMoneyToWithdraw_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->EnterMoneyToWithdraw_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->EnterMoneyToWithdraw_lbl->Location = System::Drawing::Point(51, 150);
			this->EnterMoneyToWithdraw_lbl->Name = L"EnterMoneyToWithdraw_lbl";
			this->EnterMoneyToWithdraw_lbl->Size = System::Drawing::Size(214, 20);
			this->EnterMoneyToWithdraw_lbl->TabIndex = 17;
			this->EnterMoneyToWithdraw_lbl->Text = L"Enter Money To Withdraw";
			// 
			// RemainingBlance_lbl
			// 
			this->RemainingBlance_lbl->AutoSize = true;
			this->RemainingBlance_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RemainingBlance_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->RemainingBlance_lbl->Location = System::Drawing::Point(51, 231);
			this->RemainingBlance_lbl->Name = L"RemainingBlance_lbl";
			this->RemainingBlance_lbl->Size = System::Drawing::Size(154, 20);
			this->RemainingBlance_lbl->TabIndex = 18;
			this->RemainingBlance_lbl->Text = L"Remaining Blance";
			// 
			// EnterMoneyToWithdraw_txt
			// 
			this->EnterMoneyToWithdraw_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->EnterMoneyToWithdraw_txt->Location = System::Drawing::Point(154, 197);
			this->EnterMoneyToWithdraw_txt->Name = L"EnterMoneyToWithdraw_txt";
			this->EnterMoneyToWithdraw_txt->Size = System::Drawing::Size(163, 20);
			this->EnterMoneyToWithdraw_txt->TabIndex = 19;
			// 
			// RemainingBlance_txt
			// 
			this->RemainingBlance_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->RemainingBlance_txt->Location = System::Drawing::Point(154, 276);
			this->RemainingBlance_txt->Name = L"RemainingBlance_txt";
			this->RemainingBlance_txt->Size = System::Drawing::Size(163, 20);
			this->RemainingBlance_txt->TabIndex = 20;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(382, 189);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 35);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Enter";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CashWithdrawal::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button3->Location = System::Drawing::Point(382, 267);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 36);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &CashWithdrawal::button3_Click);
			// 
			// CashWithdrawal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(523, 330);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->RemainingBlance_txt);
			this->Controls->Add(this->EnterMoneyToWithdraw_txt);
			this->Controls->Add(this->RemainingBlance_lbl);
			this->Controls->Add(this->EnterMoneyToWithdraw_lbl);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PinCode_txt);
			this->Controls->Add(this->AccountNum_txt);
			this->Controls->Add(this->PinCode_lbl);
			this->Controls->Add(this->AccountNum_lbl);
			this->Name = L"CashWithdrawal";
			this->Text = L"CashWithdrawal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				  String^ constring=L"datasource=localhost;port=3306;username=root;password=1954";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand(" select* from atm.infoatm  where AccountNum='"+this->AccountNum_txt->Text+"' and PinCode='"+this->PinCode_txt->Text+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 try{
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				int count=0;
				 while(myReader->Read()){
					count++;
				 }
				 if(count>=0){
				  MessageBox::Show("Acount Num AND Pin Code Accepted");
				 }
				 else
					 MessageBox::Show("Wrong Account Num OR Pin Code....TRY AGAIN");
				 }catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			  String^ constring=L"datasource=localhost;port=3306;username=root;password=1954";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand(" update atm.infoatm set Blance='"+this->RemainingBlance_txt->Text+"'  where AccountNum='"+this->AccountNum_txt->Text+"' and PinCode='"+this->PinCode_txt->Text+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 try{
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				
				 while(myReader->Read()){
					
				 }
			     
				 }catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }

			 Application::Exit();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1954";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand(" select* from atm.infoatm where AccountNum='"+this->AccountNum_txt->Text+"' and PinCode='"+this->PinCode_txt->Text+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 try{
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 if(myReader->Read()){
					
					 int a=Convert::ToInt32(EnterMoneyToWithdraw_txt->Text);
int b=Convert::ToInt32(myReader->GetInt32("Blance").ToString());
int c=b-a;
RemainingBlance_txt->Text=Convert::ToString(c);
				 }
				 }catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }		 
		 }
};
}
