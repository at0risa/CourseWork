#include "MyFormForTesting.h";
#include "MyFormForEditingMain.h";
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <direct.h>
#include <cstring>
#include <stdbool.h>
#include <Windows.h>
#include <vcclr.h>

#pragma once

namespace modernsigninuicpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for MyFormOfMainMenuAdmin
	/// </summary>
	public ref class MyFormOfMainMenuAdmin : public System::Windows::Forms::Form
	{
	public:
		MyFormOfMainMenuAdmin(void)
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
		~MyFormOfMainMenuAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ тестуванняToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ редагуванняТестуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ налаштуванняТекстуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ результатиТестуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ матеріалиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ навчальнийМатеріалToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ налаштуванняТестуToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;





	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ заповненняНавчальноїІнформаціїToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ відображенняНавчальноїІнформаціїToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ проведенняТестуванняІРоботаТаймеруToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ заповненняІЗбереженняБазиТестівТаРежимПереглядуРезультатівТестуванняToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormOfMainMenuAdmin::typeid));
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->заповненняНавчальноїІнформаціїToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->відображенняНавчальноїІнформаціїToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проведенняТестуванняІРоботаТаймеруToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->заповненняІЗбереженняБазиТестівТаРежимПереглядуРезультатівТестуванняToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip2
			// 
			this->menuStrip2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(1008, 28);
			this->menuStrip2->TabIndex = 0;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->заповненняНавчальноїІнформаціїToolStripMenuItem,
					this->відображенняНавчальноїІнформаціїToolStripMenuItem
			});
			this->toolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 11.25F, System::Drawing::FontStyle::Bold));
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(185, 24);
			this->toolStripMenuItem1->Text = L"Навчальна інформація";
			// 
			// заповненняНавчальноїІнформаціїToolStripMenuItem
			// 
			this->заповненняНавчальноїІнформаціїToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9.75F));
			this->заповненняНавчальноїІнформаціїToolStripMenuItem->Name = L"заповненняНавчальноїІнформаціїToolStripMenuItem";
			this->заповненняНавчальноїІнформаціїToolStripMenuItem->Size = System::Drawing::Size(294, 22);
			this->заповненняНавчальноїІнформаціїToolStripMenuItem->Text = L"Заповнення навчальної інформації";
			this->заповненняНавчальноїІнформаціїToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyFormOfMainMenuAdmin::заповненняНавчальноїІнформаціїToolStripMenuItem_Click);
			// 
			// відображенняНавчальноїІнформаціїToolStripMenuItem
			// 
			this->відображенняНавчальноїІнформаціїToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9.75F));
			this->відображенняНавчальноїІнформаціїToolStripMenuItem->Name = L"відображенняНавчальноїІнформаціїToolStripMenuItem";
			this->відображенняНавчальноїІнформаціїToolStripMenuItem->Size = System::Drawing::Size(294, 22);
			this->відображенняНавчальноїІнформаціїToolStripMenuItem->Text = L"Відображення навчальної інформації";
			this->відображенняНавчальноїІнформаціїToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyFormOfMainMenuAdmin::відображенняНавчальноїІнформаціїToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->проведенняТестуванняІРоботаТаймеруToolStripMenuItem,
					this->заповненняІЗбереженняБазиТестівТаРежимПереглядуРезультатівТестуванняToolStripMenuItem
			});
			this->toolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 11.25F, System::Drawing::FontStyle::Bold));
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(100, 24);
			this->toolStripMenuItem2->Text = L"Тестування";
			// 
			// проведенняТестуванняІРоботаТаймеруToolStripMenuItem
			// 
			this->проведенняТестуванняІРоботаТаймеруToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9.75F));
			this->проведенняТестуванняІРоботаТаймеруToolStripMenuItem->Name = L"проведенняТестуванняІРоботаТаймеруToolStripMenuItem";
			this->проведенняТестуванняІРоботаТаймеруToolStripMenuItem->Size = System::Drawing::Size(550, 22);
			this->проведенняТестуванняІРоботаТаймеруToolStripMenuItem->Text = L"Проведення тестування і робота таймеру ";
			this->проведенняТестуванняІРоботаТаймеруToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyFormOfMainMenuAdmin::проведенняТестуванняІРоботаТаймеруToolStripMenuItem_Click);
			// 
			// заповненняІЗбереженняБазиТестівТаРежимПереглядуРезультатівТестуванняToolStripMenuItem
			// 
			this->заповненняІЗбереженняБазиТестівТаРежимПереглядуРезультатівТестуванняToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display",
				9.75F));
			this->заповненняІЗбереженняБазиТестівТаРежимПереглядуРезультатівТестуванняToolStripMenuItem->Name = L"заповненняІЗбереженняБазиТестівТаРежимПереглядуРезультатівТестуванняToolStripMenu"
				L"Item";
			this->заповненняІЗбереженняБазиТестівТаРежимПереглядуРезультатівТестуванняToolStripMenuItem->Size = System::Drawing::Size(550, 22);
			this->заповненняІЗбереженняБазиТестівТаРежимПереглядуРезультатівТестуванняToolStripMenuItem->Text = L"Заповнення і збереження бази тестів та режим перегляду результатів тестування";
			this->заповненняІЗбереженняБазиТестівТаРежимПереглядуРезультатівТестуванняToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyFormOfMainMenuAdmin::заповненняІЗбереженняБазиТестівТаРежимПереглядуРезультатівТестуванняToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(140, 70);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(716, 501);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyFormOfMainMenuAdmin::richTextBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->button1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small Semibol", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(388, 593);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 50);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Save changes";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->UseWaitCursor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormOfMainMenuAdmin::button1_Click);
			// 
			// MyFormOfMainMenuAdmin
			// 
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1008, 681);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip2;
			this->Name = L"MyFormOfMainMenuAdmin";
			this->Load += gcnew System::EventHandler(this, &MyFormOfMainMenuAdmin::MyFormOfMainMenuAdmin_Load);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		void SaveTextToFile() {
			char* folder = "C:\\Cursova2\\Text_Info";
			int database = mkdir(folder);
			char file_name[264];

			sprintf(file_name, "%s\\Information.bin", folder);

			char* str2 = (char*)(void*)Marshal::StringToHGlobalAnsi(richTextBox1->Text);

			FILE* fp = fopen(file_name, "wb");
			fprintf(fp, str2);

	}
		/*
		void ReadTextFromFile() {
			char* folder = "C:\\Cursova2\\Text_Info";
			char file_name[264];

			sprintf(file_name, "%s\\Information.bin", folder);
			FILE* fp = fopen(file_name, "rb");
			String^ TextForSave;
			fread(TextForSave,


		}
		*/


	
	


