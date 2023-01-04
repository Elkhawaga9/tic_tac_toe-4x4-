#pragma once

namespace ECEN430project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for tictactoe
	/// </summary>
	public ref class tictactoe : public System::Windows::Forms::Form
	{
	public:
		tictactoe(void)
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
		~tictactoe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button17;

	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Label^ PLAYER_O;

	private: System::Windows::Forms::Label^ PLAYER_X;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->PLAYER_O = (gcnew System::Windows::Forms::Label());
			this->PLAYER_X = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Navy;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1121, 97);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Navy;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(67, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(981, 76);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to my tic tac toe game";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Cyan;
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(12, 127);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1120, 622);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &tictactoe::panel2_Paint);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button9);
			this->panel5->Controls->Add(this->button10);
			this->panel5->Controls->Add(this->button11);
			this->panel5->Controls->Add(this->button12);
			this->panel5->Controls->Add(this->button13);
			this->panel5->Controls->Add(this->button14);
			this->panel5->Controls->Add(this->button15);
			this->panel5->Controls->Add(this->button16);
			this->panel5->Controls->Add(this->button5);
			this->panel5->Controls->Add(this->button6);
			this->panel5->Controls->Add(this->button7);
			this->panel5->Controls->Add(this->button8);
			this->panel5->Controls->Add(this->button4);
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->button2);
			this->panel5->Controls->Add(this->button1);
			this->panel5->Location = System::Drawing::Point(71, 19);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(666, 372);
			this->panel5->TabIndex = 2;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(327, 33);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(121, 71);
			this->button9->TabIndex = 15;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &tictactoe::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(327, 103);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(121, 71);
			this->button10->TabIndex = 14;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &tictactoe::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(327, 173);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(121, 71);
			this->button11->TabIndex = 13;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &tictactoe::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(327, 243);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(121, 71);
			this->button12->TabIndex = 12;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &tictactoe::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(454, 33);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(124, 71);
			this->button13->TabIndex = 11;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &tictactoe::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(454, 103);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(124, 71);
			this->button14->TabIndex = 10;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &tictactoe::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(454, 173);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(124, 71);
			this->button15->TabIndex = 9;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &tictactoe::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(454, 243);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(124, 71);
			this->button16->TabIndex = 8;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &tictactoe::button16_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(200, 33);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(121, 71);
			this->button5->TabIndex = 7;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &tictactoe::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(200, 103);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(121, 71);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &tictactoe::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(200, 173);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(121, 71);
			this->button7->TabIndex = 5;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &tictactoe::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(200, 243);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(121, 71);
			this->button8->TabIndex = 4;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &tictactoe::button8_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(70, 243);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(124, 71);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &tictactoe::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(70, 173);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(124, 71);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &tictactoe::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(70, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 71);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &tictactoe::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(70, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 71);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &tictactoe::button1_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->PLAYER_O);
			this->panel4->Controls->Add(this->PLAYER_X);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Location = System::Drawing::Point(71, 421);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1011, 179);
			this->panel4->TabIndex = 1;
			// 
			// PLAYER_O
			// 
			this->PLAYER_O->BackColor = System::Drawing::Color::White;
			this->PLAYER_O->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PLAYER_O->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PLAYER_O->ForeColor = System::Drawing::Color::Blue;
			this->PLAYER_O->Location = System::Drawing::Point(615, 105);
			this->PLAYER_O->Name = L"PLAYER_O";
			this->PLAYER_O->Size = System::Drawing::Size(182, 56);
			this->PLAYER_O->TabIndex = 3;
			this->PLAYER_O->Text = L"0";
			// 
			// PLAYER_X
			// 
			this->PLAYER_X->BackColor = System::Drawing::Color::White;
			this->PLAYER_X->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PLAYER_X->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PLAYER_X->ForeColor = System::Drawing::Color::Red;
			this->PLAYER_X->Location = System::Drawing::Point(615, 16);
			this->PLAYER_X->Name = L"PLAYER_X";
			this->PLAYER_X->Size = System::Drawing::Size(182, 56);
			this->PLAYER_X->TabIndex = 2;
			this->PLAYER_X->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Location = System::Drawing::Point(64, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(499, 58);
			this->label3->TabIndex = 1;
			this->label3->Text = L"PLAYER \"O\" SCORE";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(61, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(493, 58);
			this->label2->TabIndex = 0;
			this->label2->Text = L"PLAYER \"X\" SCORE";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button18);
			this->panel3->Controls->Add(this->button17);
			this->panel3->Location = System::Drawing::Point(743, 19);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(339, 372);
			this->panel3->TabIndex = 0;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(16, 173);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(302, 114);
			this->button18->TabIndex = 1;
			this->button18->Text = L"NEW GAME";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &tictactoe::button18_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(16, 33);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(302, 114);
			this->button17->TabIndex = 0;
			this->button17->Text = L"RESET";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &tictactoe::button17_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1140, 768);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &tictactoe::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		Boolean check_button;
		int score_plus;
