#pragma once

#include "editor/editor_plugin.h"
#include "editor/editor_node.h"
#include "editor/pane_drag.h"

class ModtestEditor : public VBoxContainer {
  GDCLASS(ModtestEditor, VBoxContainer);

public:
  ModtestEditor(){}
  ModtestEditor(EditorNode * p_editor);


private:
  VBoxContainer * container;
  Label* label;
  EditorNode* _editor;
};



class modtest_editor_plugin : public EditorPlugin
{
  GDCLASS(modtest_editor_plugin, EditorPlugin);

public:
  modtest_editor_plugin(EditorNode *p_editor);
  ~modtest_editor_plugin();

  virtual void make_visible(bool isVisible);
  virtual void edit(Object *p_node);
  virtual bool handles(Object *p_node) const;

private:
  EditorNode * _editor;
  ModtestEditor* modtestEditor;
};
