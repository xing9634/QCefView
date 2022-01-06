﻿#pragma once

#pragma region stl_headers
#include <list>
#include <string>
#pragma endregion stl_headers

#pragma region qt_headers
#pragma endregion qt_headers

#include <QCefConfig.h>

typedef struct CookieItem
{
  std::string name;
  std::string value;
  std::string domain;
  std::string url;
} CookieItem;

class QCefConfigPrivate
{
public:
  explicit QCefConfigPrivate();

  int argc;
  char** argv;

  std::string locale_;
  std::string userAgent_;
  std::string cachePath_;
  std::string userDataPath_;
  std::string bridgeObjectName_;
  std::string acceptLanguageList_;
  std::string localesDirectoryPath_;
  std::string browserSubProcessPath_;
  std::string resourceDirectoryPath_;

  uint32_t backgroundColor_ = 0x00000000;
  short remoteDebuggingport_ = 7788;
  bool persistSessionCookies_;
  bool persistUserPreferences_;

  std::list<CookieItem> cookieList_;
};