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
	/// Summary for DepositMoney
	/// </summary>
	public ref class DepositMoney : public System::Windows::Forms::Form
	{
	public:
		DepositMoney(void)
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
		~DepositMoney()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  PinCode_txt;
	private: System::Windows::Forms::TextBox^  AccountNum_txt;
	private: System::Windows::Forms::Label^  PinCode_lbl;
	private: System::Windows::Forms::Label^  AccountNum_lbl;
	private: System::Windows::Forms::Label^  EnterMoneyToDeposit_lbl;
	private: System::Windows::Forms::Label^  RemainingBlance_lbl;
	private: System::Windows::Forms::TextBox^  EnterMoneyToDeposit_txt;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PinCode_txt = (gcnew System::Windows::Forms::TextBox());
			this->AccountNum_txt = (gcnew System::Windows::Forms::TextBox());
			this->PinCode_lbl = (gcnew System::Windows::Forms::Label());
			this->AccountNum_lbl = (gcnew System::Windows::Forms::Label());
			this->EnterMoneyToDeposit_lbl = (gcnew System::Windows::Forms::Label());
			this->RemainingBlance_lbl = (gcnew System::Windows::Forms::Label());
			this->EnterMoneyToDeposit_txt = (gcnew System::Windows::Forms::TextBox());
			this->RemainingBlance_txt = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(362, 81);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 36);
			this->button1->TabIndex = 22;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DepositMoney::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(31, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 20);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Enter Your Data";
			// 
			// PinCode_txt
			// 
			this->PinCode_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->PinCode_txt->ForeColor = System::Drawing::SystemColors::WindowText;
			this->PinCode_txt->Location = System::Drawing::Point(134, 97);
			this->PinCode_txt->Name = L"PinCode_txt";
			this->PinCode_txt->Size = System::Drawing::Size(163, 20);
			this->PinCode_txt->TabIndex = 20;
			// 
			// AccountNum_txt
			// 
			this->AccountNum_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->AccountNum_txt->Location = System::Drawing::Point(134, 47);
			this->AccountNum_txt->Name = L"AccountNum_txt";
			this->AccountNum_txt->Size = System::Drawing::Size(163, 20);
			this->AccountNum_txt->TabIndex = 19;
			// 
			// PinCode_lbl
			// 
			this->PinCode_lbl->AutoSize = true;
			this->PinCode_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->PinCode_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->PinCode_lbl->Location = System::Drawing::Point(32, 97);
			this->PinCode_lbl->Name = L"PinCode_lbl";
			this->PinCode_lbl->Size = System::Drawing::Size(61, 15);
			this->PinCode_lbl->TabIndex = 18;
			this->PinCode_lbl->Text = L"PinCode";
			// 
			// AccountNum_lbl
			// 
			this->AccountNum_lbl->AutoSize = true;
			this->AccountNum_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AccountNum_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->AccountNum_lbl->Location = System::Drawing::Point(32, 47);
			this->AccountNum_lbl->Name = L"AccountNum_lbl";
			this->AccountNum_lbl->Size = System::Drawing::Size(87, 15);
			this->AccountNum_lbl->TabIndex = 17;
			this->AccountNum_lbl->Text = L"AccountNum";
			// 
			// EnterMoneyToDeposit_lbl
			// 
			this->EnterMoneyToDeposit_lbl->AutoSize = true;
			this->EnterMoneyToDeposit_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->EnterMoneyToDeposit_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->EnterMoneyToDeposit_lbl->Location = System::Drawing::Point(31, 146);
			this->EnterMoneyToDeposit_lbl->Name = L"EnterMoneyToDeposit_lbl";
			this->EnterMoneyToDeposit_lbl->Size = System::Drawing::Size(202, 20);
			this->EnterMoneyToDeposit_lbl->TabIndex = 23;
			this->EnterMoneyToDeposit_lbl->Text = L"Enter Money To Deposit";
			// 
			// RemainingBlance_lbl
			// 
			this->RemainingBlance_lbl->AutoSize = true;
			this->RemainingBlance_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RemainingBlance_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->RemainingBlance_lbl->Location = System::Drawing::Point(31, 230);
			this->RemainingBlance_lbl->Name = L"RemainingBlance_lbl";
			this->RemainingBlance_lbl->Size = System::Drawing::Size(109, 20);
			this->RemainingBlance_lbl->TabIndex = 24;
			this->RemainingBlance_lbl->Text = L"Total Blance";
			// 
			// EnterMoneyToDeposit_txt
			// 
			this->EnterMoneyToDeposit_txt->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->EnterMoneyToDeposit_txt->Location = System::Drawing::Point(134, 183);
			this->EnterMoneyToDeposit_txt->Name = L"EnterMoneyToDeposit_txt";
			this->EnterMoneyToDeposit_txt->Size = System::Drawing::Size(163, 20);
			this->EnterMoneyToDeposit_txt->TabIndex = 25;
			// 
			// RemainingBlance_txt
			// 
			this->RemainingBlance_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->RemainingBlance_txt->Location = System::Drawing::Point(134, 281);
			this->RemainingBlance_txt->Name = L"RemainingBlance_txt";
			this->RemainingBlance_txt->Size = System::Drawing::Size(163, 20);
			this->RemainingBlance_txt->TabIndex = 26;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(362, 175);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 34);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Enter";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DepositMoney::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button3->Location = System::Drawing::Point(362, 269);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(92, 42);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DepositMoney::button3_Click);
			// 
			// DepositMoney
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(472, 323);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->RemainingBlance_txt);
			this->Controls->Add(this->EnterMoneyToDeposit_txt);
			this->Controls->Add(this->RemainingBlance_lbl);
			this->Controls->Add(this->EnterMoneyToDeposit_lbl);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PinCode_txt);
			this->Controls->Add(this->AccountNum_txt);
			this->Controls->Add(this->PinCode_lbl);
			this->Controls->Add(this->AccountNum_lbl);
			this->Name = L"DepositMoney";
			this->Text = L"DepositMoney";
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
					
					 int a=Convert::ToInt32(EnterMoneyToDeposit_txt->Text);
int b=Convert::ToInt32(myReader->GetInt32("Blance").ToString());
int c=b+a;
RemainingBlance_txt->Text=Convert::ToString(c);
				 }
				 }catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }		 
		 }
};
}
