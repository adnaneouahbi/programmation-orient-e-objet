#pragma once

#include "CL_svc_gestionServices.h"

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label18;
	protected:
	private: System::Windows::Forms::TextBox^ textBox13_num_personnel;
	private: System::Windows::Forms::TextBox^ textBox11_date_embauch;
	private: System::Windows::Forms::TextBox^ textBox9_sup_hier;
	private: System::Windows::Forms::TabPage^ tabPage_personnel;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox10_addr_perso;
	private: System::Windows::Forms::TextBox^ textBox8_prenom_perso;
	private: System::Windows::Forms::TextBox^ textBox7_nom_perso;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox21_mntan_ttl_ht;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox20_address_fact;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox19_address_livr;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage_client;
	private: System::Windows::Forms::TextBox^ txt_message;
	private: System::Windows::Forms::Label^ lbl_message;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button_nouveau;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6_date_prem_achat;
	private: System::Windows::Forms::TextBox^ textBox5_adresse_livraison;
	private: System::Windows::Forms::TextBox^ textBox4_adresse_facturation;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox_numero_client;
	private: System::Windows::Forms::TextBox^ textBox3_date_client;
	private: System::Windows::Forms::TextBox^ textBox2_prenom_client;
	private: System::Windows::Forms::TextBox^ textBox1_nom_client;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TabPage^ tabPage_commande;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox30_date_soldem;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::TextBox^ textBox29_moyen_paie;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::TextBox^ textBox28_date_paie;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ textBox27_date_emiss;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::TextBox^ textBox26_date_livr;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TextBox^ textBox25_ref_comm;
	private: System::Windows::Forms::TabPage^ tabPage_facture;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox24_total_article;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox23_montan_ttl_ttc;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox22_mntn_ttle_tva;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox17_nom_client;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox18_code_client;
	private: System::Windows::Forms::TextBox^ textBox16_num_svc_client;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox15_adress_societe;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox14_num_fact;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TabPage^ tabPage_stock;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::TextBox^ textBox33_qte_article;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::TextBox^ textBox32_nom_article;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::TextBox^ textBox31_ref_article;

	private:


		// Le service qui gere les donnees 
	private: NS_Svc::CL_svc_gestionServices^ processusPersonnel;
	private: NS_Svc::CL_svc_gestionServices^ processusClient;
	private: NS_Svc::CL_svc_gestionServices^ processusCommande;
	private: NS_Svc::CL_svc_gestionServices^ processusFacture;
	private: NS_Svc::CL_svc_gestionServices^ processusStock;

		   // Un cache memoire sur la bdd
	private: Data::DataSet^ dspersonnel;
	private: Data::DataSet^ dsclient;
	private: Data::DataSet^ dscommande;
	private: Data::DataSet^ dsfacture;
	private: Data::DataSet^ dsstock;


		   //L'index courant 
	private: int index;

		   // Le mode 
	   private: String^ mode;
	   private: int rowsCount;





















		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox13_num_personnel = (gcnew System::Windows::Forms::TextBox());
			this->textBox11_date_embauch = (gcnew System::Windows::Forms::TextBox());
			this->textBox9_sup_hier = (gcnew System::Windows::Forms::TextBox());
			this->tabPage_personnel = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox10_addr_perso = (gcnew System::Windows::Forms::TextBox());
			this->textBox8_prenom_perso = (gcnew System::Windows::Forms::TextBox());
			this->textBox7_nom_perso = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox21_mntan_ttl_ht = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox20_address_fact = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox19_address_livr = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage_client = (gcnew System::Windows::Forms::TabPage());
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->lbl_message = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button_nouveau = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6_date_prem_achat = (gcnew System::Windows::Forms::TextBox());
			this->textBox5_adresse_livraison = (gcnew System::Windows::Forms::TextBox());
			this->textBox4_adresse_facturation = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox_numero_client = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_date_client = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_prenom_client = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_nom_client = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage_commande = (gcnew System::Windows::Forms::TabPage());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox30_date_soldem = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox29_moyen_paie = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox28_date_paie = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox27_date_emiss = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox26_date_livr = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox25_ref_comm = (gcnew System::Windows::Forms::TextBox());
			this->tabPage_facture = (gcnew System::Windows::Forms::TabPage());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox24_total_article = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox23_montan_ttl_ttc = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox22_mntn_ttle_tva = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox17_nom_client = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox18_code_client = (gcnew System::Windows::Forms::TextBox());
			this->textBox16_num_svc_client = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox15_adress_societe = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox14_num_fact = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->tabPage_stock = (gcnew System::Windows::Forms::TabPage());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->textBox33_qte_article = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->textBox32_nom_article = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox31_ref_article = (gcnew System::Windows::Forms::TextBox());
			this->tabPage_personnel->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage_client->SuspendLayout();
			this->tabPage_commande->SuspendLayout();
			this->tabPage_facture->SuspendLayout();
			this->tabPage_stock->SuspendLayout();
			this->SuspendLayout();
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(18, 25);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(137, 20);
			this->label18->TabIndex = 132;
			this->label18->Text = L"numero personnel";
			// 
			// textBox13_num_personnel
			// 
			this->textBox13_num_personnel->Location = System::Drawing::Point(18, 52);
			this->textBox13_num_personnel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox13_num_personnel->Name = L"textBox13_num_personnel";
			this->textBox13_num_personnel->Size = System::Drawing::Size(200, 26);
			this->textBox13_num_personnel->TabIndex = 131;
			// 
			// textBox11_date_embauch
			// 
			this->textBox11_date_embauch->Location = System::Drawing::Point(14, 430);
			this->textBox11_date_embauch->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox11_date_embauch->Name = L"textBox11_date_embauch";
			this->textBox11_date_embauch->Size = System::Drawing::Size(200, 26);
			this->textBox11_date_embauch->TabIndex = 130;
			// 
			// textBox9_sup_hier
			// 
			this->textBox9_sup_hier->Location = System::Drawing::Point(18, 269);
			this->textBox9_sup_hier->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox9_sup_hier->Name = L"textBox9_sup_hier";
			this->textBox9_sup_hier->Size = System::Drawing::Size(200, 26);
			this->textBox9_sup_hier->TabIndex = 128;
			// 
			// tabPage_personnel
			// 
			this->tabPage_personnel->Controls->Add(this->textBox4);
			this->tabPage_personnel->Controls->Add(this->label6);
			this->tabPage_personnel->Controls->Add(this->button1);
			this->tabPage_personnel->Controls->Add(this->button5);
			this->tabPage_personnel->Controls->Add(this->button6);
			this->tabPage_personnel->Controls->Add(this->button7);
			this->tabPage_personnel->Controls->Add(this->label18);
			this->tabPage_personnel->Controls->Add(this->textBox13_num_personnel);
			this->tabPage_personnel->Controls->Add(this->textBox11_date_embauch);
			this->tabPage_personnel->Controls->Add(this->textBox10_addr_perso);
			this->tabPage_personnel->Controls->Add(this->textBox9_sup_hier);
			this->tabPage_personnel->Controls->Add(this->textBox8_prenom_perso);
			this->tabPage_personnel->Controls->Add(this->textBox7_nom_perso);
			this->tabPage_personnel->Controls->Add(this->label14);
			this->tabPage_personnel->Controls->Add(this->label13);
			this->tabPage_personnel->Controls->Add(this->label15);
			this->tabPage_personnel->Controls->Add(this->label16);
			this->tabPage_personnel->Controls->Add(this->label19);
			this->tabPage_personnel->Location = System::Drawing::Point(4, 29);
			this->tabPage_personnel->Name = L"tabPage_personnel";
			this->tabPage_personnel->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_personnel->Size = System::Drawing::Size(1344, 597);
			this->tabPage_personnel->TabIndex = 1;
			this->tabPage_personnel->Text = L"Personnel";
			this->tabPage_personnel->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(641, 469);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(458, 70);
			this->textBox4->TabIndex = 145;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(637, 421);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 20);
			this->label6->TabIndex = 144;
			this->label6->Text = L"Message";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(404, 396);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 62);
			this->button1->TabIndex = 143;
			this->button1->Text = L"Enregistrer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(404, 281);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(181, 62);
			this->button5->TabIndex = 142;
			this->button5->Text = L"Supprimer";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(404, 161);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(181, 67);
			this->button6->TabIndex = 141;
			this->button6->Text = L"Modifier";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(404, 46);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(181, 69);
			this->button7->TabIndex = 140;
			this->button7->Text = L"Nouveau";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox10_addr_perso
			// 
			this->textBox10_addr_perso->Location = System::Drawing::Point(14, 350);
			this->textBox10_addr_perso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox10_addr_perso->Name = L"textBox10_addr_perso";
			this->textBox10_addr_perso->Size = System::Drawing::Size(200, 26);
			this->textBox10_addr_perso->TabIndex = 129;
			// 
			// textBox8_prenom_perso
			// 
			this->textBox8_prenom_perso->Location = System::Drawing::Point(18, 190);
			this->textBox8_prenom_perso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox8_prenom_perso->Name = L"textBox8_prenom_perso";
			this->textBox8_prenom_perso->Size = System::Drawing::Size(200, 26);
			this->textBox8_prenom_perso->TabIndex = 127;
			// 
			// textBox7_nom_perso
			// 
			this->textBox7_nom_perso->Location = System::Drawing::Point(18, 119);
			this->textBox7_nom_perso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7_nom_perso->Name = L"textBox7_nom_perso";
			this->textBox7_nom_perso->Size = System::Drawing::Size(200, 26);
			this->textBox7_nom_perso->TabIndex = 126;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(13, 405);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(132, 20);
			this->label14->TabIndex = 125;
			this->label14->Text = L"date d\'embauche";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(28, 325);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(66, 20);
			this->label13->TabIndex = 124;
			this->label13->Text = L"adresse";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(13, 244);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(166, 20);
			this->label15->TabIndex = 123;
			this->label15->Text = L"superieur hierarchique";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(12, 165);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(63, 20);
			this->label16->TabIndex = 122;
			this->label16->Text = L"prenom";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(12, 95);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(40, 20);
			this->label19->TabIndex = 121;
			this->label19->Text = L"nom";
			// 
			// textBox21_mntan_ttl_ht
			// 
			this->textBox21_mntan_ttl_ht->Location = System::Drawing::Point(20, 255);
			this->textBox21_mntan_ttl_ht->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox21_mntan_ttl_ht->Name = L"textBox21_mntan_ttl_ht";
			this->textBox21_mntan_ttl_ht->Size = System::Drawing::Size(200, 26);
			this->textBox21_mntan_ttl_ht->TabIndex = 176;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(20, 229);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(156, 20);
			this->label25->TabIndex = 175;
			this->label25->Text = L"montant total acheté";
			// 
			// textBox20_address_fact
			// 
			this->textBox20_address_fact->Location = System::Drawing::Point(339, 248);
			this->textBox20_address_fact->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox20_address_fact->Name = L"textBox20_address_fact";
			this->textBox20_address_fact->Size = System::Drawing::Size(200, 26);
			this->textBox20_address_fact->TabIndex = 174;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(393, 218);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 20);
			this->label1->TabIndex = 173;
			this->label1->Text = L"adresse facturation";
			// 
			// textBox19_address_livr
			// 
			this->textBox19_address_livr->Location = System::Drawing::Point(339, 177);
			this->textBox19_address_livr->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox19_address_livr->Name = L"textBox19_address_livr";
			this->textBox19_address_livr->Size = System::Drawing::Size(200, 26);
			this->textBox19_address_livr->TabIndex = 172;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(412, 148);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 20);
			this->label2->TabIndex = 171;
			this->label2->Text = L"adresse livraison";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(454, 18);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(85, 20);
			this->label22->TabIndex = 169;
			this->label22->Text = L"code client";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage_client);
			this->tabControl1->Controls->Add(this->tabPage_personnel);
			this->tabControl1->Controls->Add(this->tabPage_commande);
			this->tabControl1->Controls->Add(this->tabPage_facture);
			this->tabControl1->Controls->Add(this->tabPage_stock);
			this->tabControl1->Location = System::Drawing::Point(6, 22);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1352, 630);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage_client
			// 
			this->tabPage_client->Controls->Add(this->txt_message);
			this->tabPage_client->Controls->Add(this->lbl_message);
			this->tabPage_client->Controls->Add(this->button4);
			this->tabPage_client->Controls->Add(this->button3);
			this->tabPage_client->Controls->Add(this->button2);
			this->tabPage_client->Controls->Add(this->button_nouveau);
			this->tabPage_client->Controls->Add(this->label9);
			this->tabPage_client->Controls->Add(this->textBox6_date_prem_achat);
			this->tabPage_client->Controls->Add(this->textBox5_adresse_livraison);
			this->tabPage_client->Controls->Add(this->textBox4_adresse_facturation);
			this->tabPage_client->Controls->Add(this->label10);
			this->tabPage_client->Controls->Add(this->label11);
			this->tabPage_client->Controls->Add(this->label12);
			this->tabPage_client->Controls->Add(this->label17);
			this->tabPage_client->Controls->Add(this->textBox_numero_client);
			this->tabPage_client->Controls->Add(this->textBox3_date_client);
			this->tabPage_client->Controls->Add(this->textBox2_prenom_client);
			this->tabPage_client->Controls->Add(this->textBox1_nom_client);
			this->tabPage_client->Controls->Add(this->label7);
			this->tabPage_client->Controls->Add(this->label8);
			this->tabPage_client->Location = System::Drawing::Point(4, 29);
			this->tabPage_client->Name = L"tabPage_client";
			this->tabPage_client->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_client->Size = System::Drawing::Size(1344, 597);
			this->tabPage_client->TabIndex = 0;
			this->tabPage_client->Text = L"Client";
			this->tabPage_client->UseVisualStyleBackColor = true;
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(608, 471);
			this->txt_message->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->ReadOnly = true;
			this->txt_message->Size = System::Drawing::Size(458, 70);
			this->txt_message->TabIndex = 141;
			// 
			// lbl_message
			// 
			this->lbl_message->AutoSize = true;
			this->lbl_message->Location = System::Drawing::Point(604, 423);
			this->lbl_message->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_message->Name = L"lbl_message";
			this->lbl_message->Size = System::Drawing::Size(74, 20);
			this->lbl_message->TabIndex = 140;
			this->lbl_message->Text = L"Message";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(355, 407);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(181, 62);
			this->button4->TabIndex = 139;
			this->button4->Text = L"Enregistrer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(355, 292);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(181, 62);
			this->button3->TabIndex = 138;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(355, 172);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 67);
			this->button2->TabIndex = 137;
			this->button2->Text = L"Modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button_nouveau
			// 
			this->button_nouveau->Location = System::Drawing::Point(355, 57);
			this->button_nouveau->Name = L"button_nouveau";
			this->button_nouveau->Size = System::Drawing::Size(181, 69);
			this->button_nouveau->TabIndex = 136;
			this->button_nouveau->Text = L"Nouveau";
			this->button_nouveau->UseVisualStyleBackColor = true;
			this->button_nouveau->Click += gcnew System::EventHandler(this, &MyForm::button_nouveau_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(35, 88);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 20);
			this->label9->TabIndex = 135;
			this->label9->Text = L"nom";
			// 
			// textBox6_date_prem_achat
			// 
			this->textBox6_date_prem_achat->Location = System::Drawing::Point(35, 515);
			this->textBox6_date_prem_achat->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox6_date_prem_achat->Name = L"textBox6_date_prem_achat";
			this->textBox6_date_prem_achat->Size = System::Drawing::Size(200, 26);
			this->textBox6_date_prem_achat->TabIndex = 134;
			// 
			// textBox5_adresse_livraison
			// 
			this->textBox5_adresse_livraison->Location = System::Drawing::Point(35, 435);
			this->textBox5_adresse_livraison->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox5_adresse_livraison->Name = L"textBox5_adresse_livraison";
			this->textBox5_adresse_livraison->Size = System::Drawing::Size(200, 26);
			this->textBox5_adresse_livraison->TabIndex = 133;
			// 
			// textBox4_adresse_facturation
			// 
			this->textBox4_adresse_facturation->Location = System::Drawing::Point(35, 355);
			this->textBox4_adresse_facturation->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4_adresse_facturation->Name = L"textBox4_adresse_facturation";
			this->textBox4_adresse_facturation->Size = System::Drawing::Size(200, 26);
			this->textBox4_adresse_facturation->TabIndex = 132;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(40, 490);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(142, 20);
			this->label10->TabIndex = 131;
			this->label10->Text = L"date premier achat";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(35, 410);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(126, 20);
			this->label11->TabIndex = 130;
			this->label11->Text = L"adresse livraison";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(35, 330);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(146, 20);
			this->label12->TabIndex = 129;
			this->label12->Text = L"adresse facturation";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(33, 30);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(104, 20);
			this->label17->TabIndex = 128;
			this->label17->Text = L"numero client";
			// 
			// textBox_numero_client
			// 
			this->textBox_numero_client->Location = System::Drawing::Point(35, 57);
			this->textBox_numero_client->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox_numero_client->Name = L"textBox_numero_client";
			this->textBox_numero_client->Size = System::Drawing::Size(200, 26);
			this->textBox_numero_client->TabIndex = 127;
			// 
			// textBox3_date_client
			// 
			this->textBox3_date_client->Location = System::Drawing::Point(27, 274);
			this->textBox3_date_client->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3_date_client->Name = L"textBox3_date_client";
			this->textBox3_date_client->Size = System::Drawing::Size(200, 26);
			this->textBox3_date_client->TabIndex = 126;
			// 
			// textBox2_prenom_client
			// 
			this->textBox2_prenom_client->Location = System::Drawing::Point(33, 195);
			this->textBox2_prenom_client->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2_prenom_client->Name = L"textBox2_prenom_client";
			this->textBox2_prenom_client->Size = System::Drawing::Size(200, 26);
			this->textBox2_prenom_client->TabIndex = 125;
			// 
			// textBox1_nom_client
			// 
			this->textBox1_nom_client->Location = System::Drawing::Point(35, 124);
			this->textBox1_nom_client->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1_nom_client->Name = L"textBox1_nom_client";
			this->textBox1_nom_client->Size = System::Drawing::Size(200, 26);
			this->textBox1_nom_client->TabIndex = 124;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(33, 249);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 20);
			this->label7->TabIndex = 123;
			this->label7->Text = L"date de naissance";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(33, 170);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 20);
			this->label8->TabIndex = 122;
			this->label8->Text = L"prenom";
			// 
			// tabPage_commande
			// 
			this->tabPage_commande->Controls->Add(this->textBox5);
			this->tabPage_commande->Controls->Add(this->label29);
			this->tabPage_commande->Controls->Add(this->button8);
			this->tabPage_commande->Controls->Add(this->button9);
			this->tabPage_commande->Controls->Add(this->button10);
			this->tabPage_commande->Controls->Add(this->button11);
			this->tabPage_commande->Controls->Add(this->textBox30_date_soldem);
			this->tabPage_commande->Controls->Add(this->label35);
			this->tabPage_commande->Controls->Add(this->textBox29_moyen_paie);
			this->tabPage_commande->Controls->Add(this->label34);
			this->tabPage_commande->Controls->Add(this->textBox28_date_paie);
			this->tabPage_commande->Controls->Add(this->label33);
			this->tabPage_commande->Controls->Add(this->textBox27_date_emiss);
			this->tabPage_commande->Controls->Add(this->label32);
			this->tabPage_commande->Controls->Add(this->textBox26_date_livr);
			this->tabPage_commande->Controls->Add(this->label31);
			this->tabPage_commande->Controls->Add(this->label30);
			this->tabPage_commande->Controls->Add(this->textBox25_ref_comm);
			this->tabPage_commande->Location = System::Drawing::Point(4, 29);
			this->tabPage_commande->Name = L"tabPage_commande";
			this->tabPage_commande->Size = System::Drawing::Size(1344, 597);
			this->tabPage_commande->TabIndex = 2;
			this->tabPage_commande->Text = L"Commande";
			this->tabPage_commande->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(605, 484);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(458, 70);
			this->textBox5->TabIndex = 173;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(601, 436);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(74, 20);
			this->label29->TabIndex = 172;
			this->label29->Text = L"Message";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(316, 380);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(181, 62);
			this->button8->TabIndex = 171;
			this->button8->Text = L"Enregistrer";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(316, 265);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(181, 62);
			this->button9->TabIndex = 170;
			this->button9->Text = L"Supprimer";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(316, 145);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(181, 67);
			this->button10->TabIndex = 169;
			this->button10->Text = L"Modifier";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(316, 30);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(181, 69);
			this->button11->TabIndex = 168;
			this->button11->Text = L"Nouveau";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox30_date_soldem
			// 
			this->textBox30_date_soldem->Location = System::Drawing::Point(14, 508);
			this->textBox30_date_soldem->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox30_date_soldem->Name = L"textBox30_date_soldem";
			this->textBox30_date_soldem->Size = System::Drawing::Size(200, 26);
			this->textBox30_date_soldem->TabIndex = 167;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(14, 471);
			this->label35->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(119, 20);
			this->label35->TabIndex = 166;
			this->label35->Text = L"date soldement";
			// 
			// textBox29_moyen_paie
			// 
			this->textBox29_moyen_paie->Location = System::Drawing::Point(14, 410);
			this->textBox29_moyen_paie->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox29_moyen_paie->Name = L"textBox29_moyen_paie";
			this->textBox29_moyen_paie->Size = System::Drawing::Size(200, 26);
			this->textBox29_moyen_paie->TabIndex = 165;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(14, 374);
			this->label34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(126, 20);
			this->label34->TabIndex = 164;
			this->label34->Text = L"moyen paiement";
			// 
			// textBox28_date_paie
			// 
			this->textBox28_date_paie->Location = System::Drawing::Point(14, 311);
			this->textBox28_date_paie->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox28_date_paie->Name = L"textBox28_date_paie";
			this->textBox28_date_paie->Size = System::Drawing::Size(200, 26);
			this->textBox28_date_paie->TabIndex = 163;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(14, 278);
			this->label33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(111, 20);
			this->label33->TabIndex = 162;
			this->label33->Text = L"date paiement";
			// 
			// textBox27_date_emiss
			// 
			this->textBox27_date_emiss->Location = System::Drawing::Point(14, 207);
			this->textBox27_date_emiss->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox27_date_emiss->Name = L"textBox27_date_emiss";
			this->textBox27_date_emiss->Size = System::Drawing::Size(200, 26);
			this->textBox27_date_emiss->TabIndex = 161;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(19, 182);
			this->label32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(107, 20);
			this->label32->TabIndex = 160;
			this->label32->Text = L"date emission";
			// 
			// textBox26_date_livr
			// 
			this->textBox26_date_livr->Location = System::Drawing::Point(13, 122);
			this->textBox26_date_livr->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox26_date_livr->Name = L"textBox26_date_livr";
			this->textBox26_date_livr->Size = System::Drawing::Size(200, 26);
			this->textBox26_date_livr->TabIndex = 159;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(19, 98);
			this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(123, 20);
			this->label31->TabIndex = 158;
			this->label31->Text = L"date de livraison";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(19, 18);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(160, 20);
			this->label30->TabIndex = 157;
			this->label30->Text = L"reference commande";
			// 
			// textBox25_ref_comm
			// 
			this->textBox25_ref_comm->Location = System::Drawing::Point(19, 42);
			this->textBox25_ref_comm->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox25_ref_comm->Name = L"textBox25_ref_comm";
			this->textBox25_ref_comm->Size = System::Drawing::Size(200, 26);
			this->textBox25_ref_comm->TabIndex = 156;
			// 
			// tabPage_facture
			// 
			this->tabPage_facture->Controls->Add(this->textBox6);
			this->tabPage_facture->Controls->Add(this->label36);
			this->tabPage_facture->Controls->Add(this->button12);
			this->tabPage_facture->Controls->Add(this->button13);
			this->tabPage_facture->Controls->Add(this->button14);
			this->tabPage_facture->Controls->Add(this->button15);
			this->tabPage_facture->Controls->Add(this->textBox3);
			this->tabPage_facture->Controls->Add(this->textBox2);
			this->tabPage_facture->Controls->Add(this->textBox1);
			this->tabPage_facture->Controls->Add(this->label5);
			this->tabPage_facture->Controls->Add(this->textBox24_total_article);
			this->tabPage_facture->Controls->Add(this->label28);
			this->tabPage_facture->Controls->Add(this->label4);
			this->tabPage_facture->Controls->Add(this->textBox23_montan_ttl_ttc);
			this->tabPage_facture->Controls->Add(this->label3);
			this->tabPage_facture->Controls->Add(this->label27);
			this->tabPage_facture->Controls->Add(this->textBox22_mntn_ttle_tva);
			this->tabPage_facture->Controls->Add(this->label21);
			this->tabPage_facture->Controls->Add(this->textBox17_nom_client);
			this->tabPage_facture->Controls->Add(this->label26);
			this->tabPage_facture->Controls->Add(this->textBox21_mntan_ttl_ht);
			this->tabPage_facture->Controls->Add(this->label25);
			this->tabPage_facture->Controls->Add(this->textBox20_address_fact);
			this->tabPage_facture->Controls->Add(this->label1);
			this->tabPage_facture->Controls->Add(this->textBox19_address_livr);
			this->tabPage_facture->Controls->Add(this->label2);
			this->tabPage_facture->Controls->Add(this->textBox18_code_client);
			this->tabPage_facture->Controls->Add(this->label22);
			this->tabPage_facture->Controls->Add(this->textBox16_num_svc_client);
			this->tabPage_facture->Controls->Add(this->label20);
			this->tabPage_facture->Controls->Add(this->textBox15_adress_societe);
			this->tabPage_facture->Controls->Add(this->label23);
			this->tabPage_facture->Controls->Add(this->textBox14_num_fact);
			this->tabPage_facture->Controls->Add(this->label24);
			this->tabPage_facture->Location = System::Drawing::Point(4, 29);
			this->tabPage_facture->Name = L"tabPage_facture";
			this->tabPage_facture->Size = System::Drawing::Size(1344, 597);
			this->tabPage_facture->TabIndex = 3;
			this->tabPage_facture->Text = L"Facture";
			this->tabPage_facture->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(585, 510);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(458, 70);
			this->textBox6->TabIndex = 194;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(581, 462);
			this->label36->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(74, 20);
			this->label36->TabIndex = 193;
			this->label36->Text = L"Message";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(655, 372);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(181, 62);
			this->button12->TabIndex = 192;
			this->button12->Text = L"Enregistrer";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(655, 257);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(181, 62);
			this->button13->TabIndex = 191;
			this->button13->Text = L"Supprimer";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(655, 137);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(181, 67);
			this->button14->TabIndex = 190;
			this->button14->Text = L"Modifier";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(655, 22);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(181, 69);
			this->button15->TabIndex = 189;
			this->button15->Text = L"Nouveau";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(335, 397);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(200, 26);
			this->textBox3->TabIndex = 188;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(335, 340);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 26);
			this->textBox2->TabIndex = 187;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(336, 470);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 26);
			this->textBox1->TabIndex = 186;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(435, 445);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 20);
			this->label5->TabIndex = 185;
			this->label5->Text = L"ID Personnel";
			// 
			// textBox24_total_article
			// 
			this->textBox24_total_article->Location = System::Drawing::Point(20, 465);
			this->textBox24_total_article->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox24_total_article->Name = L"textBox24_total_article";
			this->textBox24_total_article->Size = System::Drawing::Size(200, 26);
			this->textBox24_total_article->TabIndex = 182;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(22, 440);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(86, 20);
			this->label28->TabIndex = 181;
			this->label28->Text = L"total article";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(400, 372);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 20);
			this->label4->TabIndex = 184;
			this->label4->Text = L"Prenom Personnel";
			// 
			// textBox23_montan_ttl_ttc
			// 
			this->textBox23_montan_ttl_ttc->Location = System::Drawing::Point(20, 398);
			this->textBox23_montan_ttl_ttc->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox23_montan_ttl_ttc->Name = L"textBox23_montan_ttl_ttc";
			this->textBox23_montan_ttl_ttc->Size = System::Drawing::Size(200, 26);
			this->textBox23_montan_ttl_ttc->TabIndex = 180;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(423, 315);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 20);
			this->label3->TabIndex = 183;
			this->label3->Text = L"Nom personnel";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(22, 374);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(125, 20);
			this->label27->TabIndex = 179;
			this->label27->Text = L"montant total ttc";
			// 
			// textBox22_mntn_ttle_tva
			// 
			this->textBox22_mntn_ttle_tva->Location = System::Drawing::Point(20, 329);
			this->textBox22_mntn_ttle_tva->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox22_mntn_ttle_tva->Name = L"textBox22_mntn_ttle_tva";
			this->textBox22_mntn_ttle_tva->Size = System::Drawing::Size(200, 26);
			this->textBox22_mntn_ttle_tva->TabIndex = 178;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(454, 75);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(81, 20);
			this->label21->TabIndex = 167;
			this->label21->Text = L"nom client";
			// 
			// textBox17_nom_client
			// 
			this->textBox17_nom_client->Location = System::Drawing::Point(326, 100);
			this->textBox17_nom_client->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox17_nom_client->Name = L"textBox17_nom_client";
			this->textBox17_nom_client->Size = System::Drawing::Size(212, 26);
			this->textBox17_nom_client->TabIndex = 168;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(20, 305);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(128, 20);
			this->label26->TabIndex = 177;
			this->label26->Text = L"montant total tva";
			// 
			// textBox18_code_client
			// 
			this->textBox18_code_client->Location = System::Drawing::Point(339, 45);
			this->textBox18_code_client->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox18_code_client->Name = L"textBox18_code_client";
			this->textBox18_code_client->Size = System::Drawing::Size(200, 26);
			this->textBox18_code_client->TabIndex = 170;
			// 
			// textBox16_num_svc_client
			// 
			this->textBox16_num_svc_client->Location = System::Drawing::Point(20, 183);
			this->textBox16_num_svc_client->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox16_num_svc_client->Name = L"textBox16_num_svc_client";
			this->textBox16_num_svc_client->Size = System::Drawing::Size(200, 26);
			this->textBox16_num_svc_client->TabIndex = 166;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(15, 158);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(157, 20);
			this->label20->TabIndex = 165;
			this->label20->Text = L"numero service client";
			// 
			// textBox15_adress_societe
			// 
			this->textBox15_adress_societe->Location = System::Drawing::Point(20, 112);
			this->textBox15_adress_societe->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox15_adress_societe->Name = L"textBox15_adress_societe";
			this->textBox15_adress_societe->Size = System::Drawing::Size(200, 26);
			this->textBox15_adress_societe->TabIndex = 164;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(15, 88);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(121, 20);
			this->label23->TabIndex = 163;
			this->label23->Text = L"adresse societe";
			// 
			// textBox14_num_fact
			// 
			this->textBox14_num_fact->Location = System::Drawing::Point(20, 45);
			this->textBox14_num_fact->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox14_num_fact->Name = L"textBox14_num_fact";
			this->textBox14_num_fact->Size = System::Drawing::Size(200, 26);
			this->textBox14_num_fact->TabIndex = 162;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(20, 18);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(117, 20);
			this->label24->TabIndex = 161;
			this->label24->Text = L"numero facture";
			// 
			// tabPage_stock
			// 
			this->tabPage_stock->Controls->Add(this->textBox7);
			this->tabPage_stock->Controls->Add(this->label40);
			this->tabPage_stock->Controls->Add(this->button16);
			this->tabPage_stock->Controls->Add(this->button17);
			this->tabPage_stock->Controls->Add(this->button18);
			this->tabPage_stock->Controls->Add(this->button19);
			this->tabPage_stock->Controls->Add(this->label38);
			this->tabPage_stock->Controls->Add(this->textBox33_qte_article);
			this->tabPage_stock->Controls->Add(this->label39);
			this->tabPage_stock->Controls->Add(this->textBox32_nom_article);
			this->tabPage_stock->Controls->Add(this->label37);
			this->tabPage_stock->Controls->Add(this->textBox31_ref_article);
			this->tabPage_stock->Location = System::Drawing::Point(4, 29);
			this->tabPage_stock->Name = L"tabPage_stock";
			this->tabPage_stock->Size = System::Drawing::Size(1344, 597);
			this->tabPage_stock->TabIndex = 4;
			this->tabPage_stock->Text = L"Stock";
			this->tabPage_stock->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(581, 490);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(458, 70);
			this->textBox7->TabIndex = 168;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(577, 442);
			this->label40->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(74, 20);
			this->label40->TabIndex = 167;
			this->label40->Text = L"Message";
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(298, 371);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(181, 62);
			this->button16->TabIndex = 166;
			this->button16->Text = L"Enregistrer";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(298, 256);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(181, 62);
			this->button17->TabIndex = 165;
			this->button17->Text = L"Supprimer";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(298, 136);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(181, 67);
			this->button18->TabIndex = 164;
			this->button18->Text = L"Modifier";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(298, 21);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(181, 69);
			this->button19->TabIndex = 163;
			this->button19->Text = L"Nouveau";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(16, 198);
			this->label38->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(113, 20);
			this->label38->TabIndex = 162;
			this->label38->Text = L"quantite article";
			// 
			// textBox33_qte_article
			// 
			this->textBox33_qte_article->Location = System::Drawing::Point(22, 235);
			this->textBox33_qte_article->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox33_qte_article->Name = L"textBox33_qte_article";
			this->textBox33_qte_article->Size = System::Drawing::Size(200, 26);
			this->textBox33_qte_article->TabIndex = 161;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(16, 101);
			this->label39->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(86, 20);
			this->label39->TabIndex = 160;
			this->label39->Text = L"nom article";
			// 
			// textBox32_nom_article
			// 
			this->textBox32_nom_article->Location = System::Drawing::Point(22, 138);
			this->textBox32_nom_article->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox32_nom_article->Name = L"textBox32_nom_article";
			this->textBox32_nom_article->Size = System::Drawing::Size(200, 26);
			this->textBox32_nom_article->TabIndex = 159;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(16, 21);
			this->label37->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(123, 20);
			this->label37->TabIndex = 158;
			this->label37->Text = L"reference article";
			// 
			// textBox31_ref_article
			// 
			this->textBox31_ref_article->Location = System::Drawing::Point(22, 58);
			this->textBox31_ref_article->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox31_ref_article->Name = L"textBox31_ref_article";
			this->textBox31_ref_article->Size = System::Drawing::Size(200, 26);
			this->textBox31_ref_article->TabIndex = 157;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1365, 674);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabPage_personnel->ResumeLayout(false);
			this->tabPage_personnel->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage_client->ResumeLayout(false);
			this->tabPage_client->PerformLayout();
			this->tabPage_commande->ResumeLayout(false);
			this->tabPage_commande->PerformLayout();
			this->tabPage_facture->ResumeLayout(false);
			this->tabPage_facture->PerformLayout();
			this->tabPage_stock->ResumeLayout(false);
			this->tabPage_stock->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: void loadData(int index)
{
	// Mise à jour du cache bdd de la table de personne
	this->dspersonnel->Clear();
	this->dscommande->Clear();
	this->dsclient->Clear();
	this->dsfacture->Clear();
	this->dsstock->Clear();

	this->dspersonnel = this->processusPersonnel->listePersonnel("personnel");
	this->dscommande = this->processusCommande->listeCommande("commande");
	this->dsclient = this->processusClient->listeClient("client");
	this->dsfacture = this->processusFacture->listeFacture("facture");
	this->dsstock = this->processusStock->listeStock("Stock");

	this->rowsCount = this->dspersonnel->Tables["personnel"]->Rows->Count;
	this->rowsCount = this->dscommande->Tables["commande"]->Rows->Count;
	this->rowsCount = this->dsclient->Tables["client"]->Rows->Count;
	this->rowsCount = this->dsfacture->Tables["facture"]->Rows->Count;
	this->rowsCount = this->dsstock->Tables["Stock"]->Rows->Count;


	// Reset des champs graphiques de l'interface
	this->textBox_numero_client->Clear();
	this->textBox1_nom_client->Clear();
	this->textBox2_prenom_client->Clear();
	this->textBox3_date_client->Clear();
	this->textBox4_adresse_facturation->Clear();
	this->textBox5_adresse_livraison->Clear();
	this->textBox6_date_prem_achat->Clear();

	this->textBox13_num_personnel->Clear();
	this->textBox7_nom_perso->Clear();
	this->textBox8_prenom_perso->Clear();
	this->textBox9_sup_hier->Clear();
	this->textBox10_addr_perso->Clear();
	this->textBox11_date_embauch->Clear();

	this->textBox14_num_fact->Clear();
	this->textBox15_adress_societe->Clear();
	this->textBox16_num_svc_client->Clear();
	this->textBox17_nom_client->Clear();
	this->textBox18_code_client->Clear();
	this->textBox19_address_livr->Clear();
	this->textBox20_address_fact->Clear();
	this->textBox21_mntan_ttl_ht->Clear();
	this->textBox22_mntn_ttle_tva->Clear();
	this->textBox23_montan_ttl_ttc->Clear();
	this->textBox24_total_article->Clear();

	this->textBox25_ref_comm->Clear();
	this->textBox26_date_livr->Clear();
	this->textBox27_date_emiss->Clear();
	this->textBox28_date_paie->Clear();
	this->textBox29_moyen_paie->Clear();
	this->textBox30_date_soldem->Clear();

	this->textBox31_ref_article->Clear();
	this->textBox32_nom_article->Clear();
	this->textBox33_qte_article->Clear();


	// On verifie que la liste retournée n'est pas vide
	if (rowsCount == 0)
		return;


	// On remplit l'interface avec les informations de la personne index de la bdd
	this->textBox_numero_client->Text = Convert::ToString(this->dsclient->Tables["client"]->Rows[this->index]->ItemArray[0]);
	this->textBox1_nom_client->Text = Convert::ToString(this->dsclient->Tables["client"]->Rows[this->index]->ItemArray[1]);
	this->textBox2_prenom_client->Text = Convert::ToString(this->dsclient->Tables["client"]->Rows[this->index]->ItemArray[2]);
	this->textBox3_date_client->Text = Convert::ToString(this->dsclient->Tables["client"]->Rows[this->index]->ItemArray[3]);
	this->textBox4_adresse_facturation->Text = Convert::ToString(this->dsclient->Tables["client"]->Rows[this->index]->ItemArray[4]);
	this->textBox5_adresse_livraison->Text = Convert::ToString(this->dsclient->Tables["client"]->Rows[this->index]->ItemArray[5]);
	this->textBox6_date_prem_achat->Text = Convert::ToString(this->dsclient->Tables["client"]->Rows[this->index]->ItemArray[6]);


	this->textBox13_num_personnel->Text = Convert::ToString(this->dspersonnel->Tables["personnel"]->Rows[this->index]->ItemArray[0]);
	this->textBox7_nom_perso->Text = Convert::ToString(this->dspersonnel->Tables["personnel"]->Rows[this->index]->ItemArray[1]);
	this->textBox8_prenom_perso->Text = Convert::ToString(this->dspersonnel->Tables["personnel"]->Rows[this->index]->ItemArray[2]);
	this->textBox9_sup_hier->Text = Convert::ToString(this->dspersonnel->Tables["personnel"]->Rows[this->index]->ItemArray[3]);
	this->textBox10_addr_perso->Text = Convert::ToString(this->dspersonnel->Tables["personnel"]->Rows[this->index]->ItemArray[4]);
	this->textBox11_date_embauch->Text = Convert::ToString(this->dspersonnel->Tables["personnel"]->Rows[this->index]->ItemArray[5]);


	this->textBox14_num_fact->Text = Convert::ToString(this->dsfacture->Tables["facture"]->Rows[this->index]->ItemArray[0]);
	this->textBox15_adress_societe->Text = Convert::ToString(this->dsfacture->Tables["facture"]->Rows[this->index]->ItemArray[1]);
	this->textBox16_num_svc_client->Text = Convert::ToString(this->dsfacture->Tables["facture"]->Rows[this->index]->ItemArray[2]);
	this->textBox17_nom_client->Text = Convert::ToString(this->dsfacture->Tables["facture"]->Rows[this->index]->ItemArray[3]);
	this->textBox18_code_client->Text = Convert::ToString(this->dsclient->Tables["client"]->Rows[this->index]->ItemArray[4]);
	this->textBox19_address_livr->Text = Convert::ToString(this->dsfacture->Tables["facture"]->Rows[this->index]->ItemArray[5]);
	this->textBox20_address_fact->Text = Convert::ToString(this->dsfacture->Tables["facture"]->Rows[this->index]->ItemArray[6]);
	this->textBox21_mntan_ttl_ht->Text = Convert::ToString(this->dsfacture->Tables["facture"]->Rows[this->index]->ItemArray[7]);
	this->textBox22_mntn_ttle_tva->Text = Convert::ToString(this->dsfacture->Tables["facture"]->Rows[this->index]->ItemArray[8]);
	this->textBox23_montan_ttl_ttc->Text = Convert::ToString(this->dsfacture->Tables["facture"]->Rows[this->index]->ItemArray[9]);
	this->textBox24_total_article->Text = Convert::ToString(this->dsfacture->Tables["facture"]->Rows[this->index]->ItemArray[10]);


	this->textBox25_ref_comm->Text = Convert::ToString(this->dscommande->Tables["commande"]->Rows[this->index]->ItemArray[0]);
	this->textBox26_date_livr->Text = Convert::ToString(this->dscommande->Tables["commande"]->Rows[this->index]->ItemArray[1]);
	this->textBox27_date_emiss->Text = Convert::ToString(this->dscommande->Tables["commande"]->Rows[this->index]->ItemArray[2]);
	this->textBox28_date_paie->Text = Convert::ToString(this->dscommande->Tables["commande"]->Rows[this->index]->ItemArray[3]);
	this->textBox29_moyen_paie->Text = Convert::ToString(this->dscommande->Tables["commande"]->Rows[this->index]->ItemArray[4]);
	this->textBox30_date_soldem->Text = Convert::ToString(this->dscommande->Tables["commande"]->Rows[this->index]->ItemArray[5]);


	this->textBox31_ref_article->Text = Convert::ToString(this->dsstock->Tables["Stock"]->Rows[this->index]->ItemArray[0]);
	this->textBox32_nom_article->Text = Convert::ToString(this->dsstock->Tables["Stock"]->Rows[this->index]->ItemArray[1]);
	this->textBox33_qte_article->Text = Convert::ToString(this->dsstock->Tables["Stock"]->Rows[this->index]->ItemArray[2]);



	this->txt_message->Text = "Data chargées";
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	// Initialisation de l'interface graphique
	this->index = 0;
	this->mode = "RIEN";
	this->dspersonnel = gcnew Data::DataSet();
	this->dscommande = gcnew Data::DataSet();
	this->dsclient = gcnew Data::DataSet();
	this->dsstock = gcnew Data::DataSet();
	this->dsfacture = gcnew Data::DataSet();


	// Initialisation du gestionnaire de client
	this->processusPersonnel = gcnew NS_Svc::CL_svc_gestionServices();
	this->processusClient = gcnew NS_Svc::CL_svc_gestionServices();
	this->processusCommande = gcnew NS_Svc::CL_svc_gestionServices();
	this->processusStock = gcnew NS_Svc::CL_svc_gestionServices();
	this->processusFacture = gcnew NS_Svc::CL_svc_gestionServices();


	// Mise à jour de l'interface graphique avec les donnees initiales de la bdd
	this->loadData(this->index);

	this->txt_message->Text = "Data chargées";
}



