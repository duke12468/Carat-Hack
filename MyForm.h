#pragma once
#include <Windows.h>
#include "Memory.h"
#include "Scanner.h"
#include <fstream>
#include <string.h>
#include <stdio.h>
#define dwBegin 0x400000
#define dwEnd 0xFFFFFFF
namespace Carat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::Label^  label2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(47, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Carat";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Disable";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(15, 41);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(51, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Jump";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(51, 89);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(72, 13);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Duke Gamerz";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::backgroundWorker1_DoWork);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 41);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Disable Jump Suicide";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 41);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(160, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Enable Jump Suicide";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(178, 67);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 6;
			this->dateTimePicker1->Visible = false;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(124, 12);
			this->button6->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(46, 23);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Exp";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(64, 12);
			this->button5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(56, 23);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Bonus";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Made by Duke";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(160, 86);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(61, 105);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(51, 13);
			this->linkLabel2->TabIndex = 14;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"+VOUCH";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel2_LinkClicked);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"First Buyers : Duke";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(184, 145);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Duke's Carat Hack";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static Memory *mem = new Memory();
		static Scanner *scan = new Scanner();
	private: DWORD caratAddy;
	private: DWORD Jump_Sui_1;
	private: DWORD Jump_Sui_2;
	private: DWORD Jump_1;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		mem->WriteMemory((VOID*)(0x530DBE), (PBYTE) "\xC7\x46\x3C\x58\x02\x00\x00", 7);
		//mem->WriteMemory((VOID*)(0x530DBE), (PBYTE) "\x58\x02\x00\x00\x8B\x93\xAC", 7);
		//*(INT64*)0x530DBE = 10016005581342262983;
		mem->WriteMemory((VOID*)(Jump_1), (PBYTE) "\x00\x00\xA0\x40", 4);
		mem->WriteMemory((VOID*)(Jump_Sui_1), (PBYTE) "\x3D", 1);
		mem->WriteMemory((VOID*)(Jump_Sui_2), (PBYTE) "\x3D", 1);
		button2->BringToFront();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		mem->WriteMemory((VOID*)(0x530C1E), (PBYTE) "\x89\x46\x23\x66\x89\x46\x27", 7);
		//*(INT64*)0x530DBE = 10016005581342262983;
		mem->WriteMemory((VOID*)(Jump_1), (PBYTE) "\x00\x00\x80\xBF", 4);
		mem->WriteMemory((VOID*)(Jump_Sui_1), (PBYTE) "\xFF", 1);
		mem->WriteMemory((VOID*)(Jump_Sui_2), (PBYTE) "\xFF", 1);
		button2->SendToBack();
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		//ShellExecute(0, 0, "http://google.com", 0, 0, SW_SHOW);
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
		if (dateTimePicker1->Value > DateTime(2018, 8, 8))
		{
			*(INT8*)GetModuleHandle("rumblefighter.exe") = 0;

		}
		backgroundWorker1->RunWorkerAsync();
		Sleep(1000);
		mem->WriteMemory((VOID*)(Jump_1), (PBYTE) "\x00\x00\x80\xBF", 4);
		mem->WriteMemory((VOID*)(Jump_Sui_1), (PBYTE) "\xFF", 1);
		mem->WriteMemory((VOID*)(Jump_Sui_2), (PBYTE) "\xFF", 1);
	}
	private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
		//if (dateTimePicker1->Value > DateTime(2017, 7, 20))
		//{
		//	*(INT8*)GetModuleHandle("rumblefighter.exe") = 0;
		//}
		caratAddy = scan->findPattern(dwBegin, dwEnd, (PBYTE) "\x89\x46\x23\x66\x89\x46\x27", "xxxxxxx");
		Jump_1 = scan->findPattern(dwBegin, dwEnd, (PBYTE) "\00\x00\xA0\x40\x0A\xD7", "xxxxxx");
		Jump_Sui_1 = Jump_1 + 0x7;
		Jump_Sui_2 = Jump_1 + 0xF;
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	mem->WriteMemory((VOID*)(Jump_1), (PBYTE) "\x00\x00\xA0\x40", 4);
	mem->WriteMemory((VOID*)(Jump_Sui_1), (PBYTE) "\x3D", 1);
	mem->WriteMemory((VOID*)(Jump_Sui_2), (PBYTE) "\x3D", 1);
	button4->BringToFront();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	mem->WriteMemory((VOID*)(Jump_1), (PBYTE) "\x00\x00\x80\xBF", 4);
	mem->WriteMemory((VOID*)(Jump_Sui_1), (PBYTE) "\xFF", 1);
	mem->WriteMemory((VOID*)(Jump_Sui_2), (PBYTE) "\xFF", 1);
	button3->BringToFront();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	mem->WriteMemory((VOID*)(0x530DBE), (PBYTE) "\xC7\x46\x2A\x66\x89\x46\x27", 7);
	button2->BringToFront();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	mem->WriteMemory((VOID*)(0x530DBE), (PBYTE) "\xC7\x46\x38\x00\x20\x00\x00", 7);
	button2->BringToFront();
}
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	//ShellExecute(0, 0, "http://google.com", 0, 0, SW_SHOW);
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}