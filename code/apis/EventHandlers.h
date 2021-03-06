/*
 Copyright (C) 2015 wxLauncher Team
 
 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef APIS_EVENTHANDLER_H
#define APIS_EVENTHANDLER_H

#include <wx/wx.h>
#include <wx/event.h>

#if wxMAJOR_VERSION == 2 && wxMINOR_VERSION >= 8
#define LAUNCHER_DECLARE_EVENT_TYPE(name) DECLARE_EVENT_TYPE(name, wxID_ANY)
#define LAUNCHER_DEFINE_EVENT_TYPE(name) DEFINE_EVENT_TYPE(name)
#else
#define LAUNCHER_DECLARE_EVENT_TYPE(name) wxDECLARE_EVENT(name, wxCommandEvent)
#define LAUNCHER_DEFINE_EVENT_TYPE(name) wxDEFINE_EVENT(name, wxCommandEvent)
#endif

WX_DECLARE_LIST(wxEvtHandler, EventHandlers);

#endif