private: System::Void button_nouveau_Click(System::Object^ sender, System::EventArgs^ e) {

		this->textBox_numero_client->Clear();
		this->textBox1_nom_client->Clear();
		this->textBox2_prenom_client->Clear();
		this->textBox3_date_client->Clear();
		this->textBox4_adresse_facturation->Clear();
		this->textBox5_adresse_livraison->Clear();
		this->textBox6_date_prem_achat->Clear();
		this->mode = "nouv";
		this->txt_message->Text = "Veuillez saisir les information du nouveau client et enregistrer";

	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	this->textBox13_num_personnel->Clear();
	this->textBox7_nom_perso->Clear();
	this->textBox8_prenom_perso->Clear();
	this->textBox9_sup_hier->Clear();
	this->textBox10_addr_perso->Clear();
	this->textBox11_date_embauch->Clear();
	this->mode = "nouv";
	this->textBox4->Text = "Veuillez saisir les information du nouveau personnel et enregistrer";
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

	this->textBox25_ref_comm->Clear();
	this->textBox26_date_livr->Clear();
	this->textBox27_date_emiss->Clear();
	this->textBox28_date_paie->Clear();
	this->textBox29_moyen_paie->Clear();
	this->textBox30_date_soldem->Clear();
	this->mode = "nouv";
	this->textBox5->Text = "Veuillez saisir les information de la nouvelle commande et enregistrer";

}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {

	this->textBox14_num_fact->Clear();
	this->textBox15_adress_societe->Clear();
	this->textBox16_num_svc_client->Clear();
	this->textBox17_nom_client->Clear();
	this->textBox18_code_client->Clear();
	this->textBox19_address_livr->Clear();
	this->textBox20_address_fact->Clear();
	this->textBox21_mntan_ttl_ht->Clear();
	this->textBox22_mntn_ttle_tva->Clear();
	this->textBox23_montan_ttl_ttc->Clear();
	this->textBox24_total_article->Clear();
	this->mode = "nouv";
	this->textBox6->Text = "Veuillez saisir les information de la nouvelle facture et enregistrer";
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {

	this->textBox31_ref_article->Clear();
	this->textBox32_nom_article->Clear();
	this->textBox33_qte_article->Clear();
	this->mode = "nouv";
	this->textBox7->Text = "Veuillez saisir les information du nouvel article et enregistrer";

}



private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "maj";
	this->txt_message->Text = "Veuillez modifier les nouvelles informations et enregistrer.";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "maj";
	this->textBox4->Text = "Veuillez modifier les nouvelles informations et enregistrer.";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "maj";
	this->textBox5->Text = "Veuillez modifier les nouvelles informations et enregistrer.";
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "maj";
	this->textBox6->Text = "Veuillez modifier les nouvelles informations et enregistrer.";
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "maj";
	this->textBox7->Text = "Veuillez modifier les nouvelles informations et enregistrer.";
}



