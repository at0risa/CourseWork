﻿#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <direct.h>
#include <locale.h>

namespace modernsigninuicpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyFormForEditing4
	/// </summary>
	public ref class MyFormForEditing4 : public System::Windows::Forms::Form
	{
	public:
		MyFormForEditing4(void)
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
		~MyFormForEditing4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormForEditing4::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(243, 157);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(525, 357);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Wheat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(239, 116);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(193, 21);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Результати тестування:";
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
			this->button4->Location = System::Drawing::Point(42, 30);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 53);
			this->button4->TabIndex = 29;
			this->button4->Text = L"🏠";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormForEditing4::button4_Click);
			// 
			// MyFormForEditing4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1008, 681);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->richTextBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyFormForEditing4";
			this->Text = L"MyFormForEditing4";
			this->Load += gcnew System::EventHandler(this, &MyFormForEditing4::MyFormForEditing4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void кількістьПитаньЧасТестуванняТаРозрахунокОцінкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void редагуванняПитаньToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	
}
private: System::Void внесенняПитанняToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

	   int count_of_question;
	   int score = 0;
	   List<String^>^ UserAnswers = gcnew List<String^>();
	   List<String^>^ CorrectAnswers = gcnew List<String^>();
	   private: System::Void GetAnswerPeople() {
		   char folder[255] = "C:\\Cursova2\\main_results\\main_results.txt";

		   FILE* fp;

		   

		   for (int i = 0; i < Test_names->Count; i++) {
			   for (int j = 0; j < count_of_question; j++) {
				   GetQuestion(j+1);
				   GetAnswerUser(j, Test_names[i]);
				   if (UserAnswers[j] == CorrectAnswers[j]) {
					   score++;
				   }
				   
			   }
			   fp = fopen(folder, "a");
			   if (fp != NULL) {

				   fprintf(fp, "%s - %d/%d\n", Test_names[i], score, count_of_question);
			   }
			   else {
				   MessageBox::Show("Error");
			   }


			   fclose(fp);
		   }

	   }

			  void CreateInfoFileResult() {
				  char folder[255] = "C:\\Cursova2\\main_results\\";

				  int create = mkdir(folder);
				  FILE* fp;


				  sprintf(folder, "%smain_results.txt", folder);
				  fp = fopen(folder,"w");
				  fclose(fp);

			  }


			  void GetAnswerUser(int answerNumber, String^ user) {
				  static char answer[255];
				  char folder[255] = "C:\\Cursova2\\results_to_questions\\";

				  sprintf(folder, "%s%s_answers.txt", folder, user);

				  FILE* fp;
				  fp = fopen(folder, "r");

				  if (fp != NULL) {
					  char line[255];
					  char quest[255];
					  sprintf(quest, "Answer %d, text: ", answerNumber);
					  while (fgets(line, sizeof(line), fp)) {
						  if (strstr(line, quest) != NULL) {
							  sscanf(line, "Answer %d, text: %[^\n]", &answerNumber, answer);
							  String^ test = gcnew System::String(answer);
							  UserAnswers->Add(test);
							  //MessageBox::Show(test);
							  break;
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
					  sprintf(quest, "Correct answer %d, text", count);

					  while (fgets(line, sizeof(line), fp)) {
						  if (strstr(line, quest) != NULL) {
							  sscanf(line, "Correct answer %d, text: %[^\n]", &count, question);
							  String^ test = gcnew System::String(question);
							  CorrectAnswers->Add(test);
							  //MessageBox::Show(test);
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
					  fclose(fp);
				  }
			  }


		private:
			int files = 0;
			List<String^>^ Test_names = gcnew List<String^>();
			  int CheckDirectory() {
				  int g = 0;

				  char dir_name[255];
				  sprintf(dir_name, "C:\\Cursova2\\results_to_questions\\");

				  struct dirent* de;

				  DIR* dr = opendir(dir_name);

				  if (dr == NULL) {
					  System::Windows::Forms::MessageBox::Show("Не можу знайти результати", "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
					  this->Close();
				  }
				  else {
					  while ((de = readdir(dr)) != NULL) {
						  g++;
					  }

				  }

				 
				  return files = g - 2;
			  }


			  void GetNameofTests() {
				  setlocale(LC_ALL, "");
				  
				  char dir_name[255];
				  sprintf(dir_name, "C:\\Cursova2\\results_to_questions\\");


				  struct dirent* de;

				  DIR* dr = opendir(dir_name);

				  if (dr == NULL) {
					  this->Close();
				  }
				  else {
					  int i = 0;

					  while ((de = readdir(dr)) != NULL) {
						  String^ tested = gcnew String(de->d_name);
						  if (tested == "." || tested == "..") {

						  }
						  else {
							  String^ test = gcnew String(de->d_name);
							  int index = test->IndexOf("_");
							  String^ substring = test->Substring(0, index);
							  Test_names->Add(substring);
							  i++;
						  }
					  }
				  }
			  }

			 


private: System::Void MyFormForEditing4_Load(System::Object^ sender, System::EventArgs^ e) {
	CreateInfoFileResult();
	files = CheckDirectory();
	GetNameofTests();
	GetCountQuestion();
	GetAnswerPeople();
	richTextBox1->LoadFile("C:\\Cursova2\\main_results\\main_results.txt",
		RichTextBoxStreamType::PlainText);
}
};
}
