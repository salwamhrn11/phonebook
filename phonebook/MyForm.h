#pragma once
#using <System.Windows.Forms.dll>
#using <System.Drawing.dll>
#include "RoundedTextBox.h"

namespace phonebook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			allContacts = gcnew System::Collections::Generic::List<Contact^>();
			PopulateContactList();
			tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::NavigateToHomePage);


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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TextBox^ txtSearch;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAddContact;

	private: System::Windows::Forms::ListBox^ lstContacts;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::PictureBox^ picProfile;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtPhone;

	private: System::Windows::Forms::Button^ btnUploadPicture;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Button^ btnUploadAddContactPic;



	private: System::Windows::Forms::PictureBox^ picProfileAdd;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnDeleteAdd;
	private: System::Windows::Forms::Button^ btnSaveAdd;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtPhoneAdd;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtNameAdd;





	protected:

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnAddContact = (gcnew System::Windows::Forms::Button());
			this->lstContacts = (gcnew System::Windows::Forms::ListBox());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnUploadPicture = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->picProfile = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->btnDeleteAdd = (gcnew System::Windows::Forms::Button());
			this->btnSaveAdd = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtPhoneAdd = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtNameAdd = (gcnew System::Windows::Forms::TextBox());
			this->btnUploadAddContactPic = (gcnew System::Windows::Forms::Button());
			this->picProfileAdd = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picProfile))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picProfileAdd))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(-5, -30);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(446, 730);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btnAddContact);
			this->tabPage1->Controls->Add(this->lstContacts);
			this->tabPage1->Controls->Add(this->txtSearch);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(438, 669);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// btnAddContact
			// 
			this->btnAddContact->BackColor = System::Drawing::Color::MidnightBlue;
			this->btnAddContact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddContact->Font = (gcnew System::Drawing::Font(L"SF UI Text", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddContact->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnAddContact->Location = System::Drawing::Point(250, 616);
			this->btnAddContact->Name = L"btnAddContact";
			this->btnAddContact->Size = System::Drawing::Size(170, 45);
			this->btnAddContact->TabIndex = 3;
			this->btnAddContact->Text = L"Add Contact";
			this->btnAddContact->UseVisualStyleBackColor = false;
			this->btnAddContact->Click += gcnew System::EventHandler(this, &MyForm::btnAddContact_Click);
			// 
			// lstContacts
			// 
			this->lstContacts->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lstContacts->Font = (gcnew System::Drawing::Font(L"SF UI Text", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstContacts->FormattingEnabled = true;
			this->lstContacts->ItemHeight = 60;
			this->lstContacts->Location = System::Drawing::Point(14, 133);
			this->lstContacts->Margin = System::Windows::Forms::Padding(30);
			this->lstContacts->Name = L"lstContacts";
			this->lstContacts->Size = System::Drawing::Size(406, 456);
			this->lstContacts->TabIndex = 2;
			this->lstContacts->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::lstContacts_SelectedIndexChanged);
			this->lstContacts->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->lstContacts->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &MyForm::lstContacts_DrawItem);

			// 
			// txtSearch
			// 
			this->txtSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"SF UI Text", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSearch->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->txtSearch->Location = System::Drawing::Point(11, 79);
			this->txtSearch->Margin = System::Windows::Forms::Padding(10);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(410, 31);
			this->txtSearch->TabIndex = 1;
			this->txtSearch->Text = L"Search";
			this->txtSearch->GotFocus += gcnew System::EventHandler(this, &MyForm::txtSearch_GotFocus);
			this->txtSearch->LostFocus += gcnew System::EventHandler(this, &MyForm::txtSearch_LostFocus);
			this->txtSearch->TextChanged += gcnew System::EventHandler(this, &MyForm::txtSearch_TextChanged);

			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"SF UI Text", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(115, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Phonebook";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage2->Controls->Add(this->btnDelete);
			this->tabPage2->Controls->Add(this->btnSave);
			this->tabPage2->Controls->Add(this->btnUploadPicture);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->txtPhone);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->txtName);
			this->tabPage2->Controls->Add(this->picProfile);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(438, 669);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::DarkRed;
			this->btnDelete->FlatAppearance->BorderSize = 0;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"SF UI Text", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDelete->Location = System::Drawing::Point(228, 391);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(151, 48);
			this->btnDelete->TabIndex = 7;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::btnDelete_Click);
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::MidnightBlue;
			this->btnSave->FlatAppearance->BorderSize = 0;
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"SF UI Text", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSave->Location = System::Drawing::Point(34, 391);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(151, 48);
			this->btnSave->TabIndex = 6;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &MyForm::btnSave_Click);
			// 
			// btnUploadPicture
			// 
			this->btnUploadPicture->BackColor = System::Drawing::Color::Transparent;
			this->btnUploadPicture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnUploadPicture->FlatAppearance->BorderSize = 0;
			this->btnUploadPicture->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUploadPicture->Font = (gcnew System::Drawing::Font(L"SF UI Text", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUploadPicture->ForeColor = System::Drawing::Color::MidnightBlue;
			this->btnUploadPicture->Location = System::Drawing::Point(135, 170);
			this->btnUploadPicture->Name = L"btnUploadPicture";
			this->btnUploadPicture->Size = System::Drawing::Size(162, 60);
			this->btnUploadPicture->TabIndex = 5;
			this->btnUploadPicture->Text = L"Upload Picture";
			this->btnUploadPicture->UseVisualStyleBackColor = false;
			this->btnUploadPicture->Click += gcnew System::EventHandler(this, &MyForm::btnUploadPicture_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"SF UI Text", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 309);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Phone Number";
			// 
			// txtPhone
			// 
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"SF UI Text", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPhone->Location = System::Drawing::Point(181, 306);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(230, 29);
			this->txtPhone->TabIndex = 3;
			this->txtPhone->TextChanged += gcnew System::EventHandler(this, &MyForm::txtPhone_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"SF UI Text", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 258);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Name";
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"SF UI Text", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->Location = System::Drawing::Point(181, 253);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(230, 29);
			this->txtName->TabIndex = 1;
			this->txtName->TextChanged += gcnew System::EventHandler(this, &MyForm::txtName_TextChanged);
			// 
			// picProfile
			// 
			this->picProfile->Location = System::Drawing::Point(135, 44);
			this->picProfile->Name = L"picProfile";
			this->picProfile->Size = System::Drawing::Size(162, 120);
			this->picProfile->TabIndex = 0;
			this->picProfile->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage3->Controls->Add(this->btnDeleteAdd);
			this->tabPage3->Controls->Add(this->btnSaveAdd);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->txtPhoneAdd);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->txtNameAdd);
			this->tabPage3->Controls->Add(this->btnUploadAddContactPic);
			this->tabPage3->Controls->Add(this->picProfileAdd);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(438, 697);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			// 
			// btnDeleteAdd
			// 
			this->btnDeleteAdd->BackColor = System::Drawing::Color::DarkRed;
			this->btnDeleteAdd->FlatAppearance->BorderSize = 0;
			this->btnDeleteAdd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDeleteAdd->Font = (gcnew System::Drawing::Font(L"SF UI Text", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteAdd->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDeleteAdd->Location = System::Drawing::Point(232, 430);
			this->btnDeleteAdd->Name = L"btnDeleteAdd";
			this->btnDeleteAdd->Size = System::Drawing::Size(151, 48);
			this->btnDeleteAdd->TabIndex = 13;
			this->btnDeleteAdd->Text = L"Delete";
			this->btnDeleteAdd->UseVisualStyleBackColor = false;
			// 
			// btnSaveAdd
			// 
			this->btnSaveAdd->BackColor = System::Drawing::Color::MidnightBlue;
			this->btnSaveAdd->FlatAppearance->BorderSize = 0;
			this->btnSaveAdd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSaveAdd->Font = (gcnew System::Drawing::Font(L"SF UI Text", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSaveAdd->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSaveAdd->Location = System::Drawing::Point(38, 430);
			this->btnSaveAdd->Name = L"btnSaveAdd";
			this->btnSaveAdd->Size = System::Drawing::Size(151, 48);
			this->btnSaveAdd->TabIndex = 12;
			this->btnSaveAdd->Text = L"Save";
			this->btnSaveAdd->UseVisualStyleBackColor = false;
			this->btnSaveAdd->Click += gcnew System::EventHandler(this, &MyForm::btnSaveAdd_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"SF UI Text", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(24, 348);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(144, 21);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Phone Number";
			// 
			// txtPhoneAdd
			// 
			this->txtPhoneAdd->Font = (gcnew System::Drawing::Font(L"SF UI Text", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPhoneAdd->Location = System::Drawing::Point(185, 345);
			this->txtPhoneAdd->Name = L"txtPhoneAdd";
			this->txtPhoneAdd->Size = System::Drawing::Size(230, 29);
			this->txtPhoneAdd->TabIndex = 10;
			this->txtPhoneAdd->TextChanged += gcnew System::EventHandler(this, &MyForm::txtPhoneAdd_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"SF UI Text", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(24, 297);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 21);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Name";
			// 
			// txtNameAdd
			// 
			this->txtNameAdd->Font = (gcnew System::Drawing::Font(L"SF UI Text", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNameAdd->Location = System::Drawing::Point(185, 297);
			this->txtNameAdd->Name = L"txtNameAdd";
			this->txtNameAdd->Size = System::Drawing::Size(230, 29);
			this->txtNameAdd->TabIndex = 8;
			this->txtNameAdd->TextChanged += gcnew System::EventHandler(this, &MyForm::txtNameAdd_TextChanged);
			// 
			// btnUploadAddContactPic
			// 
			this->btnUploadAddContactPic->BackColor = System::Drawing::Color::Transparent;
			this->btnUploadAddContactPic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnUploadAddContactPic->FlatAppearance->BorderSize = 0;
			this->btnUploadAddContactPic->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUploadAddContactPic->Font = (gcnew System::Drawing::Font(L"SF UI Text", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUploadAddContactPic->ForeColor = System::Drawing::Color::MidnightBlue;
			this->btnUploadAddContactPic->Location = System::Drawing::Point(134, 210);
			this->btnUploadAddContactPic->Name = L"btnUploadAddContactPic";
			this->btnUploadAddContactPic->Size = System::Drawing::Size(162, 60);
			this->btnUploadAddContactPic->TabIndex = 7;
			this->btnUploadAddContactPic->Text = L"Upload Picture";
			this->btnUploadAddContactPic->UseVisualStyleBackColor = false;
			this->btnUploadAddContactPic->Click += gcnew System::EventHandler(this, &MyForm::btnUploadAddContactPic_Click);
			// 
			// picProfileAdd
			// 
			this->picProfileAdd->Location = System::Drawing::Point(134, 84);
			this->picProfileAdd->Name = L"picProfileAdd";
			this->picProfileAdd->Size = System::Drawing::Size(162, 120);
			this->picProfileAdd->TabIndex = 6;
			this->picProfileAdd->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"SF UI Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(132, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 29);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Add Contact";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(436, 699);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picProfile))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picProfileAdd))->EndInit();
			this->ResumeLayout(false);

		}

		ref class Contact {
		public:
			String^ Name;
			String^ PhoneNumber;
			System::Drawing::Image^ ProfilePicture;

			// constructor
			Contact(String^ name, String^ phoneNumber, System::Drawing::Image^ profilePicture) {
				Name = name;
				PhoneNumber = phoneNumber;
				ProfilePicture = profilePicture;
			}
			virtual String^ ToString() override {
				return Name + " (" + PhoneNumber + ")";
			}
		};

#pragma endregion

	private: System::Collections::Generic::List<Contact^>^ allContacts;

	private: System::Void txtName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ name = txtName->Text; 

		//disable the save button if the name is empty or if the name already exists in the contact list
		bool nameExists = false;
		for (int i = 0; i < lstContacts->Items->Count; ++i) {
			Contact^ existingContact = dynamic_cast<Contact^>(lstContacts->Items[i]);
			if (existingContact != nullptr && existingContact->Name == name) {
				nameExists = true;
				break;
			}
		}
		//check if both name and phone are valid
		bool canSave = !String::IsNullOrEmpty(name) && !nameExists && !String::IsNullOrEmpty(txtPhone->Text); // Use txtPhone for phone number
		btnSave->Enabled = canSave;
	}



	private: System::Void txtSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txtSearch->Text == "Search") {
			return; // Skip logic if the placeholder is present
		}

		String^ searchQuery = txtSearch->Text->ToLower()->Trim();

		// if the search query is empty, display all contacts
		if (String::IsNullOrWhiteSpace(searchQuery)) {
			PopulateContactList();
			return;
		}

		// filter and display matching contacts
		lstContacts->Items->Clear();
		for each (Contact ^ contact in allContacts) {
			if (contact->Name->ToLower()->Contains(searchQuery) || contact->PhoneNumber->Contains(searchQuery)) {
				lstContacts->Items->Add(contact);
			}
		}
	}

	private: System::Void NavigateToHomePage(System::Object^ sender, System::EventArgs^ e) {
		//check if the selected tab is the homepage tab
		if (tabControl1->SelectedTab == tabPage1) {
			txtSearch->Text = "Search";
			txtSearch->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			PopulateContactList();
		}
	}

	private: System::Void PopulateContactList() {
		lstContacts->Items->Clear(); 
		for each (Contact ^ contact in allContacts) {
			lstContacts->Items->Add(contact); //add all contacts from the backup list
		}
	}

	private: System::Void lstContacts_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (lstContacts->SelectedItem != nullptr) {
			Contact^ selectedContact = dynamic_cast<Contact^>(lstContacts->SelectedItem);
			if (selectedContact != nullptr) {
				txtName->Text = selectedContact->Name;
				txtPhone->Text = selectedContact->PhoneNumber;
				picProfile->Image = selectedContact->ProfilePicture;
				tabControl1->SelectedTab = tabPage2;
			}
			else {
				MessageBox::Show("Error: Selected item is not a valid contact.");
			}
		}
	}

	private: System::Void btnAddContact_Click(System::Object^ sender, System::EventArgs^ e) {
		//clear the Add Contact fields
		txtNameAdd->Text = "";
		txtPhoneAdd->Text = "";
		picProfileAdd->Image = nullptr;

		tabControl1->SelectedTab = tabPage3;
	}
	private: System::Void btnUploadPicture_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lstContacts->SelectedIndex == -1) {
			MessageBox::Show("Please select a contact to upload a picture.");
			return;
		}

		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "Image Files|*.png;*.jpg;*.jpeg";

		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ filePath = openFileDialog->FileName;

			//load the image
			System::Drawing::Image^ profileImage = Image::FromFile(filePath);

			//assign the image to the selected contact
			Contact^ selectedContact = dynamic_cast<Contact^>(lstContacts->SelectedItem);
			if (selectedContact != nullptr) {
				selectedContact->ProfilePicture = profileImage;

				//refresh the displayed list to show the updated profile picture
				lstContacts->Refresh();
			}
		}
	}

	private: System::Void btnUploadAddContactPic_Click(System::Object ^ sender, System::EventArgs ^ e) {
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "Image Files|*.png;*.jpg;*.jpeg";

		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ filePath = openFileDialog->FileName;

			//load the image
			System::Drawing::Image^ profileImage = Image::FromFile(filePath);

			//display the selected image in a preview box
			picProfileAdd->Image = profileImage;
		}
	}

	private: System::Void lstContacts_DrawItem(System::Object^ sender, System::Windows::Forms::DrawItemEventArgs^ e) {
		//ensure the index is valid
		if (e->Index < 0 || e->Index >= lstContacts->Items->Count) {
			return;
		}

		//get the contact item
		Contact^ contact = dynamic_cast<Contact^>(lstContacts->Items[e->Index]);
		if (contact == nullptr) {
			return;
		}

		//define dimensions for the profile picture
		int pictureSize = 50; 
		int padding = 10;   

		//define the rectangle for the profile picture
		System::Drawing::Rectangle pictureRect = System::Drawing::Rectangle(
			e->Bounds.Left + padding,
			e->Bounds.Top + (e->Bounds.Height - pictureSize) / 2,
			pictureSize,
			pictureSize
		);

		//draw the circular profile picture
		if (contact->ProfilePicture != nullptr) {
			GraphicsPath^ path = gcnew GraphicsPath();
			path->AddEllipse(pictureRect);

			System::Drawing::Region^ oldClip = e->Graphics->Clip;
			e->Graphics->SetClip(path);
			e->Graphics->DrawImage(contact->ProfilePicture, pictureRect);
			e->Graphics->Clip = oldClip;

			delete path;
		}
		else {
			//draw a placeholder circle for the profile picture if none exists
			e->Graphics->FillEllipse(System::Drawing::Brushes::Gray, pictureRect);
		}

		String^ displayText = contact->Name + " (" + contact->PhoneNumber + ")";
		e->Graphics->DrawString(
			displayText,
			e->Font,
			gcnew SolidBrush(e->ForeColor),
			e->Bounds.Left + pictureSize + (2 * padding),
			e->Bounds.Top + padding
		);

		e->Graphics->DrawLine(
			System::Drawing::Pens::LightGray,
			e->Bounds.Left,
			e->Bounds.Bottom - 1,
			e->Bounds.Right,
			e->Bounds.Bottom - 1
		);
	}

	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lstContacts->SelectedIndex != -1) {
			Contact^ selectedContact = dynamic_cast<Contact^>(lstContacts->SelectedItem);
			if (selectedContact != nullptr) {
				selectedContact->Name = txtName->Text;
				selectedContact->PhoneNumber = txtPhone->Text;
				lstContacts->Items[lstContacts->SelectedIndex] = selectedContact;
				tabControl1->SelectedTab = tabPage1;
			}
			else {
				MessageBox::Show("Error: Selected item is not a valid contact.");
			}
		}
		else {
			MessageBox::Show("Please select a contact to save.");
		}
	}

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int selectedIndex = lstContacts->SelectedIndex;

		//check if a contact is selected
		if (selectedIndex != -1) {
			//retrieve the selected contact
			Contact^ selectedContact = dynamic_cast<Contact^>(lstContacts->SelectedItem);

			//confirmation dialog
			System::Windows::Forms::DialogResult result = MessageBox::Show(
				"Are you sure you want to delete this contact?",
				"Delete Contact",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question
			);

			//user confirms deletion
			if (result == System::Windows::Forms::DialogResult::Yes) {
				allContacts->Remove(selectedContact);
				lstContacts->Items->RemoveAt(selectedIndex);
				PopulateContactList();
				tabControl1->SelectedTab = tabPage1;

			}
		}
		else {
			MessageBox::Show("Please select a contact to delete.");
		}


	}

	private: System::Void txtNameAdd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ name = txtName->Text;

		//disable save button if name is empty or if the name already exists in the contact list
		bool nameExists = false;
		for (int i = 0; i < lstContacts->Items->Count; ++i) {
			if (lstContacts->Items[i]->ToString() == name) {
				nameExists = true;
				break;
			}
		}

		if (String::IsNullOrEmpty(name) || nameExists) {
			btnSave->Enabled = false;
		}
		else {
			btnSave->Enabled = true;
		}
	}

	private: System::Void txtPhoneAdd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ phone = txtPhoneAdd->Text;

		//ensure the phone number contains only digits and has at least 10 digits
		bool isValid = true;

		//check if the phone number is valid
		if (phone->Length < 10) {
			isValid = false;
		}

		//enable or disable the save button based on validation
		if (String::IsNullOrEmpty(txtNameAdd->Text) || !isValid) {
			btnSave->Enabled = false;
		}
		else {
			btnSave->Enabled = true;
		}
	}

	private: System::Void txtSearch_GotFocus(System::Object^ sender, System::EventArgs^ e) {
		//if the placeholder text ("Search") is present, clear it
		if (txtSearch->Text == "Search") {
			txtSearch->Text = "";
			txtSearch->ForeColor = System::Drawing::Color::Black;
		}
	}

	private: System::Void txtSearch_LostFocus(System::Object^ sender, System::EventArgs^ e) {
		//if the search box is empty, restore the placeholder text
		if (String::IsNullOrWhiteSpace(txtSearch->Text)) {
			txtSearch->Text = "Search";
			txtSearch->ForeColor = System::Drawing::SystemColors::ControlDarkDark; 
			PopulateContactList();
		}
	}

	private: System::Void txtPhone_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//check if both name and phone are valid
		bool canSave = !String::IsNullOrEmpty(txtName->Text) && !String::IsNullOrEmpty(txtPhone->Text);
		//disable save if either the name or phone is empty
		btnSave->Enabled = canSave;
	}

	private: System::Void btnSaveAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = txtNameAdd->Text;
		String^ phone = txtPhoneAdd->Text;
		System::Drawing::Image^ profileImage = picProfileAdd->Image;

		//validate name and phone number
		if (String::IsNullOrWhiteSpace(name) || String::IsNullOrWhiteSpace(phone)) {
			MessageBox::Show("Name and phone number cannot be empty.");
			return;
		}

		for each (wchar_t c in phone) {
			if (!Char::IsDigit(c)) {
				MessageBox::Show("Phone number must contain only digits.");
				return;
			}
		}

		if (phone->Length < 10) {
			MessageBox::Show("Phone number must be at least 10 characters.");
			return;
		}

		//create a new contact object with the profile picture
		Contact^ newContact = gcnew Contact(name, phone, profileImage);
		allContacts->Add(newContact);
		PopulateContactList();

		//clear input fields
		txtNameAdd->Text = "";
		txtPhoneAdd->Text = "";
		picProfileAdd->Image = nullptr;

		tabControl1->SelectedTab = tabPage1;
	}
};
}