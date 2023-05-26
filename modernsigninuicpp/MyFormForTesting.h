#include <stdio.h>
#include <stdlib.h>
#include <string>

#include <string.h>
#include <direct.h>
#include <cmath>


#include <Windows.h>
#include <vector>
#include <algorithm>
#include <random>

#pragma once

namespace modernsigninuicpp {

	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	
	/// <summary>
	/// Summary for MyFormForTesting
	/// </summary>
	public ref class MyFormForTesting : public System::Windows::Forms::Form
	{
	public:
		Timer^ timer;
	private: System::Windows::Forms::Label^ timerr;
	public:

	public:
		String^ username;
		
		MyFormForTesting(String^ user)
		{
			username = user;
			InitializeComponent();
			// Create a new Timer control
			timer = gcnew Timer();

			// Set the interval to 1000 milliseconds (1 second)
			timer->Interval = 1000;

			// Subscribe to the Tick event
			timer->Tick += gcnew EventHandler(this, &MyFormForTesting::timer_Tick);
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyFormForTesting()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormForTesting::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerr = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(503, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Залишилось:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(341, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 26);
			this->label3->TabIndex = 8;
			// 
			// richTextBox5
			// 
			this->richTextBox5->Location = System::Drawing::Point(307, 230);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(315, 27);
			this->richTextBox5->TabIndex = 9;
			this->richTextBox5->Text = L"";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(307, 186);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(315, 27);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"Дайте відповідь на питання:";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(307, 284);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(118, 25);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(307, 325);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(121, 25);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(307, 368);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(121, 25);
			this->radioButton3->TabIndex = 13;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->Location = System::Drawing::Point(307, 408);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(121, 25);
			this->radioButton4->TabIndex = 14;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->Location = System::Drawing::Point(307, 448);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(121, 25);
			this->radioButton5->TabIndex = 15;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"radioButton5";
			this->radioButton5->UseVisualStyleBackColor = true;
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
			this->button1->Location = System::Drawing::Point(396, 519);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 50);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Відповісти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->UseWaitCursor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormForTesting::button1_Click);
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
			this->button2->Location = System::Drawing::Point(568, 519);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(54, 50);
			this->button2->TabIndex = 17;
			this->button2->Text = L">";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->UseWaitCursor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormForTesting::button2_Click);
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
			this->button3->Location = System::Drawing::Point(307, 519);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(54, 50);
			this->button3->TabIndex = 18;
			this->button3->Text = L"<";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->UseWaitCursor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormForTesting::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(84, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 21);
			this->label1->TabIndex = 0;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->button5->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small Semibol", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(372, 609);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(221, 50);
			this->button5->TabIndex = 20;
			this->button5->Text = L"Завершити тест";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->UseWaitCursor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyFormForTesting::button5_Click);
			// 
			// timerr
			// 
			this->timerr->AutoSize = true;
			this->timerr->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timerr->Location = System::Drawing::Point(672, 92);
			this->timerr->Name = L"timerr";
			this->timerr->Size = System::Drawing::Size(59, 22);
			this->timerr->TabIndex = 22;
			this->timerr->Text = L"label5";
			// 
			// MyFormForTesting
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1008, 681);
			this->Controls->Add(this->timerr);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->richTextBox5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyFormForTesting";
			this->Text = L"MyFormForTesting";
			this->Load += gcnew System::EventHandler(this, &MyFormForTesting::MyFormForTesting_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ Question;
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


					sprintf(quest, "Answer %d.%d", count,i);
					while (fgets(line, sizeof(line), fp)) {
						if (strstr(line, quest) != NULL) {
							sscanf(line, "Answer %d.%d, text: %[^\n]", &count,&i, question);
							System::String^ questionStr = gcnew System::String(question);
							answerstoquestions->Add(questionStr);
							break;
						}
					}
				}
			}
		}

		private:
			int second = 59;
			int minute;
		void timer_Tick(System::Object^ sender, System::EventArgs^ e)
		{
			if (second != 0) {
				second--;
			}
			else {
				minute--;
				second = 59;
			}
			if (minute == 0 && second == 0) {
				timer->Stop();
				timerr->Text = "0:00";
				System::Object^ sender;
				System::EventArgs^ e; 

				button5_Click(sender, e);
				
				MessageBox::Show("Time is over.");
				this->Close();

			}
			timerr->Text = minute.ToString() + ":" + second.ToString();

		}
		private :
			int time_value = 0;
			int perscore = 0;

		void GetTime() {
			char time[255];
			char* folder = "C:\\Cursova2\\questions\\Settings.txt";

			FILE* fp;
			fp = fopen(folder, "r");

			if (fp != NULL) {
				char line[255];
				char quest[255];
				sprintf(quest, "Minutes for test: ");
				while (fgets(line, sizeof(line), fp)) {
					if (strstr(line, quest) != NULL) {
						sscanf(line, "Minutes for test: %[^\n]", time);
						
						time_value = std::stoi(time);
						break;
					}
				}
			}
			minute = time_value - 1;
			timerr->Text = "";

		}

		void GetPerScore() {
			char scr[255];
			char* folder = "C:\\Cursova2\\questions\\Settings.txt";

			FILE* fp;
			fp = fopen(folder, "r");

			if (fp != NULL) {
				char line[255];
				char quest[255];
				sprintf(quest, "Points of one question: ");
				while (fgets(line, sizeof(line), fp)) {
					if (strstr(line, quest) != NULL) {
						sscanf(line, "Points of one question: %[^\n]", scr);

						perscore = std::stoi(scr);
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
						if (sscanf(line, "Count of question: %d", &count_of_question)) {
							break;
						}
						
				}

			}
		}

	
private: System::Void MyFormForTesting_Load(System::Object^ sender, System::EventArgs^ e) {
	GetCountQuestion();
	GetQuestion(count);
	richTextBox5->Text = Question;

	int index = questions->IndexOf(Question);
	if (index != -1) {
		questions->RemoveAt(index);
		questions->Insert(index, Question);
	}
	else {
		questions->Insert(count - 1, Question);
	}
	
	GetAnswers(count);
	std::vector<int> numbers = { 0, 1, 2, 3, 4 };

	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(numbers.begin(), numbers.end(), g);
	radioButton1->Text = answerstoquestions[numbers[0]];
	radioButton2->Text = answerstoquestions[numbers[1]];
	radioButton3->Text = answerstoquestions[numbers[2]];
	radioButton4->Text = answerstoquestions[numbers[3]];
	radioButton5->Text = answerstoquestions[numbers[4]];
	answerstoquestions->Clear();
	radioButton1->Checked = 0;
	radioButton2->Checked = 0;
	radioButton3->Checked = 0;
	radioButton4->Checked = 0;
	radioButton5->Checked = 0;

	label1->Text = "Ви увійшли під ім`ям: " + username;
	GetPerScore();
	GetTime();
	timer->Start();

	
}
	   int page = 1;
	   List<String^>^ questions = gcnew List<String^>();
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (page+1 <= count_of_question) {
		page++;
		GetAnswers(page);
		GetQuestion(page);
		richTextBox5->Text = Question;
		int index = questions->IndexOf(Question);
		if (index != -1) {
			questions->RemoveAt(index);
			questions->Insert(index, Question);
		}
		else {
			questions->Insert(count - 1, Question);
		}
		std::vector<int> numbers = { 0, 1, 2, 3, 4 };

		std::random_device rd;
		std::mt19937 g(rd());
		std::shuffle(numbers.begin(), numbers.end(), g);
		radioButton1->Text = answerstoquestions[numbers[0]];
		radioButton2->Text = answerstoquestions[numbers[1]];
		radioButton3->Text = answerstoquestions[numbers[2]];
		radioButton4->Text = answerstoquestions[numbers[3]];
		radioButton5->Text = answerstoquestions[numbers[4]];
		answerstoquestions->Clear();
		radioButton1->Checked = 0;
		radioButton2->Checked = 0;
		radioButton3->Checked = 0;
		radioButton4->Checked = 0;
		radioButton5->Checked = 0;
		if (page - 1 >= 0 && page - 1 < resultstoquestions->Count) {
			String^ value;
			value = resultstoquestions[page - 1];
			radioButton1->Text == value ? radioButton1->Checked = 1 :
				radioButton2->Text == value ? radioButton2->Checked = 1 :
				radioButton3->Text == value ? radioButton3->Checked = 1 :
				radioButton4->Text == value ? radioButton4->Checked = 1 :
				radioButton5->Checked = 1;
		}
	}
	else {
		MessageBox::Show("Questions are over");
		/*for each (String ^ elem in resultstoquestions) {
			MessageBox::Show(elem);
		}*/
	}
	
}
	   List<String^>^ resultstoquestions = gcnew List<String^>;

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		if (page > 1) {
			page--;
			GetAnswers(page);
			GetQuestion(page);
			richTextBox5->Text = Question;
			int index = questions->IndexOf(Question);
			if (index != -1) {
				questions->RemoveAt(index);
				questions->Insert(index, Question);
			}
			else {
				questions->Insert(count - 1, Question);
			}
			std::vector<int> numbers = { 0, 1, 2, 3, 4 };

			std::random_device rd;
			std::mt19937 g(rd());
			std::shuffle(numbers.begin(), numbers.end(), g);
			radioButton1->Text = answerstoquestions[numbers[0]];
			radioButton2->Text = answerstoquestions[numbers[1]];
			radioButton3->Text = answerstoquestions[numbers[2]];
			radioButton4->Text = answerstoquestions[numbers[3]];
			radioButton5->Text = answerstoquestions[numbers[4]];
			answerstoquestions->Clear();
			radioButton1->Checked = 0;
			radioButton2->Checked = 0;
			radioButton3->Checked = 0;
			radioButton4->Checked = 0;
			radioButton5->Checked = 0;

			if (page-1 >= 0 && page-1 < resultstoquestions->Count) {
				String^ value;
				value = resultstoquestions[page-1];
				radioButton1->Text == value ? radioButton1->Checked = 1 :
					radioButton2->Text == value ? radioButton2->Checked = 1 :
					radioButton3->Text == value ? radioButton3->Checked = 1 :
					radioButton4->Text == value ? radioButton4->Checked = 1 :
					radioButton5->Checked = 1;
			}
		else {
				MessageBox::Show("Questions are over");
			}
		}
	}
	  
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton1->Checked || radioButton2->Checked || radioButton3->Checked || radioButton4->Checked || radioButton5->Checked) {
		int index = page - 1;
		if (index >= 0 && index < resultstoquestions->Count) {
			resultstoquestions[index] = radioButton1->Checked ? radioButton1->Text :
				radioButton2->Checked ? radioButton2->Text :
				radioButton3->Checked ? radioButton3->Text :
				radioButton4->Checked ? radioButton4->Text :
				radioButton5->Text;
		}
		else {
			resultstoquestions->Add(radioButton1->Checked ? radioButton1->Text :
				radioButton2->Checked ? radioButton2->Text :
				radioButton3->Checked ? radioButton3->Text :
				radioButton4->Checked ? radioButton4->Text :
				radioButton5->Text);
		}
		
	}
	else {
		MessageBox::Show("You didn`t choose any answer.");
	}
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	char* folder = "C:\\Cursova2\\results_to_questions\\";
	int dir = mkdir(folder);
	char file_name[255];
	sprintf(file_name, "%s%s_answers.txt", folder, username);
	FILE* fp;

	fp = fopen(file_name, "w");

	if (fp != NULL) {
		for (int i = page; i < count_of_question; i++) {
			System::Object^ sender; System::EventArgs^ e;
			button2_Click(sender, e);
		}

		for (int i = 0; i < count_of_question; i++) {
			fprintf(fp, "question %d, text: %s\n", count, questions[i]);
			if (i >= 0 && i < resultstoquestions->Count) {
				fprintf(fp, "Answer %d, text: %s\n", i, resultstoquestions[i]);

			}
			else {
				fprintf(fp, "Answer %d, text: -1\n", i);
			}
		}
	}

	fclose(fp);
	timer->Stop();
	GetAnswerPeople();

}
	   List<String^>^ CorrectAnswers = gcnew List<String^>();
	   List<String^>^ UserAnswers = gcnew List<String^>();
	   void GetQuestion2(int count) {
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
					   break;
				   }
			   }
		   }
	   }
	   void GetAnswerUser2(int answerNumber, String^ user) {
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
					   break;
				   }
			   }
		   }
	   }
	   private:
		   int score = 0;
	   private: System::Void GetAnswerPeople() {
			   for (int j = 0; j < count_of_question; j++) {
				   GetQuestion2(j + 1);
				   GetAnswerUser2(j, username);
				   if (UserAnswers[j] == CorrectAnswers[j]) {
					   score++;
				   }

			   }
			   MessageBox::Show("Your score: " + (score*perscore).ToString() + "/" + (count_of_question*perscore).ToString());
			   this->Close();
	   }
};
}

