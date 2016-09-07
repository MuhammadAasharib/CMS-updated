#pragma once
#include <iostream>
#include "MenuWindows.h"

namespace endsemesterproject {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  login_button;
	protected:
	private: System::Windows::Forms::TextBox^  username_textbox;
	private: System::Windows::Forms::TextBox^  password_textbox;
	private: System::Windows::Forms::Label^  Title_label;
	private: System::Windows::Forms::Label^  username_label;
	private: System::Windows::Forms::Label^  Password_label;

	protected:

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
			this->login_button = (gcnew System::Windows::Forms::Button());
			this->username_textbox = (gcnew System::Windows::Forms::TextBox());
			this->password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->Title_label = (gcnew System::Windows::Forms::Label());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->Password_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// login_button
			// 
			this->login_button->Location = System::Drawing::Point(447, 227);
			this->login_button->Name = L"login_button";
			this->login_button->Size = System::Drawing::Size(75, 23);
			this->login_button->TabIndex = 0;
			this->login_button->Text = L"Login";
			this->login_button->UseVisualStyleBackColor = true;
			this->login_button->Click += gcnew System::EventHandler(this, &MyForm::login_button_Click);
			// 
			// username_textbox
			// 
			this->username_textbox->Location = System::Drawing::Point(447, 102);
			this->username_textbox->Name = L"username_textbox";
			this->username_textbox->Size = System::Drawing::Size(100, 20);
			this->username_textbox->TabIndex = 1;
			// 
			// password_textbox
			// 
			this->password_textbox->Location = System::Drawing::Point(447, 163);
			this->password_textbox->Name = L"password_textbox";
			this->password_textbox->PasswordChar = '*';
			this->password_textbox->Size = System::Drawing::Size(100, 20);
			this->password_textbox->TabIndex = 2;
			this->password_textbox->UseSystemPasswordChar = true;
			// 
			// Title_label
			// 
			this->Title_label->AutoSize = true;
			this->Title_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_label->Location = System::Drawing::Point(203, 9);
			this->Title_label->Name = L"Title_label";
			this->Title_label->Size = System::Drawing::Size(429, 37);
			this->Title_label->TabIndex = 3;
			this->Title_label->Text = L"Class Management System";
			this->Title_label->Click += gcnew System::EventHandler(this, &MyForm::Title_label_Click);
			// 
			// username_label
			// 
			this->username_label->AutoSize = true;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_label->Location = System::Drawing::Point(256, 98);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(97, 24);
			this->username_label->TabIndex = 4;
			this->username_label->Text = L"Username";
			this->username_label->Click += gcnew System::EventHandler(this, &MyForm::username_label_Click);
			// 
			// Password_label
			// 
			this->Password_label->AutoSize = true;
			this->Password_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password_label->Location = System::Drawing::Point(256, 170);
			this->Password_label->Name = L"Password_label";
			this->Password_label->Size = System::Drawing::Size(92, 24);
			this->Password_label->TabIndex = 5;
			this->Password_label->Text = L"Password";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(784, 361);
			this->Controls->Add(this->Password_label);
			this->Controls->Add(this->username_label);
			this->Controls->Add(this->Title_label);
			this->Controls->Add(this->password_textbox);
			this->Controls->Add(this->username_textbox);
			this->Controls->Add(this->login_button);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void username_label_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void login_button_Click(System::Object^  sender, System::EventArgs^  e) {

				 StreamReader^ iscn = gcnew StreamReader("Login.txt");
				 String^ un, ^pw;
				 un = iscn->ReadLine();
				 pw = iscn->ReadLine();
				 iscn->Close();
				 if (username_textbox->Text == un && password_textbox->Text == pw) {
					 MenuWindows^ menu = gcnew MenuWindows;
					 Hide();
					 username_textbox->Text = "";
					 password_textbox->Text = "";
					 menu->ShowDialog();
					 Show();
				 }
				 else {
					 MessageBox::Show("Wrong Input Credentials");
				 }
				 /*	 String^ username = username_textbox->Text;
					  String^ password = password_textbox->Text;

					  if (username == "1234" && password == "1234"){
					  Hide();
					  MenuWindows ^ form = gcnew MenuWindows;
					  form->ShowDialog();
					  Show();
					  }

					  else {
					  MessageBox::Show("Incorrect Username or Password!!\nTry again!!");
					  }*/
	}

	private: System::Void Title_label_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}