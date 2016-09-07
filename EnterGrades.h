#pragma once
#include"Student.h"
#include <cliext/set>
#include<cliext/vector>

namespace endsemesterproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cliext;
	using namespace System::IO;

	/// <summary>
	/// Summary for EnterGrades
	/// </summary>
	public ref class EnterGrades : public System::Windows::Forms::Form
	{
	public:
		static set<Student^>^ gradeSet = gcnew set<Student^>;
		EnterGrades(void)
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
				

				gradeSet->insert(temp);
			}
			r_file->Close();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EnterGrades()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(197, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EnterGrades::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(152, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(152, 106);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Enter Registration Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Enter Marks";
			// 
			// EnterGrades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(284, 214);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"EnterGrades";
			this->Text = L"EnterGrades";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		set<Student^>::iterator it;
		Student^ temp = gcnew Student;
		temp->reg_number = textBox1->Text;
		it = gradeSet->find(temp);
		(*it)->marks = Convert::ToInt32(textBox2->Text);
		StreamWriter^ wfile = gcnew StreamWriter("Student_grades.txt");
		for (it = gradeSet->begin(); it != gradeSet->end(); it++) {
			wfile->WriteLine((*it)->name);
			wfile->WriteLine((*it)->marks);
		}
		wfile->Close();

		MessageBox::Show("Student's Grade Added Successfully");

	}
};
}
