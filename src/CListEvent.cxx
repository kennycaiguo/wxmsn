/*  Copyright (c) 2005 Neil "Superna" ARMSTRONG
    This file is part of wxMSN.

    wxMSN is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    wxMSN is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with wxMSN; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

/** 	\file 	CListEvent.cxx
	\author  Neil "Superna" ARMSTRONG
	\date 	06/01/2006
*/

// Includes

#include "CListEvent.h"

// Namespaces

using namespace std;
using namespace nsEvents;

// Class 
#define CLASS CListEvent

DEFINE_EVENT_TYPE(wxEVT_CLIST)

CLASS::CLASS(int id )
    : wxEvent(id, wxEVT_CLIST)
{ }

#undef CLASS
