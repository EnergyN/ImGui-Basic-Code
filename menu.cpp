void gui_builder0()
{
ImGui::SetNextWindowSize({424.f,283.f});

ImGui::Begin( "Basic ImGui");
ImGui::SetCursorPos({12.f,29.f});
ImGui::Checkbox("Bunnyhop", &the_bool);
ImGui::SetCursorPos({12.f,81.f});
ImGui::Checkbox("Radarhack", &the_bool);
ImGui::SetCursorPos({12.f,56.f});
ImGui::Checkbox("ESP", &the_bool);
ImGui::SetCursorPos({297.f,257.f});
ImGui::Text("Basic Gui");


ImGui::End();
}


