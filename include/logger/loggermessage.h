/***********************************************************************************************************************
**
** Copyright (C) 2022 BaseALT Ltd. <org@basealt.ru>
**
** This program is free software; you can redistribute it and/or
** modify it under the terms of the GNU General Public License
** as published by the Free Software Foundation; either version 2
** of the License, or (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
**
***********************************************************************************************************************/

#ifndef BASELIB_LOGGER_MESSAGE_H
#define BASELIB_LOGGER_MESSAGE_H

#include <ctime>
#include <string>
#include <thread>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>

#include <QtMsgHandler>

namespace base
{
namespace logger
{
class LoggerMessage
{
public:
    LoggerMessage(const QtMsgType &msgType,
                  std::string message,
                  std::string filePath,
                  std::string functionName,
                  const uint32_t line,
                  const std::tm &time,
                  const std::thread::id &threadId);

    std::string getTimeFormatted(const char *format) const;

    const QtMsgType &msgType;
    const std::string message;
    const std::string filePath;
    const std::string functionName;
    const uint32_t line;
    const std::tm time;
    const std::thread::id threadId;
};
} // namespace logger
} // namespace base

#endif // BASELIB_LOGGER_MESSAGE_H
