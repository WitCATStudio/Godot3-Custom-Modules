#include "register_types.h"
#include "class_db.h"
#include "modtest.h"
#include "modtest_editor.h"

#define TOOLS_ENABLED 1

void register_modtest_types() {

    ClassDB::register_class<ModTest>();
    
    #ifdef TOOLS_ENABLED
    EditorPlugins::add_by_type<modtest_editor_plugin>();
    #endif
}

void unregister_modtest_types() {
   //nothing to do here
}
