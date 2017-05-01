#include "modtest_editor.h"
#include "editor/plugins/canvas_item_editor_plugin.h"
#include "editor/editor_settings.h"

#include "scene/main/viewport.h"

#include <iostream>


ModtestEditor::ModtestEditor(EditorNode* p_editor){
  std::cout << "New Modtest Editor" << std::endl;

  this->set_size(Size2(600, 600));
  label = new Label();
  label->set_text("Hello World");
  this->add_child(label);

  //p_editor->add_child(this);
  p_editor->get_scene_root()->add_child(this);
  _editor = p_editor;
  
  this->hide();
}


// **************************** PLUGIN BEGIN ********************************************

modtest_editor_plugin::modtest_editor_plugin(EditorNode * p_editor)
{
  _editor = p_editor;
  modtestEditor = memnew(ModtestEditor(_editor));
  
  std::cout << "Editor" << std::endl;
  
}


modtest_editor_plugin::~modtest_editor_plugin()
{
}


void modtest_editor_plugin::make_visible(bool isVisible){
  std::cout << "Make visible" << std::endl;
  if (isVisible){
    std::cout << "Showing" << std::endl;
    modtestEditor->show();
  }
  else{
    std::cout << "Hiding" << std::endl;
    modtestEditor->hide();
  }
}

void modtest_editor_plugin::edit(Object *p_object) {
  std::cout << "Edit" << std::endl;
}

bool modtest_editor_plugin::handles(Object *p_object) const {

//  return p_object->is_type("ModTest");
}