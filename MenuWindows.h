#pragma once

#include "AddStudentForm.h"
//#include "LoginForm.h"
//#include "AttendanceStudentForm.h"
#include "EnterGrades.h"
#include "ShowGrades.h"
#include "StudentInfo.h"
#include "DeleteStudentForm.h"
#include "Attendance.h"
#include "ShowAttendance.h"

namespace endsemesterproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MenuWindows
	/// </summary>
	public ref class MenuWindows : public System::Windows::Forms::Form
	{
	public:
		MenuWindows(void)
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
		~MenuWindows()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  AddStudent_Button;
	private: System::Windows::Forms::Button^  DeleteStudent_Button;

	private: System::Windows::Forms::Button^  ViewStudentInformation_Button;
	private: System::Windows::Forms::Button^  Attendance_Button;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  Logout_Button;
	private: System::Windows::Forms::Button^  ShowAttendance_button;
	private: System::Windows::Forms::Button^  EnterGrades_Button;
	private: System::Windows::Forms::Button^  ShowGrades_Button;
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
			this->AddStudent_Button = (gcnew System::Windows::Forms::Button());
			this->DeleteStudent_Button = (gcnew System::Windows::Forms::Button());
			this->ViewStudentInformation_Button = (gcnew System::Windows::Forms::Button());
			this->Attendance_Button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Logout_Button = (gcnew System::Windows::Forms::Button());
			this->ShowAttendance_button = (gcnew System::Windows::Forms::Button());
			this->EnterGrades_Button = (gcnew System::Windows::Forms::Button());
			this->ShowGrades_Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// AddStudent_Button
			// 
			this->AddStudent_Button->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddStudent_Button->Location = System::Drawing::Point(39, 136);
			this->AddStudent_Button->Name = L"AddStudent_Button";
			this->AddStudent_Button->Size = System::Drawing::Size(116, 26);
			this->AddStudent_Button->TabIndex = 0;
			this->AddStudent_Button->Text = L"Add Student";
			this->AddStudent_Button->UseVisualStyleBackColor = true;
			this->AddStudent_Button->Click += gcnew System::EventHandler(this, &MenuWindows::AddStudent_Button_Click);
			// 
			// DeleteStudent_Button
			// 
			this->DeleteStudent_Button->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteStudent_Button->Location = System::Drawing::Point(234, 136);
			this->DeleteStudent_Button->Name = L"DeleteStudent_Button";
			this->DeleteStudent_Button->Size = System::Drawing::Size(122, 26);
			this->DeleteStudent_Button->TabIndex = 1;
			this->DeleteStudent_Button->Text = L"Delete Student";
			this->DeleteStudent_Button->UseVisualStyleBackColor = true;
			this->DeleteStudent_Button->Click += gcnew System::EventHandler(this, &MenuWindows::DeleteStudent_Button_Click);
			// 
			// ViewStudentInformation_Button
			// 
			this->ViewStudentInformation_Button->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewStudentInformation_Button->Location = System::Drawing::Point(39, 234);
			this->ViewStudentInformation_Button->Name = L"ViewStudentInformation_Button";
			this->ViewStudentInformation_Button->Size = System::Drawing::Size(116, 49);
			this->ViewStudentInformation_Button->TabIndex = 3;
			this->ViewStudentInformation_Button->Text = L"View Student Information";
			this->ViewStudentInformation_Button->UseVisualStyleBackColor = true;
			this->ViewStudentInformation_Button->Click += gcnew System::EventHandler(this, &MenuWindows::ViewStudentInformation_Button_Click);
			// 
			// Attendance_Button
			// 
			this->Attendance_Button->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Attendance_Button->Location = System::Drawing::Point(639, 136);
			this->Attendance_Button->Name = L"Attendance_Button";
			this->Attendance_Button->Size = System::Drawing::Size(96, 26);
			this->Attendance_Button->TabIndex = 4;
			this->Attendance_Button->Text = L"Attendance";
			this->Attendance_Button->UseVisualStyleBackColor = true;
			this->Attendance_Button->Click += gcnew System::EventHandler(this, &MenuWindows::Attendance_Button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(250, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(312, 37);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Menu Home Screen";
			// 
			// Logout_Button
			// 
			this->Logout_Button->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Logout_Button->Location = System::Drawing::Point(651, 234);
			this->Logout_Button->Name = L"Logout_Button";
			this->Logout_Button->Size = System::Drawing::Size(84, 49);
			this->Logout_Button->TabIndex = 6;
			this->Logout_Button->Text = L"Logout";
			this->Logout_Button->UseVisualStyleBackColor = true;
			this->Logout_Button->Click += gcnew System::EventHandler(this, &MenuWindows::Logout_Button_Click);
			// 
			// ShowAttendance_button
			// 
			this->ShowAttendance_button->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ShowAttendance_button->Location = System::Drawing::Point(417, 136);
			this->ShowAttendance_button->Name = L"ShowAttendance_button";
			this->ShowAttendance_button->Size = System::Drawing::Size(167, 26);
			this->ShowAttendance_button->TabIndex = 7;
			this->ShowAttendance_button->Text = L"Show Attendance";
			this->ShowAttendance_button->UseVisualStyleBackColor = true;
			this->ShowAttendance_button->Click += gcnew System::EventHandler(this, &MenuWindows::ShowAttendance_button_Click);
			// 
			// EnterGrades_Button
			// 
			this->EnterGrades_Button->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnterGrades_Button->Location = System::Drawing::Point(234, 234);
			this->EnterGrades_Button->Name = L"EnterGrades_Button";
			this->EnterGrades_Button->Size = System::Drawing::Size(122, 49);
			this->EnterGrades_Button->TabIndex = 8;
			this->EnterGrades_Button->Text = L"Enter Grades";
			this->EnterGrades_Button->UseVisualStyleBackColor = true;
			this->EnterGrades_Button->Click += gcnew System::EventHandler(this, &MenuWindows::EnterGrades_Button_Click_1);
			// 
			// ShowGrades_Button
			// 
			this->ShowGrades_Button->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ShowGrades_Button->Location = System::Drawing::Point(438, 234);
			this->ShowGrades_Button->Name = L"ShowGrades_Button";
			this->ShowGrades_Button->Size = System::Drawing::Size(134, 49);
			this->ShowGrades_Button->TabIndex = 9;
			this->ShowGrades_Button->Text = L"Show Grades";
			this->ShowGrades_Button->UseVisualStyleBackColor = true;
			this->ShowGrades_Button->Click += gcnew System::EventHandler(this, &MenuWindows::ShowGrades_Button_Click);
			// 
			// MenuWindows
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(784, 361);
			this->Controls->Add(this->ShowGrades_Button);
			this->Controls->Add(this->EnterGrades_Button);
			this->Controls->Add(this->ShowAttendance_button);
			this->Controls->Add(this->Logout_Button);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Attendance_Button);
			this->Controls->Add(this->ViewStudentInformation_Button);
			this->Controls->Add(this->DeleteStudent_Button);
			this->Controls->Add(this->AddStudent_Button);
			this->Name = L"MenuWindows";
			this->Text = L"MenuWindows";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddStudent_Button_Click(System::Object^  sender, System::EventArgs^  e) {
				 AddStudentForm^ asf = gcnew AddStudentForm;
				 Hide();
				 asf->ShowDialog();
				 Show();

	}


//private: System::Void EnterGrades_Button_Click(System::Object^  sender, System::EventArgs^  e) {
//			 GradesForm ^ form = gcnew GradesForm;
//			 Hide();
//			 form->ShowDialog();
//			 Show();
//}

private: System::Void Attendance_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 Attendance^ form = gcnew Attendance;
			 this->Hide();
			 form->ShowDialog();
			 this->Show();
}
private: System::Void ViewStudentInformation_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 StudentInfo ^ form = gcnew StudentInfo;
			 Hide();
			 form->ShowDialog();
			 Show();
}
private: System::Void Logout_Button_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();

}

private: System::Void DeleteStudent_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 DeleteStudentForm ^ form = gcnew DeleteStudentForm;
			 Hide();
			 form->ShowDialog();
			 Show();
}

private: System::Void ShowAttendance_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 ShowAttendance ^ form = gcnew ShowAttendance;
			 Hide();
			 form->ShowDialog();
			 Show();
}
private: System::Void EnterGrades_Button_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 EnterGrades ^ form = gcnew EnterGrades;
			 Hide();
			 form->ShowDialog();
			 Show();
}
private: System::Void ShowGrades_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 ShowGrades ^ form = gcnew ShowGrades;
			 Hide();
			 form->ShowDialog();
			 Show();
}
};
}
