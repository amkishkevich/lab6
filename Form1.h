#pragma once
#include<random>
#include<time.h>
namespace winf {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

/// <summary>
/// Summary for Form1
/// </summary>
public ref class Form1 : public System::Windows::Forms::Form
{
public:
    Form1(void)
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
    ~Form1()
    {
        if (components)
        {
            delete components;
        }
    }
private: System::Windows::Forms::TextBox^  textBox1;
protected:
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label3;

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
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->textBox2 = (gcnew System::Windows::Forms::TextBox());
		this->textBox3 = (gcnew System::Windows::Forms::TextBox());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->SuspendLayout();
		// 
		// textBox1
		// 
		this->textBox1->Location = System::Drawing::Point(83, 47);
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(100, 20);
		this->textBox1->TabIndex = 0;
		this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
		// 
		// textBox2
		// 
		this->textBox2->Location = System::Drawing::Point(83, 101);
		this->textBox2->Name = L"textBox2";
		this->textBox2->Size = System::Drawing::Size(100, 20);
		this->textBox2->TabIndex = 1;
		this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
		// 
		// textBox3
		// 
		this->textBox3->Location = System::Drawing::Point(83, 152);
		this->textBox3->Name = L"textBox3";
		this->textBox3->Size = System::Drawing::Size(100, 20);
		this->textBox3->TabIndex = 2;
		this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(95, 204);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(75, 23);
		this->button1->TabIndex = 3;
		this->button1->Text = L"button1";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(83, 28);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(35, 13);
		this->label1->TabIndex = 4;
		this->label1->Text = L"label1";
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Location = System::Drawing::Point(83, 82);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(35, 13);
		this->label2->TabIndex = 5;
		this->label2->Text = L"label2";
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Location = System::Drawing::Point(86, 133);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(35, 13);
		this->label3->TabIndex = 6;
		this->label3->Text = L"label3";
		// 
		// Form1
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(284, 262);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->button1);
		this->Controls->Add(this->textBox3);
		this->Controls->Add(this->textBox2);
		this->Controls->Add(this->textBox1);
		this->Name = L"Form1";
		this->Text = L"Form1";
		this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion
    void Sort(int *arr,int length_array){
    for(int r=0;r<length_array;r++){
        if(arr[r]<0){
            for(int t=r+1;t<length_array;t++){
                if(arr[t]>=0){
                    int f=arr[r];
                    arr[r]=arr[t];
                    arr[t]=f;
                    break;
				}
            }
        }
	}}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
        this->Text="Lab6";
        label1->Text="Input dimention of array";
		label2->Text="Ishodn array get by random";
		label3->Text="Sort array";
        button1->Text="Input";
    }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
        int size_array=System::Convert::ToInt32(textBox1->Text);
        int *sorted_array=new int[size_array];
        String^ str="";
        srand(time(NULL));
        for(int c =0;c<size_array;++c)
        {
            sorted_array[c]=rand()%15-6;
            str=str->Format(str + "{0} ",sorted_array[c]);
        }
        textBox2->Text=str;
        Sort(sorted_array,size_array);
        str="";
        for(int c=0;c<size_array;c++){
			str=str->Format(str +"{0} ",sorted_array[c]);
           } textBox3->Text=str;
        
    }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
    }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
    }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
    }

};
}

