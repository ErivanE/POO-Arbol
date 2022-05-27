#include "std_lib_facilities.h"
#include "Token.h"
#include "Token_stream.h"

int main() {
	try{
		double val = 0;
		Token_stream ts;
		while (std::cin) {
			Token t = ts.get();
			if (t.kind == 'q')break;
			if (t.kind == ';') {
				std::cout << "=" << val << std::endl;
			}
			else {
				ts.putback(t);		
			}
			val = expression();

		}
	}
	catch (std::invalid_argument e)
	{

	}
}
