#include "MyFormForEditing3.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <msclr/marshal.h>
#pragma once

namespace modernsigninuicpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for MyFormForEditing2
	/// </summary>
	public ref class MyFormForEditing2 : public System::Windows::Forms::Form
	{
	public:
		MyFormForEditing2(void)
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
		~MyFormForEditing2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:









	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormForEditing2::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Wheat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(239, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 21);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Питання:";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox7->Location = System::Drawing::Point(233, 506);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(614, 29);
			this->textBox7->TabIndex = 22;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox6->Location = System::Drawing::Point(233, 396);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(614, 29);
			this->textBox6->TabIndex = 21;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox5->Location = System::Drawing::Point(233, 361);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(614, 29);
			this->textBox5->TabIndex = 20;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox4->Location = System::Drawing::Point(233, 325);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(614, 29);
			this->textBox4->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Wheat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(239, 470);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(245, 21);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Варіант правильної відповіді:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Wheat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(239, 217);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 21);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Варіанти відповідей:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Wheat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(239, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 21);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Питання:";
			this->label1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox2->Location = System::Drawing::Point(233, 253);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(614, 29);
			this->textBox2->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox3->Location = System::Drawing::Point(233, 289);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(614, 29);
			this->textBox3->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox1->Location = System::Drawing::Point(233, 163);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(614, 29);
			this->textBox1->TabIndex = 16;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->button3->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small Semibol", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(392, 588);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(54, 50);
			this->button3->TabIndex = 27;
			this->button3->Text = L"<";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->UseWaitCursor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormForEditing2::button3_Click);
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
			this->button2->Location = System::Drawing::Point(653, 588);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(54, 50);
			this->button2->TabIndex = 26;
			this->button2->Text = L">";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->UseWaitCursor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormForEditing2::button2_Click);
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
			this->button1->Location = System::Drawing::Point(481, 588);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 50);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Зберегти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->UseWaitCursor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormForEditing2::button1_Click);
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
			this->button4->Location = System::Drawing::Point(11, 11);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 53);
			this->button4->TabIndex = 28;
			this->button4->Text = L"🏠";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormForEditing2::button4_Click);
			// 
			// MyFormForEditing2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1008, 681);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
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
			this->Name = L"MyFormForEditing2";
			this->Text = L"MyFormForEditing2";
			this->Load += gcnew System::EventHandler(this, &MyFormForEditing2::MyFormForEditing2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void внесенняПитанняToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void кількістьПитаньЧасТестуванняТаРозрахунокОцінкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {


	MyFormForEditing3^ myFormForEditing3 = gcnew MyFormForEditing3();

	myFormForEditing3->ShowDialog();
	this->Show();
	myFormForEditing3->Hide();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
	   /*int number_questions = 1;

	   String^ Question;
	   array<String^>^ answers = gcnew array<String^>(6);
	   int count = 1;
	   int count_of_question;
	   //String^ Question = gcnew String(static_cast<Char>(GetQuestion()), 255);

	   void GetAnswers(int count) {
		   static char question[255];
		   char* folder = "C:\\Cursova2\\questions\\Questions.txt";

		   FILE* fp;
		   fp = fopen(folder, "r");

		   if (fp != NULL) {
			   char line[255];
			   char quest[255];
			   for (int i = 1; i <= 6; i++) {


				   sprintf(quest, "Answer %d.%d", count, i);
				   while (fgets(line, sizeof(line), fp)) {
					   if (strstr(line, quest) != NULL) {
						   sscanf(line, "Answer %d.%d, text: %s", &count, &i, question);
						   System::String^ questionStr = gcnew System::String(question);
						   answers[i] = questionStr;
						   break;
					   }
				   }
			   }
		   }
	   }

	   void GetQuestion() {
		   static char question[255];
		   char* folder = "C:\\Cursova2\\questions\\Questions.txt";

		   FILE* fp;
		   fp = fopen(folder, "r");

		   if (fp != NULL) {
			   char line[255];
			   char quest[255];
			   sprintf(quest, "question %d, text: ", count);
			   while (fgets(line, sizeof(line), fp)) {
				   if (strstr(line, quest) != NULL) {
					   sscanf(line, "question %d, text: %[^\n]", &count, question);
					   Question = gcnew System::String(question);
					   break;
				   }
			   }
		   }
	   }

	   void GetCountQuestion() {
		   char* folder = "C:\\Cursova2\\questions\\Questions.txt";

		   FILE* fp;
		   fp = fopen(folder, "r");
		   if (fp != NULL) {
			   char line[255];

			   while (fgets(line, sizeof(line), fp)) {
				   if (strstr(line, "Count of question") != NULL) {
					   sscanf(line, "Count of question: %d", &count_of_question);
				   }
			   }
		   }
	   }

private: System::Void MyFormForTesting_Load(System::Object^ sender, System::EventArgs^ e) {
	GetCountQuestion();
	GetQuestion();
	textBox1->Text = Question;
	GetAnswers(count);
	textBox2->Text = answers[1];
	textBox3->Text = answers[2];
	textBox4->Text = answers[3];
	textBox5->Text = answers[4];
	textBox6->Text = answers[5];
	
}*/



	   String^ Question;
	   String^ Answer;
	   List<String^>^ answerstoquestions = gcnew List<String^>;
	   int count = 1;
	   int count_of_question;
	   //String^ Question = gcnew String(static_cast<Char>(GetQuestion()), 255);

	   void GetAnswers(int count) {
		   char question[255];
		   char* folder = "C:\\Cursova2\\questions\\Questions.txt";

		   FILE* fp;
		   fp = fopen(folder, "r");

		   if (fp != NULL) {
			   char line[255];
			   char quest[255];
			   for (int i = 0; i < 5; i++) {


				   sprintf(quest, "Answer %d.%d", count, i);
				   while (fgets(line, sizeof(line), fp)) {
					   if (strstr(line, quest) != NULL) {
						   sscanf(line, "Answer %d.%d, text: %[^\n]", &count, &i, question);
						   System::String^ questionStr = gcnew System::String(question);
						   answerstoquestions->Add(questionStr);
						   break;
					   }
				   }
			   }
		   }
	   }

	   void GetQuestion(int count) {
		   static char question[255];
		   char* folder = "C:\\Cursova2\\questions\\Questions.txt";

		   FILE* fp;
		   fp = fopen(folder, "r");

		   if (fp != NULL) {
			   char line[255];
			   char quest[255];
			   sprintf(quest, "question %d, text: ", count);
			   while (fgets(line, sizeof(line), fp)) {
				   if (strstr(line, quest) != NULL) {
					   sscanf(line, "question %d, text: %[^\n]", &count, question);
					   Question = gcnew System::String(question);
					   break;
				   }
			   }
		   }
	   }

	   void GetCorrectAnswers(int count) {
		   static char question[255];
		   char* folder = "C:\\Cursova2\\questions\\Questions.txt";

		   FILE* fp;
		   fp = fopen(folder, "r");

		   if (fp != NULL) {
			   char line[255];
			   char quest[255];
			   sprintf(quest, "Correct answer %d, text: ", count);
			   while (fgets(line, sizeof(line), fp)) {
				   if (strstr(line, quest) != NULL) {
					   sscanf(line, "Correct answer %d, text: %[^\n]", &count, question);
					   Answer = gcnew System::String(question);
					   break;
				   }
			   }
		   }
	   }

	   void GetCountQuestion() {
		   char* folder = "C:\\Cursova2\\questions\\Questions.txt";

		   FILE* fp;
		   fp = fopen(folder, "r");
		   if (fp != NULL) {
			   char line[255];

			   while (fgets(line, sizeof(line), fp)) {
				   if (sscanf(line, "Count of question: %d", &count_of_question)) {
					   break;
				   }

			   }

		   }
	   }



	   int page = 1;
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (page + 1 <= count_of_question) {
		answerstoquestions->Clear();
		page++;
		GetAnswers(page);
		GetQuestion(page);
		GetCorrectAnswers(page);
		textBox7->Text = Answer;
		textBox1->Text = Question;
		textBox2->Text = answerstoquestions[0];
		textBox3->Text = answerstoquestions[1];
		textBox4->Text = answerstoquestions[2];
		textBox5->Text = answerstoquestions[3];
		textBox6->Text = answerstoquestions[4];
		
	}
	else {
		MessageBox::Show("Questions are over");
		/*for each (String ^ elem in resultstoquestions) {
			MessageBox::Show(elem);
		}*/
	}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (page > 1) {
		answerstoquestions->Clear();
		page--;
		GetAnswers(page);
		GetQuestion(page);
		textBox1->Text = Question;
		textBox2->Text = answerstoquestions[0];
		textBox3->Text = answerstoquestions[1];
		textBox4->Text = answerstoquestions[2];
		textBox5->Text = answerstoquestions[3];
		textBox6->Text = answerstoquestions[4];
		GetCorrectAnswers(page);
		textBox7->Text = Answer;
		
	}
	else {
		MessageBox::Show("Questions are over");
	}
}

	   List<String^>^ resultstoquestions = gcnew List<String^>;
	   List<String^>^ editedquestions = gcnew List<String^>();
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	editedquestions->Clear();
	editedquestions->Add(textBox2->Text);
	editedquestions->Add(textBox3->Text);
	editedquestions->Add(textBox4->Text);
	editedquestions->Add(textBox5->Text);
	editedquestions->Add(textBox6->Text);
	EditAnswer(page);
	EditQuestion(page);
	EditCorAnswer(page);
}

