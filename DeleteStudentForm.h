#pragma once

#include"Student.h"
#include<cliext\set>

namespace endsemesterproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace cliext;

	/// <summary>
	/// Summary for DeleteStudentForm
	/// </summary>
	public ref class DeleteStudentForm : public System::Windows::Forms::Form
	{
	public:
		static set<Student^>^ DelSet = gcnew set<Student^>;

		DeleteStudentForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			StreamReader^ r_file = gcnew StreamReader("Student_info.txt");
			while (!r_file->EndOfStream) {
				Student^ temp = gcnew Student;
				temp->name = r_file->ReadLine();
				temp->reg_number = r_file->ReadLine();
				temp->father_name = r_file->ReadLine();
				temp->class_name = r_file->ReadLine();
				temp->contact_number = r_file->ReadLine();
				temp->address = r_file->ReadLine();
				temp->dOB = r_file->ReadLine();
				temp->dOA = r_file->ReadLine();

				DelSet->insert(temp);
			}
			r_file->Close();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DeleteStudentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(113, 198);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DeleteStudentForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(272, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter Regisration # of Student to be deleted";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(102, 111);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// DeleteStudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(298, 261);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"DeleteStudentForm";
			this->Text = L"DeleteStudentForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 set<Student^>::iterator it;
				 Student^ temp = gcnew Student;
				 temp->reg_number = textBox1->Text;
				 it = DelSet->find(temp);
				 DelSet->erase(it);
				 StreamWriter^ wfile = gcnew StreamWriter("Student_info.txt");
				 for (it = DelSet->begin(); it != DelSet->end(); it++) {
					 wfile->Write(*it);
				 }
				 wfile->Close();

				 MessageBox::Show("Student Deleted Successfully");
	}



	};
}