#pragma once

#ifndef APP_FOUR_H_
#define APP_FOUR_H_

#include "resource.h"

const char g_szClassName[] = "myWindowClass";
const char g_szChildClassName[] = "myMDIChildWindowClass";

#define IDC_MAIN_MDI	101
#define IDC_MAIN_TOOL	102
#define IDC_MAIN_STATUS	103

#define IDC_CHILD_EDIT	101

#define ID_MDI_FIRSTCHILD 50000

HWND g_hMDIClient = NULL;
HWND g_hMainWindow = NULL;

#endif  // APP_FOUR_H_
