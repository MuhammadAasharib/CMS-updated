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
	/// Summary for StudentInfo
	/// </summary>
	public ref class StudentInfo : public System::Windows::Forms::Form
	{
	public:
		StudentInfo(void)
		{
			InitializeComponent();
			StreamReader^ iscn = gcnew StreamReader("Student_info.txt");
			while (1) {
				String ^ value1 = iscn->ReadLine();
				String ^ value2 = iscn->ReadLine();
				String ^ value3 = iscn->ReadLine();
				String ^ value4 = iscn->ReadLine();
				String ^ value5 = iscn->ReadLine();
				String ^ value6 = iscn->ReadLine();
				String ^ value7 = iscn->ReadLine();
				String ^ value8 = iscn->ReadLine();

				auto item = gcnew ListViewItem(gcnew array<String^> { value1, value2, value3, value4, value5, value6, value7, value8 });
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
		~StudentInfo()
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
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;

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
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->ForeColor = System::Drawing::Color::Black;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(911, 361);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentInfo::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Name";
			this->columnHeader1->Width = 185;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Registration #";
			this->columnHeader2->Width = 90;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Father Name";
			this->columnHeader3->Width = 153;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Class";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Contact #";
			this->columnHeader5->Width = 120;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Address";
			this->columnHeader6->Width = 148;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"DOB";
			this->columnHeader7->Width = 54;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"DOA";
			this->columnHeader8->Width = 107;
			// 
			// StudentInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(911, 361);
			this->Controls->Add(this->listView1);
			this->Name = L"StudentInfo";
			this->Text = L"StudentInfo";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
