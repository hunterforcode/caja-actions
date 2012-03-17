/*
 * Caja Actions
 * A Caja extension which offers configurable context menu actions.
 *
 * Copyright (C) 2005 The MATE Foundation
 * Copyright (C) 2006, 2007, 2008 Frederic Ruaudel and others (see AUTHORS)
 * Copyright (C) 2009, 2010 Pierre Wieser and others (see AUTHORS)
 *
 * This Program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This Program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this Library; see the file COPYING.  If not,
 * write to the Free Software Foundation, Inc., 59 Temple Place,
 * Suite 330, Boston, MA 02111-1307, USA.
 *
 * Authors:
 *   Frederic Ruaudel <grumz@grumz.net>
 *   Rodrigo Moya <rodrigo@mate-db.org>
 *   Pierre Wieser <pwieser@trychlos.org>
 *   ... and many others (see AUTHORS)
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "nact-assistant-export.h"
#include "nact-assistant-import.h"
#include "nact-main-menubar.h"
#include "nact-main-menubar-tools.h"

/**
 * nact_main_menubar_tools_on_update_sensitivities:
 * @window: the #NactMainWindow main application window.
 * @user_data: user data ?
 * @mis: the #MenubarIndicatorsStruct structure.
 *
 * Update sensitivities on the Tools menu.
 */
void
nact_main_menubar_tools_on_update_sensitivities( NactMainWindow *window, gpointer user_data, MenubarIndicatorsStruct *mis )
{
	/* import item enabled if at least one writable provider */
	nact_main_menubar_enable_item( window, "ImportItem", mis->has_writable_providers );

	/* export item enabled if IActionsList store contains actions */
	nact_main_menubar_enable_item( window, "ExportItem", mis->have_exportables );
}

/**
 * nact_main_menubar_tools_on_import:
 * @action: the #GtkAction of the item.
 * @window: the #NactMainWindow main application window.
 *
 * Triggers the "Tools/Import assitant" item.
 */
void
nact_main_menubar_tools_on_import( GtkAction *action, NactMainWindow *window )
{
	nact_assistant_import_run( BASE_WINDOW( window ));
}

/**
 * nact_main_menubar_tools_on_export:
 * @action: the #GtkAction of the item.
 * @window: the #NactMainWindow main application window.
 *
 * Triggers the "Tools/Export assistant" item.
 */
void
nact_main_menubar_tools_on_export( GtkAction *action, NactMainWindow *window )
{
	nact_assistant_export_run( BASE_WINDOW( window ));
}