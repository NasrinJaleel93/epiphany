/*
 *  Copyright © 2002 Marco Pesenti Gritti <mpeseng@tin.it>
 *  Copyright © 2005, 2006 Peter A. Harvey
 *  Copyright © 2006 Christian Persch
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#if !defined (__EPHY_EPIPHANY_H_INSIDE__) && !defined (EPIPHANY_COMPILATION)
#error "Only <epiphany/epiphany.h> can be included directly."
#endif

#ifndef EPHY_BOOKMARK_PROPERTIES_H
#define EPHY_BOOKMARK_PROPERTIES_H

#include "ephy-bookmarks.h"

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define EPHY_TYPE_BOOKMARK_PROPERTIES		(ephy_bookmark_properties_get_type ())
#define EPHY_BOOKMARK_PROPERTIES(o)		(G_TYPE_CHECK_INSTANCE_CAST ((o), EPHY_TYPE_BOOKMARK_PROPERTIES, EphyBookmarkProperties))
#define EPHY_BOOKMARK_PROPERTIES_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), EPHY_TYPE_BOOKMARK_PROPERTIES, EphyBookmarkPropertiesClass))
#define EPHY_IS_BOOKMARK_PROPERTIES(o)		(G_TYPE_CHECK_INSTANCE_TYPE ((o), EPHY_TYPE_BOOKMARK_PROPERTIES))
#define EPHY_IS_BOOKMARK_PROPERTIES_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), EPHY_TYPE_BOOKMARK_PROPERTIES))
#define EPHY_BOOKMARK_PROPERTIES_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), EPHY_TYPE_BOOKMARK_PROPERTIES, EphyBookmarkPropertiesClass))

typedef struct _EphyBookmarkProperties		EphyBookmarkProperties;
typedef struct _EphyBookmarkPropertiesPrivate	EphyBookmarkPropertiesPrivate;
typedef struct _EphyBookmarkPropertiesClass	EphyBookmarkPropertiesClass;

struct _EphyBookmarkProperties
{
	GtkDialog parent_instance;

	/*< private >*/
	EphyBookmarkPropertiesPrivate *priv;
};

struct _EphyBookmarkPropertiesClass
{
	GtkDialogClass parent_class;
};

GType		 ephy_bookmark_properties_get_type	(void);

GtkWidget	*ephy_bookmark_properties_new		(EphyBookmarks *bookmarks,
							 EphyNode *bookmark,
							 gboolean creating);

EphyNode	*ephy_bookmark_properties_get_node	(EphyBookmarkProperties *properties);

G_END_DECLS

#endif /* EPHY_BOOKMARK_PROPERTIES_H */
