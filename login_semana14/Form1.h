#pragma once
#include "cliente.h"
#include "venta.h"
#include "inicio.h"
using namespace std;

namespace CppCLRWinFormsProject {

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel_contenedor;

	private: System::Windows::Forms::Button^ Cliente;



	private: System::Windows::Forms::Button^ Inicio;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button3;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Cliente = (gcnew System::Windows::Forms::Button());
			this->Inicio = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel_contenedor = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->Cliente);
			this->panel1->Controls->Add(this->Inicio);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(186, 354);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(51, 303);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(79, 30);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Salir";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->Location = System::Drawing::Point(0, 238);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 38);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Vendedor";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// Cliente
			// 
			this->Cliente->Dock = System::Windows::Forms::DockStyle::Top;
			this->Cliente->Location = System::Drawing::Point(0, 196);
			this->Cliente->Name = L"Cliente";
			this->Cliente->Size = System::Drawing::Size(186, 42);
			this->Cliente->TabIndex = 2;
			this->Cliente->Text = L"Cliente";
			this->Cliente->UseVisualStyleBackColor = true;
			this->Cliente->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Inicio
			// 
			this->Inicio->Dock = System::Windows::Forms::DockStyle::Top;
			this->Inicio->Location = System::Drawing::Point(0, 155);
			this->Inicio->Name = L"Inicio";
			this->Inicio->Size = System::Drawing::Size(186, 41);
			this->Inicio->TabIndex = 1;
			this->Inicio->Text = L"Inicio";
			this->Inicio->UseVisualStyleBackColor = true;
			this->Inicio->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panel3
			// 
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(186, 155);
			this->panel3->TabIndex = 0;
			// 
			// panel_contenedor
			// 
			this->panel_contenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_contenedor->Location = System::Drawing::Point(186, 0);
			this->panel_contenedor->Name = L"panel_contenedor";
			this->panel_contenedor->Size = System::Drawing::Size(571, 354);
			this->panel_contenedor->TabIndex = 1;
			this->panel_contenedor->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel2_Paint);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(757, 354);
			this->Controls->Add(this->panel_contenedor);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		template <class T>
		void AbrirPanel(T FormHijo) {


			if (this->panel_contenedor->Controls->Count > 0)
				this->panel_contenedor->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panel_contenedor->Controls->Add(FormHijo);
			this->panel_contenedor->Tag = FormHijo;
			FormHijo->Show();
		}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew login_semana14::inicio);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//	this->AbrirPanel(gcnew login_semana14::cliente);
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew login_semana14::venta);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Form1::Close();
}
};
}
