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

#ifndef BASELIB_SYSLOG_LOGGER_H
#define BASELIB_SYSLOG_LOGGER_H

#include "logger.h"
#include "loggermessage.h"
#include "../base.h"

#include <fstream>

namespace base
{
namespace logger
{
class BASELIB_CORE_EXPORT SyslogLogger : public Logger
{
public:
    SyslogLogger(const char *appName);
    ~SyslogLogger() override;

public:
    SyslogLogger(const SyslogLogger &) = delete;            // copy ctor
    SyslogLogger(SyslogLogger &&)      = delete;            // move ctor
    SyslogLogger &operator=(const SyslogLogger &) = delete; // copy assignment
    SyslogLogger &operator=(SyslogLogger &&) = delete;      // move assignment

private:
    void log(const LoggerMessage &message) override;
};
} // namespace logger
} // namespace base

#endif // BASELIB_SYSLOG_LOGGER_H
