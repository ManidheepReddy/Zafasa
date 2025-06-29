#include <Zafasa.h>


class Sandbox : public Zafasa::Application
{
	public:
	Sandbox()
	{
	}
	~Sandbox()
	{
	}
};

Zafasa::Application* Zafasa::CreateApplication()
{
	return new Sandbox();
}