private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "sup";
	this->txt_message->Text = "Veuillez confirmer la suppression en cours en enregistrant.";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "sup";
	this->textBox4->Text = "Veuillez confirmer la suppression en cours en enregistrant.";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "sup";
	this->textBox5->Text = "Veuillez confirmer la suppression en cours en enregistrant.";

}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "sup";
	this->textBox6->Text = "Veuillez confirmer la suppression en cours en enregistrant.";

}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "sup";
	this->textBox7->Text = "Veuillez confirmer la suppression en cours en enregistrant.";

}



private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->mode == "nouv")
	{
		int Id;
		Id = this->processusClient->ajouterClients(this->textBox1_nom_client->Text, this->textBox2_prenom_client->Text, this->textBox3_date_client->Text, this->textBox4_adresse_facturation->Text, this->textBox5_adresse_livraison->Text, this->textBox6_date_prem_achat->Text);
		this->txt_message->Text = "L'ID généré est le : " + Id + ". ";

	}
	else if (this->mode == "maj")
	{
		this->processusClient->modifierClients(Convert::ToInt32(this->textBox_numero_client->Text), this->textBox1_nom_client->Text, this->textBox2_prenom_client->Text, this->textBox3_date_client->Text, this->textBox4_adresse_facturation->Text, this->textBox5_adresse_livraison->Text, this->textBox6_date_prem_achat->Text);

	}
	else if (this->mode == "sup")
	{
		this->processusClient->supprimerClients(Convert::ToInt32(this->textBox_numero_client->Text));
	}

	this->index = 0;
	this->loadData(this->index);
	this->txt_message->Text += "Traitement terminé.";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Suivant le mode de saisie
	if (this->mode == "nouv")
	{
		int Id;
		Id = this->processusPersonnel->ajouterPersonnel(this->textBox7_nom_perso->Text, this->textBox8_prenom_perso->Text, this->textBox9_sup_hier->Text, this->textBox10_addr_perso->Text, this->textBox11_date_embauch->Text);
		this->textBox4->Text = "L'ID généré est le : " + Id + ". ";

	}
	else if (this->mode == "maj")
	{
		this->processusPersonnel->modifierPersonnel(Convert::ToInt32(this->textBox13_num_personnel->Text), this->textBox7_nom_perso->Text, this->textBox8_prenom_perso->Text, this->textBox9_sup_hier->Text, this->textBox10_addr_perso->Text, this->textBox11_date_embauch->Text);

	}
	else if (this->mode == "sup")
	{
		this->processusPersonnel->supprimerPersonnel(Convert::ToInt32(this->textBox13_num_personnel->Text));
	}

	this->index = 0;
	this->loadData(this->index);
	this->textBox4->Text += "Traitement terminé.";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	// Suivant le mode de saisie
	if (this->mode == "nouv")
	{
		int Id;
		Id = this->processusCommande->ajouterCommande(this->textBox26_date_livr->Text, this->textBox27_date_emiss->Text, this->textBox28_date_paie->Text, this->textBox29_moyen_paie->Text, this->textBox30_date_soldem->Text);
		this->textBox5->Text = "L'ID généré est le : " + Id + ". ";

	}
	else if (this->mode == "maj")
	{
		this->processusCommande->modifierCommande(Convert::ToInt32(this->textBox25_ref_comm->Text), this->textBox26_date_livr->Text, this->textBox27_date_emiss->Text, this->textBox28_date_paie->Text, this->textBox29_moyen_paie->Text, this->textBox30_date_soldem->Text);

	}
	else if (this->mode == "sup")
	{
		this->processusClient->supprimerCommande(Convert::ToInt32(this->textBox25_ref_comm->Text));
	}

	this->index = 0;
	this->loadData(this->index);
	this->textBox5->Text += "Traitement terminé.";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	// Suivant le mode de saisie
	if (this->mode == "nouv")
	{
		int Id;
		Id = this->processusFacture->ajouterFactures(this->textBox15_adress_societe->Text, this->textBox16_num_svc_client->Text, this->textBox17_nom_client->Text, this->textBox18_code_client->Text, this->textBox19_address_livr->Text, this->textBox20_address_fact->Text, this->textBox21_mntan_ttl_ht->Text, this->textBox22_mntn_ttle_tva->Text, this->textBox23_montan_ttl_ttc->Text, this->textBox24_total_article->Text);
		this->textBox6->Text = "L'ID généré est le : " + Id + ". ";

	}
	else if (this->mode == "maj")
	{
		this->processusFacture->modifierFactures(Convert::ToInt32(this->textBox14_num_fact->Text), this->textBox15_adress_societe->Text, this->textBox16_num_svc_client->Text, this->textBox17_nom_client->Text, this->textBox18_code_client->Text, this->textBox19_address_livr->Text, this->textBox20_address_fact->Text, this->textBox21_mntan_ttl_ht->Text, this->textBox22_mntn_ttle_tva->Text, this->textBox23_montan_ttl_ttc->Text, this->textBox24_total_article->Text);

	}
	else if (this->mode == "sup")
	{
		this->processusFacture->supprimerFactures(Convert::ToInt32(this->textBox14_num_fact->Text));
	}

	this->index = 0;
	this->loadData(this->index);
	this->textBox6->Text += "Traitement terminé.";
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	// Suivant le mode de saisie
	if (this->mode == "nouv")
	{
		int Id;
		Id = this->processusStock->ajouterArticles(this->textBox32_nom_article->Text, this->textBox33_qte_article->Text);
		this->textBox7->Text = "L'ID généré est le : " + Id + ". ";

	}
	else if (this->mode == "maj")
	{
		this->processusStock->modifierArticles(Convert::ToInt32(this->textBox31_ref_article->Text), this->textBox32_nom_article->Text, this->textBox33_qte_article->Text);

	}
	else if (this->mode == "sup")
	{
		this->processusClient->supprimerArticles(Convert::ToInt32(this->textBox31_ref_article->Text));
	}

	this->index = 0;
	this->loadData(this->index);
	this->textBox7->Text += "Traitement terminé.";
}
private: System::Void button1_first_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_end_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_next_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
