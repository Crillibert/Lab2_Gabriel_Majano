#pragma once
#include <cstdlib>
#include <stdio.h> 
namespace Lab2GabrielMajano {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	


	//Lista doblemente enlazada, aun en progreso
	struct nodo
	//trate de crear una lista doblemente enlazada, la idea era usarla para imprimir la pista
	{
		int key;
		int data;
		nodo* proximo;
		nodo* previo;
	};
	nodo* cabeza;
	nodo* cola;
	nodo* Lugar;
	//
	char lista[70] = { 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	char pista[70] = { 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };


	public ref class MyForm : public System::Windows::Forms::Form
	{

	private:
		//reloj general
		int tick;
	private: System::Windows::Forms::Timer^ timer_Tortuga;
		   //reloj para la liebre, sirve para generar numeros aleatorios cada segundo
		   int tick_sec;
	
	private:
		//misma idea que con el de la liebre
		int tick_tre;
	
	private:
		//texto para la tortuga, si avanza o retrocede
		String^ resultado1;
	
	private:
		//texto para la liebre, mismo propocito que el anterior
		String^ resultado2;
	
	public:
		//int para mantener cuenta de la pocision de la tortuga
		int posicion_Tortuga = 0;
	
	public:
		//int para la pocicion de la liebre
		int pocision_Liebre = 0;



	private: System::Windows::Forms::Label^ label_Text_Conejo;
	private: System::Windows::Forms::Label^ label_Pocision_T;
	private: System::Windows::Forms::Label^ label_Titulo_Tortuga;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label_Victoria;

	private: System::Windows::Forms::Button^ button_Salir;
	private: System::Windows::Forms::Button^ button_retry;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;

	private: System::Windows::Forms::Label^ label_Pocicion_L;
	public:
		MyForm(void)
		{
			//inicia los temporizadores
			InitializeComponent();
			timer1->Start();
			timer_recorrido->Start();
			timer_Tortuga->Start();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	public: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label_timer;
	private: System::Windows::Forms::Label^ label_Prueba;
	private: System::Windows::Forms::Timer^ timer_recorrido;
	public:
	protected:
	private: System::ComponentModel::IContainer^ components;
	public:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label_timer = (gcnew System::Windows::Forms::Label());
			this->label_Prueba = (gcnew System::Windows::Forms::Label());
			this->timer_recorrido = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_Tortuga = (gcnew System::Windows::Forms::Timer(this->components));
			this->label_Text_Conejo = (gcnew System::Windows::Forms::Label());
			this->label_Pocision_T = (gcnew System::Windows::Forms::Label());
			this->label_Pocicion_L = (gcnew System::Windows::Forms::Label());
			this->label_Titulo_Tortuga = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_Victoria = (gcnew System::Windows::Forms::Label());
			this->button_Salir = (gcnew System::Windows::Forms::Button());
			this->button_retry = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label_timer
			// 
			this->label_timer->AutoSize = true;
			this->label_timer->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_timer->Location = System::Drawing::Point(990, 12);
			this->label_timer->Name = L"label_timer";
			this->label_timer->Size = System::Drawing::Size(44, 45);
			this->label_timer->TabIndex = 0;
			this->label_timer->Text = L"...";
			// 
			// label_Prueba
			// 
			this->label_Prueba->AutoSize = true;
			this->label_Prueba->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Prueba->Location = System::Drawing::Point(853, 154);
			this->label_Prueba->Name = L"label_Prueba";
			this->label_Prueba->Size = System::Drawing::Size(27, 20);
			this->label_Prueba->TabIndex = 1;
			this->label_Prueba->Text = L"...";
			// 
			// timer_recorrido
			// 
			this->timer_recorrido->Enabled = true;
			this->timer_recorrido->Interval = 1000;
			this->timer_recorrido->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// timer_Tortuga
			// 
			this->timer_Tortuga->Enabled = true;
			this->timer_Tortuga->Interval = 1000;
			this->timer_Tortuga->Tick += gcnew System::EventHandler(this, &MyForm::Timer3_Tick);
			// 
			// label_Text_Conejo
			// 
			this->label_Text_Conejo->AutoSize = true;
			this->label_Text_Conejo->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Text_Conejo->Location = System::Drawing::Point(171, 154);
			this->label_Text_Conejo->Name = L"label_Text_Conejo";
			this->label_Text_Conejo->Size = System::Drawing::Size(27, 20);
			this->label_Text_Conejo->TabIndex = 2;
			this->label_Text_Conejo->Text = L"...";
			this->label_Text_Conejo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_Pocision_T
			// 
			this->label_Pocision_T->AutoSize = true;
			this->label_Pocision_T->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Pocision_T->Location = System::Drawing::Point(853, 199);
			this->label_Pocision_T->Name = L"label_Pocision_T";
			this->label_Pocision_T->Size = System::Drawing::Size(27, 20);
			this->label_Pocision_T->TabIndex = 3;
			this->label_Pocision_T->Text = L"...";
			// 
			// label_Pocicion_L
			// 
			this->label_Pocicion_L->AutoSize = true;
			this->label_Pocicion_L->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Pocicion_L->Location = System::Drawing::Point(171, 199);
			this->label_Pocicion_L->Name = L"label_Pocicion_L";
			this->label_Pocicion_L->Size = System::Drawing::Size(27, 20);
			this->label_Pocicion_L->TabIndex = 4;
			this->label_Pocicion_L->Text = L"...";
			// 
			// label_Titulo_Tortuga
			// 
			this->label_Titulo_Tortuga->AutoSize = true;
			this->label_Titulo_Tortuga->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Titulo_Tortuga->Location = System::Drawing::Point(853, 92);
			this->label_Titulo_Tortuga->Name = L"label_Titulo_Tortuga";
			this->label_Titulo_Tortuga->Size = System::Drawing::Size(77, 23);
			this->label_Titulo_Tortuga->TabIndex = 5;
			this->label_Titulo_Tortuga->Text = L"Tortuga:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(171, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 23);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Liebre:";
			// 
			// label_Victoria
			// 
			this->label_Victoria->AutoSize = true;
			this->label_Victoria->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Victoria->Location = System::Drawing::Point(417, 30);
			this->label_Victoria->Name = L"label_Victoria";
			this->label_Victoria->Size = System::Drawing::Size(179, 23);
			this->label_Victoria->TabIndex = 7;
			this->label_Victoria->Text = L"¡Bang! Y comienzan";
			// 
			// button_Salir
			// 
			this->button_Salir->Location = System::Drawing::Point(425, 625);
			this->button_Salir->Name = L"button_Salir";
			this->button_Salir->Size = System::Drawing::Size(150, 31);
			this->button_Salir->TabIndex = 9;
			this->button_Salir->Text = L"Salir";
			this->button_Salir->UseVisualStyleBackColor = true;
			this->button_Salir->Click += gcnew System::EventHandler(this, &MyForm::button_Salir_Click);
			// 
			// button_retry
			// 
			this->button_retry->Location = System::Drawing::Point(425, 92);
			this->button_retry->Name = L"button_retry";
			this->button_retry->Size = System::Drawing::Size(150, 31);
			this->button_retry->TabIndex = 10;
			this->button_retry->Text = L"Volver a empezar";
			this->button_retry->UseVisualStyleBackColor = true;
			this->button_retry->Click += gcnew System::EventHandler(this, &MyForm::button_retry_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(79, 92);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(65, 564);
			this->listBox1->TabIndex = 11;
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(760, 92);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(65, 564);
			this->listBox2->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1093, 689);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button_retry);
			this->Controls->Add(this->button_Salir);
			this->Controls->Add(this->label_Victoria);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_Titulo_Tortuga);
			this->Controls->Add(this->label_Pocicion_L);
			this->Controls->Add(this->label_Pocision_T);
			this->Controls->Add(this->label_Text_Conejo);
			this->Controls->Add(this->label_Prueba);
			this->Controls->Add(this->label_timer);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
		//temporisador en segundos
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
	{
		tick++;
		label_timer->Text = Convert::ToString(tick);
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) 
	{
		//liebre y sus atributos
		//Este es el generador del RNG que usa la liebre, este se generara cada 1000 ticks, lo mismo se utiliza en tortuga
		tick_sec = rand()%9  ;
		//Tortuga es basicamente una copia de esto
		String^ palabra;
		//Condiciones que dependen del RNG
		if (tick_sec <= 2)
		{
			lista[pocision_Liebre] = 0;
			palabra = "leve avanze";
			pocision_Liebre = pocision_Liebre + 1;
			lista[pocision_Liebre] = 1;
		}
		else if (tick_sec <= 4 && tick_sec >= 3)
		{
			palabra = "Se durmio";
			pocision_Liebre = pocision_Liebre;
		}
		else if (tick_sec == 5)
		{
			palabra = "Se Resvalo de gran manera";
			if (pocision_Liebre -12 < 0 )
			{
				lista[pocision_Liebre] = 0;
				pocision_Liebre = 0;
				lista[pocision_Liebre] = 1;
			}
			else
			{
				lista[pocision_Liebre] = 0;
				pocision_Liebre = pocision_Liebre - 12;
				lista[pocision_Liebre] = 1;
			}
		}
		else if (tick_sec >= 6 && tick_sec <= 7)
		{
			palabra = "se tropezo";
			if (pocision_Liebre - 2 > 0)
			{
				lista[pocision_Liebre] = 0;
				pocision_Liebre = pocision_Liebre - 2;
				lista[pocision_Liebre] = 1;
			}
			else
			{
				lista[pocision_Liebre] = 0;
				pocision_Liebre = 0;
				lista[pocision_Liebre] = 1;
			}
		}
		else if (tick_sec >= 8)
		{
			palabra = "gran salto";
			lista[pocision_Liebre] = 0;
			pocision_Liebre = pocision_Liebre + 9;
			lista[pocision_Liebre] = 1;
		}
		resultado2 = palabra;
		//Condicion de victoria, detiene los timers y muestra el nombre de quien gano
		if (pocision_Liebre > 70)
		{
			pocision_Liebre = 70;
			timer1->Stop();
			timer_recorrido->Stop();
			timer_Tortuga->Stop();
			label_Victoria->Text = "Liebre a ganado";
		}
		//muestra las pocisiones y que pasa cada segundo
		listBox1->Items->Clear();
		for (int i = 0; i < 70; i++)
		{
			this->listBox1->Items->Add(lista[i]);
		}
		label_Text_Conejo->Text = (resultado2);
		label_Pocicion_L->Text = Convert::ToString(pocision_Liebre);
	}
	private: System::Void Timer3_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		//atributos de la tortuga
		tick_tre= rand() % 9 ;
		int tortuga = 0;
		int *pocision;
		String^ palabra;
		//determina que ocurre con la tortuga en la carrera
		if (tick_tre <= 4)
		{
			palabra = "Gran avanze";
			lista[posicion_Tortuga] = 0;
			posicion_Tortuga = posicion_Tortuga + 3;
			lista[posicion_Tortuga] = 1;
		}
		else if (tick_tre <= 7 && tick_tre >= 5)
		{
			palabra = "leve avanze";
			lista[posicion_Tortuga] = 0;
			posicion_Tortuga = posicion_Tortuga + 1;
			lista[posicion_Tortuga] = 1;
		}
		else if (tick_tre >=8)
		{
			palabra = "gran tropieso";
			if (posicion_Tortuga - 2 < 0)
			{
				lista[posicion_Tortuga] = 0;
				posicion_Tortuga = 0;
				lista[posicion_Tortuga] = 1;
			}
			else
			{
				lista[posicion_Tortuga] = 0;
				posicion_Tortuga = posicion_Tortuga - 2;
				lista[posicion_Tortuga] = 1;
			}
		}
		if (posicion_Tortuga>70)
		{
			posicion_Tortuga = 70;
			timer1->Stop();
			timer_recorrido->Stop();
			timer_Tortuga->Stop();
			label_Victoria->Text = "¡LA TORTUGA GANA! ¡BRAVO!";
		}
		for (int i = 0; i < 70; i++)
		{
			this->listBox2->Items->Add(pista[i]);
		}
		resultado1 = palabra;
		label_Prueba->Text = resultado1;
		label_Pocision_T->Text = Convert::ToString(posicion_Tortuga);
	}
private: System::Void button_Salir_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//cierra el programa
	this->Close();
}
private: System::Void button_retry_Click(System::Object^ sender, System::EventArgs^ e) 
{
	pocision_Liebre = 0;
	posicion_Tortuga = 0;
	tick = 0;
	for (int i = 0; i < 70; i++)
	{
		pista[i] = 0;
		lista[i] = 0;
	}
	pista[0] = 1;
	lista[0] = 1;
}
};
}