private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void відображенняНавчальноїІнформаціїToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button1->Visible = false;
	this->richTextBox1->ReadOnly = 1;

}
	   // При натисненні на пункт "Заповнення навч. інф." з'являється кнопка 'Зберегти'
private: System::Void заповненняНавчальноїІнформаціїToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button1->Visible = 1;
	this->richTextBox1->ReadOnly = 0;
}
private: System::Void MyFormOfMainMenuAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->LoadFile("C:\\Cursova2\\Text_Info\\Information.bin",
		RichTextBoxStreamType::PlainText);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SaveFile("C:\\Cursova2\\Text_Info\\Information.bin", RichTextBoxStreamType::PlainText);
	//SaveTextToFile();
}
private: System::Void проведенняТестуванняІРоботаТаймеруToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyFormForTesting^ myFormForTesting = gcnew MyFormForTesting("");
	myFormForTesting->ShowDialog();
	this->Close();
}
private: System::Void заповненняІЗбереженняБазиТестівТаРежимПереглядуРезультатівТестуванняToolStripMenuItem_Click(System::Object^ sender,
	System::EventArgs^ e) {
	this->Hide();
	MyFormForEditingMain^ myFormForEditingMain = gcnew MyFormForEditingMain();
	myFormForEditingMain->ShowDialog();
	this->Close();
}
};
}
