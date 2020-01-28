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
	/// Summary for DataInput
	/// </summary>
	public ref class DataInput : public System::Windows::Forms::Form
	{
	public:
		DataInput(void)
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
		~DataInput()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Entry_lbl;
	private: System::Windows::Forms::Label^  Name_lbl;
	private: System::Windows::Forms::Label^  AccountNum_lbl;
	private: System::Windows::Forms::Label^  PinCode_lbl;
	private: System::Windows::Forms::Label^  Blance_lbl;
	private: System::Windows::Forms::TextBox^  Entry_txt;

	protected: 

	protected: 





	private: System::Windows::Forms::TextBox^  Name_txt;

	private: System::Windows::Forms::TextBox^  AccountNum_txt;

	private: System::Windows::Forms::TextBox^  PinCode_txt;

	private: System::Windows::Forms::TextBox^  Blance_txt;

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
			this->Entry_lbl = (gcnew System::Windows::Forms::Label());
			this->Name_lbl = (gcnew System::Windows::Forms::Label());
			this->AccountNum_lbl = (gcnew System::Windows::Forms::Label());
			this->PinCode_lbl = (gcnew System::Windows::Forms::Label());
			this->Blance_lbl = (gcnew System::Windows::Forms::Label());
			this->Entry_txt = (gcnew System::Windows::Forms::TextBox());
			this->Name_txt = (gcnew System::Windows::Forms::TextBox());
			this->AccountNum_txt = (gcnew System::Windows::Forms::TextBox());
			this->PinCode_txt = (gcnew System::Windows::Forms::TextBox());
			this->Blance_txt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Entry_lbl
			// 
			this->Entry_lbl->AutoSize = true;
			this->Entry_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Entry_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Entry_lbl->Location = System::Drawing::Point(30, 35);
			this->Entry_lbl->Name = L"Entry_lbl";
			this->Entry_lbl->Size = System::Drawing::Size(36, 13);
			this->Entry_lbl->TabIndex = 0;
			this->Entry_lbl->Text = L"Entry";
			// 
			// Name_lbl
			// 
			this->Name_lbl->AutoSize = true;
			this->Name_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Name_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Name_lbl->Location = System::Drawing::Point(30, 71);
			this->Name_lbl->Name = L"Name_lbl";
			this->Name_lbl->Size = System::Drawing::Size(39, 13);
			this->Name_lbl->TabIndex = 1;
			this->Name_lbl->Text = L"Name";
			// 
			// AccountNum_lbl
			// 
			this->AccountNum_lbl->AutoSize = true;
			this->AccountNum_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AccountNum_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->AccountNum_lbl->Location = System::Drawing::Point(30, 104);
			this->AccountNum_lbl->Name = L"AccountNum_lbl";
			this->AccountNum_lbl->Size = System::Drawing::Size(79, 13);
			this->AccountNum_lbl->TabIndex = 2;
			this->AccountNum_lbl->Text = L"AccountNum";
			// 
			// PinCode_lbl
			// 
			this->PinCode_lbl->AutoSize = true;
			this->PinCode_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->PinCode_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->PinCode_lbl->Location = System::Drawing::Point(30, 140);
			this->PinCode_lbl->Name = L"PinCode_lbl";
			this->PinCode_lbl->Size = System::Drawing::Size(54, 13);
			this->PinCode_lbl->TabIndex = 3;
			this->PinCode_lbl->Text = L"PinCode";
			// 
			// Blance_lbl
			// 
			this->Blance_lbl->AutoSize = true;
			this->Blance_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Blance_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Blance_lbl->Location = System::Drawing::Point(30, 175);
			this->Blance_lbl->Name = L"Blance_lbl";
			this->Blance_lbl->Size = System::Drawing::Size(46, 13);
			this->Blance_lbl->TabIndex = 4;
			this->Blance_lbl->Text = L"Blance";
			// 
			// Entry_txt
			// 
			this->Entry_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Entry_txt->Location = System::Drawing::Point(129, 35);
			this->Entry_txt->Name = L"Entry_txt";
			this->Entry_txt->Size = System::Drawing::Size(157, 20);
			this->Entry_txt->TabIndex = 5;
			// 
			// Name_txt
			// 
			this->Name_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Name_txt->Location = System::Drawing::Point(129, 71);
			this->Name_txt->Name = L"Name_txt";
			this->Name_txt->Size = System::Drawing::Size(157, 20);
			this->Name_txt->TabIndex = 6;
			// 
			// AccountNum_txt
			// 
			this->AccountNum_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->AccountNum_txt->Location = System::Drawing::Point(129, 104);
			this->AccountNum_txt->Name = L"AccountNum_txt";
			this->AccountNum_txt->Size = System::Drawing::Size(157, 20);
			this->AccountNum_txt->TabIndex = 7;
			// 
			// PinCode_txt
			// 
			this->PinCode_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->PinCode_txt->Location = System::Drawing::Point(129, 140);
			this->PinCode_txt->Name = L"PinCode_txt";
			this->PinCode_txt->Size = System::Drawing::Size(157, 20);
			this->PinCode_txt->TabIndex = 8;
			// 
			// Blance_txt
			// 
			this->Blance_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Blance_txt->Location = System::Drawing::Point(129, 168);
			this->Blance_txt->Name = L"Blance_txt";
			this->Blance_txt->Size = System::Drawing::Size(157, 20);
			this->Blance_txt->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(60, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DataInput::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(211, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DataInput::button2_Click);
			// 
			// DataInput
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(390, 315);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Blance_txt);
			this->Controls->Add(this->PinCode_txt);
			this->Controls->Add(this->AccountNum_txt);
			this->Controls->Add(this->Name_txt);
			this->Controls->Add(this->Entry_txt);
			this->Controls->Add(this->Blance_lbl);
			this->Controls->Add(this->PinCode_lbl);
			this->Controls->Add(this->AccountNum_lbl);
			this->Controls->Add(this->Name_lbl);
			this->Controls->Add(this->Entry_lbl);
			this->Name = L"DataInput";
			this->Text = L"DataInput";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				  String^ constring=L"datasource=localhost;port=3306;username=root;password=1954";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("insert into atm.infoatm (Entry,Name,AccountNum,PinCode,blance) values('"+this->Entry_txt->Text+"','"+this->Name_txt->Text+"','"+this->AccountNum_txt->Text+"','"+this->PinCode_txt->Text+"','"+this->Blance_txt->Text+"');",conDataBase);
				 MySqlDataReader^ myReader;
				 try{
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 MessageBox::Show("saved");
				 while(myReader->Read()){
				 
				 }
				 
				 }catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }



			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
};
}
