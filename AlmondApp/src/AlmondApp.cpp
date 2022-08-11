#include "Almond/Application.h"
#include "Almond/EntryPoint.h"

class ExampleLayer : public Almond::Layer
{
public:
	virtual void OnUIRender() override
	{
		ImGui::Begin("Hello");
		ImGui::Button("Button");
		ImGui::End();

		ImGui::ShowDemoWindow();
	}
};

Almond::Application* Almond::CreateApplication(int argc, char** argv)
{
	Almond::ApplicationSpecification spec;
	spec.Name = "Almond Example";

	Almond::Application* app = new Almond::Application(spec);
	app->PushLayer<ExampleLayer>();
	app->SetMenubarCallback([app]()
	{
		if (ImGui::BeginMenu("File"))
		{
			if (ImGui::MenuItem("Exit"))
			{
				app->Close();
			}
			ImGui::EndMenu();
		}
	});
	return app;
}