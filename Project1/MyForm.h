#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonDivide;

	protected:

	private: System::Windows::Forms::Button^ buttonTimes;
	private: System::Windows::Forms::Button^ buttonMinus;
	private: System::Windows::Forms::Button^ buttonPlus;
	private: System::Windows::Forms::Button^ buttonEqual;
	private: System::Windows::Forms::TextBox^ textResult;
	private: System::Windows::Forms::Button^ button1;



	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->buttonTimes = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->textResult = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonDivide
			// 
			this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDivide->Location = System::Drawing::Point(13, 162);
			this->buttonDivide->Margin = System::Windows::Forms::Padding(4);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(161, 64);
			this->buttonDivide->TabIndex = 0;
			this->buttonDivide->Text = L"\\";
			this->buttonDivide->UseVisualStyleBackColor = true;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &MyForm::buttonDivide_Click);
			// 
			// buttonTimes
			// 
			this->buttonTimes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTimes->Location = System::Drawing::Point(13, 91);
			this->buttonTimes->Margin = System::Windows::Forms::Padding(4);
			this->buttonTimes->Name = L"buttonTimes";
			this->buttonTimes->Size = System::Drawing::Size(161, 64);
			this->buttonTimes->TabIndex = 3;
			this->buttonTimes->Text = L"*";
			this->buttonTimes->UseVisualStyleBackColor = true;
			this->buttonTimes->Click += gcnew System::EventHandler(this, &MyForm::buttonTimes_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMinus->Location = System::Drawing::Point(187, 162);
			this->buttonMinus->Margin = System::Windows::Forms::Padding(4);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(179, 64);
			this->buttonMinus->TabIndex = 4;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonMinus_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonPlus.BackgroundImage")));
			this->buttonPlus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPlus->Location = System::Drawing::Point(187, 91);
			this->buttonPlus->Margin = System::Windows::Forms::Padding(4);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(179, 64);
			this->buttonPlus->TabIndex = 5;
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::buttonPlus_Click);
			// 
			// buttonEqual
			// 
			this->buttonEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonEqual->Location = System::Drawing::Point(13, 234);
			this->buttonEqual->Margin = System::Windows::Forms::Padding(4);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->Size = System::Drawing::Size(161, 74);
			this->buttonEqual->TabIndex = 6;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = true;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &MyForm::buttonEqual_Click);
			// 
			// textResult
			// 
			this->textResult->Location = System::Drawing::Point(13, 39);
			this->textResult->Margin = System::Windows::Forms::Padding(4);
			this->textResult->Name = L"textResult";
			this->textResult->Size = System::Drawing::Size(353, 22);
			this->textResult->TabIndex = 7;
			this->textResult->TextChanged += gcnew System::EventHandler(this, &MyForm::textResult_TextChanged);
			this->textResult->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textResult_KeyDown);
			this->textResult->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textResult_KeyUp);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Location = System::Drawing::Point(187, 233);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 74);
			this->button1->TabIndex = 8;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(379, 321);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textResult);
			this->Controls->Add(this->buttonEqual);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonTimes);
			this->Controls->Add(this->buttonDivide);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int number1, number2;
		String^ operation;
	private: System::Void buttonTimes_Click(System::Object^ sender, System::EventArgs^ e) {
		number1 = Convert::ToInt32(textResult->Text);
		operation = "*";
		textResult->Clear();
	}

private: System::Void TextBoxNumbers_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

}
private: System::Void MyForm_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
}
	   String^ str;
private: System::Void textResult_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	str = textResult->Text;
}
private: System::Void textResult_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if ((e->KeyValue) < 48 || e->KeyValue > 59) {
		textResult->Text = str;
	}
}
private: System::Void buttonPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	number1 = Convert::ToInt32(textResult->Text);
	operation = "+";
	textResult->Clear();
}
private: System::Void buttonDivide_Click(System::Object^ sender, System::EventArgs^ e) {
	number1 = Convert::ToInt32(textResult->Text);
	operation = "/";
	textResult->Clear();
}
private: System::Void buttonMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	number1 = Convert::ToInt32(textResult->Text);
	operation = "-";
	textResult->Clear();
}
private: System::Void buttonEqual_Click(System::Object^ sender, System::EventArgs^ e) {
	number2 = Convert::ToInt32(textResult->Text);
	textResult->Clear();
	if (operation == "+") textResult->Text = Convert::ToString(number1 + number2);
	if (operation == "-") textResult->Text = Convert::ToString(number1 - number2);
	if (operation == "*") textResult->Text = Convert::ToString(number1 * number2);
	if (operation == "/") textResult->Text = Convert::ToString(number1 / number2);
}
private: System::Void textResult_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textResult->Text = "";
}
};
}
