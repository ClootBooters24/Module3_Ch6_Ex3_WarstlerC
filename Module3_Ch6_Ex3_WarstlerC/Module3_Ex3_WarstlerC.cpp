#include <iostream>
using namespace std;

int main()
{

	double rate = 0.0;
	char code = 0;
	switch (code)
	{
	case '1': {
		rate = 0.02;
		break; }
	case '2': {
		}
	case '3': {

		}
	case '4': {
		rate = 0.05;
		break;
		}
	case '5': {
		rate = 0.1;
		break;
		}
	case '6': {
		break;
		}
	case '7':{
		rate = 0.15;
		break;
		}
	default: {
		rate = -1;
		break;
		}
	}


}
