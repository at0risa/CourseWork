#pragma once
#include "MyFormForEditing.h";
#include "MyFormForEditing2.h";
#include "MyFormForEditing3.h";
#include "MyFormForEditing4.h";
#include <stdlib.h>
#include <stdio.h>


namespace modernsigninuicpp {

	using namespace System::IO;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyFormForEditingMain
	/// </summary>
	public ref class MyFormForEditingMain : public System::Windows::Forms::Form
	{
	public:
		MyFormForEditingMain(void)
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
		~MyFormForEditingMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormForEditingMain::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->���������������ToolStripMenuItem,
					this->�����������������ToolStripMenuItem, this->�����������������ToolStripMenuItem, this->���������������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1008, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 11.25F, System::Drawing::FontStyle::Bold));
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(151, 24);
			this->���������������ToolStripMenuItem->Text = L"�������� �������";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyFormForEditingMain::���������������ToolStripMenuItem_Click);
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 11.25F, System::Drawing::FontStyle::Bold));
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(163, 24);
			this->�����������������ToolStripMenuItem->Text = L"����������� ������";
			this->�����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyFormForEditingMain::�����������������ToolStripMenuItem_Click_1);
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��������������������������������������������ToolStripMenuItem,
					this->������������������ToolStripMenuItem
			});
			this->�����������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 11.25F, System::Drawing::FontStyle::Bold));
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(165, 24);
			this->�����������������ToolStripMenuItem->Text = L"������������ �����";
			// 
			// ��������������������������������������������ToolStripMenuItem
			// 
			this->��������������������������������������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display",
				9.75F));
			this->��������������������������������������������ToolStripMenuItem->Name = L"��������������������������������������������ToolStripMenuItem";
			this->��������������������������������������������ToolStripMenuItem->Size = System::Drawing::Size(391, 22);
			this->��������������������������������������������ToolStripMenuItem->Text = L"ʳ������ ������, ��� ���������� �� ���������� ������";
			this->��������������������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyFormForEditingMain::��������������������������������������������ToolStripMenuItem_Click_1);
			// 
			// ������������������ToolStripMenuItem
			// 
			this->������������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9.75F));
			this->������������������ToolStripMenuItem->Name = L"������������������ToolStripMenuItem";
			this->������������������ToolStripMenuItem->Size = System::Drawing::Size(391, 22);
			this->������������������ToolStripMenuItem->Text = L"��������� ��� ������";
			this->������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyFormForEditingMain::������������������ToolStripMenuItem_Click);
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����������������������������ToolStripMenuItem,
					this->�����������������������������ToolStripMenuItem
			});
			this->���������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 11.25F, System::Drawing::FontStyle::Bold));
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(136, 24);
			this->���������������ToolStripMenuItem->Text = L"���������� �����";
			// 
			// ����������������������������ToolStripMenuItem
			// 
			this->����������������������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9.75F));
			this->����������������������������ToolStripMenuItem->Name = L"����������������������������ToolStripMenuItem";
			this->����������������������������ToolStripMenuItem->Size = System::Drawing::Size(273, 22);
			this->����������������������������ToolStripMenuItem->Text = L"�������� ���������� ����������";
			this->����������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyFormForEditingMain::����������������������������ToolStripMenuItem_Click);
			// 
			// �����������������������������ToolStripMenuItem
			// 
			this->�����������������������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9.75F));
			this->�����������������������������ToolStripMenuItem->Name = L"�����������������������������ToolStripMenuItem";
			this->�����������������������������ToolStripMenuItem->Size = System::Drawing::Size(273, 22);
			this->�����������������������������ToolStripMenuItem->Text = L"��������� ���������� ����������";
			this->�����������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyFormForEditingMain::�����������������������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 11.25F, System::Drawing::FontStyle::Bold));
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyFormForEditingMain::�����ToolStripMenuItem_Click);
			// 
			// MyFormForEditingMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1008, 681);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyFormForEditingMain";
			this->Text = L"MyFormForEditingMain";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void ���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Hide();

			MyFormForEditing^ myFormForEditing = gcnew MyFormForEditing();

			myFormForEditing->ShowDialog();
			this->Show();
		}

private: System::Void �����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();

	MyFormForEditing2^ myFormForEditing2 = gcnew MyFormForEditing2();

	myFormForEditing2->ShowDialog();
	this->Show();

}

private: System::Void ��������������������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

	MyFormForEditing3^ myFormForEditing3 = gcnew MyFormForEditing3();

	myFormForEditing3->ShowDialog();
	this->Show();

}



private: System::Void �����������������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

	MyFormForEditing2^ myFormForEditing2 = gcnew MyFormForEditing2();

	myFormForEditing2->ShowDialog();
	this->Show();
}
private: System::Void ��������������������������������������������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

	MyFormForEditing3^ myFormForEditing3 = gcnew MyFormForEditing3();

	myFormForEditing3->ShowDialog();
	this->Show();
}
private: System::Void ����������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

	MyFormForEditing4^ myFormForEditing4 = gcnew MyFormForEditing4();

	myFormForEditing4->ShowDialog();
	this->Show();
}
private: System::Void �����������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	char* folder = "C:\\Cursova2\\main_results\\";
	char file_name[255];
	sprintf(file_name, "%smain_results.txt", folder);

	FILE* fp;

	fp = fopen(file_name, "w");
	try {
		Directory::Delete("C:\\Cursova2\\results_to_questions\\", true);

		
	}
	catch (Exception^ e) {
		MessageBox::Show("Results not found" + e->Message );
	}

	if (fp != NULL) {
		fclose(fp);
		MessageBox::Show("You deleted all results");
	}
}
private: System::Void ������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	char* folder = "C:\\Cursova2\\questions\\";
	char file_name[255];
	sprintf(file_name, "%sQuestions.txt", folder);

	FILE* fp;

	fp = fopen(file_name, "w");

	if (fp != NULL) {
		fclose(fp);
		MessageBox::Show("You deleted all questions");
	}
	
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
