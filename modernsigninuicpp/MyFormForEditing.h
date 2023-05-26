#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <cstring>
#include <direct.h>


#include "MyFormForEditing2.h";
#include "MyFormForEditing3.h";

#pragma once



namespace modernsigninuicpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace System::Collections::Generic; // біблоіотека для підключення динамічних списків, масивів і інших складних структур даних



	/// <summary>
	/// Summary for MyFormForEditing
	/// </summary>
	public ref class MyFormForEditing : public System::Windows::Forms::Form
	{
	public:
		MyFormForEditing(void)
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
		~MyFormForEditing()
		{
			if (components)
			{
				delete components;
			}
		}










	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button2;






















	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormForEditing::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox1->Location = System::Drawing::Point(362, 127);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(273, 29);
			this->textBox1->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox3->Location = System::Drawing::Point(362, 252);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(273, 29);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox2->Location = System::Drawing::Point(362, 217);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(273, 29);
			this->textBox2->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Wheat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(368, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Питання:";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Wheat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(368, 181);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Варіанти відповідей:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Wheat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(368, 434);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(238, 21);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Номер правильної відповіді:";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox4->Location = System::Drawing::Point(362, 289);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(273, 29);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox5->Location = System::Drawing::Point(362, 325);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(273, 29);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox6->Location = System::Drawing::Point(362, 360);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(273, 29);
			this->textBox6->TabIndex = 9;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox7->Location = System::Drawing::Point(362, 470);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(273, 29);
			this->textBox7->TabIndex = 10;
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
			this->button1->Location = System::Drawing::Point(439, 571);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 50);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Зберегти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->UseWaitCursor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormForEditing::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Wheat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(368, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 21);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Питання:";
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.75F));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(63, 38);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 53);
			this->button4->TabIndex = 29;
			this->button4->Text = L"🏠";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormForEditing::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Wheat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(59, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(148, 21);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Кількість питань:";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox8->Location = System::Drawing::Point(75, 173);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(66, 29);
			this->textBox8->TabIndex = 30;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->button2->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small Semibol", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(53, 217);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 50);
			this->button2->TabIndex = 32;
			this->button2->Text = L"Зберегти";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->UseWaitCursor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormForEditing::button2_Click);
			// 
			// MyFormForEditing
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1008, 681);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyFormForEditing";
			this->Text = L"MyFormForEditing";
			this->Load += gcnew System::EventHandler(this, &MyFormForEditing::MyFormForEditing_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		// при натисненні на пункти меню об'єкти для редагування питань тесту зникають

	/*private: System::Void menuStrip1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Visible = 0;
		this->textBox1->Visible = 0;
		this->label2->Visible = 0;
		this->textBox2->Visible = 0;
		this->textBox3->Visible = 0;
		this->textBox4->Visible = 0;
		this->textBox5->Visible = 0;
		this->textBox6->Visible = 0;
		this->label3->Visible = 0;
		this->textBox7->Visible = 0;
		this->button1->Visible = 0;
	}
	*/






private: System::Void редагуванняПитаньToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	
	MyFormForEditing2^ myFormForEditing2 = gcnew MyFormForEditing2();
	
	myFormForEditing2->ShowDialog();
	this->Show();
	myFormForEditing2->Hide();
}

private: System::Void кількістьПитаньЧасТестуванняТаРозрахунокОцінкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

	MyFormForEditing3^ myFormForEditing3 = gcnew MyFormForEditing3();

	myFormForEditing3->ShowDialog();
	this->Show();
	myFormForEditing3->Hide();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

	private:
		int count = 1;
		int count_of_question = 0;
		String^ correct_answer;
		
		List<String^>^ answers = gcnew List<String^>; // creating a list for answers
		List<String^>^ cor_answers = gcnew List<String^>; // creating a list for answers


	 
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	if (textBox1->TextLength > 2 && textBox2->TextLength > 2 && textBox3->TextLength > 2 && textBox4->TextLength > 2 && textBox5->TextLength > 2 && textBox6->TextLength > 2 && textBox7->TextLength > 2) {
	
		answers->Add(textBox2->Text);
		answers->Add(textBox3->Text);
		answers->Add(textBox4->Text);
		answers->Add(textBox5->Text);
		answers->Add(textBox6->Text);
		cor_answers->Add(textBox7->Text);
		

		char* folder = "C:\\Cursova2\\questions\\";
		int dir = mkdir(folder);
		char file_name[255];
		sprintf(file_name, "%sQuestions.txt", folder);

		FILE* fp;

		fp = fopen(file_name, "a");

		if (fp != NULL)  {
			

			fprintf(fp, "question %d, text: %s\n", count, textBox1->Text);
			for (int i = 0; i < 5; i++) {
				fprintf(fp, "Answer %d.%d, text: %s\n", count,i, answers[i]);
			}
			fprintf(fp, "Correct answer %d, text: %s\n\n", count, cor_answers[0]);
		}
		fclose(fp);

		MessageBox::Show("You fill " + count + " question");
		count++;
	//Очищуємо текстові поля після заповнення одного питання
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
		

		if (count == count_of_question + 1) {
		
			MessageBox::Show("You fill all questions");
			this->Close();
		}

		answers->Clear();
		cor_answers->Clear();
	}
	
	 
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (System::Convert::ToInt32(textBox8->Text) < 3) {
		MessageBox::Show(" Your number of questions should be at least  15  !");
	}
	else {
		count_of_question = System::Convert::ToInt32(textBox8->Text);
		button2->Visible = 0;
		textBox8->Visible = 0;
		label5 ->Visible = 0;

		this->label1->Visible = 1;
		this->textBox1->Visible = 1;
		this->label2->Visible = 1;
		this->textBox2->Visible = 1;
		this->textBox3->Visible = 1;
		this->textBox4->Visible = 1;
		this->textBox5->Visible = 1;
		this->textBox6->Visible = 1;
		this->label3->Visible = 1;
		this->textBox7->Visible = 1;
		this->button1->Visible = 1;
		this->label4->Visible = 1;

		char* folder = "C:\\Cursova2\\questions\\";
		int dir = mkdir(folder);
		char file_name[255];
		sprintf(file_name, "%sQuestions.txt", folder);

		FILE* fp;
		fp = fopen(file_name, "r");

		if (fp != NULL) {
			fp = fopen(file_name, "w");
			fprintf(fp, "Count of question: %d\n", count_of_question);
		}
		else {
			fp = fopen(file_name, "w");
			fprintf(fp, "Count of question: %d\n", count_of_question);
		}

		fclose(fp);
	}
	
	
}
private: System::Void MyFormForEditing_Load(System::Object^ sender, System::EventArgs^ e) {
	

	this->label1->Visible = 0;
	this->textBox1->Visible = 0;
	this->label2->Visible = 0;
	this->textBox2->Visible = 0;
	this->textBox3->Visible = 0;
	this->textBox4->Visible = 0;
	this->textBox5->Visible = 0;
	this->textBox6->Visible = 0;
	this->label3->Visible = 0;
	this->textBox7->Visible = 0;
	this->button1->Visible = 0;
	this->label4->Visible = 0;

	
}
};
}


