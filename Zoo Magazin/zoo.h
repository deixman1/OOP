#pragma once
typedef unsigned int ui;
namespace p {
	class zoo
	{
	private:
		char* Ziv;
		char* Pol;
		char* name;
		ui money;
		ui score;
	public:
		zoo(void);
		void setZiv(char*);
		char* getZiv();
		void setPol(char*);
		char* getPol();
		void setname(char*);
		char* getname();
		ui setmoney(ui);
		ui getmoney();
		ui getscore();
		ui setscore(ui);
		~zoo(void);
	};
}
