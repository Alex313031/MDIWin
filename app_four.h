#pragma once

#ifndef APP_FOUR_H_
#define APP_FOUR_H_

#include <tchar.h>
#include "resource.h"

const TCHAR g_szClassName[] = _T("myWindowClass");
const TCHAR g_szChildClassName[] = _T("myMDIChildWindowClass");

#define IDC_MAIN_MDI    101
#define IDC_MAIN_TOOL   102
#define IDC_MAIN_STATUS 103

#define IDC_CHILD_EDIT  IDC_MAIN_MDI

#define ID_MDI_FIRSTCHILD 50000

HWND g_hMDIClient = NULL;
HWND g_hMainWindow = NULL;

#endif  // APP_FOUR_H_