#pragma endregion
		void buttons_false()
		{
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = false;
			button9->Enabled = false;
			button10->Enabled = false;
			button11->Enabled = false;
			button12->Enabled = false;
			button13->Enabled = false;
			button14->Enabled = false;
			button15->Enabled = false;
			button16->Enabled = false;

		}
		void buttons_true()
		{
			button1->Enabled = true;
			button2->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
			button6->Enabled = true;
			button7->Enabled = true;
			button8->Enabled = true;
			button9->Enabled = true;
			button10->Enabled = true;
			button11->Enabled = true;
			button12->Enabled = true;
			button13->Enabled = true;
			button14->Enabled = true;
			button15->Enabled = true;
			button16->Enabled = true;

		}
		void buttons_empty()
		{
			button1->Text = "";
			button2->Text = "";
			button3->Text = "";
			button4->Text = "";
			button5->Text = "";
			button6->Text = "";
			button7->Text = "";
			button8->Text = "";
			button9->Text = "";
			button10->Text = "";
			button11->Text = "";
			button12->Text = "";
			button13->Text = "";
			button14->Text = "";
			button15->Text = "";
			button16->Text = "";
		}
		void winner()
		{
			//WINNER IS X

			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X" && button4->Text == "X")
			{
				MessageBox::Show("the winner is X");
				score_plus = int::Parse(PLAYER_X->Text);
				PLAYER_X->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			if (button5->Text == "X" && button6->Text == "X" && button7->Text == "X" && button8->Text == "X")
			{
				MessageBox::Show("the winner is X");
				score_plus = int::Parse(PLAYER_X->Text);
				PLAYER_X->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			if (button9->Text == "X" && button10->Text == "X" && button11->Text == "X" && button12->Text == "X")
			{
				MessageBox::Show("the winner is X");
				score_plus = int::Parse(PLAYER_X->Text);
				PLAYER_X->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			if (button13->Text == "X" && button14->Text == "X" && button15->Text == "X" && button16->Text == "X")
			{
				MessageBox::Show("the winner is X");
				score_plus = int::Parse(PLAYER_X->Text);
				PLAYER_X->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			if (button1->Text == "X" && button5->Text == "X" && button9->Text == "X" && button13->Text == "X")
			{
				MessageBox::Show("the winner is X");
				score_plus = int::Parse(PLAYER_X->Text);
				PLAYER_X->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			if (button2->Text == "X" && button6->Text == "X" && button10->Text == "X" && button14->Text == "X")
			{
				MessageBox::Show("the winner is X");
				score_plus = int::Parse(PLAYER_X->Text);
				PLAYER_X->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			if (button3->Text == "X" && button7->Text == "X" && button11->Text == "X" && button15->Text == "X")
			{
				MessageBox::Show("the winner is X");
				score_plus = int::Parse(PLAYER_X->Text);
				PLAYER_X->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			if (button4->Text == "X" && button8->Text == "X" && button12->Text == "X" && button16->Text == "X")
			{
				MessageBox::Show("the winner is X");
				score_plus = int::Parse(PLAYER_X->Text);
				PLAYER_X->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}

			if (button1->Text == "X" && button6->Text == "X" && button11->Text == "X" && button16->Text == "X")
			{
				MessageBox::Show("the winner is X");
				score_plus = int::Parse(PLAYER_X->Text);
				PLAYER_X->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			if (button4->Text == "X" && button7->Text == "X" && button10->Text == "X" && button13->Text == "X")
			{
				MessageBox::Show("the winner is X");
				score_plus = int::Parse(PLAYER_X->Text);
				PLAYER_X->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			//WINNER IS O
			if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O" && button4->Text == "O")
			{
				MessageBox::Show("the winner is O");
				score_plus = int::Parse(PLAYER_O->Text);
				PLAYER_O->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			if (button5->Text == "O" && button6->Text == "O" && button7->Text == "O" && button8->Text == "O")
			{
				MessageBox::Show("the winner is O");
				score_plus = int::Parse(PLAYER_O->Text);
				PLAYER_O->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			if (button9->Text == "O" && button10->Text == "O" && button11->Text == "O" && button12->Text == "O")
			{
				MessageBox::Show("the winner is O");
				score_plus = int::Parse(PLAYER_O->Text);
				PLAYER_O->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			if (button13->Text == "O" && button14->Text == "O" && button15->Text == "O" && button16->Text == "O")
			{
				MessageBox::Show("the winner is O");
				score_plus = int::Parse(PLAYER_O->Text);
				PLAYER_O->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			if (button1->Text == "O" && button5->Text == "O" && button9->Text == "O" && button13->Text == "O")
			{
				MessageBox::Show("the winner is O");
				score_plus = int::Parse(PLAYER_O->Text);
				PLAYER_O->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			if (button2->Text == "O" && button6->Text == "O" && button10->Text == "O" && button14->Text == "O")
			{
				MessageBox::Show("the winner is O");
				score_plus = int::Parse(PLAYER_O->Text);
				PLAYER_O->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			if (button3->Text == "O" && button7->Text == "O" && button11->Text == "O" && button15->Text == "O")
			{
				MessageBox::Show("the winner is O");
				score_plus = int::Parse(PLAYER_O->Text);
				PLAYER_O->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			if (button4->Text == "O" && button8->Text == "O" && button12->Text == "O" && button16->Text == "O")
			{
				MessageBox::Show("the winner is O");
				score_plus = int::Parse(PLAYER_O->Text);
				PLAYER_O->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}

			if (button1->Text == "O" && button6->Text == "O" && button11->Text == "O" && button16->Text == "O")
			{
				MessageBox::Show("the winner is O");
				score_plus = int::Parse(PLAYER_O->Text);
				PLAYER_O->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
			if (button4->Text == "O" && button7->Text == "O" && button10->Text == "O" && button13->Text == "O")
			{
				MessageBox::Show("the winner is O");
				score_plus = int::Parse(PLAYER_O->Text);
				PLAYER_O->Text = Convert::ToString(score_plus + 1);
				buttons_false();
			}
		}

	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {

		buttons_empty(); // to remove "x" and "o" from buttons
		buttons_true();// to be able to click on it

	}

	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_button == false)
		{
			button5->Text = "X";
			check_button = true;
		}
		else
		{
			button5->Text = "O";
			check_button = false;
		}
		winner();
		button5->Enabled = false;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_button == false)
		{
			button9->Text = "X";
			check_button = true;
		}
		else
		{
			button9->Text = "O";
			check_button = false;
		}
		winner();
		button9->Enabled = false;
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		//new game button


		buttons_empty(); // to remove "x" and "o" from buttons
		buttons_true();// to be able to click on it


		//scores=0
		PLAYER_X->Text = "0";
		PLAYER_O->Text = "0";


	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_button == false)
		{
			button1->Text = "X";
			check_button = true;
		}
		else
		{
			button1->Text = "O";
			check_button = false;
		}
		winner();
		button1->Enabled = false;
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_button == false)
		{
			button13->Text = "X";
			check_button = true;
		}
		else
		{
			button13->Text = "O";
			check_button = false;
		}
		winner();
		button13->Enabled = false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_button == false)
		{
			button2->Text = "X";
			check_button = true;
		}
		else
		{
			button2->Text = "O";
			check_button = false;
		}
		winner();
		button2->Enabled = false;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_button == false)
		{
			button6->Text = "X";
			check_button = true;
		}
		else
		{
			button6->Text = "O";
			check_button = false;
		}
		winner();
		button6->Enabled = false;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_button == false)
		{
			button10->Text = "X";
			check_button = true;
		}
		else
		{
			button10->Text = "O";
			check_button = false;
		}
		winner();
		button10->Enabled = false;
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_button == false)
		{
			button14->Text = "X";
			check_button = true;
		}
		else
		{
			button14->Text = "O";
			check_button = false;
		}
		winner();
		button14->Enabled = false;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_button == false)
		{
			button3->Text = "X";
			check_button = true;
		}
		else
		{
			button3->Text = "O";
			check_button = false;
		}
		winner();
		button3->Enabled = false;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_button == false)
		{
			button7->Text = "X";
			check_button = true;
		}
		else
		{
			button7->Text = "O";
			check_button = false;
		}
		winner();
		button7->Enabled = false;
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_button == false)
		{
			button11->Text = "X";
			check_button = true;
		}
		else
		{
			button11->Text = "O";
			check_button = false;
		}
		winner();
		button11->Enabled = false;
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_button == false)
		{
			button15->Text = "X";
			check_button = true;
		}
		else
		{
			button15->Text = "O";
			check_button = false;
		}
		winner();
		button15->Enabled = false;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_button == false)
		{
			button4->Text = "X";
			check_button = true;
		}
		else
		{
			button4->Text = "O";
			check_button = false;
		}
		winner();
		button4->Enabled = false;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_button == false)
		{
			button8->Text = "X";
			check_button = true;
		}
		else
		{
			button8->Text = "O";
			check_button = false;
		}
		winner();
		button8->Enabled = false;
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_button == false)
		{
			button12->Text = "X";
			check_button = true;
		}
		else
		{
			button12->Text = "O";
			check_button = false;
		}
		winner();
		button12->Enabled = false;
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_button == false)
		{
			button16->Text = "X";
			check_button = true;
		}
		else
		{
			button16->Text = "O";
			check_button = false;
		}
		winner();
		button16->Enabled = false;
	}
	};
}
