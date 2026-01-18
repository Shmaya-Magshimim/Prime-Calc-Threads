#include "Threads.h"

void I_Love_Threads()
{
	std::string text = "I Love Threads";
	for (int i = 0; i < text.size(); i++)
	{
		std::cout << text[i] << std::endl;
	}
}

void call_I_Love_Threads()
{
	std::thread iLoveThread(I_Love_Threads);

}

