#pragma once
#include"stdafx.h"
#include"DataInput.h"
namespace ATMPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for admin
	/// </summary>
	public ref class admin : public System::Windows::Forms::Form
	{
	public:
		admin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Password_txt->PasswordChar='*';
			Password_txt->MaxLength=10;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  UserName_lbl;
	protected: 
	private: System::Windows::Forms::Label^  Password_lbl;
	private: System::Windows::Forms::TextBox^  UserName_txt;
	private: System::Windows::Forms::TextBox^  Password_txt;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(admin::typeid));
			this->UserName_lbl = (gcnew System::Windows::Forms::Label());
			this->Password_lbl = (gcnew System::Windows::Forms::Label());
			this->UserName_txt = (gcnew System::Windows::Forms::TextBox());
			this->Password_txt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// UserName_lbl
			// 
			this->UserName_lbl->AutoSize = true;
			this->UserName_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->UserName_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->UserName_lbl->Location = System::Drawing::Point(270, 69);
			this->UserName_lbl->Name = L"UserName_lbl";
			this->UserName_lbl->Size = System::Drawing::Size(65, 13);
			this->UserName_lbl->TabIndex = 0;
			this->UserName_lbl->Text = L"UserName";
			// 
			// Password_lbl
			// 
			this->Password_lbl->AutoSize = true;
			this->Password_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Password_lbl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Password_lbl->Location = System::Drawing::Point(270, 129);
			this->Password_lbl->Name = L"Password_lbl";
			this->Password_lbl->Size = System::Drawing::Size(61, 13);
			this->Password_lbl->TabIndex = 1;
			this->Password_lbl->Text = L"Password";
			// 
			// UserName_txt
			// 
			this->UserName_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->UserName_txt->Location = System::Drawing::Point(360, 66);
			this->UserName_txt->Name = L"UserName_txt";
			this->UserName_txt->Size = System::Drawing::Size(100, 20);
			this->UserName_txt->TabIndex = 2;
			// 
			// Password_txt
			// 
			this->Password_txt->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Password_txt->Location = System::Drawing::Point(360, 122);
			this->Password_txt->Name = L"Password_txt";
			this->Password_txt->Size = System::Drawing::Size(100, 20);
			this->Password_txt->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button1->Location = System::Drawing::Point(334, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"login";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &admin::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-16, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(241, 254);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(522, 273);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Password_txt);
			this->Controls->Add(this->UserName_txt);
			this->Controls->Add(this->Password_lbl);
			this->Controls->Add(this->UserName_lbl);
			this->Name = L"admin";
			this->Text = L"admin";
//			this->Load += gcnew System::EventHandler(this, &admin::admin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
        String^ constring=L"datasource=localhost;port=3306;username=root;password=1954";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from atm.infoatm where UserName='"+this->UserName_txt->Text+"' and Password='"+this->Password_txt->Text+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 try{
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 int count=0;
				 while(myReader->Read()){
				 count=count+1;
				 }
				 if(count>1){
				 MessageBox::Show("username and password is correct");
				 this->Hide();
				 DataInput^ d2=gcnew DataInput();
				 d2->ShowDialog();
				 }
				/* else if(count>1){
				 MessageBox::Show("username and password is duplicate");
				 }*/
				 else
					 MessageBox::Show("user name and password is not correct");
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
			// private: System::Void admin_Load(System::Object^  sender, System::EventArgs^  e) {
				//	  }
}
};
}
