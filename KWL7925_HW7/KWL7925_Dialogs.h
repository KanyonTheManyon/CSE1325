#include <gtkmm.h>
#include <string>

class Dialogs {

public: 
	static std::string input(std::string msg, std::string title, std::string default_text = "", std::string cancel_text = "CANCEL");
};
