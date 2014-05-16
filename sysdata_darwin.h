/* 12 may 2014 */

//#include "common_darwin.h"

extern void addControl(id, id);
extern void controlShow(id);
extern void controlHide(id);
extern void applyStandardControlFont(id);
extern id makeWindow(id);
extern void windowShow(id);
extern void windowHide(id);
extern void windowSetTitle(id, id);
extern id windowTitle(id);
extern id makeButton(void);
extern void buttonSetTargetAction(id, id);
extern void buttonSetText(id, id);
extern id buttonText(id);
extern id makeCheckbox(void);
extern id makeCombobox(BOOL);
extern id comboboxText(id, BOOL);
extern void comboboxAppend(id, BOOL, id);
extern void comboboxInsertBefore(id, BOOL, id, intptr_t);
extern intptr_t comboboxSelectedIndex(id);
extern void comboboxDelete(id, intptr_t);
extern intptr_t comboboxLen(id);
extern void comboboxSelectIndex(id, BOOL, intptr_t);
extern id makeLineEdit(BOOL);		// TODO I accidentally left this as taking no arguments and clang didn't complain when compiling sysdata_darwin.m?!
extern void lineeditSetText(id, id);
extern id lineeditText(id);
extern id makeLabel(void);
extern id makeProgressBar(void);
extern void setRect(id, intptr_t, intptr_t, intptr_t, intptr_t);
extern BOOL isCheckboxChecked(id);
extern void windowSetContentSize(id, intptr_t, intptr_t);
extern void setProgress(id, intptr_t);
extern void setAreaSize(id, intptr_t, intptr_t);