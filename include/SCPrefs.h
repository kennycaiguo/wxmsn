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

/** 	\file 	SCPrefs.h
	\author Neil "Superna" ARMSTRONG
	\date 	19/03/2006
*/

// Include Protection

#ifndef _SCPREFS_H_
#define _SCPREFS_H_

// Includes
#include <wx/wx.h>
#include <wx/stdpaths.h> //userdatadir
#include <wx/filename.h>
#include "defines.h"


namespace nsCore
{
    class SCPrefs
    {
        public:
            static void Init();
        
            static SongStatus CheckPlayedSong();
            static wxString & GetPlayedTitle();
            static wxString & GetPlayedArtist();
        
        private:
            static wxString m_artist, m_title;
            static wxStandardPaths m_paths;
            static wxFileName m_songfile;
            static wxDateTime m_songmodif;
    };
	
} // nsCore
		
#endif
	
