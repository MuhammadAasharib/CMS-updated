#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Diagnostics;


namespace endsemesterproject {

	/// <summary>
	/// Summary for Student
	/// </summary>
	public ref class Student :  public System::ComponentModel::Component
	{
	public:
		Student(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			marks = 0;
		}
		Student(System::ComponentModel::IContainer ^container)
		{
			/// <summary>
			/// Required for Windows.Forms Class Composition Designer support
			/// </summary>

			container->Add(this);
			InitializeComponent();
		}
		String^ name;
		String^ reg_number;
		String^ father_name;
		String^ class_name;
		String^ contact_number;
		String^ address;
		String^ dOA;
		String^ dOB;
		
		
		int marks;
		static bool operator<(Student^ a, Student^ b) {
			return Convert::ToInt32(a->reg_number) < Convert::ToInt32(b->reg_number);
		}
		static bool operator==(Student^ a, Student^ b) {
			return Convert::ToInt32(a->reg_number) == Convert::ToInt32(b->reg_number);
		}
		virtual String^ ToString() override {
			return (name + "\r\n" + reg_number + "\r\n" + father_name + "\r\n" + class_name + "\r\n" + contact_number + "\r\n"
				    + address + "\r\n" + dOA + "\r\n" + dOB + "\r\n");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Student()
		{
			if (components)
			{
				delete components;
			}
		}

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
			components = gcnew System::ComponentModel::Container();
		}
#pragma endregion
	};
}