private: System::Void MyFormForEditing2_Load(System::Object^ sender, System::EventArgs^ e) {
	GetCountQuestion();
	GetQuestion(count);
	textBox1->Text = Question;
	GetAnswers(count);
	textBox2->Text = answerstoquestions[0];
	textBox3->Text = answerstoquestions[1];
	textBox4->Text = answerstoquestions[2];
	textBox5->Text = answerstoquestions[3];
	textBox6->Text = answerstoquestions[4];
	GetCorrectAnswers(page);
	textBox7->Text = Answer;
	
}

	   size_t FindSubstringPosition(const char* str, const char* substr) {
		   const char* pos = strstr(str, substr);
		   if (pos != NULL) {
			   return pos - str;
		   }
		   else {
			   return SIZE_MAX;
		   }
	   }

	   void ReplaceSubstring(char* str, size_t pos, size_t len, const char* replacement) {
		   size_t replacementLen = strlen(replacement);
		   size_t strLen = strlen(str);
		   if (len < replacementLen) {
			   memmove(str + pos + replacementLen, str + pos + len, strLen - pos - len + 1);
			   memcpy(str + pos, replacement, replacementLen);
		   }
		   else if (len > replacementLen) {
			   memmove(str + pos + replacementLen, str + pos + len, strLen - pos - len + 1);
			   memcpy(str + pos, replacement, replacementLen);
		   }
		   else {
			   memcpy(str + pos, replacement, replacementLen);
		   }
	   }

	private: System::Void EditAnswer(int pages) {
		for (int i = 0; i < 5; i++) {
			const char* fileName = "C:\\Cursova2\\questions\\Questions.txt";
			char oldText[1024];
			sprintf(oldText, "Answer %d.%d, text: %s", pages, i, answerstoquestions[i]);
			char newText[1024];
			sprintf(newText, "Answer %d.%d, text: %s", pages, i, editedquestions[i]);
			char buffer[1024];

			// Відкриваємо файл
			FILE* file = fopen(fileName, "r+");
			if (file == NULL) {
				MessageBox::Show("Error, incorrect data.");
				return;
			}

			char fileContent[1024];
			fileContent[0] = '\0';
			while (fgets(buffer, sizeof(buffer), file)) {
				char line[1024];
				strcpy(line, buffer);
				size_t pos = FindSubstringPosition(line, oldText);
				if (pos != SIZE_MAX) {
					ReplaceSubstring(line, pos, strlen(oldText), newText);
				}
				strcat(fileContent, line);
			}

			fseek(file, 0, SEEK_SET);
			fputs(fileContent, file);
			fclose(file);
		}

	}

		   private: System::Void EditQuestion(int pages) {
				   const char* fileName = "C:\\Cursova2\\questions\\Questions.txt";
				   char oldText[1024];
				   GetQuestion(pages);
				   sprintf(oldText, "question %d, text: %s", pages, Question);
				   char newText[1024];
				   sprintf(newText, "question %d, text: %s", pages, textBox1->Text);
				   char buffer[1024];

		

				   // Відкриваємо файл
				   FILE* file = fopen(fileName, "r+");
				   if (file == NULL) {
					   MessageBox::Show("Error, incorrect data.");
					   return;
				   }

				   char fileContent[1024];
				   fileContent[0] = '\0';
				   while (fgets(buffer, sizeof(buffer), file)) {
					   char line[1024];
					   strcpy(line, buffer);
					   size_t pos = FindSubstringPosition(line, oldText);
					   if (pos != SIZE_MAX) {
						   ReplaceSubstring(line, pos, strlen(oldText), newText);
					   }
					   strcat(fileContent, line);
				   }

				   fseek(file, 0, SEEK_SET);
				   fputs(fileContent, file);
				   fclose(file);
			   }


		   private: System::Void EditCorAnswer(int pages) {
			   const char* fileName = "C:\\Cursova2\\questions\\Questions.txt";
			   char oldText[1024];
			   GetCorrectAnswers(page);
			   sprintf(oldText, "Correct answer %d, text: %s", pages, Answer);
			   char newText[1024];
			   sprintf(newText, "Correct answer % d, text: %s", pages, textBox7->Text);
			   char buffer[1024];



			   // Відкриваємо файл
			   FILE* file = fopen(fileName, "r+");
			   if (file == NULL) {
				   MessageBox::Show("Error, incorrect data.");
				   return;
			   }

			   char fileContent[1024];
			   fileContent[0] = '\0';
			   while (fgets(buffer, sizeof(buffer), file)) {
				   char line[1024];
				   strcpy(line, buffer);
				   size_t pos = FindSubstringPosition(line, oldText);
				   if (pos != SIZE_MAX) {
					   ReplaceSubstring(line, pos, strlen(oldText), newText);
				   }
				   strcat(fileContent, line);
			   }

			   fseek(file, 0, SEEK_SET);
			   fputs(fileContent, file);
			   fclose(file);
		   }
};
}
