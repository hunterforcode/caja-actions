/*
 * Caja-Actions
 * A Caja extension which offers configurable context menu actions.
 *
 * Copyright (C) 2005 The MATE Foundation
 * Copyright (C) 2006-2008 Frederic Ruaudel and others (see AUTHORS)
 * Copyright (C) 2009-2012 Pierre Wieser and others (see AUTHORS)
 *
 * Caja-Actions is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General  Public  License  as
 * published by the Free Software Foundation; either  version  2  of
 * the License, or (at your option) any later version.
 *
 * Caja-Actions is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even  the  implied  warranty  of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See  the  GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public  License
 * along with Caja-Actions; see the file  COPYING.  If  not,  see
 * <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *   Frederic Ruaudel <grumz@grumz.net>
 *   Rodrigo Moya <rodrigo@mate-db.org>
 *   Pierre Wieser <pwieser@trychlos.org>
 *   ... and many others (see AUTHORS)
 */

#ifndef __CAXML_FORMATS_H__
#define __CAXML_FORMATS_H__

#include <glib.h>

#include <api/na-iexporter.h>

G_BEGIN_DECLS

#define CAXML_FORMAT_MATECONF_SCHEMA_V1			"MateConfSchemaV1"
#define CAXML_FORMAT_MATECONF_SCHEMA_V2			"MateConfSchemaV2"
#define CAXML_FORMAT_MATECONF_ENTRY				"MateConfEntry"

GList *caxml_formats_get_formats ( const NAIExporter *exporter );
void   caxml_formats_free_formats( GList *format_list );

G_END_DECLS

#endif /* __CAXML_FORMATS_H__ */
