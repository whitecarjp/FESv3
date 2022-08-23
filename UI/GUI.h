#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include <cstring>
#using <system.dll>

using namespace std;

namespace electrodeGUI {

	using namespace System;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
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
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ E1;
	private: System::Windows::Forms::RadioButton^ E1_A;
	private: System::Windows::Forms::RadioButton^ E1_B;
	private: System::Windows::Forms::RadioButton^ E1_OFF;
	protected:

	protected:



	private: System::Windows::Forms::FlowLayoutPanel^ E2;
	private: System::Windows::Forms::RadioButton^ E2_A;
	private: System::Windows::Forms::RadioButton^ E2_B;
	private: System::Windows::Forms::RadioButton^ E2_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E3;
	private: System::Windows::Forms::RadioButton^ E3_A;
	private: System::Windows::Forms::RadioButton^ E3_B;
	private: System::Windows::Forms::RadioButton^ E3_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E4;
	private: System::Windows::Forms::RadioButton^ E4_A;
	private: System::Windows::Forms::RadioButton^ E4_B;
	private: System::Windows::Forms::RadioButton^ E4_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E5;
	private: System::Windows::Forms::RadioButton^ E5_A;
	private: System::Windows::Forms::RadioButton^ E5_B;
	private: System::Windows::Forms::RadioButton^ E5_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E6;
	private: System::Windows::Forms::RadioButton^ E6_A;
	private: System::Windows::Forms::RadioButton^ E6_B;
	private: System::Windows::Forms::RadioButton^ E6_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E7;
	private: System::Windows::Forms::RadioButton^ E7_A;
	private: System::Windows::Forms::RadioButton^ E7_B;
	private: System::Windows::Forms::RadioButton^ E7_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E8;
	private: System::Windows::Forms::RadioButton^ E8_A;
	private: System::Windows::Forms::RadioButton^ E8_B;
	private: System::Windows::Forms::RadioButton^ E8_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E9;
	private: System::Windows::Forms::RadioButton^ E9_A;
	private: System::Windows::Forms::RadioButton^ E9_B;
	private: System::Windows::Forms::RadioButton^ E9_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E10;
	private: System::Windows::Forms::RadioButton^ E10_A;
	private: System::Windows::Forms::RadioButton^ E10_B;
	private: System::Windows::Forms::RadioButton^ E10_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E11;
	private: System::Windows::Forms::RadioButton^ E11_A;
	private: System::Windows::Forms::RadioButton^ E11_B;
	private: System::Windows::Forms::RadioButton^ E11_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E12;
	private: System::Windows::Forms::RadioButton^ E12_A;
	private: System::Windows::Forms::RadioButton^ E12_B;
	private: System::Windows::Forms::RadioButton^ E12_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E13;
	private: System::Windows::Forms::RadioButton^ E13_A;
	private: System::Windows::Forms::RadioButton^ E13_B;
	private: System::Windows::Forms::RadioButton^ E13_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E14;
	private: System::Windows::Forms::RadioButton^ E14_A;
	private: System::Windows::Forms::RadioButton^ E14_B;
	private: System::Windows::Forms::RadioButton^ E14_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E15;
	private: System::Windows::Forms::RadioButton^ E15_A;
	private: System::Windows::Forms::RadioButton^ E15_B;
	private: System::Windows::Forms::RadioButton^ E15_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E16;
	private: System::Windows::Forms::RadioButton^ E16_A;
	private: System::Windows::Forms::RadioButton^ E16_B;
	private: System::Windows::Forms::RadioButton^ E16_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E17;
	private: System::Windows::Forms::RadioButton^ E17_A;
	private: System::Windows::Forms::RadioButton^ E17_B;
	private: System::Windows::Forms::RadioButton^ E17_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E18;
	private: System::Windows::Forms::RadioButton^ E18_A;
	private: System::Windows::Forms::RadioButton^ E18_B;
	private: System::Windows::Forms::RadioButton^ E18_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E19;
	private: System::Windows::Forms::RadioButton^ E19_A;
	private: System::Windows::Forms::RadioButton^ E19_B;
	private: System::Windows::Forms::RadioButton^ E19_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E20;
	private: System::Windows::Forms::RadioButton^ E20_A;
	private: System::Windows::Forms::RadioButton^ E20_B;
	private: System::Windows::Forms::RadioButton^ E20_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E21;
	private: System::Windows::Forms::RadioButton^ E21_A;
	private: System::Windows::Forms::RadioButton^ E21_B;
	private: System::Windows::Forms::RadioButton^ E21_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E22;
	private: System::Windows::Forms::RadioButton^ E22_A;
	private: System::Windows::Forms::RadioButton^ E22_B;
	private: System::Windows::Forms::RadioButton^ E22_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E23;
	private: System::Windows::Forms::RadioButton^ E23_A;
	private: System::Windows::Forms::RadioButton^ E23_B;
	private: System::Windows::Forms::RadioButton^ E23_OFF;




	private: System::Windows::Forms::FlowLayoutPanel^ E24;
	private: System::Windows::Forms::RadioButton^ E24_A;
	private: System::Windows::Forms::RadioButton^ E24_B;
	private: System::Windows::Forms::RadioButton^ E24_OFF;




	private: System::Windows::Forms::Panel^ E25;
	private: System::Windows::Forms::RadioButton^ E25_OFF;


	private: System::Windows::Forms::RadioButton^ E25_B;

	private: System::Windows::Forms::RadioButton^ E25_A;

	private: System::Windows::Forms::Panel^ E26;
	private: System::Windows::Forms::RadioButton^ E26_OFF;


	private: System::Windows::Forms::RadioButton^ E26_B;

	private: System::Windows::Forms::RadioButton^ E26_A;

	private: System::Windows::Forms::Panel^ E27;
	private: System::Windows::Forms::RadioButton^ E27_OFF;


	private: System::Windows::Forms::RadioButton^ E27_B;

	private: System::Windows::Forms::RadioButton^ E27_A;

	private: System::Windows::Forms::Panel^ E28;
	private: System::Windows::Forms::RadioButton^ E28_OFF;


	private: System::Windows::Forms::RadioButton^ E28_B;

	private: System::Windows::Forms::RadioButton^ E28_A;

