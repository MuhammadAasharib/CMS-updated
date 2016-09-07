#pragma once
#include <cliext/set>
#include"Student.h"

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
	/// Summary for Attendance
	/// </summary>
	public ref class Attendance : public System::Windows::Forms::Form
	{
	public:
		static int count_total;
		static set<Student^>^ DelSet = gcnew set<Student^>;
		Attendance(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			StreamReader^ r_file = gcnew StreamReader("Student_info.txt");
			count_total = 0;
			while (!r_file->EndOfStream) {
				count_total++;
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

				checkedListBox1->Items->Add(temp->name);
			}
			r_file->Close();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Attendance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

	protected:

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
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(0, 26);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(286, 259);
			this->checkedListBox1->TabIndex = 0;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Attendance::checkedListBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(198, 291);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Done";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Attendance::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 2;
			// 
			// Attendance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(285, 326);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox1);
			this->Name = L"Attendance";
			this->Text = L"Attendance";
			this->Load += gcnew System::EventHandler(this, &Attendance::Attendance_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Attendance_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 IEnumerator^ myEnum2 = checkedListBox1->CheckedItems->GetEnumerator();
				 String^ txt_name = dateTimePicker1->Value.ToString("dd-MM-yyyy") + ".txt";
				 StreamWriter^ watfile = gcnew StreamWriter(txt_name);
				 watfile->WriteLine("Present Students Name are:");
				 int count_present = 0;
				 while (myEnum2->MoveNext())
				 {
					 count_present++;
					 String^ itemChecked = safe_cast<String^>(myEnum2->Current);
					 watfile->WriteLine(itemChecked);
				 }

				 watfile->WriteLine();
				 watfile->WriteLine("Total Present: " + count_present);
				 watfile->WriteLine("Total Absent: " + (count_total - count_present));
				 watfile->WriteLine("Total Students: " + count_total);
				 watfile->Close();
				 MessageBox::Show("Attendance Stored Successfully!");
				 Close();
	}
	};
}
