#pragma once

namespace endsemesterproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for ShowGrades
	/// </summary>
	public ref class ShowGrades : public System::Windows::Forms::Form
	{
	public:
		ShowGrades(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			StreamReader^ iscn = gcnew StreamReader("Student_grades.txt");
			while (1) {
				String ^ value1 = iscn->ReadLine();
				String ^ value2 = iscn->ReadLine();

				auto item = gcnew ListViewItem(gcnew array<String^> { value1, value2 });
				listView1->Items->Add(item);
				if (iscn->EndOfStream)
					break;
			}
			iscn->Close();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ShowGrades()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(345, 258);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &ShowGrades::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Name";
			this->columnHeader1->Width = 160;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Marks";
			this->columnHeader2->Width = 178;
			// 
			// ShowGrades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(345, 258);
			this->Controls->Add(this->listView1);
			this->Name = L"ShowGrades";
			this->Text = L"ShowGrades";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
