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
	/// Summary for AtmPinChange
	/// </summary>
	public ref class AtmPinChange : public System::Windows::Forms::Form
	{
	public:
		AtmPinChange(void)
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
		~AtmPinChange()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  PinCode_txt;
	protected: 
	private: System::Windows::Forms::TextBox^  AccountNum_txt;
	private: System::Windows::Forms::Label^  PinCode_lbl;
	private: System::Windows::Forms::Label^  AccountNum_lbl;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Enter_New_Pin_txt;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			this->PinCode_txt = (gcnew System::Windows::Forms::TextBox());
			this->AccountNum_txt = (gcnew System::Windows::Forms::TextBox());
			this->PinCode_lbl = (gcnew System::Windows::Forms::Label());
			this->AccountNum_lbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Enter_New_Pin_txt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// PinCode_txt
			// 
			this->PinCode_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->PinCode_txt->ForeColor = System::Drawing::SystemColors::WindowText;
			this->PinCode_txt->Location = System::Drawing::Point(127, 110);
			this->PinCode_txt->Name = L"PinCode_txt";
			this->PinCode_txt->Size = System::Drawing::Size(163, 20);
			this->PinCode_txt->TabIndex = 9;
			// 
			// AccountNum_txt
			// 
			this->AccountNum_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->AccountNum_txt->Location = System::Drawing::Point(127, 60);
			this->AccountNum_txt->Name = L"AccountNum_txt";
			this->AccountNum_txt->Size = System::Drawing::Size(163, 20);
			this->AccountNum_txt->TabIndex = 8;
			// 
			// PinCode_lbl
			// 
			this->PinCode_lbl->AutoSize = true;
			this->PinCode_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->PinCode_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->PinCode_lbl->Location = System::Drawing::Point(25, 110);
			this->PinCode_lbl->Name = L"PinCode_lbl";
			this->PinCode_lbl->Size = System::Drawing::Size(61, 15);
			this->PinCode_lbl->TabIndex = 7;
			this->PinCode_lbl->Text = L"PinCode";
			// 
			// AccountNum_lbl
			// 
			this->AccountNum_lbl->AutoSize = true;
			this->AccountNum_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AccountNum_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->AccountNum_lbl->Location = System::Drawing::Point(25, 60);
			this->AccountNum_lbl->Name = L"AccountNum_lbl";
			this->AccountNum_lbl->Size = System::Drawing::Size(87, 15);
			this->AccountNum_lbl->TabIndex = 6;
			this->AccountNum_lbl->Text = L"AccountNum";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(124, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Enter Your Data";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(123, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Enter New Pin";
			// 
			// Enter_New_Pin_txt
			// 
			this->Enter_New_Pin_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Enter_New_Pin_txt->Location = System::Drawing::Point(101, 192);
			this->Enter_New_Pin_txt->Name = L"Enter_New_Pin_txt";
			this->Enter_New_Pin_txt->Size = System::Drawing::Size(163, 20);
			this->Enter_New_Pin_txt->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(37, 261);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AtmPinChange::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(272, 261);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AtmPinChange::button2_Click);
			// 
			// AtmPinChange
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(388, 322);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Enter_New_Pin_txt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PinCode_txt);
			this->Controls->Add(this->AccountNum_txt);
			this->Controls->Add(this->PinCode_lbl);
			this->Controls->Add(this->AccountNum_lbl);
			this->Name = L"AtmPinChange";
			this->Text = L"AtmPinChange";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				  String^ constring=L"datasource=localhost;port=3306;username=root;password=1954";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand(" update atm.infoatm set PinCode='"+this->Enter_New_Pin_txt->Text+"'  where AccountNum='"+this->AccountNum_txt->Text+"' and PinCode='"+this->PinCode_txt->Text+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 try{
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 MessageBox::Show("Pin Code Changed");
				 while(myReader->Read()){
					
				 }
			     
				 }catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }

			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
};
}
