#pragma once

#include"Student.h"
#include <cliext/set>

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
	/// Summary for AddStudentForm
	/// </summary>
	public ref class AddStudentForm : public System::Windows::Forms::Form
	{
	public:
		static set<Student^>^ StudentSet = gcnew set<Student^>;
		AddStudentForm(void)
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

				StudentSet->insert(temp);
			}
			r_file->Close();
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddStudentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  AddStuentMenu_Label;
	protected:
	private: System::Windows::Forms::Label^  NewStudentName_Label;
	private: System::Windows::Forms::Label^  NewRegistrationNumber_Label;
	private: System::Windows::Forms::Label^  NewStudentFather_Label;
	private: System::Windows::Forms::Label^  NewStudentClass_label;
	private: System::Windows::Forms::Label^  NewStudentContactNum_label;
	private: System::Windows::Forms::Label^  StudentAddress_label;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  ConfirmAddNewStudent_Button;
	private: System::Windows::Forms::Label^  DateOfAdmission_Label;
	private: System::Windows::Forms::Label^  DateOfBirth_Label;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker_DOB;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker_DOA;



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
			this->AddStuentMenu_Label = (gcnew System::Windows::Forms::Label());
			this->NewStudentName_Label = (gcnew System::Windows::Forms::Label());
			this->NewRegistrationNumber_Label = (gcnew System::Windows::Forms::Label());
			this->NewStudentFather_Label = (gcnew System::Windows::Forms::Label());
			this->NewStudentClass_label = (gcnew System::Windows::Forms::Label());
			this->NewStudentContactNum_label = (gcnew System::Windows::Forms::Label());
			this->StudentAddress_label = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->ConfirmAddNewStudent_Button = (gcnew System::Windows::Forms::Button());
			this->DateOfAdmission_Label = (gcnew System::Windows::Forms::Label());
			this->DateOfBirth_Label = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_DOB = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker_DOA = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// AddStuentMenu_Label
			// 
			this->AddStuentMenu_Label->AutoSize = true;
			this->AddStuentMenu_Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddStuentMenu_Label->Location = System::Drawing::Point(378, 9);
			this->AddStuentMenu_Label->Name = L"AddStuentMenu_Label";
			this->AddStuentMenu_Label->Size = System::Drawing::Size(94, 18);
			this->AddStuentMenu_Label->TabIndex = 0;
			this->AddStuentMenu_Label->Text = L"Add Student";
			// 
			// NewStudentName_Label
			// 
			this->NewStudentName_Label->AutoSize = true;
			this->NewStudentName_Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewStudentName_Label->Location = System::Drawing::Point(55, 63);
			this->NewStudentName_Label->Name = L"NewStudentName_Label";
			this->NewStudentName_Label->Size = System::Drawing::Size(50, 18);
			this->NewStudentName_Label->TabIndex = 1;
			this->NewStudentName_Label->Text = L"Name";
			// 
			// NewRegistrationNumber_Label
			// 
			this->NewRegistrationNumber_Label->AutoSize = true;
			this->NewRegistrationNumber_Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewRegistrationNumber_Label->Location = System::Drawing::Point(55, 107);
			this->NewRegistrationNumber_Label->Name = L"NewRegistrationNumber_Label";
			this->NewRegistrationNumber_Label->Size = System::Drawing::Size(160, 18);
			this->NewRegistrationNumber_Label->TabIndex = 2;
			this->NewRegistrationNumber_Label->Text = L"Registeration Number";
			// 
			// NewStudentFather_Label
			// 
			this->NewStudentFather_Label->AutoSize = true;
			this->NewStudentFather_Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewStudentFather_Label->Location = System::Drawing::Point(55, 147);
			this->NewStudentFather_Label->Name = L"NewStudentFather_Label";
			this->NewStudentFather_Label->Size = System::Drawing::Size(99, 18);
			this->NewStudentFather_Label->TabIndex = 3;
			this->NewStudentFather_Label->Text = L"Father Name";
			// 
			// NewStudentClass_label
			// 
			this->NewStudentClass_label->AutoSize = true;
			this->NewStudentClass_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewStudentClass_label->Location = System::Drawing::Point(55, 187);
			this->NewStudentClass_label->Name = L"NewStudentClass_label";
			this->NewStudentClass_label->Size = System::Drawing::Size(48, 18);
			this->NewStudentClass_label->TabIndex = 4;
			this->NewStudentClass_label->Text = L"Class";
			// 
			// NewStudentContactNum_label
			// 
			this->NewStudentContactNum_label->AutoSize = true;
			this->NewStudentContactNum_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewStudentContactNum_label->Location = System::Drawing::Point(55, 227);
			this->NewStudentContactNum_label->Name = L"NewStudentContactNum_label";
			this->NewStudentContactNum_label->Size = System::Drawing::Size(121, 18);
			this->NewStudentContactNum_label->TabIndex = 5;
			this->NewStudentContactNum_label->Text = L"Contact Number";
			// 
			// StudentAddress_label
			// 
			this->StudentAddress_label->AutoSize = true;
			this->StudentAddress_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentAddress_label->Location = System::Drawing::Point(55, 271);
			this->StudentAddress_label->Name = L"StudentAddress_label";
			this->StudentAddress_label->Size = System::Drawing::Size(67, 18);
			this->StudentAddress_label->TabIndex = 6;
			this->StudentAddress_label->Text = L"Address";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(257, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(257, 105);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(257, 148);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(257, 188);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(257, 228);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(257, 269);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 12;
			// 
			// ConfirmAddNewStudent_Button
			// 
			this->ConfirmAddNewStudent_Button->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConfirmAddNewStudent_Button->Location = System::Drawing::Point(257, 412);
			this->ConfirmAddNewStudent_Button->Name = L"ConfirmAddNewStudent_Button";
			this->ConfirmAddNewStudent_Button->Size = System::Drawing::Size(137, 24);
			this->ConfirmAddNewStudent_Button->TabIndex = 13;
			this->ConfirmAddNewStudent_Button->Text = L"Confirm Add Student";
			this->ConfirmAddNewStudent_Button->UseVisualStyleBackColor = true;
			this->ConfirmAddNewStudent_Button->Click += gcnew System::EventHandler(this, &AddStudentForm::ConfirmAddNewStudent_Button_Click);
			// 
			// DateOfAdmission_Label
			// 
			this->DateOfAdmission_Label->AutoSize = true;
			this->DateOfAdmission_Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateOfAdmission_Label->Location = System::Drawing::Point(55, 363);
			this->DateOfAdmission_Label->Name = L"DateOfAdmission_Label";
			this->DateOfAdmission_Label->Size = System::Drawing::Size(139, 18);
			this->DateOfAdmission_Label->TabIndex = 14;
			this->DateOfAdmission_Label->Text = L"Date Of Admission";
			// 
			// DateOfBirth_Label
			// 
			this->DateOfBirth_Label->AutoSize = true;
			this->DateOfBirth_Label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateOfBirth_Label->Location = System::Drawing::Point(55, 317);
			this->DateOfBirth_Label->Name = L"DateOfBirth_Label";
			this->DateOfBirth_Label->Size = System::Drawing::Size(95, 18);
			this->DateOfBirth_Label->TabIndex = 15;
			this->DateOfBirth_Label->Text = L"Date of Birth";
			// 
			// dateTimePicker_DOB
			// 
			this->dateTimePicker_DOB->Location = System::Drawing::Point(257, 314);
			this->dateTimePicker_DOB->Name = L"dateTimePicker_DOB";
			this->dateTimePicker_DOB->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker_DOB->TabIndex = 16;
			// 
			// dateTimePicker_DOA
			// 
			this->dateTimePicker_DOA->Location = System::Drawing::Point(257, 363);
			this->dateTimePicker_DOA->Name = L"dateTimePicker_DOA";
			this->dateTimePicker_DOA->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker_DOA->TabIndex = 17;
			// 
			// AddStudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(784, 479);
			this->Controls->Add(this->dateTimePicker_DOA);
			this->Controls->Add(this->dateTimePicker_DOB);
			this->Controls->Add(this->DateOfBirth_Label);
			this->Controls->Add(this->DateOfAdmission_Label);
			this->Controls->Add(this->ConfirmAddNewStudent_Button);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->StudentAddress_label);
			this->Controls->Add(this->NewStudentContactNum_label);
			this->Controls->Add(this->NewStudentClass_label);
			this->Controls->Add(this->NewStudentFather_Label);
			this->Controls->Add(this->NewRegistrationNumber_Label);
			this->Controls->Add(this->NewStudentName_Label);
			this->Controls->Add(this->AddStuentMenu_Label);
			this->Name = L"AddStudentForm";
			this->Text = L"Add Student";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConfirmAddNewStudent_Button_Click(System::Object^  sender, System::EventArgs^  e) {
				 //String^ name = textBox1->Text;
				 //String^ regNumber = textBox2->Text;
				 //String^ fatherName = textBox3->Text;
				 //String^ classname = textBox4->Text;
				 //String^ contactNumber = textBox5->Text;
				 //String^ address = textBox6->Text;
				 //
				 //

				 //StreamWriter^ owrt = gcnew StreamWriter("student_info.txt", true);
				 //owrt->WriteLine(name);
				 //owrt->WriteLine(regNumber);
				 //owrt->WriteLine(fatherName);
				 //owrt->WriteLine(classname);
				 //owrt->WriteLine(contactNumber);
				 //owrt->WriteLine(address);

				 //owrt->Close();
				 //MessageBox::Show("Student Added Successfully!");
				 //textBox1->Text = "";
				 //textBox2->Text = "";
				 //textBox3->Text = "";
				 //textBox4->Text = "";
				 //textBox5->Text = "";
				 //textBox6->Text = "";
				 Student^ temp = gcnew Student;

				 temp->name       =	 textBox1->Text;
				 temp->reg_number =  textBox2->Text;
				 temp->father_name= textBox3->Text;
				 temp->class_name =  textBox4->Text;
				 temp->contact_number =  textBox5->Text;
				 temp->address = textBox6->Text;
				 temp->dOB = dateTimePicker_DOB->Value.ToString("dd-MM-yyyy");
				 temp->dOA = dateTimePicker_DOA->Value.ToString("dd-MM-yyyy");
				 
				 set<Student^>::iterator itr;

				 StudentSet->insert(temp);
				 StreamWriter^ wfile = gcnew StreamWriter("Student_info.txt");

				 for (itr = StudentSet->begin(); itr != StudentSet->end(); itr++) {
					 wfile->Write(*itr);
				 }
				 wfile->Close();
				 MessageBox::Show("Student Added Successfully!");
				 textBox1->Text = "";
				 textBox2->Text = "";
				 textBox3->Text = "";
				 textBox4->Text = "";
				 textBox5->Text = "";
				 textBox6->Text = "";


	}
};
}
