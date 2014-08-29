/*
Copyright (C) 1997-2001 Id Software, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
// common.c -- misc functions used in client and server
#include "qcommon.h"


cvar_t	*dedicated;


/*
=============
Com_Quit

Both client and server can use this, and it will
do the apropriate things.
=============
*/
void Com_Quit(void)
{
	//ultimately this will shut the game down
}

/*
=================
Qcommon_Init
=================
*/
void Qcommon_Init(int argc, char **argv)
{

}

/*
=================
Qcommon_Frame
=================
*/
void Qcommon_Frame(int msec)
{

}

/*
=================
Qcommon_Shutdown
=================
*/
void Qcommon_Shutdown(void)
{
}