	private: System::Windows::Forms::Button^ btnUpdateConfig;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ btnRead;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnSend;
	private: System::Windows::Forms::TextBox^ amplitudeInput;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnMax;
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
			this->E1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E1_A = (gcnew System::Windows::Forms::RadioButton());
			this->E1_B = (gcnew System::Windows::Forms::RadioButton());
			this->E1_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E2_A = (gcnew System::Windows::Forms::RadioButton());
			this->E2_B = (gcnew System::Windows::Forms::RadioButton());
			this->E2_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E3_A = (gcnew System::Windows::Forms::RadioButton());
			this->E3_B = (gcnew System::Windows::Forms::RadioButton());
			this->E3_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E4_A = (gcnew System::Windows::Forms::RadioButton());
			this->E4_B = (gcnew System::Windows::Forms::RadioButton());
			this->E4_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E5_A = (gcnew System::Windows::Forms::RadioButton());
			this->E5_B = (gcnew System::Windows::Forms::RadioButton());
			this->E5_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E6_A = (gcnew System::Windows::Forms::RadioButton());
			this->E6_B = (gcnew System::Windows::Forms::RadioButton());
			this->E6_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E7 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E7_A = (gcnew System::Windows::Forms::RadioButton());
			this->E7_B = (gcnew System::Windows::Forms::RadioButton());
			this->E7_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E8 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E8_A = (gcnew System::Windows::Forms::RadioButton());
			this->E8_B = (gcnew System::Windows::Forms::RadioButton());
			this->E8_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E9 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E9_A = (gcnew System::Windows::Forms::RadioButton());
			this->E9_B = (gcnew System::Windows::Forms::RadioButton());
			this->E9_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E10 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E10_A = (gcnew System::Windows::Forms::RadioButton());
			this->E10_B = (gcnew System::Windows::Forms::RadioButton());
			this->E10_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E11 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E11_A = (gcnew System::Windows::Forms::RadioButton());
			this->E11_B = (gcnew System::Windows::Forms::RadioButton());
			this->E11_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E12 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E12_A = (gcnew System::Windows::Forms::RadioButton());
			this->E12_B = (gcnew System::Windows::Forms::RadioButton());
			this->E12_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E13 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E13_A = (gcnew System::Windows::Forms::RadioButton());
			this->E13_B = (gcnew System::Windows::Forms::RadioButton());
			this->E13_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E14 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E14_A = (gcnew System::Windows::Forms::RadioButton());
			this->E14_B = (gcnew System::Windows::Forms::RadioButton());
			this->E14_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E15 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E15_A = (gcnew System::Windows::Forms::RadioButton());
			this->E15_B = (gcnew System::Windows::Forms::RadioButton());
			this->E15_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E16 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E16_A = (gcnew System::Windows::Forms::RadioButton());
			this->E16_B = (gcnew System::Windows::Forms::RadioButton());
			this->E16_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E17 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E17_A = (gcnew System::Windows::Forms::RadioButton());
			this->E17_B = (gcnew System::Windows::Forms::RadioButton());
			this->E17_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E18 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E18_A = (gcnew System::Windows::Forms::RadioButton());
			this->E18_B = (gcnew System::Windows::Forms::RadioButton());
			this->E18_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E19 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E19_A = (gcnew System::Windows::Forms::RadioButton());
			this->E19_B = (gcnew System::Windows::Forms::RadioButton());
			this->E19_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E20 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E20_A = (gcnew System::Windows::Forms::RadioButton());
			this->E20_B = (gcnew System::Windows::Forms::RadioButton());
			this->E20_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E21 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E21_A = (gcnew System::Windows::Forms::RadioButton());
			this->E21_B = (gcnew System::Windows::Forms::RadioButton());
			this->E21_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E22 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E22_A = (gcnew System::Windows::Forms::RadioButton());
			this->E22_B = (gcnew System::Windows::Forms::RadioButton());
			this->E22_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E23 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E23_A = (gcnew System::Windows::Forms::RadioButton());
			this->E23_B = (gcnew System::Windows::Forms::RadioButton());
			this->E23_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E24 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->E24_A = (gcnew System::Windows::Forms::RadioButton());
			this->E24_B = (gcnew System::Windows::Forms::RadioButton());
			this->E24_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E25 = (gcnew System::Windows::Forms::Panel());
			this->E25_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E25_B = (gcnew System::Windows::Forms::RadioButton());
			this->E25_A = (gcnew System::Windows::Forms::RadioButton());
			this->E26 = (gcnew System::Windows::Forms::Panel());
			this->E26_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E26_B = (gcnew System::Windows::Forms::RadioButton());
			this->E26_A = (gcnew System::Windows::Forms::RadioButton());
			this->E27 = (gcnew System::Windows::Forms::Panel());
			this->E27_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E27_B = (gcnew System::Windows::Forms::RadioButton());
			this->E27_A = (gcnew System::Windows::Forms::RadioButton());
			this->E28 = (gcnew System::Windows::Forms::Panel());
			this->E28_OFF = (gcnew System::Windows::Forms::RadioButton());
			this->E28_B = (gcnew System::Windows::Forms::RadioButton());
			this->E28_A = (gcnew System::Windows::Forms::RadioButton());
			this->btnUpdateConfig = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->btnRead = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->amplitudeInput = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnMax = (gcnew System::Windows::Forms::Button());
			this->E1->SuspendLayout();
			this->E2->SuspendLayout();
			this->E3->SuspendLayout();
			this->E4->SuspendLayout();
			this->E5->SuspendLayout();
			this->E6->SuspendLayout();
			this->E7->SuspendLayout();
			this->E8->SuspendLayout();
			this->E9->SuspendLayout();
			this->E10->SuspendLayout();
			this->E11->SuspendLayout();
			this->E12->SuspendLayout();
			this->E13->SuspendLayout();
			this->E14->SuspendLayout();
			this->E15->SuspendLayout();
			this->E16->SuspendLayout();
			this->E17->SuspendLayout();
			this->E18->SuspendLayout();
			this->E19->SuspendLayout();
			this->E20->SuspendLayout();
			this->E21->SuspendLayout();
			this->E22->SuspendLayout();
			this->E23->SuspendLayout();
			this->E24->SuspendLayout();
			this->E25->SuspendLayout();
			this->E26->SuspendLayout();
			this->E27->SuspendLayout();
			this->E28->SuspendLayout();
			this->SuspendLayout();
			// 
			// electrode_1
			// 
			this->E1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E1->Controls->Add(this->E1_A);
			this->E1->Controls->Add(this->E1_B);
			this->E1->Controls->Add(this->E1_OFF);
			this->E1->Location = System::Drawing::Point(3, 2);
			this->E1->Name = L"E1";
			this->E1->Padding = System::Windows::Forms::Padding(10);
			this->E1->Size = System::Drawing::Size(79, 94);
			this->E1->TabIndex = 0;
			// 
			// electrode_1_A
			// 
			this->E1_A->AutoSize = true;
			this->E1_A->Location = System::Drawing::Point(13, 13);
			this->E1_A->Name = L"E1_A";
			this->E1_A->Size = System::Drawing::Size(32, 17);
			this->E1_A->TabIndex = 0;
			this->E1_A->Text = L"A";
			this->E1_A->UseVisualStyleBackColor = true;
			this->E1_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_1_A_CheckedChanged);
			// 
			// electrode_1_B
			// 
			this->E1_B->AutoSize = true;
			this->E1_B->Location = System::Drawing::Point(13, 36);
			this->E1_B->Name = L"E1_B";
			this->E1_B->Size = System::Drawing::Size(32, 17);
			this->E1_B->TabIndex = 1;
			this->E1_B->Text = L"B";
			this->E1_B->UseVisualStyleBackColor = true;
			this->E1_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_1_B_CheckedChanged);
			// 
			// electrode_1_off
			// 
			this->E1_OFF->AutoSize = true;
			this->E1_OFF->Location = System::Drawing::Point(13, 59);
			this->E1_OFF->Name = L"E1_off";
			this->E1_OFF->Size = System::Drawing::Size(39, 17);
			this->E1_OFF->TabIndex = 2;
			this->E1_OFF->Text = L"Off";
			this->E1_OFF->UseVisualStyleBackColor = true;
			this->E1_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_1_off_CheckedChanged);
			// 
			// electrode_2
			// 
			this->E2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E2->Controls->Add(this->E2_A);
			this->E2->Controls->Add(this->E2_B);
			this->E2->Controls->Add(this->E2_OFF);
			this->E2->Location = System::Drawing::Point(88, 2);
			this->E2->Name = L"E2";
			this->E2->Padding = System::Windows::Forms::Padding(10);
			this->E2->Size = System::Drawing::Size(79, 94);
			this->E2->TabIndex = 3;
			// 
			// electrode_2_A
			// 
			this->E2_A->AutoSize = true;
			this->E2_A->Location = System::Drawing::Point(13, 13);
			this->E2_A->Name = L"E2_A";
			this->E2_A->Size = System::Drawing::Size(32, 17);
			this->E2_A->TabIndex = 0;
			this->E2_A->TabStop = true;
			this->E2_A->Text = L"A";
			this->E2_A->UseVisualStyleBackColor = true;
			this->E2_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_2_A_CheckedChanged);
			// 
			// electrode_2_B
			// 
			this->E2_B->AutoSize = true;
			this->E2_B->Location = System::Drawing::Point(13, 36);
			this->E2_B->Name = L"E2_B";
			this->E2_B->Size = System::Drawing::Size(32, 17);
			this->E2_B->TabIndex = 1;
			this->E2_B->TabStop = true;
			this->E2_B->Text = L"B";
			this->E2_B->UseVisualStyleBackColor = true;
			this->E2_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_2_B_CheckedChanged);
			// 
			// electrode_2_off
			// 
			this->E2_OFF->AutoSize = true;
			this->E2_OFF->Location = System::Drawing::Point(13, 59);
			this->E2_OFF->Name = L"E2_off";
			this->E2_OFF->Size = System::Drawing::Size(39, 17);
			this->E2_OFF->TabIndex = 2;
			this->E2_OFF->TabStop = true;
			this->E2_OFF->Text = L"Off";
			this->E2_OFF->UseVisualStyleBackColor = true;
			this->E2_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_2_off_CheckedChanged);
			// 
			// electrode_3
			// 
			this->E3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E3->Controls->Add(this->E3_A);
			this->E3->Controls->Add(this->E3_B);
			this->E3->Controls->Add(this->E3_OFF);
			this->E3->Location = System::Drawing::Point(173, 2);
			this->E3->Name = L"E3";
			this->E3->Padding = System::Windows::Forms::Padding(10);
			this->E3->Size = System::Drawing::Size(79, 94);
			this->E3->TabIndex = 3;
			// 
			// electrode_3_A
			// 
			this->E3_A->AutoSize = true;
			this->E3_A->Location = System::Drawing::Point(13, 13);
			this->E3_A->Name = L"E3_A";
			this->E3_A->Size = System::Drawing::Size(32, 17);
			this->E3_A->TabIndex = 0;
			this->E3_A->TabStop = true;
			this->E3_A->Text = L"A";
			this->E3_A->UseVisualStyleBackColor = true;
			this->E3_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_3_A_CheckedChanged);
			// 
			// electrode_3_B
			// 
			this->E3_B->AutoSize = true;
			this->E3_B->Location = System::Drawing::Point(13, 36);
			this->E3_B->Name = L"E3_B";
			this->E3_B->Size = System::Drawing::Size(32, 17);
			this->E3_B->TabIndex = 1;
			this->E3_B->TabStop = true;
			this->E3_B->Text = L"B";
			this->E3_B->UseVisualStyleBackColor = true;
			this->E3_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_3_B_CheckedChanged);
			// 
			// electrode_3_off
			// 
			this->E3_OFF->AutoSize = true;
			this->E3_OFF->Location = System::Drawing::Point(13, 59);
			this->E3_OFF->Name = L"E3_off";
			this->E3_OFF->Size = System::Drawing::Size(39, 17);
			this->E3_OFF->TabIndex = 2;
			this->E3_OFF->TabStop = true;
			this->E3_OFF->Text = L"Off";
			this->E3_OFF->UseVisualStyleBackColor = true;
			this->E3_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_3_off_CheckedChanged);
			// 
			// electrode_4
			// 
			this->E4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E4->Controls->Add(this->E4_A);
			this->E4->Controls->Add(this->E4_B);
			this->E4->Controls->Add(this->E4_OFF);
			this->E4->Location = System::Drawing::Point(258, 2);
			this->E4->Name = L"E4";
			this->E4->Padding = System::Windows::Forms::Padding(10);
			this->E4->Size = System::Drawing::Size(79, 94);
			this->E4->TabIndex = 3;
			// 
			// electrode_4_A
			// 
			this->E4_A->AutoSize = true;
			this->E4_A->Location = System::Drawing::Point(13, 13);
			this->E4_A->Name = L"E4_A";
			this->E4_A->Size = System::Drawing::Size(32, 17);
			this->E4_A->TabIndex = 0;
			this->E4_A->TabStop = true;
			this->E4_A->Text = L"A";
			this->E4_A->UseVisualStyleBackColor = true;
			this->E4_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_4_A_CheckedChanged);
			// 
			// electrode_4_B
			// 
			this->E4_B->AutoSize = true;
			this->E4_B->Location = System::Drawing::Point(13, 36);
			this->E4_B->Name = L"E4_B";
			this->E4_B->Size = System::Drawing::Size(32, 17);
			this->E4_B->TabIndex = 1;
			this->E4_B->TabStop = true;
			this->E4_B->Text = L"B";
			this->E4_B->UseVisualStyleBackColor = true;
			this->E4_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_4_B_CheckedChanged);
			// 
			// electrode_4_off
			// 
			this->E4_OFF->AutoSize = true;
			this->E4_OFF->Location = System::Drawing::Point(13, 59);
			this->E4_OFF->Name = L"E4_off";
			this->E4_OFF->Size = System::Drawing::Size(39, 17);
			this->E4_OFF->TabIndex = 2;
			this->E4_OFF->TabStop = true;
			this->E4_OFF->Text = L"Off";
			this->E4_OFF->UseVisualStyleBackColor = true;
			this->E4_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_4_off_CheckedChanged);
			// 
			// electrode_5
			// 
			this->E5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E5->Controls->Add(this->E5_A);
			this->E5->Controls->Add(this->E5_B);
			this->E5->Controls->Add(this->E5_OFF);
			this->E5->Location = System::Drawing::Point(3, 102);
			this->E5->Name = L"E5";
			this->E5->Padding = System::Windows::Forms::Padding(10);
			this->E5->Size = System::Drawing::Size(79, 94);
			this->E5->TabIndex = 3;
			// 
			// electrode_5_A
			// 
			this->E5_A->AutoSize = true;
			this->E5_A->Location = System::Drawing::Point(13, 13);
			this->E5_A->Name = L"E5_A";
			this->E5_A->Size = System::Drawing::Size(32, 17);
			this->E5_A->TabIndex = 0;
			this->E5_A->TabStop = true;
			this->E5_A->Text = L"A";
			this->E5_A->UseVisualStyleBackColor = true;
			this->E5_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_5_A_CheckedChanged);
			// 
			// electrode_5_B
			// 
			this->E5_B->AutoSize = true;
			this->E5_B->Location = System::Drawing::Point(13, 36);
			this->E5_B->Name = L"E5_B";
			this->E5_B->Size = System::Drawing::Size(32, 17);
			this->E5_B->TabIndex = 1;
			this->E5_B->TabStop = true;
			this->E5_B->Text = L"B";
			this->E5_B->UseVisualStyleBackColor = true;
			this->E5_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_5_B_CheckedChanged);
			// 
			// electrode_5_off
			// 
			this->E5_OFF->AutoSize = true;
			this->E5_OFF->Location = System::Drawing::Point(13, 59);
			this->E5_OFF->Name = L"E5_off";
			this->E5_OFF->Size = System::Drawing::Size(39, 17);
			this->E5_OFF->TabIndex = 2;
			this->E5_OFF->TabStop = true;
			this->E5_OFF->Text = L"Off";
			this->E5_OFF->UseVisualStyleBackColor = true;
			this->E5_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_5_off_CheckedChanged);
			// 
			// electrode_6
			// 
			this->E6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E6->Controls->Add(this->E6_A);
			this->E6->Controls->Add(this->E6_B);
			this->E6->Controls->Add(this->E6_OFF);
			this->E6->Location = System::Drawing::Point(88, 102);
			this->E6->Name = L"E6";
			this->E6->Padding = System::Windows::Forms::Padding(10);
			this->E6->Size = System::Drawing::Size(79, 94);
			this->E6->TabIndex = 3;
			// 
			// electrode_6_A
			// 
			this->E6_A->AutoSize = true;
			this->E6_A->Location = System::Drawing::Point(13, 13);
			this->E6_A->Name = L"E6_A";
			this->E6_A->Size = System::Drawing::Size(32, 17);
			this->E6_A->TabIndex = 0;
			this->E6_A->TabStop = true;
			this->E6_A->Text = L"A";
			this->E6_A->UseVisualStyleBackColor = true;
			this->E6_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_6_A_CheckedChanged);
			// 
			// electrode_6_B
			// 
			this->E6_B->AutoSize = true;
			this->E6_B->Location = System::Drawing::Point(13, 36);
			this->E6_B->Name = L"E6_B";
			this->E6_B->Size = System::Drawing::Size(32, 17);
			this->E6_B->TabIndex = 1;
			this->E6_B->TabStop = true;
			this->E6_B->Text = L"B";
			this->E6_B->UseVisualStyleBackColor = true;
			this->E6_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_6_B_CheckedChanged);
			// 
			// electrode_6_off
			// 
			this->E6_OFF->AutoSize = true;
			this->E6_OFF->Location = System::Drawing::Point(13, 59);
			this->E6_OFF->Name = L"E6_off";
			this->E6_OFF->Size = System::Drawing::Size(39, 17);
			this->E6_OFF->TabIndex = 2;
			this->E6_OFF->TabStop = true;
			this->E6_OFF->Text = L"Off";
			this->E6_OFF->UseVisualStyleBackColor = true;
			this->E6_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_6_off_CheckedChanged);
			// 
			// electrode_7
			// 
			this->E7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E7->Controls->Add(this->E7_A);
			this->E7->Controls->Add(this->E7_B);
			this->E7->Controls->Add(this->E7_OFF);
			this->E7->Location = System::Drawing::Point(173, 102);
			this->E7->Name = L"E7";
			this->E7->Padding = System::Windows::Forms::Padding(10);
			this->E7->Size = System::Drawing::Size(79, 94);
			this->E7->TabIndex = 3;
			// 
			// electrode_7_A
			// 
			this->E7_A->AutoSize = true;
			this->E7_A->Location = System::Drawing::Point(13, 13);
			this->E7_A->Name = L"E7_A";
			this->E7_A->Size = System::Drawing::Size(32, 17);
			this->E7_A->TabIndex = 0;
			this->E7_A->TabStop = true;
			this->E7_A->Text = L"A";
			this->E7_A->UseVisualStyleBackColor = true;
			this->E7_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_7_A_CheckedChanged);
			// 
			// electrode_7_B
			// 
			this->E7_B->AutoSize = true;
			this->E7_B->Location = System::Drawing::Point(13, 36);
			this->E7_B->Name = L"E7_B";
			this->E7_B->Size = System::Drawing::Size(32, 17);
			this->E7_B->TabIndex = 1;
			this->E7_B->TabStop = true;
			this->E7_B->Text = L"B";
			this->E7_B->UseVisualStyleBackColor = true;
			this->E7_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_7_B_CheckedChanged);
			// 
			// electrode_7_off
			// 
			this->E7_OFF->AutoSize = true;
			this->E7_OFF->Location = System::Drawing::Point(13, 59);
			this->E7_OFF->Name = L"E7_off";
			this->E7_OFF->Size = System::Drawing::Size(39, 17);
			this->E7_OFF->TabIndex = 2;
			this->E7_OFF->TabStop = true;
			this->E7_OFF->Text = L"Off";
			this->E7_OFF->UseVisualStyleBackColor = true;
			this->E7_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_7_off_CheckedChanged);
			// 
			// electrode_8
			// 
			this->E8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E8->Controls->Add(this->E8_A);
			this->E8->Controls->Add(this->E8_B);
			this->E8->Controls->Add(this->E8_OFF);
			this->E8->Location = System::Drawing::Point(258, 102);
			this->E8->Name = L"E8";
			this->E8->Padding = System::Windows::Forms::Padding(10);
			this->E8->Size = System::Drawing::Size(79, 94);
			this->E8->TabIndex = 3;
			// 
			// electrode_8_A
			// 
			this->E8_A->AutoSize = true;
			this->E8_A->Location = System::Drawing::Point(13, 13);
			this->E8_A->Name = L"E8_A";
			this->E8_A->Size = System::Drawing::Size(32, 17);
			this->E8_A->TabIndex = 0;
			this->E8_A->TabStop = true;
			this->E8_A->Text = L"A";
			this->E8_A->UseVisualStyleBackColor = true;
			this->E8_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_8_A_CheckedChanged);
			// 
			// electrode_8_B
			// 
			this->E8_B->AutoSize = true;
			this->E8_B->Location = System::Drawing::Point(13, 36);
			this->E8_B->Name = L"E8_B";
			this->E8_B->Size = System::Drawing::Size(32, 17);
			this->E8_B->TabIndex = 1;
			this->E8_B->TabStop = true;
			this->E8_B->Text = L"B";
			this->E8_B->UseVisualStyleBackColor = true;
			this->E8_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_8_B_CheckedChanged);
			// 
			// electrode_8_off
			// 
			this->E8_OFF->AutoSize = true;
			this->E8_OFF->Location = System::Drawing::Point(13, 59);
			this->E8_OFF->Name = L"E8_off";
			this->E8_OFF->Size = System::Drawing::Size(39, 17);
			this->E8_OFF->TabIndex = 2;
			this->E8_OFF->TabStop = true;
			this->E8_OFF->Text = L"Off";
			this->E8_OFF->UseVisualStyleBackColor = true;
			this->E8_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_8_off_CheckedChanged);
			// 
			// electrode_9
			// 
			this->E9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E9->Controls->Add(this->E9_A);
			this->E9->Controls->Add(this->E9_B);
			this->E9->Controls->Add(this->E9_OFF);
			this->E9->Location = System::Drawing::Point(3, 202);
			this->E9->Name = L"E9";
			this->E9->Padding = System::Windows::Forms::Padding(10);
			this->E9->Size = System::Drawing::Size(79, 94);
			this->E9->TabIndex = 3;
			// 
			// electrode_9_A
			// 
			this->E9_A->AutoSize = true;
			this->E9_A->Location = System::Drawing::Point(13, 13);
			this->E9_A->Name = L"E9_A";
			this->E9_A->Size = System::Drawing::Size(32, 17);
			this->E9_A->TabIndex = 0;
			this->E9_A->TabStop = true;
			this->E9_A->Text = L"A";
			this->E9_A->UseVisualStyleBackColor = true;
			this->E9_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_9_A_CheckedChanged);
			// 
			// electrode_9_B
			// 
			this->E9_B->AutoSize = true;
			this->E9_B->Location = System::Drawing::Point(13, 36);
			this->E9_B->Name = L"E9_B";
			this->E9_B->Size = System::Drawing::Size(32, 17);
			this->E9_B->TabIndex = 1;
			this->E9_B->TabStop = true;
			this->E9_B->Text = L"B";
			this->E9_B->UseVisualStyleBackColor = true;
			this->E9_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_9_B_CheckedChanged);
			// 
			// electrode_9_off
			// 
			this->E9_OFF->AutoSize = true;
			this->E9_OFF->Location = System::Drawing::Point(13, 59);
			this->E9_OFF->Name = L"E9_off";
			this->E9_OFF->Size = System::Drawing::Size(39, 17);
			this->E9_OFF->TabIndex = 2;
			this->E9_OFF->TabStop = true;
			this->E9_OFF->Text = L"Off";
			this->E9_OFF->UseVisualStyleBackColor = true;
			this->E9_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_9_off_CheckedChanged);
			// 
			// electrode_10
			// 
			this->E10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E10->Controls->Add(this->E10_A);
			this->E10->Controls->Add(this->E10_B);
			this->E10->Controls->Add(this->E10_OFF);
			this->E10->Location = System::Drawing::Point(88, 202);
			this->E10->Name = L"E10";
			this->E10->Padding = System::Windows::Forms::Padding(10);
			this->E10->Size = System::Drawing::Size(79, 94);
			this->E10->TabIndex = 3;
			// 
			// electrode_10_A
			// 
			this->E10_A->AutoSize = true;
			this->E10_A->Location = System::Drawing::Point(13, 13);
			this->E10_A->Name = L"E10_A";
			this->E10_A->Size = System::Drawing::Size(32, 17);
			this->E10_A->TabIndex = 0;
			this->E10_A->TabStop = true;
			this->E10_A->Text = L"A";
			this->E10_A->UseVisualStyleBackColor = true;
			this->E10_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_10_A_CheckedChanged);
			// 
			// electrode_10_B
			// 
			this->E10_B->AutoSize = true;
			this->E10_B->Location = System::Drawing::Point(13, 36);
			this->E10_B->Name = L"E10_B";
			this->E10_B->Size = System::Drawing::Size(32, 17);
			this->E10_B->TabIndex = 1;
			this->E10_B->TabStop = true;
			this->E10_B->Text = L"B";
			this->E10_B->UseVisualStyleBackColor = true;
			this->E10_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_10_B_CheckedChanged);
			// 
			// electrode_10_off
			// 
			this->E10_OFF->AutoSize = true;
			this->E10_OFF->Location = System::Drawing::Point(13, 59);
			this->E10_OFF->Name = L"E10_off";
			this->E10_OFF->Size = System::Drawing::Size(39, 17);
			this->E10_OFF->TabIndex = 2;
			this->E10_OFF->TabStop = true;
			this->E10_OFF->Text = L"Off";
			this->E10_OFF->UseVisualStyleBackColor = true;
			this->E10_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_10_off_CheckedChanged);
			// 
			// electrode_11
			// 
			this->E11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E11->Controls->Add(this->E11_A);
			this->E11->Controls->Add(this->E11_B);
			this->E11->Controls->Add(this->E11_OFF);
			this->E11->Location = System::Drawing::Point(173, 202);
			this->E11->Name = L"E11";
			this->E11->Padding = System::Windows::Forms::Padding(10);
			this->E11->Size = System::Drawing::Size(79, 94);
			this->E11->TabIndex = 3;
			// 
			// electrode_11_A
			// 
			this->E11_A->AutoSize = true;
			this->E11_A->Location = System::Drawing::Point(13, 13);
			this->E11_A->Name = L"E11_A";
			this->E11_A->Size = System::Drawing::Size(32, 17);
			this->E11_A->TabIndex = 0;
			this->E11_A->TabStop = true;
			this->E11_A->Text = L"A";
			this->E11_A->UseVisualStyleBackColor = true;
			this->E11_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_11_A_CheckedChanged);
			// 
			// electrode_11_B
			// 
			this->E11_B->AutoSize = true;
			this->E11_B->Location = System::Drawing::Point(13, 36);
			this->E11_B->Name = L"E11_B";
			this->E11_B->Size = System::Drawing::Size(32, 17);
			this->E11_B->TabIndex = 1;
			this->E11_B->TabStop = true;
			this->E11_B->Text = L"B";
			this->E11_B->UseVisualStyleBackColor = true;
			this->E11_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_11_B_CheckedChanged);
			// 
			// electrode_11_off
			// 
			this->E11_OFF->AutoSize = true;
			this->E11_OFF->Location = System::Drawing::Point(13, 59);
			this->E11_OFF->Name = L"E11_off";
			this->E11_OFF->Size = System::Drawing::Size(39, 17);
			this->E11_OFF->TabIndex = 2;
			this->E11_OFF->TabStop = true;
			this->E11_OFF->Text = L"Off";
			this->E11_OFF->UseVisualStyleBackColor = true;
			this->E11_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_11_off_CheckedChanged);
			// 
			// electrode_12
			// 
			this->E12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E12->Controls->Add(this->E12_A);
			this->E12->Controls->Add(this->E12_B);
			this->E12->Controls->Add(this->E12_OFF);
			this->E12->Location = System::Drawing::Point(258, 202);
			this->E12->Name = L"E12";
			this->E12->Padding = System::Windows::Forms::Padding(10);
			this->E12->Size = System::Drawing::Size(79, 94);
			this->E12->TabIndex = 3;
			// 
			// electrode_12_A
			// 
			this->E12_A->AutoSize = true;
			this->E12_A->Location = System::Drawing::Point(13, 13);
			this->E12_A->Name = L"E12_A";
			this->E12_A->Size = System::Drawing::Size(32, 17);
			this->E12_A->TabIndex = 0;
			this->E12_A->TabStop = true;
			this->E12_A->Text = L"A";
			this->E12_A->UseVisualStyleBackColor = true;
			this->E12_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_12_A_CheckedChanged);
			// 
			// electrode_12_B
			// 
			this->E12_B->AutoSize = true;
			this->E12_B->Location = System::Drawing::Point(13, 36);
			this->E12_B->Name = L"E12_B";
			this->E12_B->Size = System::Drawing::Size(32, 17);
			this->E12_B->TabIndex = 1;
			this->E12_B->TabStop = true;
			this->E12_B->Text = L"B";
			this->E12_B->UseVisualStyleBackColor = true;
			this->E12_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_12_B_CheckedChanged);
			// 
			// electrode_12_off
			// 
			this->E12_OFF->AutoSize = true;
			this->E12_OFF->Location = System::Drawing::Point(13, 59);
			this->E12_OFF->Name = L"E12_off";
			this->E12_OFF->Size = System::Drawing::Size(39, 17);
			this->E12_OFF->TabIndex = 2;
			this->E12_OFF->TabStop = true;
			this->E12_OFF->Text = L"Off";
			this->E12_OFF->UseVisualStyleBackColor = true;
			this->E12_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_12_off_CheckedChanged);
			// 
			// electrode_13
			// 
			this->E13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E13->Controls->Add(this->E13_A);
			this->E13->Controls->Add(this->E13_B);
			this->E13->Controls->Add(this->E13_OFF);
			this->E13->Location = System::Drawing::Point(3, 302);
			this->E13->Name = L"E13";
			this->E13->Padding = System::Windows::Forms::Padding(10);
			this->E13->Size = System::Drawing::Size(79, 94);
			this->E13->TabIndex = 3;
			// 
			// electrode_13_A
			// 
			this->E13_A->AutoSize = true;
			this->E13_A->Location = System::Drawing::Point(13, 13);
			this->E13_A->Name = L"E13_A";
			this->E13_A->Size = System::Drawing::Size(32, 17);
			this->E13_A->TabIndex = 0;
			this->E13_A->TabStop = true;
			this->E13_A->Text = L"A";
			this->E13_A->UseVisualStyleBackColor = true;
			this->E13_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_13_A_CheckedChanged);
			// 
			// electrode_13_B
			// 
			this->E13_B->AutoSize = true;
			this->E13_B->Location = System::Drawing::Point(13, 36);
			this->E13_B->Name = L"E13_B";
			this->E13_B->Size = System::Drawing::Size(32, 17);
			this->E13_B->TabIndex = 1;
			this->E13_B->TabStop = true;
			this->E13_B->Text = L"B";
			this->E13_B->UseVisualStyleBackColor = true;
			this->E13_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_13_B_CheckedChanged);
			// 
			// electrode_13_off
			// 
			this->E13_OFF->AutoSize = true;
			this->E13_OFF->Location = System::Drawing::Point(13, 59);
			this->E13_OFF->Name = L"E13_off";
			this->E13_OFF->Size = System::Drawing::Size(39, 17);
			this->E13_OFF->TabIndex = 2;
			this->E13_OFF->TabStop = true;
			this->E13_OFF->Text = L"Off";
			this->E13_OFF->UseVisualStyleBackColor = true;
			this->E13_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_13_off_CheckedChanged);
			// 
			// electrode_14
			// 
			this->E14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E14->Controls->Add(this->E14_A);
			this->E14->Controls->Add(this->E14_B);
			this->E14->Controls->Add(this->E14_OFF);
			this->E14->Location = System::Drawing::Point(88, 302);
			this->E14->Name = L"E14";
			this->E14->Padding = System::Windows::Forms::Padding(10);
			this->E14->Size = System::Drawing::Size(79, 94);
			this->E14->TabIndex = 3;
			// 
			// electrode_14_A
			// 
			this->E14_A->AutoSize = true;
			this->E14_A->Location = System::Drawing::Point(13, 13);
			this->E14_A->Name = L"E14_A";
			this->E14_A->Size = System::Drawing::Size(32, 17);
			this->E14_A->TabIndex = 0;
			this->E14_A->TabStop = true;
			this->E14_A->Text = L"A";
			this->E14_A->UseVisualStyleBackColor = true;
			this->E14_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_14_A_CheckedChanged);
			// 
			// electrode_14_B
			// 
			this->E14_B->AutoSize = true;
			this->E14_B->Location = System::Drawing::Point(13, 36);
			this->E14_B->Name = L"E14_B";
			this->E14_B->Size = System::Drawing::Size(32, 17);
			this->E14_B->TabIndex = 1;
			this->E14_B->TabStop = true;
			this->E14_B->Text = L"B";
			this->E14_B->UseVisualStyleBackColor = true;
			this->E14_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_14_B_CheckedChanged);
			// 
			// electrode_14_off
			// 
			this->E14_OFF->AutoSize = true;
			this->E14_OFF->Location = System::Drawing::Point(13, 59);
			this->E14_OFF->Name = L"E14_off";
			this->E14_OFF->Size = System::Drawing::Size(39, 17);
			this->E14_OFF->TabIndex = 2;
			this->E14_OFF->TabStop = true;
			this->E14_OFF->Text = L"Off";
			this->E14_OFF->UseVisualStyleBackColor = true;
			this->E14_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_14_off_CheckedChanged);
			// 
			// electrode_15
			// 
			this->E15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E15->Controls->Add(this->E15_A);
			this->E15->Controls->Add(this->E15_B);
			this->E15->Controls->Add(this->E15_OFF);
			this->E15->Location = System::Drawing::Point(173, 302);
			this->E15->Name = L"E15";
			this->E15->Padding = System::Windows::Forms::Padding(10);
			this->E15->Size = System::Drawing::Size(79, 94);
			this->E15->TabIndex = 3;
			// 
			// electrode_15_A
			// 
			this->E15_A->AutoSize = true;
			this->E15_A->Location = System::Drawing::Point(13, 13);
			this->E15_A->Name = L"E15_A";
			this->E15_A->Size = System::Drawing::Size(32, 17);
			this->E15_A->TabIndex = 0;
			this->E15_A->TabStop = true;
			this->E15_A->Text = L"A";
			this->E15_A->UseVisualStyleBackColor = true;
			this->E15_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_15_A_CheckedChanged);
			// 
			// electrode_15_B
			// 
			this->E15_B->AutoSize = true;
			this->E15_B->Location = System::Drawing::Point(13, 36);
			this->E15_B->Name = L"E15_B";
			this->E15_B->Size = System::Drawing::Size(32, 17);
			this->E15_B->TabIndex = 1;
			this->E15_B->TabStop = true;
			this->E15_B->Text = L"B";
			this->E15_B->UseVisualStyleBackColor = true;
			this->E15_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_15_B_CheckedChanged);
			// 
			// electrode_15_off
			// 
			this->E15_OFF->AutoSize = true;
			this->E15_OFF->Location = System::Drawing::Point(13, 59);
			this->E15_OFF->Name = L"E15_off";
			this->E15_OFF->Size = System::Drawing::Size(39, 17);
			this->E15_OFF->TabIndex = 2;
			this->E15_OFF->TabStop = true;
			this->E15_OFF->Text = L"Off";
			this->E15_OFF->UseVisualStyleBackColor = true;
			this->E15_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_15_off_CheckedChanged);
			// 
			// electrode_16
			// 
			this->E16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E16->Controls->Add(this->E16_A);
			this->E16->Controls->Add(this->E16_B);
			this->E16->Controls->Add(this->E16_OFF);
			this->E16->Location = System::Drawing::Point(258, 302);
			this->E16->Name = L"E16";
			this->E16->Padding = System::Windows::Forms::Padding(10);
			this->E16->Size = System::Drawing::Size(79, 94);
			this->E16->TabIndex = 3;
			// 
			// electrode_16_A
			// 
			this->E16_A->AutoSize = true;
			this->E16_A->Location = System::Drawing::Point(13, 13);
			this->E16_A->Name = L"E16_A";
			this->E16_A->Size = System::Drawing::Size(32, 17);
			this->E16_A->TabIndex = 0;
			this->E16_A->TabStop = true;
			this->E16_A->Text = L"A";
			this->E16_A->UseVisualStyleBackColor = true;
			this->E16_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_16_A_CheckedChanged);
			// 
			// electrode_16_B
			// 
			this->E16_B->AutoSize = true;
			this->E16_B->Location = System::Drawing::Point(13, 36);
			this->E16_B->Name = L"E16_B";
			this->E16_B->Size = System::Drawing::Size(32, 17);
			this->E16_B->TabIndex = 1;
			this->E16_B->TabStop = true;
			this->E16_B->Text = L"B";
			this->E16_B->UseVisualStyleBackColor = true;
			this->E16_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_16_B_CheckedChanged);
			// 
			// electrode_16_off
			// 
			this->E16_OFF->AutoSize = true;
			this->E16_OFF->Location = System::Drawing::Point(13, 59);
			this->E16_OFF->Name = L"E16_off";
			this->E16_OFF->Size = System::Drawing::Size(39, 17);
			this->E16_OFF->TabIndex = 2;
			this->E16_OFF->TabStop = true;
			this->E16_OFF->Text = L"Off";
			this->E16_OFF->UseVisualStyleBackColor = true;
			this->E16_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_16_off_CheckedChanged);
			// 
			// electrode_17
			// 
			this->E17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E17->Controls->Add(this->E17_A);
			this->E17->Controls->Add(this->E17_B);
			this->E17->Controls->Add(this->E17_OFF);
			this->E17->Location = System::Drawing::Point(3, 402);
			this->E17->Name = L"E17";
			this->E17->Padding = System::Windows::Forms::Padding(10);
			this->E17->Size = System::Drawing::Size(79, 94);
			this->E17->TabIndex = 3;
			// 
			// electrode_17_A
			// 
			this->E17_A->AutoSize = true;
			this->E17_A->Location = System::Drawing::Point(13, 13);
			this->E17_A->Name = L"E17_A";
			this->E17_A->Size = System::Drawing::Size(32, 17);
			this->E17_A->TabIndex = 0;
			this->E17_A->TabStop = true;
			this->E17_A->Text = L"A";
			this->E17_A->UseVisualStyleBackColor = true;
			this->E17_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_17_A_CheckedChanged);
			// 
			// electrode_17_B
			// 
			this->E17_B->AutoSize = true;
			this->E17_B->Location = System::Drawing::Point(13, 36);
			this->E17_B->Name = L"E17_B";
			this->E17_B->Size = System::Drawing::Size(32, 17);
			this->E17_B->TabIndex = 1;
			this->E17_B->TabStop = true;
			this->E17_B->Text = L"B";
			this->E17_B->UseVisualStyleBackColor = true;
			this->E17_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_17_B_CheckedChanged);
			// 
			// electrode_17_off
			// 
			this->E17_OFF->AutoSize = true;
			this->E17_OFF->Location = System::Drawing::Point(13, 59);
			this->E17_OFF->Name = L"E17_off";
			this->E17_OFF->Size = System::Drawing::Size(39, 17);
			this->E17_OFF->TabIndex = 2;
			this->E17_OFF->TabStop = true;
			this->E17_OFF->Text = L"Off";
			this->E17_OFF->UseVisualStyleBackColor = true;
			this->E17_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_17_off_CheckedChanged);
			// 
			// electrode_18
			// 
			this->E18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E18->Controls->Add(this->E18_A);
			this->E18->Controls->Add(this->E18_B);
			this->E18->Controls->Add(this->E18_OFF);
			this->E18->Location = System::Drawing::Point(88, 402);
			this->E18->Name = L"E18";
			this->E18->Padding = System::Windows::Forms::Padding(10);
			this->E18->Size = System::Drawing::Size(79, 94);
			this->E18->TabIndex = 3;
			// 
			// electrode_18_A
			// 
			this->E18_A->AutoSize = true;
			this->E18_A->Location = System::Drawing::Point(13, 13);
			this->E18_A->Name = L"E18_A";
			this->E18_A->Size = System::Drawing::Size(32, 17);
			this->E18_A->TabIndex = 0;
			this->E18_A->TabStop = true;
			this->E18_A->Text = L"A";
			this->E18_A->UseVisualStyleBackColor = true;
			this->E18_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_18_A_CheckedChanged);
			// 
			// electrode_18_B
			// 
			this->E18_B->AutoSize = true;
			this->E18_B->Location = System::Drawing::Point(13, 36);
			this->E18_B->Name = L"E18_B";
			this->E18_B->Size = System::Drawing::Size(32, 17);
			this->E18_B->TabIndex = 1;
			this->E18_B->TabStop = true;
			this->E18_B->Text = L"B";
			this->E18_B->UseVisualStyleBackColor = true;
			this->E18_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_18_B_CheckedChanged);
			// 
			// electrode_18_off
			// 
			this->E18_OFF->AutoSize = true;
			this->E18_OFF->Location = System::Drawing::Point(13, 59);
			this->E18_OFF->Name = L"E18_off";
			this->E18_OFF->Size = System::Drawing::Size(39, 17);
			this->E18_OFF->TabIndex = 2;
			this->E18_OFF->TabStop = true;
			this->E18_OFF->Text = L"Off";
			this->E18_OFF->UseVisualStyleBackColor = true;
			this->E18_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_18_off_CheckedChanged);
			// 
			// electrode_19
			// 
			this->E19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E19->Controls->Add(this->E19_A);
			this->E19->Controls->Add(this->E19_B);
			this->E19->Controls->Add(this->E19_OFF);
			this->E19->Location = System::Drawing::Point(173, 402);
			this->E19->Name = L"E19";
			this->E19->Padding = System::Windows::Forms::Padding(10);
			this->E19->Size = System::Drawing::Size(79, 94);
			this->E19->TabIndex = 3;
			// 
			// electrode_19_A
			// 
			this->E19_A->AutoSize = true;
			this->E19_A->Location = System::Drawing::Point(13, 13);
			this->E19_A->Name = L"E19_A";
			this->E19_A->Size = System::Drawing::Size(32, 17);
			this->E19_A->TabIndex = 0;
			this->E19_A->TabStop = true;
			this->E19_A->Text = L"A";
			this->E19_A->UseVisualStyleBackColor = true;
			this->E19_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_19_A_CheckedChanged);
			// 
			// electrode_19_B
			// 
			this->E19_B->AutoSize = true;
			this->E19_B->Location = System::Drawing::Point(13, 36);
			this->E19_B->Name = L"E19_B";
			this->E19_B->Size = System::Drawing::Size(32, 17);
			this->E19_B->TabIndex = 1;
			this->E19_B->TabStop = true;
			this->E19_B->Text = L"B";
			this->E19_B->UseVisualStyleBackColor = true;
			this->E19_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_19_B_CheckedChanged);
			// 
			// electrode_19_off
			// 
			this->E19_OFF->AutoSize = true;
			this->E19_OFF->Location = System::Drawing::Point(13, 59);
			this->E19_OFF->Name = L"E19_off";
			this->E19_OFF->Size = System::Drawing::Size(39, 17);
			this->E19_OFF->TabIndex = 2;
			this->E19_OFF->TabStop = true;
			this->E19_OFF->Text = L"Off";
			this->E19_OFF->UseVisualStyleBackColor = true;
			this->E19_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_19_off_CheckedChanged);
			// 
			// electrode_20
			// 
			this->E20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E20->Controls->Add(this->E20_A);
			this->E20->Controls->Add(this->E20_B);
			this->E20->Controls->Add(this->E20_OFF);
			this->E20->Location = System::Drawing::Point(258, 402);
			this->E20->Name = L"E20";
			this->E20->Padding = System::Windows::Forms::Padding(10);
			this->E20->Size = System::Drawing::Size(79, 94);
			this->E20->TabIndex = 3;
			// 
			// electrode_20_A
			// 
			this->E20_A->AutoSize = true;
			this->E20_A->Location = System::Drawing::Point(13, 13);
			this->E20_A->Name = L"E20_A";
			this->E20_A->Size = System::Drawing::Size(32, 17);
			this->E20_A->TabIndex = 0;
			this->E20_A->TabStop = true;
			this->E20_A->Text = L"A";
			this->E20_A->UseVisualStyleBackColor = true;
			this->E20_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_20_A_CheckedChanged);
			// 
			// electrode_20_B
			// 
			this->E20_B->AutoSize = true;
			this->E20_B->Location = System::Drawing::Point(13, 36);
			this->E20_B->Name = L"E20_B";
			this->E20_B->Size = System::Drawing::Size(32, 17);
			this->E20_B->TabIndex = 1;
			this->E20_B->TabStop = true;
			this->E20_B->Text = L"B";
			this->E20_B->UseVisualStyleBackColor = true;
			this->E20_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_20_B_CheckedChanged);
			// 
			// electrode_20_off
			// 
			this->E20_OFF->AutoSize = true;
			this->E20_OFF->Location = System::Drawing::Point(13, 59);
			this->E20_OFF->Name = L"E20_off";
			this->E20_OFF->Size = System::Drawing::Size(39, 17);
			this->E20_OFF->TabIndex = 2;
			this->E20_OFF->TabStop = true;
			this->E20_OFF->Text = L"Off";
			this->E20_OFF->UseVisualStyleBackColor = true;
			this->E20_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_20_off_CheckedChanged);
			// 
			// electrode_21
			//
			this->E21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E21->Controls->Add(this->E21_A);
			this->E21->Controls->Add(this->E21_B);
			this->E21->Controls->Add(this->E21_OFF);
			this->E21->Location = System::Drawing::Point(3, 502);
			this->E21->Name = L"E21";
			this->E21->Padding = System::Windows::Forms::Padding(10);
			this->E21->Size = System::Drawing::Size(79, 94);
			this->E21->TabIndex = 3;
			// 
			// electrode_21_A
			// 
			this->E21_A->AutoSize = true;
			this->E21_A->Location = System::Drawing::Point(13, 13);
			this->E21_A->Name = L"E21_A";
			this->E21_A->Size = System::Drawing::Size(32, 17);
			this->E21_A->TabIndex = 0;
			this->E21_A->TabStop = true;
			this->E21_A->Text = L"A";
			this->E21_A->UseVisualStyleBackColor = true;
			this->E21_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_21_A_CheckedChanged);
			// 
			// electrode_21_B
			// 
			this->E21_B->AutoSize = true;
			this->E21_B->Location = System::Drawing::Point(13, 36);
			this->E21_B->Name = L"E21_B";
			this->E21_B->Size = System::Drawing::Size(32, 17);
			this->E21_B->TabIndex = 1;
			this->E21_B->TabStop = true;
			this->E21_B->Text = L"B";
			this->E21_B->UseVisualStyleBackColor = true;
			this->E21_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_21_B_CheckedChanged);
			// 
			// electrode_21_off
			// 
			this->E21_OFF->AutoSize = true;
			this->E21_OFF->Location = System::Drawing::Point(13, 59);
			this->E21_OFF->Name = L"E21_off";
			this->E21_OFF->Size = System::Drawing::Size(39, 17);
			this->E21_OFF->TabIndex = 2;
			this->E21_OFF->TabStop = true;
			this->E21_OFF->Text = L"Off";
			this->E21_OFF->UseVisualStyleBackColor = true;
			this->E21_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_21_off_CheckedChanged);
			// 
			// electrode_22
			// 
			this->E22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E22->Controls->Add(this->E22_A);
			this->E22->Controls->Add(this->E22_B);
			this->E22->Controls->Add(this->E22_OFF);
			this->E22->Location = System::Drawing::Point(88, 502);
			this->E22->Name = L"E22";
			this->E22->Padding = System::Windows::Forms::Padding(10);
			this->E22->Size = System::Drawing::Size(79, 94);
			this->E22->TabIndex = 3;
			// 
			// electrode_22_A
			// 
			this->E22_A->AutoSize = true;
			this->E22_A->Location = System::Drawing::Point(13, 13);
			this->E22_A->Name = L"E22_A";
			this->E22_A->Size = System::Drawing::Size(32, 17);
			this->E22_A->TabIndex = 0;
			this->E22_A->TabStop = true;
			this->E22_A->Text = L"A";
			this->E22_A->UseVisualStyleBackColor = true;
			this->E22_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_22_A_CheckedChanged);
			// 
			// electrode_22_B
			// 
			this->E22_B->AutoSize = true;
			this->E22_B->Location = System::Drawing::Point(13, 36);
			this->E22_B->Name = L"E22_B";
			this->E22_B->Size = System::Drawing::Size(32, 17);
			this->E22_B->TabIndex = 1;
			this->E22_B->TabStop = true;
			this->E22_B->Text = L"B";
			this->E22_B->UseVisualStyleBackColor = true;
			this->E22_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_22_B_CheckedChanged);
			// 
			// electrode_22_off
			// 
			this->E22_OFF->AutoSize = true;
			this->E22_OFF->Location = System::Drawing::Point(13, 59);
			this->E22_OFF->Name = L"E22_off";
			this->E22_OFF->Size = System::Drawing::Size(39, 17);
			this->E22_OFF->TabIndex = 2;
			this->E22_OFF->TabStop = true;
			this->E22_OFF->Text = L"Off";
			this->E22_OFF->UseVisualStyleBackColor = true;
			this->E22_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_22_off_CheckedChanged);
			// 
			// electrode_23
			// 
			this->E23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E23->Controls->Add(this->E23_A);
			this->E23->Controls->Add(this->E23_B);
			this->E23->Controls->Add(this->E23_OFF);
			this->E23->Location = System::Drawing::Point(173, 502);
			this->E23->Name = L"E23";
			this->E23->Padding = System::Windows::Forms::Padding(10);
			this->E23->Size = System::Drawing::Size(79, 94);
			this->E23->TabIndex = 3;
			// 
			// electrode_23_A
			// 
			this->E23_A->AutoSize = true;
			this->E23_A->Location = System::Drawing::Point(13, 13);
			this->E23_A->Name = L"E23_A";
			this->E23_A->Size = System::Drawing::Size(32, 17);
			this->E23_A->TabIndex = 0;
			this->E23_A->TabStop = true;
			this->E23_A->Text = L"A";
			this->E23_A->UseVisualStyleBackColor = true;
			this->E23_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_23_A_CheckedChanged);
			// 
			// electrode_23_B
			// 
			this->E23_B->AutoSize = true;
			this->E23_B->Location = System::Drawing::Point(13, 36);
			this->E23_B->Name = L"E23_B";
			this->E23_B->Size = System::Drawing::Size(32, 17);
			this->E23_B->TabIndex = 1;
			this->E23_B->TabStop = true;
			this->E23_B->Text = L"B";
			this->E23_B->UseVisualStyleBackColor = true;
			this->E23_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_23_B_CheckedChanged);
			// 
			// electrode_23_off
			// 
			this->E23_OFF->AutoSize = true;
			this->E23_OFF->Location = System::Drawing::Point(13, 59);
			this->E23_OFF->Name = L"E23_off";
			this->E23_OFF->Size = System::Drawing::Size(39, 17);
			this->E23_OFF->TabIndex = 2;
			this->E23_OFF->TabStop = true;
			this->E23_OFF->Text = L"Off";
			this->E23_OFF->UseVisualStyleBackColor = true;
			this->E23_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_23_off_CheckedChanged);
			// 
			// electrode_24
			// 
			this->E24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E24->Controls->Add(this->E24_A);
			this->E24->Controls->Add(this->E24_B);
			this->E24->Controls->Add(this->E24_OFF);
			this->E24->Location = System::Drawing::Point(258, 502);
			this->E24->Name = L"E24";
			this->E24->Padding = System::Windows::Forms::Padding(10);
			this->E24->Size = System::Drawing::Size(79, 94);
			this->E24->TabIndex = 3;
			// 
			// electrode_24_A
			// 
			this->E24_A->AutoSize = true;
			this->E24_A->Location = System::Drawing::Point(13, 13);
			this->E24_A->Name = L"E24_A";
			this->E24_A->Size = System::Drawing::Size(32, 17);
			this->E24_A->TabIndex = 0;
			this->E24_A->TabStop = true;
			this->E24_A->Text = L"A";
			this->E24_A->UseVisualStyleBackColor = true;
			this->E24_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_24_A_CheckedChanged);
			// 
			// electrode_24_B
			// 
			this->E24_B->AutoSize = true;
			this->E24_B->Location = System::Drawing::Point(13, 36);
			this->E24_B->Name = L"E24_B";
			this->E24_B->Size = System::Drawing::Size(32, 17);
			this->E24_B->TabIndex = 1;
			this->E24_B->TabStop = true;
			this->E24_B->Text = L"B";
			this->E24_B->UseVisualStyleBackColor = true;
			this->E24_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_24_B_CheckedChanged);
			// 
			// electrode_24_off
			// 
			this->E24_OFF->AutoSize = true;
			this->E24_OFF->Location = System::Drawing::Point(13, 59);
			this->E24_OFF->Name = L"E24_off";
			this->E24_OFF->Size = System::Drawing::Size(39, 17);
			this->E24_OFF->TabIndex = 2;
			this->E24_OFF->TabStop = true;
			this->E24_OFF->Text = L"Off";
			this->E24_OFF->UseVisualStyleBackColor = true;
			this->E24_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_24_off_CheckedChanged);
			// 
			// electrode_25
			// 
			this->E25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E25->Controls->Add(this->E25_OFF);
			this->E25->Controls->Add(this->E25_B);
			this->E25->Controls->Add(this->E25_A);
			this->E25->Location = System::Drawing::Point(3, 602);
			this->E25->Name = L"E25";
			this->E25->Size = System::Drawing::Size(164, 124);
			this->E25->TabIndex = 4;
			// 
			// electrode_25_off
			// 
			this->E25_OFF->AutoSize = true;
			this->E25_OFF->Location = System::Drawing::Point(47, 71);
			this->E25_OFF->Name = L"E25_off";
			this->E25_OFF->Size = System::Drawing::Size(39, 17);
			this->E25_OFF->TabIndex = 2;
			this->E25_OFF->TabStop = true;
			this->E25_OFF->Text = L"Off";
			this->E25_OFF->UseVisualStyleBackColor = true;
			this->E25_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_25_off_CheckedChanged);
			// 
			// electrode_25_B
			// 
			this->E25_B->AutoSize = true;
			this->E25_B->Location = System::Drawing::Point(47, 48);
			this->E25_B->Name = L"E25_B";
			this->E25_B->Size = System::Drawing::Size(32, 17);
			this->E25_B->TabIndex = 1;
			this->E25_B->TabStop = true;
			this->E25_B->Text = L"B";
			this->E25_B->UseVisualStyleBackColor = true;
			this->E25_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_25_B_CheckedChanged);
			// 
			// electrode_25_A
			// 
			this->E25_A->AutoSize = true;
			this->E25_A->Location = System::Drawing::Point(47, 25);
			this->E25_A->Name = L"E25_A";
			this->E25_A->Size = System::Drawing::Size(32, 17);
			this->E25_A->TabIndex = 0;
			this->E25_A->TabStop = true;
			this->E25_A->Text = L"A";
			this->E25_A->UseVisualStyleBackColor = true;
			this->E25_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_25_A_CheckedChanged);
			// 
			// electrode_26
			// 
			this->E26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E26->Controls->Add(this->E26_OFF);
			this->E26->Controls->Add(this->E26_B);
			this->E26->Controls->Add(this->E26_A);
			this->E26->Location = System::Drawing::Point(173, 602);
			this->E26->Name = L"E26";
			this->E26->Size = System::Drawing::Size(164, 124);
			this->E26->TabIndex = 5;
			// 
			// electrode_26_off
			// 
			this->E26_OFF->AutoSize = true;
			this->E26_OFF->Location = System::Drawing::Point(47, 71);
			this->E26_OFF->Name = L"E26_off";
			this->E26_OFF->Size = System::Drawing::Size(39, 17);
			this->E26_OFF->TabIndex = 2;
			this->E26_OFF->Text = L"Off";
			this->E26_OFF->UseVisualStyleBackColor = true;
			this->E26_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_26_off_CheckedChanged);
			// 
			// electrode_26_B
			// 
			this->E26_B->AutoSize = true;
			this->E26_B->Location = System::Drawing::Point(47, 48);
			this->E26_B->Name = L"E26_B";
			this->E26_B->Size = System::Drawing::Size(32, 17);
			this->E26_B->TabIndex = 1;
			this->E26_B->Text = L"B";
			this->E26_B->UseVisualStyleBackColor = true;
			this->E26_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_26_B_CheckedChanged);
			// 
			// electrode_26_A
			// 
			this->E26_A->AutoSize = true;
			this->E26_A->Location = System::Drawing::Point(47, 25);
			this->E26_A->Name = L"E26_A";
			this->E26_A->Size = System::Drawing::Size(32, 17);
			this->E26_A->TabIndex = 0;
			this->E26_A->Text = L"A";
			this->E26_A->UseVisualStyleBackColor = true;
			this->E26_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_26_A_CheckedChanged);
			// 
			// electrode_27
			// 
			this->E27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E27->Controls->Add(this->E27_OFF);
			this->E27->Controls->Add(this->E27_B);
			this->E27->Controls->Add(this->E27_A);
			this->E27->Location = System::Drawing::Point(3, 732);
			this->E27->Name = L"E27";
			this->E27->Size = System::Drawing::Size(164, 124);
			this->E27->TabIndex = 5;
			// 
			// electrode_27_off
			// 
			this->E27_OFF->AutoSize = true;
			this->E27_OFF->Location = System::Drawing::Point(47, 71);
			this->E27_OFF->Name = L"E27_off";
			this->E27_OFF->Size = System::Drawing::Size(39, 17);
			this->E27_OFF->TabIndex = 2;
			this->E27_OFF->TabStop = true;
			this->E27_OFF->Text = L"Off";
			this->E27_OFF->UseVisualStyleBackColor = true;
			this->E27_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_27_off_CheckedChanged);
			// 
			// electrode_27_B
			// 
			this->E27_B->AutoSize = true;
			this->E27_B->Location = System::Drawing::Point(47, 48);
			this->E27_B->Name = L"E27_B";
			this->E27_B->Size = System::Drawing::Size(32, 17);
			this->E27_B->TabIndex = 1;
			this->E27_B->TabStop = true;
			this->E27_B->Text = L"B";
			this->E27_B->UseVisualStyleBackColor = true;
			this->E27_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_27_B_CheckedChanged);
			// 
			// electrode_27_A
			// 
			this->E27_A->AutoSize = true;
			this->E27_A->Location = System::Drawing::Point(47, 25);
			this->E27_A->Name = L"E27_A";
			this->E27_A->Size = System::Drawing::Size(32, 17);
			this->E27_A->TabIndex = 0;
			this->E27_A->TabStop = true;
			this->E27_A->Text = L"A";
			this->E27_A->UseVisualStyleBackColor = true;
			this->E27_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_27_A_CheckedChanged);
			// 
			// electrode_28
			// 
			this->E28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->E28->Controls->Add(this->E28_OFF);
			this->E28->Controls->Add(this->E28_B);
			this->E28->Controls->Add(this->E28_A);
			this->E28->Location = System::Drawing::Point(173, 732);
			this->E28->Name = L"E28";
			this->E28->Size = System::Drawing::Size(164, 124);
			this->E28->TabIndex = 5;
			// 
			// electrode_28_off
			// 
			this->E28_OFF->AutoSize = true;
			this->E28_OFF->Location = System::Drawing::Point(47, 71);
			this->E28_OFF->Name = L"E28_off";
			this->E28_OFF->Size = System::Drawing::Size(39, 17);
			this->E28_OFF->TabIndex = 2;
			this->E28_OFF->TabStop = true;
			this->E28_OFF->Text = L"Off";
			this->E28_OFF->UseVisualStyleBackColor = true;
			this->E28_OFF->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_28_off_CheckedChanged);
			// 
			// electrode_28_B
			// 
			this->E28_B->AutoSize = true;
			this->E28_B->Location = System::Drawing::Point(47, 48);
			this->E28_B->Name = L"E28_B";
			this->E28_B->Size = System::Drawing::Size(32, 17);
			this->E28_B->TabIndex = 1;
			this->E28_B->TabStop = true;
			this->E28_B->Text = L"B";
			this->E28_B->UseVisualStyleBackColor = true;
			this->E28_B->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_28_B_CheckedChanged);
			// 
			// electrode_28_A
			// 
			this->E28_A->AutoSize = true;
			this->E28_A->Location = System::Drawing::Point(47, 25);
			this->E28_A->Name = L"E28_A";
			this->E28_A->Size = System::Drawing::Size(32, 17);
			this->E28_A->TabIndex = 0;
			this->E28_A->TabStop = true;
			this->E28_A->Text = L"A";
			this->E28_A->UseVisualStyleBackColor = true;
			this->E28_A->CheckedChanged += gcnew System::EventHandler(this, &GUI::electrode_28_A_CheckedChanged);
			// 
			// btnUpdateConfig
			// 
			this->btnUpdateConfig->Location = System::Drawing::Point(7, 871);
			this->btnUpdateConfig->Name = L"btnUpdateConfig";
			this->btnUpdateConfig->Size = System::Drawing::Size(75, 23);
			this->btnUpdateConfig->TabIndex = 6;
			this->btnUpdateConfig->Text = L"Update";
			this->btnUpdateConfig->UseVisualStyleBackColor = true;
			this->btnUpdateConfig->Click += gcnew System::EventHandler(this, &GUI::btnUpdateConfig_Click);
			// 
			// btnRead
			// 
			this->btnRead->Location = System::Drawing::Point(169, 871);
			this->btnRead->Name = L"btnRead";
			this->btnRead->Size = System::Drawing::Size(75, 23);
			this->btnRead->TabIndex = 7;
			this->btnRead->Text = L"Read";
			this->btnRead->UseVisualStyleBackColor = true;
			this->btnRead->Click += gcnew System::EventHandler(this, &GUI::btnRead_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(88, 871);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(75, 23);
			this->btnClear->TabIndex = 8;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &GUI::btnClear_Click);
			// 
			// btnSend
			// 
			this->btnSend->Location = System::Drawing::Point(250, 871);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(75, 23);
			this->btnSend->TabIndex = 9;
			this->btnSend->Text = L"Send";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &GUI::btnSend_Click);
			// 
			// amplitudeInput
			// 
			this->amplitudeInput->Location = System::Drawing::Point(354, 38);
			this->amplitudeInput->Multiline = true;
			this->amplitudeInput->Name = L"amplitudeInput";
			this->amplitudeInput->Size = System::Drawing::Size(75, 28);
			this->amplitudeInput->TabIndex = 10;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(354, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Amplitude Input";
			// 
			// btnMax
			// 
			this->btnMax->Location = System::Drawing::Point(354, 70);
			this->btnMax->Name = L"btnMax";
			this->btnMax->Size = System::Drawing::Size(75, 23);
			this->btnMax->TabIndex = 13;
			this->btnMax->Text = L"MAX";
			this->btnMax->UseVisualStyleBackColor = true;
			this->btnMax->Click += gcnew System::EventHandler(this, &GUI::btnMax_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(720, 900);
			this->Controls->Add(this->btnMax);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->amplitudeInput);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnRead);
			this->Controls->Add(this->btnUpdateConfig);
			this->Controls->Add(this->E1);
			this->Controls->Add(this->E2);
			this->Controls->Add(this->E3);
			this->Controls->Add(this->E4);
			this->Controls->Add(this->E5);
			this->Controls->Add(this->E6);
			this->Controls->Add(this->E7);
			this->Controls->Add(this->E8);
			this->Controls->Add(this->E9);
			this->Controls->Add(this->E10);
			this->Controls->Add(this->E11);
			this->Controls->Add(this->E12);
			this->Controls->Add(this->E13);
			this->Controls->Add(this->E14);
			this->Controls->Add(this->E15);
			this->Controls->Add(this->E16);
			this->Controls->Add(this->E17);
			this->Controls->Add(this->E18);
			this->Controls->Add(this->E19);
			this->Controls->Add(this->E20);
			this->Controls->Add(this->E21);
			this->Controls->Add(this->E22);
			this->Controls->Add(this->E23);
			this->Controls->Add(this->E24);
			this->Controls->Add(this->E25);
			this->Controls->Add(this->E26);
			this->Controls->Add(this->E27);
			this->Controls->Add(this->E28);
			this->Name = L"FES";
			this->Text = L"FES";
			this->E1->ResumeLayout(false);
			this->E1->PerformLayout();
			this->E2->ResumeLayout(false);
			this->E2->PerformLayout();
			this->E3->ResumeLayout(false);
			this->E3->PerformLayout();
			this->E4->ResumeLayout(false);
			this->E4->PerformLayout();
			this->E5->ResumeLayout(false);
			this->E5->PerformLayout();
			this->E6->ResumeLayout(false);
			this->E6->PerformLayout();
			this->E7->ResumeLayout(false);
			this->E7->PerformLayout();
			this->E8->ResumeLayout(false);
			this->E8->PerformLayout();
			this->E9->ResumeLayout(false);
			this->E9->PerformLayout();
			this->E10->ResumeLayout(false);
			this->E10->PerformLayout();
			this->E11->ResumeLayout(false);
			this->E11->PerformLayout();
			this->E12->ResumeLayout(false);
			this->E12->PerformLayout();
			this->E13->ResumeLayout(false);
			this->E13->PerformLayout();
			this->E14->ResumeLayout(false);
			this->E14->PerformLayout();
			this->E15->ResumeLayout(false);
			this->E15->PerformLayout();
			this->E16->ResumeLayout(false);
			this->E16->PerformLayout();
			this->E17->ResumeLayout(false);
			this->E17->PerformLayout();
			this->E18->ResumeLayout(false);
			this->E18->PerformLayout();
			this->E19->ResumeLayout(false);
			this->E19->PerformLayout();
			this->E20->ResumeLayout(false);
			this->E20->PerformLayout();
			this->E21->ResumeLayout(false);
			this->E21->PerformLayout();
			this->E22->ResumeLayout(false);
			this->E22->PerformLayout();
			this->E23->ResumeLayout(false);
			this->E23->PerformLayout();
			this->E24->ResumeLayout(false);
			this->E24->PerformLayout();
			this->E25->ResumeLayout(false);
			this->E25->PerformLayout();
			this->E26->ResumeLayout(false);
			this->E26->PerformLayout();
			this->E27->ResumeLayout(false);
			this->E27->PerformLayout();
			this->E28->ResumeLayout(false);
			this->E28->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//-------------------------------------------COLOR CHANGES FOR ELECTRODE CHOICES--------------------------------//
		// 
		//======================= ELECTRODE 1 ==================//
	private: System::Void electrode_1_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E1_A->Checked) {
			E1->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_1_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E1_B->Checked) {
			E1->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_1_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E1_OFF->Checked) {
			E1->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 2 ==================//
	private: System::Void electrode_2_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E2_A->Checked) {
			E2->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_2_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E2_B->Checked) {
			E2->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_2_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E2_OFF->Checked) {
			E2->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 3 ==================//
	private: System::Void electrode_3_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E3_A->Checked) {
			E3->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_3_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E3_B->Checked) {
			E3->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_3_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E3_OFF->Checked) {
			E3->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 4 ==================//
	private: System::Void electrode_4_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E4_A->Checked) {
			E4->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_4_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E4_B->Checked) {
			E4->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_4_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E4_OFF->Checked) {
			E4->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 5 ==================//
	private: System::Void electrode_5_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E5_A->Checked) {
			E5->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_5_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E5_B->Checked) {
			E5->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_5_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E5_OFF->Checked) {
			E5->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 6 ==================//
	private: System::Void electrode_6_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E6_A->Checked) {
			E6->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_6_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E6_B->Checked) {
			E6->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_6_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E6_OFF->Checked) {
			E6->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 7 ==================//
	private: System::Void electrode_7_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E7_A->Checked) {
			E7->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_7_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E7_B->Checked) {
			E7->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_7_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E7_OFF->Checked) {
			E7->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 8 ==================//
	private: System::Void electrode_8_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E8_A->Checked) {
			E8->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_8_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E8_B->Checked) {
			E8->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_8_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E8_OFF->Checked) {
			E8->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 9 ==================//
	private: System::Void electrode_9_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E9_A->Checked) {
			E9->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_9_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E9_B->Checked) {
			E9->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_9_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E9_OFF->Checked) {
			E9->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 10 ==================//
	private: System::Void electrode_10_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E10_A->Checked) {
			E10->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_10_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E10_B->Checked) {
			E10->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_10_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E10_OFF->Checked) {
			E10->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 11 ==================//
	private: System::Void electrode_11_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E11_A->Checked) {
			E11->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_11_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E11_B->Checked) {
			E11->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_11_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E11_OFF->Checked) {
			E11->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 12 ==================//
	private: System::Void electrode_12_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E12_A->Checked) {
			E12->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_12_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E12_B->Checked) {
			E12->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_12_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E12_OFF->Checked) {
			E12->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 13 ==================//
	private: System::Void electrode_13_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E13_A->Checked) {
			E13->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_13_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E13_B->Checked) {
			E13->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_13_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E13_OFF->Checked) {
			E13->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 14 ==================//
	private: System::Void electrode_14_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E14_A->Checked) {
			E14->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_14_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E14_B->Checked) {
			E14->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_14_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E14_OFF->Checked) {
			E14->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 15 ==================//
	private: System::Void electrode_15_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E15_A->Checked) {
			E15->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_15_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E15_B->Checked) {
			E15->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_15_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E15_OFF->Checked) {
			E15->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 16 ==================//
	private: System::Void electrode_16_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E16_A->Checked) {
			E16->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_16_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E16_B->Checked) {
			E16->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_16_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E16_OFF->Checked) {
			E16->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 17 ==================//
	private: System::Void electrode_17_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E17_A->Checked) {
			E17->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_17_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E17_B->Checked) {
			E17->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_17_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E17_OFF->Checked) {
			E17->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 18 ==================//
	private: System::Void electrode_18_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E18_A->Checked) {
			E18->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_18_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E18_B->Checked) {
			E18->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_18_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E18_OFF->Checked) {
			E18->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 19 ==================//
	private: System::Void electrode_19_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E19_A->Checked) {
			E19->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_19_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E19_B->Checked) {
			E19->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_19_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E19_OFF->Checked) {
			E19->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 20 ==================//
	private: System::Void electrode_20_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E20_A->Checked) {
			E20->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_20_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E20_B->Checked) {
			E20->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_20_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E20_OFF->Checked) {
			E20->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 21 ==================//
	private: System::Void electrode_21_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E21_A->Checked) {
			E21->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_21_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E21_B->Checked) {
			E21->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_21_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E21_OFF->Checked) {
			E21->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 22 ==================//
	private: System::Void electrode_22_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E22_A->Checked) {
			E22->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_22_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E22_B->Checked) {
			E22->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_22_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E22_OFF->Checked) {
			E22->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 23 ==================//
	private: System::Void electrode_23_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E23_A->Checked) {
			E23->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_23_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E23_B->Checked) {
			E23->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_23_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E23_OFF->Checked) {
			E23->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 24 ==================//
	private: System::Void electrode_24_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E24_A->Checked) {
			E24->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_24_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E24_B->Checked) {
			E24->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_24_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E24_OFF->Checked) {
			E24->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 25 ==================//
	private: System::Void electrode_25_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E25_A->Checked) {
			E25->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_25_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E25_B->Checked) {
			E25->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_25_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E25_OFF->Checked) {
			E25->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 26 ==================//
	private: System::Void electrode_26_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E26_A->Checked) {
			E26->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_26_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E26_B->Checked) {
			E26->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_26_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E26_OFF->Checked) {
			E26->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 27 ==================//
	private: System::Void electrode_27_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E27_A->Checked) {
			E27->BackColor = System::Drawing::Color::GreenYellow;
		}
	}
	private: System::Void electrode_27_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E27_B->Checked) {
			E27->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_27_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E27_OFF->Checked) {
			E27->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}
		   //======================= ELECTRODE 28 ==================//
	private: System::Void electrode_28_A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E28_A->Checked) {
			E28->BackColor = System::Drawing::Color::GreenYellow;
		}

	}
	private: System::Void electrode_28_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E28_B->Checked) {
			E28->BackColor = System::Drawing::Color::PowderBlue;
		}
	}
	private: System::Void electrode_28_off_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (E28_OFF->Checked) {
			E28->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
		}
	}

		   //-------------------------------- WRITE TO FILE (UPDATE)------------------------------------------------------------------//
	private: System::Void btnUpdateConfig_Click(System::Object^ sender, System::EventArgs^ e) {
		StreamWriter^ outFile = gcnew StreamWriter("config.txt");


		for each (Control ^ ctrl in this->Controls) {

			if (!(ctrl->Name == "btnUpdateConfig" || ctrl->Name == "btnRead" || ctrl->Name == "btnSend"
				|| ctrl->Name == "btnClear" || ctrl->Name == "amplitudeInput" || ctrl->Name == "label1" || ctrl->Name == "btnMax")) {
				if (ctrl->BackColor == System::Drawing::Color::GreenYellow) {
					outFile->Write("A " + ctrl->Name + "\n");
				}
				else if (ctrl->BackColor == System::Drawing::Color::PowderBlue) {
					outFile->Write("B " + ctrl->Name + "\n");
				}
				else {
					outFile->Write("O " + ctrl->Name + "\n");
				}
			}
		}
		outFile->Close();
	}

		   //-------------------------------- READ FROM CONFIG, WRITE TO NEW FILE (UPDATE)------------------------------------------------------------------//
	private: System::Void btnRead_Click(System::Object^ sender, System::EventArgs^ e) {


		//std::string front, back;
		// Reading from a file
		//std::ifstream inFile;
		//inFile.open("config.txt");

		//std:stringstream strStream;
		//strStream << inFile.rdbuf();
		//std::string str = strStream.str();

		//front = str.front();
		//back = str.substr(str.length() - 2);


		//std::cout << str << endl;
		//std::cout << front << endl;
		//std::cout << back << endl;
		//inFile.close();

		std::string s, front, back;
		std::fstream f;

		f.open("config.txt");
		for each (Control ^ ctrl in this->Controls) // 28 controls, this loop runs 28 times
		{
			if (!(ctrl->Name == "btnUpdateConfig" || ctrl->Name == "btnRead" || ctrl->Name == "btnSend"
				|| ctrl->Name == "btnClear" || ctrl->Name == "amplitudeInput" || ctrl->Name == "label1" ||
				ctrl->Name == "btnMax")) { // it will ignore the read and update buttons

				std::getline(f, s);
				std::cout << s; // This variable has each line from the config, every loop iteration
				front = s.front();
				if ((s.substr(s.length() - 2) == "10") || (s.substr(s.length() - 2) == "11") || (s.substr(s.length() - 2) == "12") || (s.substr(s.length() - 2) == "13") || (s.substr(s.length() - 2) == "14") || (s.substr(s.length() - 2) == "15") || (s.substr(s.length() - 2) == "16") || (s.substr(s.length() - 2) == "17") || (s.substr(s.length() - 2) == "18") || (s.substr(s.length() - 2) == "19") || (s.substr(s.length() - 2) == "20") || (s.substr(s.length() - 2) == "21") || (s.substr(s.length() - 2) == "22") || (s.substr(s.length() - 2) == "23") || (s.substr(s.length() - 2) == "24") || (s.substr(s.length() - 2) == "25") || (s.substr(s.length() - 2) == "26") || (s.substr(s.length() - 2) == "27") || (s.substr(s.length() - 2) == "28")) {
					back = s.substr(s.length() - 2); // picks the last 2 characters if the numbers are 10 and above
				}
				else {
					back = s.back();
				}


				//======================= ELECTRODE 1 ==================//
				if (back == "1") {
					if (front == "A")
					{
						E1_A->Checked = true;
						E1->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E1_B->Checked = true;
						E1->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E1_OFF->Checked = true;
						E1->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				//======================= ELECTRODE 2 ==================//
				if (back == "2") {
					if (front == "A")
					{
						E2_A->Checked = true;
						E2->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E2_B->Checked = true;
						E2->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E2_OFF->Checked = true;
						E2->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}

				}

				////======================= ELECTRODE 3 ==================//
				if (back == "3") {
					if (front == "A")
					{
						E3_A->Checked = true;
						E3->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E3_B->Checked = true;
						E3->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E3_OFF->Checked = true;
						E3->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 4 ==================//
				if (back == "4") {
					if (front == "A")
					{
						E4_A->Checked = true;
						E4->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E4_B->Checked = true;
						E4->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E4_OFF->Checked = true;
						E4->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 5 ==================//
				if (back == "5") {
					if (front == "A")
					{
						E5_A->Checked = true;
						E5->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E5_B->Checked = true;
						E5->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E5_OFF->Checked = true;
						E5->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 6 ==================//
				if (back == "6") {
					if (front == "A")
					{
						E6_A->Checked = true;
						E6->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E6_B->Checked = true;
						E6->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E6_OFF->Checked = true;
						E6->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 7 ==================//
				if (back == "7") {
					if (front == "A")
					{
						E7_A->Checked = true;
						E7->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E7_B->Checked = true;
						E7->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E7_OFF->Checked = true;
						E7->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 8 ==================//
				if (back == "8") {
					if (front == "A")
					{
						E8_A->Checked = true;
						E8->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E8_B->Checked = true;
						E8->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E8_OFF->Checked = true;
						E8->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 9 ==================//
				if (back == "9") {
					if (front == "A")
					{
						E9_A->Checked = true;
						E9->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E9_B->Checked = true;
						E9->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E9_OFF->Checked = true;
						E9->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 10 ==================//
				if (back == "10") {
					if (front == "A")
					{
						E10_A->Checked = true;
						E10->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E10_B->Checked = true;
						E10->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E10_OFF->Checked = true;
						E10->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 11 ==================//
				if (back == "11") {
					if (front == "A")
					{
						E11_A->Checked = true;
						E11->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E11_B->Checked = true;
						E11->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E11_OFF->Checked = true;
						E11->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 12 ==================//
				if (back == "12") {
					if (front == "A")
					{
						E12_A->Checked = true;
						E12->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E12_B->Checked = true;
						E12->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E12_OFF->Checked = true;
						E12->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 13 ==================//
				if (back == "13") {
					if (front == "A")
					{
						E13_A->Checked = true;
						E13->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E13_B->Checked = true;
						E13->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E13_OFF->Checked = true;
						E13->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 14 ==================//
				if (back == "14") {
					if (front == "A")
					{
						E14_A->Checked = true;
						E14->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E14_B->Checked = true;
						E14->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E14_OFF->Checked = true;
						E14->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 15 ==================//
				if (back == "15") {
					if (front == "A")
					{
						E15_A->Checked = true;
						E15->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E15_B->Checked = true;
						E15->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E15_OFF->Checked = true;
						E15->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 16 ==================//
				if (back == "16") {
					if (front == "A")
					{
						E16_A->Checked = true;
						E16->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E16_B->Checked = true;
						E16->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E16_OFF->Checked = true;
						E16->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 17 ==================//
				if (back == "17") {
					if (front == "A")
					{
						E17_A->Checked = true;
						E17->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E17_B->Checked = true;
						E17->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E17_OFF->Checked = true;
						E17->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 18 ==================//
				if (back == "18") {
					if (front == "A")
					{
						E18_A->Checked = true;
						E18->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E18_B->Checked = true;
						E18->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E18_OFF->Checked = true;
						E18->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 19 ==================//
				if (back == "19") {
					if (front == "A")
					{
						E19_A->Checked = true;
						E19->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E19_B->Checked = true;
						E19->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E19_OFF->Checked = true;
						E19->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 20 ==================//
				if (back == "20") {
					if (front == "A")
					{
						E20_A->Checked = true;
						E20->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E20_B->Checked = true;
						E20->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E20_OFF->Checked = true;
						E20->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 21 ==================//
				if (back == "21") {
					if (front == "A")
					{
						E21_A->Checked = true;
						E21->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E21_B->Checked = true;
						E21->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E21_OFF->Checked = true;
						E21->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 22 ==================//
				if (back == "22") {
					if (front == "A")
					{
						E22_A->Checked = true;
						E22->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E22_B->Checked = true;
						E22->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E22_OFF->Checked = true;
						E22->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 23 ==================//
				if (back == "23") {
					if (front == "A")
					{
						E23_A->Checked = true;
						E23->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E23_B->Checked = true;
						E23->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E23_OFF->Checked = true;
						E23->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 24 ==================//
				if (back == "24") {
					if (front == "A")
					{
						E24_A->Checked = true;
						E24->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E24_B->Checked = true;
						E24->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E24_OFF->Checked = true;
						E24->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 25 ==================//
				if (back == "25") {
					if (front == "A")
					{
						E25_A->Checked = true;
						E25->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E25_B->Checked = true;
						E25->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E25_OFF->Checked = true;
						E25->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 26 ==================//
				if (back == "26") {
					if (front == "A")
					{
						E26_A->Checked = true;
						E26->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E26_B->Checked = true;
						E26->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E26_OFF->Checked = true;
						E26->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 27 ==================//
				if (back == "27") {
					if (front == "A")
					{
						E27_A->Checked = true;
						E27->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E27_B->Checked = true;
						E27->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E27_OFF->Checked = true;
						E27->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}

				////======================= ELECTRODE 28 ==================//
				if (back == "28") {
					if (front == "A")
					{
						E28_A->Checked = true;
						E28->BackColor = System::Drawing::Color::GreenYellow;
					}
					else if (front == "B")
					{
						E28_B->Checked = true;
						E28->BackColor = System::Drawing::Color::PowderBlue;
					}
					else {
						E28_OFF->Checked = true;
						E28->BackColor = System::Drawing::Color::FromArgb(255, 255, 128);
					}
				}



			}
		}
		f.close();


	}

		   //Clear button to switch all electrodes to OFF
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		//StreamWriter^ outFile = gcnew StreamWriter("config.txt");
		for each (Control ^ ctrl in this->Controls) {
			for each (Control ^ c in ctrl->Controls) {

				if (safe_cast<RadioButton^>(c)->Text == "Off") {
					safe_cast<RadioButton^>(c)->Checked = true;
				}

			}
		}
		//outFile->Close();
	}
		   //UTILITY METHOD
	private: System::Boolean amplitudeHasInput() {
		if (amplitudeInput->Text == "") {
			return false;
		}
		return true;
	}
		   //Send Button to:
				  //1.) Open the config file from the filestream
				  //2.) Retrieve configuration and send it to the analog discovery

	private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {
		//FileStream^ fs = gcnew FileStream("config.txt", FileMode::Open);
		//StreamReader^ sr = gcnew StreamReader(fs);

		//Amplitude part
		Trace::Listeners->Add(gcnew TextWriterTraceListener(Console::Out));
		Trace::AutoFlush = true;
		btnUpdateConfig_Click(this, gcnew System::EventArgs()); //implements the update functionality
		if (amplitudeHasInput()) {
			Trace::WriteLine(amplitudeInput->Text); //just a placeholder will instead print to the console
		}
		else {
			Trace::WriteLine("Amplitude is empty"); //just a placeholder will instead print to the console
		}
	}

	private: System::Void btnMax_Click(System::Object^ sender, System::EventArgs^ e) {
		Trace::Listeners->Add(gcnew TextWriterTraceListener(Console::Out));
		Trace::AutoFlush = true;
		Trace::WriteLine("MAX BUTTON CLICKED");
	}
	};

}